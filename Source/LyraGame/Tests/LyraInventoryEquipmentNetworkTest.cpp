// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "LoadingScreenManager.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "Misc/Paths.h"
#include "UnrealClient.h"

bool ULyraInventoryNetworkTest::TickInventoryEquipment(bool bHost)
{
	auto* World = GetWorld();
	const auto* Loading = World->GetGameInstance()->GetSubsystem<ULoadingScreenManager>();
	if (Loading && Loading->GetLoadingScreenDisplayStatus()) { return false; }
	ALyraInventoryPlayerController* Local = nullptr;
	ALyraInventoryPlayerController* Remote = nullptr;
	for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
	{
		auto* PC = Cast<ALyraInventoryPlayerController>(It->Get());
		if (PC && PC->IsLocalController()) { Local = PC; } else if (PC) { Remote = PC; }
	}
	if (!Local || (bHost && !Remote)) { return false; }
	auto* Inventory = Local->FindComponentByClass<ULyraInventoryManagerComponent>();
	auto* Bar = Local->FindComponentByClass<ULyraQuickBarComponent>();
	auto* Equipment = Local->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
	const auto Rifle = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C"));
	const auto Shotgun = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C"));
	const auto Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	const auto Size = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineSize"));
	const double Now = FPlatformTime::Seconds();
	const auto Fail = [&](const TCHAR* Reason)
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_EQUIPMENT FAIL role=%s step=%d reason=%s"), *ExpectedRole, EquipmentStep, Reason); EndTest(1); return false;
	};
	if (Now - LastDiagnosticAt < 0.025)
	{
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_EQUIPMENT_STATE role=%s step=%d phase=%d result=%d"), *ExpectedRole, EquipmentStep, EquipmentUIPhase, int32(Inventory->GetLastOperationResult().Status));
	}
	if (EquipmentStep == 0)
	{
		if (bHost)
		{
			for (auto* PC : {Local, Remote})
			{
				auto* Inv = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
				FLyraInventoryItemSnapshot Snapshot; Snapshot.StackCount = 1; Snapshot.ItemDef = Rifle;
				Snapshot.StatTags.Add(Size, 30); Snapshot.StatTags.Add(Magazine, 5); Snapshot.StatTags.Add(Reserve, 19);
				if (!Inv->RestoreItemSnapshot(Snapshot)) { return Fail(TEXT("rifle seed")); }
				Snapshot.ItemDef = Shotgun; Snapshot.StatTags.Reset(); Snapshot.StatTags.Add(Size, 6); Snapshot.StatTags.Add(Reserve, 7);
				if (!Inv->RestoreItemSnapshot(Snapshot)) { return Fail(TEXT("shotgun seed")); }
			}
		}
		EquipmentStep = 1; return false;
	}
	auto* RifleItem = Inventory->FindFirstItemStackByDefinition(Rifle);
	auto* ShotgunItem = Inventory->FindFirstItemStackByDefinition(Shotgun);
	if (!RifleItem || !ShotgunItem) { return false; }
	const auto Slots = Inventory->GetSlotSnapshot();
	const int32 RifleSlot = Slots.IndexOfByPredicate([&](const auto& S) { return S.Instance == RifleItem; });
	const int32 ShotgunSlot = Slots.IndexOfByPredicate([&](const auto& S) { return S.Instance == ShotgunItem; });
	if (EquipmentStep <= 10)
	{
		if (EquipmentUIPhase == 0)
		{
			Local->ToggleInventory(); EquipmentUIAt = Now; EquipmentUIPhase = 1; return false;
		}
		auto* Screen = Local->GetInventoryScreen();
		if (!Screen || !Screen->IsActivated() || Now - EquipmentUIAt < 0.6) { return false; }
		if (EquipmentUIPhase == 1)
		{
			switch (EquipmentStep)
			{
			case 1: Screen->SelectSlot(RifleSlot); Screen->EquipSelected(1); break;
			case 2: Screen->SelectSlot(ShotgunSlot); Screen->EquipSelected(2); break;
			case 3: Screen->ActivateQuickSlot(1); break;
			case 4: Screen->SelectSlot(RifleSlot); Screen->EquipSelected(2); break;
			case 5: Screen->RemoveQuickSlot(0); break;
			case 6: Screen->RemoveQuickSlot(2); break;
			case 7: Screen->SelectSlot(ShotgunSlot); Screen->EquipSelected(0); break;
			case 8: Screen->SelectSlot(RifleSlot); Screen->EquipSelected(1); break;
			case 9: Screen->DropOnSlot(RifleSlot, Slots[RifleSlot].EntryId, 1, 19, false); break;
			case 10: Screen->ActivateQuickSlot(1); break;
			}
			EquipmentUIAt = Now; EquipmentUIPhase = 2; return false;
		}
		if (Screen->IsRequestPending()) { return false; }
		if (Inventory->GetLastOperationResult().Status != ELyraInventoryOperationStatus::Success) { return Fail(TEXT("UI operation rejected")); }
		if (RifleItem->GetStatTagStackCount(Magazine) != 5 || RifleItem->GetStatTagStackCount(Reserve) != 19
			|| ShotgunItem->GetStatTagStackCount(Magazine) != 0 || ShotgunItem->GetStatTagStackCount(Reserve) != 7) { return Fail(TEXT("ammo changed")); }
		const auto Equipped = Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass());
		if (EquipmentStep == 6)
		{
			if (Bar->GetActiveSlotIndex() != INDEX_NONE || Equipped.Num() != 0) { return false; }
		}
		else
		{
			auto* ExpectedItem = EquipmentStep == 2 || EquipmentStep == 7 ? ShotgunItem : RifleItem;
			if (Equipped.Num() != 1 || Equipped[0]->GetInstigator() != ExpectedItem || Bar->GetActiveSlotItem() != ExpectedItem) { return false; }
			if (Equipped[0]->GetSpawnedActors().IsEmpty() || !IsValid(Equipped[0]->GetSpawnedActors()[0])) { return false; }
			const auto* Weapon = Cast<ULyraRangedWeaponInstance>(Equipped[0]);
			if (!Weapon || Weapon->GetCurrentAmmo() != (ExpectedItem == RifleItem ? 5 : 0)) { return Fail(TEXT("equipped ammo does not match instance")); }
		}
		if (EquipmentStep == 4 && Bar->GetSlots()[1]) { return Fail(TEXT("duplicate shortcut")); }
		if (Inventory->GetAllItems().Num() != 3) { return Fail(TEXT("equipment mutated inventory quantity")); }
		if (EquipmentStep == 9 && RifleSlot != 19) { return false; }
		if (EquipmentUIPhase == 2 && !ScreenshotDirectory.IsEmpty() && (EquipmentStep == 2 || EquipmentStep == 6 || EquipmentStep == 10))
		{
			FScreenshotRequest::RequestScreenshot(FPaths::Combine(ScreenshotDirectory, FString::Printf(TEXT("Equipment-%s-%d.png"), *ExpectedRole, EquipmentStep)), true, false);
			EquipmentUIPhase = 3; EquipmentUIAt = Now; return false;
		}
		Screen->CloseInventory(); ++EquipmentStep; EquipmentUIPhase = 0; return false;
	}
	if (EquipmentStep == 11 && !bHost)
	{
		FLyraInventoryOperationRequest Replay; Replay.RequestId = Inventory->GetLastOperationResult().RequestId;
		Replay.Operation = ELyraInventoryOperation::Equip; Replay.SourceSlot = RifleSlot; Replay.TargetSlot = 2;
		if (Inventory->ExecuteInventoryOperation(Replay).Status != ELyraInventoryOperationStatus::NotAuthority) { return Fail(TEXT("client wrote authoritative state")); }
		Inventory->ServerRequestInventoryOperation(Replay); EquipmentStep = 12; return false;
	}
	if (!bHost && Inventory->GetLastOperationResult().Status != ELyraInventoryOperationStatus::StaleRequest) { return false; }
	// Both peers must see the other pawn's final rifle actor. Controller-owned private inventory is not required on observers.
	bool bOtherReady = false;
	for (TActorIterator<APawn> It(World); It; ++It)
	{
		if (*It == Local->GetPawn() || !It->GetPlayerState()) { continue; }
		auto* OtherEquipment = It->FindComponentByClass<ULyraEquipmentManagerComponent>();
		const auto* Weapon = OtherEquipment ? OtherEquipment->GetFirstInstanceOfType<ULyraRangedWeaponInstance>() : nullptr;
		if (Weapon && Weapon->GetClass()->GetName().Contains(TEXT("Rifle")) && !Weapon->GetSpawnedActors().IsEmpty()
			&& IsValid(Weapon->GetSpawnedActors()[0])) { bOtherReady = true; }
	}
	if (!bOtherReady) { return false; }
	if (bHost)
	{
		auto* Other = Remote->FindComponentByClass<ULyraInventoryManagerComponent>();
		auto* OtherBar = Remote->FindComponentByClass<ULyraQuickBarComponent>();
		if (Other->GetLastOperationResult().Status != ELyraInventoryOperationStatus::StaleRequest || OtherBar->GetActiveSlotIndex() != 1
			|| Other->GetSlotSnapshot()[19].Instance != OtherBar->GetActiveSlotItem()) { return false; }
	}
	bEquipmentVerified = true;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_EQUIPMENT PASS role=%s ui=10 replace=passed remove=passed move=passed rifle=5/19 shotgun=0/7 remoteActor=visible replay=denied"), *ExpectedRole);
	return true;
}
