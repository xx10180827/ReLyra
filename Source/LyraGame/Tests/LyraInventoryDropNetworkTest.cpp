// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventorySupplyDefinitions.h"
#include "Inventory/LyraWorldPickup.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "Misc/Paths.h"
#include "UnrealClient.h"

bool ULyraInventoryNetworkTest::TickInventoryDrop(bool bHost)
{
	auto* World = GetWorld();
	ALyraInventoryPlayerController* Local = nullptr;
	ALyraInventoryPlayerController* Remote = nullptr;
	for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
	{
		auto* PC = Cast<ALyraInventoryPlayerController>(It->Get());
		if (PC && PC->IsLocalController()) { Local = PC; } else if (PC) { Remote = PC; }
	}
	if (!Local || (bHost && !Remote)) { return false; }
	auto* Inventory = Local->FindComponentByClass<ULyraInventoryManagerComponent>();
	auto* Quick = Local->FindComponentByClass<ULyraQuickBarComponent>();
	const auto Ammo = ULyraRifleAmmoDefinition::StaticClass();
	const auto Rifle = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C"));
	const auto Shotgun = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C"));
	const auto Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	const auto Total = [&] { return Inventory->GetTotalItemCountByDefinition(Ammo); };
	const auto Find = [&](TSubclassOf<ULyraInventoryItemDefinition> Def) -> ALyraWorldPickup*
	{
		for (TActorIterator<ALyraWorldPickup> It(World); It; ++It)
		{
			if (It->GetPickupState().Definition == Def && It->GetActorLocation().X < 100 && It->GetActorLocation().Y < -800) { return *It; }
		}
		return nullptr;
	};
	const auto Fail = [&](const TCHAR* Reason)
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_DROP FAIL role=%s step=%d reason=%s"), *ExpectedRole, DropStep, Reason); EndTest(1); return false;
	};
	const double Now = FPlatformTime::Seconds();
	if (Now - LastDiagnosticAt < 0.025)
	{
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_DROP_STATE role=%s step=%d ui=%d ammo=%d result=%d"),
			*ExpectedRole, DropStep, DropUIPhase, Total(), int32(Inventory->GetLastOperationResult().Status));
	}
	const auto DropViaUI = [&](TSubclassOf<ULyraInventoryItemDefinition> Def, int32 Count) -> bool
	{
		if (DropUIPhase == 0)
		{
			Local->ToggleInventory(); DropUIAt = Now; DropUIPhase = 1; return false;
		}
		auto* Screen = Local->GetInventoryScreen();
		if (!Screen || !Screen->IsActivated() || Now - DropUIAt < 0.6) { return false; }
		if (DropUIPhase == 1)
		{
			const auto Slots = Screen->GetDisplayedSlots();
			const int32 Slot = Slots.IndexOfByPredicate([&](const auto& S) { return S.Instance && S.Instance->GetItemDef() == Def; });
			if (Slot == INDEX_NONE) { return false; }
			Screen->SelectSlot(Slot); Screen->BeginDrop();
			if (!Screen->IsQuantityOpen()) { return Fail(TEXT("drop dialog missing")); }
			// Cancellation must leave inventory and ground unchanged.
			Screen->CancelQuantity(); Screen->BeginDrop(); Screen->SetQuantity(Count);
			DropUIAt = Now; DropUIPhase = 2; return false;
		}
		if (DropUIPhase == 2)
		{
			if (!ScreenshotDirectory.IsEmpty()) { FScreenshotRequest::RequestScreenshot(FPaths::Combine(ScreenshotDirectory, FString::Printf(TEXT("Drop-%s-%d.png"), *ExpectedRole, DropStep)), true, false); }
			DropUIAt = Now; DropUIPhase = 3; return false;
		}
		if (DropUIPhase == 3) { Screen->ConfirmQuantity(); DropUIPhase = 4; return false; }
		if (Screen->IsRequestPending()) { return false; }
		if (Inventory->GetLastOperationResult().Status != ELyraInventoryOperationStatus::Success) { return Fail(TEXT("UI drop rejected")); }
		if (!Screen->GetFeedback().ToString().Contains(TEXT("已丢弃"))) { return Fail(TEXT("UI did not reflect replicated drop")); }
		Screen->CloseInventory(); DropUIPhase = 0; return true;
	};
	if (bHost)
	{
		auto* Other = Remote->FindComponentByClass<ULyraInventoryManagerComponent>();
		if (DropStep == 0)
		{
			Local->GetPawn()->TeleportTo(FVector(-100,-900,92), FRotator::ZeroRotator);
			Remote->GetPawn()->TeleportTo(FVector(-130,-1040,92), FRotator::ZeroRotator);
			Local->SetControlRotation(FRotator::ZeroRotator);
			Inventory->AddItemDefinition(Ammo, 8);
			auto* Weapon = Inventory->AddItemDefinition(Rifle, 1); if (!Weapon) { return Fail(TEXT("weapon seed failed")); }
			Weapon->RemoveStatTagStack(Magazine, Weapon->GetStatTagStackCount(Magazine)); Weapon->AddStatTagStack(Magazine, 5);
			Weapon->RemoveStatTagStack(Reserve, Weapon->GetStatTagStackCount(Reserve)); Weapon->AddStatTagStack(Reserve, 19);
			const int32 QuickSlot = Quick->GetNextFreeItemSlot();
			Quick->AddItemToSlot(QuickSlot, Weapon); Quick->SetActiveSlotIndex(QuickSlot);
			++DropStep; return false;
		}
		if (DropStep == 1) { if (DropViaUI(Ammo, 3)) { ++DropStep; } return false; }
		if (DropStep == 2)
		{
			auto* Ground = Find(Ammo); if (!Ground || Ground->GetPickupState().Count != 2 || Other->GetTotalItemCountByDefinition(Ammo) != 1) { return false; }
			if (Ground->CheckAccess(Local) != ELyraPickupStatus::Success) { return Fail(TEXT("return ammo fixture outside pickup access")); }
			Local->RequestPickup(Ground); ++DropStep; return false;
		}
		if (DropStep == 3)
		{
			if (Total() != 7) { return false; }
			if (DropViaUI(Rifle, 1))
			{
				for (auto* Item : Quick->GetSlots()) { if (Item && Item->GetItemDef() == Rifle) { return Fail(TEXT("dropped weapon remained in quickbar")); } }
				const auto* Equipment = Local->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
				if (Quick->GetActiveSlotItem()) { return Fail(TEXT("active quickbar item not removed")); }
				if (Equipment)
				{
					for (auto* Instance : Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()))
					{
						const auto* Item = Cast<ULyraInventoryItemInstance>(Instance->GetInstigator());
						if (Item && Item->GetItemDef() == Rifle) { return Fail(TEXT("dropped rifle still equipped")); }
					}
				}
				++DropStep;
			}
			return false;
		}
		if (DropStep == 4)
		{
			auto* Ground = Find(Rifle);
			if (!Ground || Ground->GetActorLocation().Y > -1000 || Other->GetTotalItemCountByDefinition(Rifle) != 0) { return false; }
			Local->RequestPickup(Ground); ++DropStep; return false;
		}
		auto* Returned = Inventory->FindFirstItemStackByDefinition(Rifle); if (!Returned) { return false; }
		if (Returned->GetStatTagStackCount(Magazine) != 5 || Returned->GetStatTagStackCount(Reserve) != 19 || Total() + Other->GetTotalItemCountByDefinition(Ammo) != 8)
		{ return Fail(TEXT("round-trip state or quantity mismatch")); }
		if (DropStep == 5)
		{
			if (Inventory->AddItemDefinitionWithResult(Shotgun, 3, false).AddedCount != 3 || !Other->AddItemDefinition(Shotgun, 1))
			{ return Fail(TEXT("multiple shotgun seed failed")); }
			++DropStep; return false;
		}
		if (DropStep >= 6 && DropStep <= 8)
		{
			if (!Local->GetPawn()->GetActorLocation().Equals(FVector(-100,-900,92), 1)) { return Fail(TEXT("stationary drop fixture moved")); }
			if (DropViaUI(Shotgun, 1)) { ++DropStep; } return false;
		}
		if (Other->GetTotalItemCountByDefinition(Shotgun) != 4 || Find(Shotgun)) { return false; }
		auto* Done = World->SpawnActor<ALyraWorldPickup>(FVector(50,-1300,80), FRotator::ZeroRotator);
		Done->Initialize(ULyraInventoryTestItemDefinition::StaticClass(), 8);
	}
	else
	{
		Local->SetControlRotation(FRotator::ZeroRotator);
		if (DropStep == 0)
		{
			auto* Ground = Find(Ammo); if (!Ground || Ground->GetPickupState().Count != 3) { return false; }
			FLyraInventoryOperationRequest Invalid; Invalid.RequestId = 1; Invalid.Operation = ELyraInventoryOperation::Drop;
			if (Inventory->ExecuteInventoryOperation(Invalid).Status != ELyraInventoryOperationStatus::NotAuthority) { return Fail(TEXT("client directly mutated inventory")); }
			Local->RequestPickup(Ground); ++DropStep; return false;
		}
		if (DropStep == 1)
		{
			if (Total() != 3 && DropUIPhase == 0) { return false; }
			if (DropViaUI(Ammo, 2)) { ++DropStep; } return false;
		}
		if (DropStep == 2)
		{
			if (DropUIPhase == 0)
			{
				const auto Slots = Inventory->GetSlotSnapshot();
				const auto* Slot = Slots.FindByPredicate([&](const auto& S) { return S.Instance && S.Instance->GetItemDef() == Ammo; });
				if (!Slot) { return false; }
				FLyraInventoryOperationRequest Replay;
				Replay.Operation = ELyraInventoryOperation::Drop; Replay.RequestId = Inventory->GetLastOperationResult().RequestId;
				Replay.SourceSlot = Replay.TargetSlot = Slot->SlotIndex;
				Replay.SourceEntryId = Slot->EntryId; Replay.ExpectedSourceCount = Slot->StackCount; Replay.Quantity = 1;
				Inventory->ServerRequestInventoryOperation(Replay); DropUIPhase = 5; return false;
			}
			if (Inventory->GetLastOperationResult().Status != ELyraInventoryOperationStatus::StaleRequest) { return false; }
			if (Total() != 1) { return Fail(TEXT("replayed drop consumed inventory")); }
			auto* Ground = Find(Rifle); if (!Ground || Find(Ammo)) { return false; }
			Local->RequestPickup(Ground); DropUIPhase = 0; ++DropStep; return false;
		}
		if (DropStep == 3)
		{
			auto* Weapon = Inventory->FindFirstItemStackByDefinition(Rifle);
			if (DropUIPhase == 0 && (!Weapon || Weapon->GetStatTagStackCount(Magazine) != 5 || Weapon->GetStatTagStackCount(Reserve) != 19)) { return false; }
			if (DropViaUI(Rifle, 1)) { ++DropStep; } return false;
		}
		if (DropStep == 4)
		{
			int32 GroundCount = 0;
			for (TActorIterator<ALyraWorldPickup> It(World); It; ++It)
			{ if (It->GetPickupState().Definition == Shotgun && It->GetActorLocation().X < 100 && It->GetActorLocation().Y < -800) { ++GroundCount; } }
			if (GroundCount != 3 || Inventory->GetTotalItemCountByDefinition(Shotgun) != 1) { return false; }
			++DropStep;
		}
		if (auto* Ground = Find(Shotgun))
		{
			if (Now - DropUIAt < 0.4) { return false; }
			Local->RequestPickup(Ground); DropUIAt = Now; return false;
		}
		if (Inventory->GetTotalItemCountByDefinition(Shotgun) != 4 || !Find(ULyraInventoryTestItemDefinition::StaticClass()) || Find(Rifle)) { return false; }
		if (Total() != 1 || Inventory->GetTotalItemCountByDefinition(Rifle) != 0) { return Fail(TEXT("client final inventory mismatch")); }
	}
	bDropVerified = true;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_DROP PASS role=%s ui=confirmed bothDirections=passed ammoTotal=8 weapon=5/19 references=cleared nearbyShotguns=3 ownedShotguns=4"), *ExpectedRole);
	return true;
}
