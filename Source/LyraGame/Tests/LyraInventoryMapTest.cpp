// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryMapTest.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Player/LyraPlayerController.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Engine/NetDriver.h"
#include "EngineUtils.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerInput.h"
#include "LoadingScreenManager.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "GameModes/LyraExperienceDefinition.h"
#include "AbilitySystem/Phases/LyraGamePhaseSubsystem.h"
#include "GameFramework/GameStateBase.h"
#include "GenericPlatform/GenericPlatformInputDeviceMapper.h"
#include "Net/UnrealNetwork.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Misc/Base64.h"
#include "UnrealClient.h"

namespace InventoryMapTest
{
	FString Signature(const TArray<FLyraInventorySlotView>& Slots)
	{
		FString Result;
		const FGameplayTag Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
		const FGameplayTag Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
		for (const auto& Slot : Slots)
		{
			if (!Slot.EntryId.IsValid()) { continue; }
			if (!Slot.Instance || !Slot.Instance->GetItemDef()) { return TEXT("PendingReplication"); }
			Result += FString::Printf(TEXT("%d:%s:%d:%d:%d;"), Slot.SlotIndex, *Slot.Instance->GetItemDef()->GetPathName(), Slot.StackCount,
				Slot.Instance->GetStatTagStackCount(Magazine), Slot.Instance->GetStatTagStackCount(Reserve));
		}
		return Result;
	}
	void InventoryKey(ALyraPlayerController* PC)
	{
		const auto Device = IPlatformInputDeviceMapper::Get().GetPrimaryInputDeviceForUser(PC->GetPlatformUserId());
		PC->InputKey(FInputKeyParams(EKeys::I, IE_Pressed, 1.0, false, Device));
	}
}

ALyraInventoryMapTestProbe::ALyraInventoryMapTestProbe()
{
	bReplicates = true; bAlwaysRelevant = true;
}
void ALyraInventoryMapTestProbe::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); DOREPLIFETIME(ALyraInventoryMapTestProbe, Phase); DOREPLIFETIME(ALyraInventoryMapTestProbe, Expected);
}
void ALyraInventoryMapTestProbe::ServerAcknowledge_Implementation(int32 ObservedPhase, const FString& Signature)
{
	if (ObservedPhase != Phase || Signature != Expected) { bFailed = true; return; }
	Acknowledged = Phase;
}

void ULyraInventoryMapTest::OnInit()
{
	Started = FPlatformTime::Seconds();
	FParse::Value(FCommandLine::Get(), TEXT("InventoryMapRole="), Role);
	FParse::Value(FCommandLine::Get(), TEXT("InventoryMapReportDir="), Directory);
	FString Encoded;
	if (FParse::Value(FCommandLine::Get(), TEXT("InventoryMapTravelEncoded="), Encoded)) { FBase64::Decode(Encoded, TravelTo); }
	if (FParse::Value(FCommandLine::Get(), TEXT("InventoryMapStartEncoded="), Encoded)) { FBase64::Decode(Encoded, StartURL); }
	bSeamless = FParse::Param(FCommandLine::Get(), TEXT("InventoryMapSeamless"));
}

void ULyraInventoryMapTest::OnTick(float DeltaTime)
{
	using namespace InventoryMapTest;
	const double Now = FPlatformTime::Seconds();
	const auto Fail = [&](const TCHAR* Message)
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_MAP FAIL role=%s round=%d phase=%d reason=%s"), *Role, Round, LocalPhase, Message); EndTest(1);
	};
	if (Now - Started > 1000) { Fail(TEXT("timeout")); return; }
	UWorld* World = GetWorld();
	if (!World || World->GetMapName().Contains(TEXT("TransitionMap"))) { return; }
	const bool Host = Role == TEXT("Host");
	if (bFinished)
	{
		if (!Host || (World->GetNetDriver() && World->GetNetDriver()->ClientConnections.IsEmpty())) { EndTest(0); }
		return;
	}
	const auto* GS = World->GetGameState();
	const auto* Experience = GS ? GS->FindComponentByClass<ULyraExperienceManagerComponent>() : nullptr;
	const auto* Loading = World->GetGameInstance()->GetSubsystem<ULoadingScreenManager>();
	if (!Experience || !Experience->IsExperienceLoaded() || (Loading && Loading->GetLoadingScreenDisplayStatus())) { return; }
	if (World->GetNetMode() != (Host ? NM_ListenServer : NM_Client)) { Fail(TEXT("left the network session")); return; }
	// Shooter warmup may replace the pawn and correctly close its old UI. Start
	// the inventory mutation scenario after that lifecycle transition has settled.
	if (Host)
	{
		const auto* Phases = World->GetSubsystem<ULyraGamePhaseSubsystem>();
		if (Phases && Phases->IsPhaseActive(FGameplayTag::RequestGameplayTag(TEXT("ShooterGame.GamePhase.Warmup"), false)))
		{
			ReadySince = Now; return;
		}
	}
	ALyraPlayerController* Local = nullptr;
	TArray<ALyraPlayerController*> Players;
	for (auto It = World->GetPlayerControllerIterator(); It; ++It)
	{
		if (auto* PC = Cast<ALyraPlayerController>(It->Get()))
		{
			auto* Inv = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
			if (!PC->GetPawn() || !Inv || Inv->GetSlotCapacity() != 20) { return; }
			TArray<ULyraInventoryManagerComponent*> Inventories; PC->GetComponents(Inventories);
			if (Inventories.Num() != 1) { Fail(TEXT("duplicate inventory components")); return; }
			Players.Add(PC); if (PC->IsLocalController()) { Local = PC; }
		}
	}
	if (!Local || Players.Num() != (Host ? 2 : 1)) { return; }
	if (ActiveWorld.Get() != World)
	{
		if (PreviousScreen.IsValid() && PreviousScreen->GetBoundInventory()) { Fail(TEXT("old UI listener survived travel")); return; }
		ActiveWorld = World; ++Round; LocalPhase = UIStep = 0; ReadySince = Now; bTransitionRequested = false;
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_MAP ENTER role=%s round=%d map=%s experience=%s controller=%s"), *Role, Round, *World->GetMapName(), *Experience->GetCurrentExperienceChecked()->GetPathName(), *Local->GetClass()->GetPathName());
	}
	if (Now - ReadySince < 3 || bTransitionRequested) { return; }
	TArray<ALyraInventoryMapTestProbe*> Probes;
	ALyraInventoryMapTestProbe* Mine = nullptr;
	for (TActorIterator<ALyraInventoryMapTestProbe> It(World); It; ++It)
	{
		Probes.Add(*It); if (It->GetOwner() == Local) { Mine = *It; }
		if (It->bFailed) { Fail(TEXT("peer acknowledgement mismatch")); return; }
	}
	if (Host && Probes.IsEmpty())
	{
		for (auto* PC : Players)
		{
			FActorSpawnParameters Spawn; Spawn.Owner = PC;
			auto* Probe = World->SpawnActor<ALyraInventoryMapTestProbe>(Spawn);
			Probe->Expected = Signature(PC->FindComponentByClass<ULyraInventoryManagerComponent>()->GetSlotSnapshot());
		}
		return;
	}
	if (!Mine) { return; }
	auto* Inventory = Local->FindComponentByClass<ULyraInventoryManagerComponent>();
	if (Mine->Phase != LocalPhase) { LocalPhase = Mine->Phase; UIStep = 0; UIAt = Now; }
	const FString Current = Signature(Inventory->GetSlotSnapshot());
	if (Current != Mine->Expected) { return; }
	if (LocalPhase == 1 && UIStep == 0)
	{
		const FString Key = World->GetOutermost()->GetName();
		const FString InitialState = Experience->GetCurrentExperienceChecked()->GetPathName() + TEXT("|") + Current;
		if (const auto* Baseline = Baselines.Find(Key); Baseline && *Baseline != InitialState) { Fail(TEXT("initial experience/loadout/state/slots not restored")); return; }
		Baselines.FindOrAdd(Key) = InitialState;
		if (Inventory->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 0) { Fail(TEXT("prior-level items survived")); return; }
		InventoryKey(Local); ++UIStep; UIAt = Now; return;
	}
	if ((LocalPhase == 1 || LocalPhase == 2) && Now - UIAt > 0.5 && UIStep < 3)
	{
		if (LocalPhase == 2 && UIStep == 1) { InventoryKey(Local); UIStep = 2; UIAt = Now; return; }
		auto* Screen = Local->GetInventoryScreen();
		if (!Screen || !Screen->IsActivated() || Screen->GetBoundInventory() != Inventory || Screen->GetDisplayedSlots().Num() != 20
			|| Signature(Screen->GetDisplayedSlots()) != Current) { if (Now - UIAt > 10) { Fail(TEXT("I input or owning UI data mismatch")); } return; }
		PreviousScreen = Screen;
		if (LocalPhase == 2 && UIStep == 0)
		{
			Screen->CloseInventory(); UIStep = 1; UIAt = Now; return;
		}
		// A screenshot per peer and per level; all automation is explicitly opt-in.
		FScreenshotRequest::RequestScreenshot(FPaths::Combine(Directory, FString::Printf(TEXT("Map%d_%s.png"), Round, *Role)), true, false);
		Mine->ServerAcknowledge(LocalPhase, Current); UIStep = 3;
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_MAP CHECK role=%s round=%d phase=%d signature=%s"), *Role, Round, LocalPhase, *Current);
	}
	if (LocalPhase == 3)
	{
		if (auto* Screen = Local->GetInventoryScreen()) { Screen->CloseInventory(); }
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_MAP PASS role=%s rounds=%d capacity=20 ownUI=matched reopen=preserved travel=%s"), *Role, Round + 1, TravelTo.IsEmpty() ? TEXT("not_requested") : TEXT("reset"));
		bFinished = true; return;
	}
	if (!Host || Probes.Num() != 2 || !Probes.ContainsByPredicate([](const auto* P) { return P->Acknowledged > 0; })) { return; }
	for (const auto* Probe : Probes) { if (Probe->Acknowledged != Probe->Phase) { return; } }
	if (Probes[0]->Phase == 1)
	{
		for (auto* Probe : Probes)
		{
			auto* Inv = Probe->GetOwner()->FindComponentByClass<ULyraInventoryManagerComponent>();
			const auto Def = ULyraInventoryTestItemDefinition::StaticClass();
			if (Inv->AddItemDefinitionWithResult(Def, 13, false).AddedCount != 13 || !Inv->ConsumeItemsByDefinition(Def, 3)) { Fail(TEXT("mutation setup")); return; }
			const auto Slots = Inv->GetSlotSnapshot();
			if (Slots[0].Instance && !Slots.Last().Instance)
			{
				FLyraInventoryOperationRequest Request; Request.RequestId = Round + 1; Request.Operation = ELyraInventoryOperation::Move;
				Request.SourceSlot = 0; Request.TargetSlot = 19; Request.SourceEntryId = Slots[0].EntryId; Request.ExpectedSourceCount = Slots[0].StackCount;
				if (Inv->ExecuteInventoryOperation(Request).Status != ELyraInventoryOperationStatus::Success) { Fail(TEXT("move setup")); return; }
				const auto Ammo = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
				const int32 Count = Slots[0].Instance->GetStatTagStackCount(Ammo);
				if (Count > 1) { Slots[0].Instance->RemoveStatTagStack(Ammo, Count - 1); }
			}
			Probe->Expected = Signature(Inv->GetSlotSnapshot()); Probe->Phase = 2; Probe->ForceNetUpdate();
		}
	}
	else if (Probes[0]->Phase == 2)
	{
		if (!TravelTo.IsEmpty() && Round < 3)
		{
			const FString URL = Round == 1 ? TravelTo : StartURL;
			World->GetAuthGameMode()->bUseSeamlessTravel = bSeamless;
			bTransitionRequested = true;
			UE_LOG(LogTemp, Display, TEXT("INVENTORY_MAP TRAVEL round=%d to=%s seamless=%d"), Round, *URL, bSeamless);
			World->ServerTravel(URL); return;
		}
		for (auto* Probe : Probes) { Probe->Phase = 3; Probe->ForceNetUpdate(); }
	}
}
