// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraWorldPickup.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerInput.h"
#include "GenericPlatform/GenericPlatformInputDeviceMapper.h"
#include "UnrealClient.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"

bool ULyraInventoryNetworkTest::TickInventoryPickup(bool bHost)
{
	using Status = ELyraPickupStatus;
	ALyraInventoryPlayerController* Local = nullptr;
	ALyraInventoryPlayerController* Remote = nullptr;
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		auto* PC = Cast<ALyraInventoryPlayerController>(It->Get());
		if (PC && PC->IsLocalController()) { Local = PC; } else if (PC) { Remote = PC; }
	}
	if (!Local || (bHost && !Remote)) { return false; }
	auto* Inventory = Local->FindComponentByClass<ULyraInventoryManagerComponent>();
	const auto Def = ULyraInventoryTestItemDefinition::StaticClass();
	const auto Total = [&] { return Inventory->GetTotalItemCountByDefinition(Def); };
	// Dynamic actor object names are local to each process; locate this fixture by
	// its definition and fixed position, then use the replicated ID for requests.
	const FVector SourceLocation(0,-900,85), FarLocation(1100,-900,85), DoneLocation(1000,1000,100);
	const auto Find = [&](FVector Location) -> ALyraWorldPickup*
	{
		for (TActorIterator<ALyraWorldPickup> It(GetWorld()); It; ++It)
		{
			if (It->GetPickupState().Definition == Def && It->GetActorLocation().Equals(Location, 1.0)) { return *It; }
		}
		return nullptr;
	};
	const auto Spawn = [&](FName Name, FVector Location, int32 Count)
	{
		FActorSpawnParameters Params; Params.Name = Name;
		auto* Item = GetWorld()->SpawnActor<ALyraWorldPickup>(Location, FRotator::ZeroRotator, Params);
		if (Item) { Item->Initialize(Def, Count); } return Item;
	};
	const auto Fail = [&](const TCHAR* Reason)
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_PICKUP FAIL role=%s step=%d reason=%s"), *ExpectedRole, PickupStep, Reason); EndTest(1); return false;
	};
	const double Now = FPlatformTime::Seconds();
	if (Now - LastDiagnosticAt < 0.025)
	{
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_PICKUP_STATE role=%s step=%d total=%d result=%lld/%d focused=%s"),
			*ExpectedRole, PickupStep, Total(), Local->GetLastPickupResult().RequestId, int32(Local->GetLastPickupResult().Status), *GetNameSafe(Local->GetFocusedPickup()));
		if (!bHost && PickupStep == 0)
		{
			for (TActorIterator<ALyraWorldPickup> It(GetWorld()); It; ++It)
			{
				UE_LOG(LogTemp, Display, TEXT("INVENTORY_PICKUP_SOURCE name=%s count=%d definition=%s access=%d"),
					*It->GetName(), It->GetPickupState().Count, *GetNameSafe(It->GetPickupState().Definition), int32(It->CheckAccess(Local)));
			}
		}
	}
	if (bHost)
	{
		auto* OtherInventory = Remote->FindComponentByClass<ULyraInventoryManagerComponent>();
		if (PickupStep == 0)
		{
			Remote->GetPawn()->TeleportTo(FVector(-100,-900,92), FRotator::ZeroRotator);
			Local->GetPawn()->TeleportTo(FVector(-100,-1080,92), FRotator::ZeroRotator);
			if (OtherInventory->AddItemDefinitionWithResult(Def, 187, false).AddedCount != 187) { return Fail(TEXT("seed failed")); }
			PickupSource = Spawn(TEXT("InventoryPickup_Network"), SourceLocation, 13);
			Spawn(TEXT("InventoryPickup_Far"), FarLocation, 1);
			if (!PickupSource.IsValid()) { return Fail(TEXT("source missing")); }
			PickupIdentity = PickupSource->GetPickupState().Id; ++PickupStep; return false;
		}
		if (PickupStep == 1)
		{
			if (Remote->GetLastPickupResult().RequestId != 4 || Remote->GetLastPickupResult().Status != Status::Stale) { return false; }
			if (!PickupSource.IsValid() || PickupSource->GetPickupState().Count != 10 || OtherInventory->GetTotalItemCountByDefinition(Def) != 190) { return Fail(TEXT("partial quantity mismatch")); }
			OtherInventory->ConsumeItemsByDefinition(Def, 10);
			PickupRaceAt = Now + 0.8; ++PickupStep; return false;
		}
		if (PickupStep == 2)
		{
			if (Now < PickupRaceAt) { return false; }
			// Both peers contend using the same observed source revision; only one may win.
			Local->ServerRequestPickup(PickupSource.Get(), PickupIdentity, 2, 1);
			++PickupStep;
		}
		if (Remote->GetLastPickupResult().RequestId != 5) { return false; }
		const int32 Combined = Total() + OtherInventory->GetTotalItemCountByDefinition(Def);
		if (Combined != 190 || Find(SourceLocation)
			|| Local->GetLastPickupResult().Added + Remote->GetLastPickupResult().Added != 10) { return Fail(TEXT("double claim or lost quantity")); }
		Spawn(TEXT("InventoryPickup_Done"), DoneLocation, Local->GetLastPickupResult().Added + 1);
	}
	else
	{
		const auto Input = [&](EInputEvent Event)
		{
			const auto Device = IPlatformInputDeviceMapper::Get().GetPrimaryInputDeviceForUser(Local->GetPlatformUserId());
			Local->InputKey(FInputKeyParams(EKeys::E, Event, Event == IE_Pressed ? 1.0 : 0.0, false, Device));
		};
		const auto Result = Local->GetLastPickupResult();
		if (PickupStep == 0)
		{
			auto* Item = Find(SourceLocation);
			if (!Item || Total() != 187 || Item->GetPickupState().Count != 13) { return false; }
			int32 Stations = 0;
			for (TActorIterator<ALyraWorldPickup> It(GetWorld()); It; ++It) { if (It->GetPickupState().Definition && It->GetPickupState().Definition != Def) { ++Stations; } }
			if (Stations != 5) { return false; }
			Local->SetControlRotation(FRotator::ZeroRotator);
			if (Local->GetFocusedPickup() != Item) { return false; }
			const auto State = Item->GetPickupState();
			if (Item->TryPickup(Local, State.Id, State.Revision).Status != Status::NotAuthority) { return Fail(TEXT("client directly mutated world pickup")); }
			PickupSource = Item; PickupIdentity = State.Id;
			const FString Image = FPaths::Combine(ScreenshotDirectory, TEXT("PickupPrompt.png"));
			if (!ScreenshotDirectory.IsEmpty() && !IFileManager::Get().FileExists(*Image))
			{
				if (PickupRaceAt == 0) { FScreenshotRequest::RequestScreenshot(Image, true, false); PickupRaceAt = Now; }
				return false;
			}
			Input(IE_Pressed); PickupRaceAt = Now; ++PickupStep; return false;
		}
		if (PickupStep == 1)
		{
			if (Now - PickupRaceAt < 0.2) { return false; }
			Input(IE_Released);
			if (Result.RequestId != 1) { return false; }
			if (Result.Status != Status::Partial || Result.Added != 3 || Result.Remaining != 10) { return Fail(TEXT("E key partial pickup failed")); }
			if (!PickupSource.IsValid() || PickupSource->GetPickupState().Count != 10 || Total() != 190) { return false; }
			Local->RequestPickup(PickupSource.Get()); ++PickupStep; return false;
		}
		if (PickupStep == 2)
		{
			if (Result.RequestId != 2) { return false; }
			if (Result.Status != Status::NoSpace || Result.Added != 0) { return Fail(TEXT("full inventory not rejected")); }
			Local->ServerRequestPickup(PickupSource.Get(), PickupIdentity, 1, 3); ++PickupStep; return false;
		}
		if (PickupStep == 3)
		{
			if (Result.RequestId != 3) { return false; }
			if (Result.Status != Status::Stale) { return Fail(TEXT("stale revision accepted")); }
			auto* Far = Find(FarLocation); if (!Far) { return false; }
			Local->ServerRequestPickup(Far, Far->GetPickupState().Id, Far->GetPickupState().Revision, 4); ++PickupStep; return false;
		}
		if (PickupStep == 4)
		{
			if (Result.RequestId != 4) { return false; }
			if (Result.Status != Status::TooFar) { return Fail(TEXT("distance check bypassed")); }
			Local->ServerRequestPickup(PickupSource.Get(), PickupIdentity, 2, 4); ++PickupStep; return false;
		}
		if (PickupStep == 5)
		{
			if (Result.Status != Status::Stale || Total() != 180) { return false; }
			Local->ServerRequestPickup(PickupSource.Get(), PickupIdentity, 2, 5); ++PickupStep; return false;
		}
		if (Result.RequestId != 5) { return false; }
		auto* Done = Find(DoneLocation);
		if (!Done || Find(SourceLocation)) { return false; }
		if (Total() + Done->GetPickupState().Count - 1 != 190) { return Fail(TEXT("replicated race total mismatch")); }
	}
	bPickupVerified = true;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_PICKUP PASS role=%s stations=5 partial=3 remainder=10 full=denied stale=denied distance=denied replay=denied raceTotal=190"), *ExpectedRole);
	return true;
}
