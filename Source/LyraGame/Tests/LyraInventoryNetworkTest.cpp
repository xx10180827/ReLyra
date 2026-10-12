// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryNetworkTest.h"
#include "LyraInventoryTestItemDefinition.h"

#include "AbilitySystemComponent.h"
#include "Character/LyraCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/NetDriver.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "HAL/FileManager.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "UnrealClient.h"

void ULyraInventoryNetworkTest::OnInit()
{
	StartedAt = FPlatformTime::Seconds();
	FParse::Value(FCommandLine::Get(), TEXT("InventoryTestRole="), ExpectedRole);
	FParse::Value(FCommandLine::Get(), TEXT("InventoryTestScreenshotDir="), ScreenshotDirectory);
	bInteractive = FParse::Param(FCommandLine::Get(), TEXT("InventoryTestInteractive"));
	bVerifyMovement = FParse::Param(FCommandLine::Get(), TEXT("InventoryTestMove"));
	bVerifyRules = FParse::Param(FCommandLine::Get(), TEXT("InventoryTestRules"));
	bVerifySnapshots = FParse::Param(FCommandLine::Get(), TEXT("InventoryTestSnapshots"));
	bVerifyOperations = FParse::Param(FCommandLine::Get(), TEXT("InventoryTestOperations"));
	if (bVerifyOperations) { bVerifyRules = bVerifySnapshots = true; }
	if (ExpectedRole != TEXT("Host") && ExpectedRole != TEXT("Client"))
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_NET_TEST requires InventoryTestRole=Host or Client"));
		EndTest(1);
	}
}

void ULyraInventoryNetworkTest::OnTick(float TimeDelta)
{
	const double Now = FPlatformTime::Seconds();
	if (Now - StartedAt > 300.0 && !(bInteractive && PassedAt > 0.0))
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_NET_TEST FAIL role=%s timeout waiting for both peers to finish"), *ExpectedRole);
		EndTest(1);
		return;
	}
	if (PassedAt > 0.0)
	{
		if (bInteractive)
		{
			// User acceptance must never exit because a screenshot is delayed (for
			// example when this window is occluded). Capture only in automated runs.
			return;
		}
		if (!ScreenshotDirectory.IsEmpty())
		{
			const FString ScreenshotPath = FPaths::Combine(ScreenshotDirectory, ExpectedRole + TEXT(".png"));
			if (Now - PassedAt < 5.0)
			{
				return;
			}
			if (!bScreenshotRequested)
			{
				FScreenshotRequest::RequestScreenshot(ScreenshotPath, true, false);
				bScreenshotRequested = true;
				return;
			}
			if (!IFileManager::Get().FileExists(*ScreenshotPath))
			{
				if (Now - PassedAt > 30.0)
				{
					UE_LOG(LogTemp, Error, TEXT("INVENTORY_NET_TEST screenshot missing: %s"), *ScreenshotPath);
					EndTest(1);
				}
				return;
			}
		}
		// The client exits only after its own checks. Never use a fixed host delay:
		// character assets may still be loading on the client when the host is ready.
		const UWorld* TestWorld = GetWorld();
		const UNetDriver* Driver = TestWorld ? TestWorld->GetNetDriver() : nullptr;
		if (ExpectedRole == TEXT("Client") || (Driver && Driver->ClientConnections.IsEmpty()))
		{
			EndTest(0);
		}
		return;
	}

	UWorld* World = GetWorld();
	if (!World || !World->GetMapName().Contains(TEXT("L_InventoryMultiplayer")))
	{
		return;
	}
	const bool bHost = ExpectedRole == TEXT("Host");
	const bool bCorrectMode = World->GetNetMode() == (bHost ? NM_ListenServer : NM_Client);
	const AGameStateBase* GameState = World->GetGameState();
	const UNetDriver* NetDriver = World->GetNetDriver();
	if (Now - LastDiagnosticAt >= 10.0)
	{
		LastDiagnosticAt = Now;
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_NET_STATE role=%s mode=%d players=%d"),
			*ExpectedRole, int32(World->GetNetMode()), GameState ? GameState->PlayerArray.Num() : -1);
		for (TActorIterator<ALyraCharacter> It(World); It; ++It)
		{
			const AController* Controller = It->GetController();
			UE_LOG(LogTemp, Display, TEXT("INVENTORY_NET_PAWN name=%s local=%d position=%s velocity=%s ignoreMove=%d playerState=%d mesh=%d"),
				*It->GetName(), It->IsLocallyControlled(), *It->GetActorLocation().ToCompactString(), *It->GetVelocity().ToCompactString(),
				Controller ? Controller->IsMoveInputIgnored() : false, It->GetPlayerState() != nullptr, It->GetMesh()->GetSkeletalMeshAsset() != nullptr);
		}
	}
	if (!bCorrectMode || !GameState || GameState->PlayerArray.Num() != 2 || !NetDriver
		|| (bHost ? NetDriver->ClientConnections.Num() != 1 : NetDriver->ServerConnection == nullptr))
	{
		ReadyAt = 0.0;
		return;
	}

	int32 InitializedControllers = 0;
	for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
	{
		const APlayerController* Controller = It->Get();
		const APawn* Pawn = Controller ? Controller->GetPawn() : nullptr;
		const APlayerState* PlayerState = Controller ? Controller->GetPlayerState<APlayerState>() : nullptr;
		if (Controller && Pawn && PlayerState
			&& Controller->FindComponentByClass<ULyraInventoryManagerComponent>()
			&& Controller->FindComponentByClass<ULyraQuickBarComponent>()
			&& Pawn->FindComponentByClass<ULyraEquipmentManagerComponent>()
			&& PlayerState->FindComponentByClass<UAbilitySystemComponent>())
		{
			const auto* Inventory = Controller->FindComponentByClass<ULyraInventoryManagerComponent>();
			const auto Slots = Inventory->GetSlotSnapshot();
			bool bDataReady = Inventory->GetSlotCapacity() == 20 && Slots.Num() == 20;
			int32 Occupied = 0;
			TSet<FGuid> EntryIds;
			for (int32 SlotIndex = 0; SlotIndex < Slots.Num(); ++SlotIndex)
			{
				const auto& Slot = Slots[SlotIndex];
				bDataReady &= Slot.SlotIndex == SlotIndex;
				if (Slot.EntryId.IsValid())
				{
					bDataReady &= Slot.Instance && Slot.Instance->GetItemDef() && Slot.StackCount > 0
						&& !EntryIds.Contains(Slot.EntryId);
					EntryIds.Add(Slot.EntryId);
					++Occupied;
				}
			}
			if (!bDataReady || Occupied == 0)
			{
				ReadyAt = 0.0;
				return;
			}
			++InitializedControllers;
		}
	}
	int32 VisibleCharacters = 0;
	int32 MovedCharacters = 0;
	for (TActorIterator<ALyraCharacter> It(World); It; ++It)
	{
		if (It->GetPlayerState() && It->GetMesh()->GetSkeletalMeshAsset())
		{
			++VisibleCharacters;
			// Both starts in this fixture are at X=-600. Check each replicated actor,
			// on each peer, after moving only that peer's locally controlled pawn.
			if (It->GetActorLocation().X > -450.0)
			{
				++MovedCharacters;
			}
		}
	}
	if (InitializedControllers != (bHost ? 2 : 1) || VisibleCharacters != 2)
	{
		ReadyAt = 0.0;
		return;
	}
	if (bVerifyRules && !bRulesVerified)
	{
		ULyraInventoryManagerComponent* RemoteInventory = nullptr;
		for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
		{
			if (!bHost || !It->Get()->IsLocalController())
			{
				RemoteInventory = It->Get()->FindComponentByClass<ULyraInventoryManagerComponent>();
				break;
			}
		}
		if (!RemoteInventory) { return; }
		const auto Definition = ULyraInventoryTestItemDefinition::StaticClass();
		if (bHost && !bRulesApplied)
		{
			// One existing pistol occupies slot 0; test only the remote player's inventory.
			const auto Seed = RemoteInventory->AddItemDefinitionWithResult(Definition, 187, false);
			const auto Partial = RemoteInventory->AddItemDefinitionWithResult(Definition, 15, true);
			const bool Rejected = !RemoteInventory->ConsumeItemsByDefinition(Definition, 191);
			const bool Unchanged = RemoteInventory->GetTotalItemCountByDefinition(Definition) == 190;
			const bool Consumed = RemoteInventory->ConsumeItemsByDefinition(Definition, 14);
			if (Seed.AddedCount != 187 || Partial.AddedCount != 3 || Partial.RemainingCount != 12
				|| !Rejected || !Unchanged || !Consumed)
			{
				UE_LOG(LogTemp, Error, TEXT("INVENTORY_RULES FAIL server transaction mismatch"));
				EndTest(1);
				return;
			}
			bRulesApplied = true;
		}
		const auto Slots = RemoteInventory->GetSlotSnapshot();
		if (RemoteInventory->GetTotalItemCountByDefinition(Definition) != 176 || Slots.Num() != 20
			|| Slots[1].Instance || Slots[2].StackCount != 6 || Slots[19].StackCount != 10)
		{
			ReadyAt = 0.0;
			return; // The client waits for real replicated transaction results.
		}
		bRulesVerified = true;
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_RULES PASS role=%s total=176 capacity=20 slot1=empty slot2=6 slot19=10"), *ExpectedRole);
	}
	if (bVerifySnapshots && !bSnapshotsVerified)
	{
		APlayerController* RemoteController = nullptr;
		ULyraInventoryManagerComponent* HostInventory = nullptr;
		for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
		{
			if (!bHost || !It->Get()->IsLocalController()) { RemoteController = It->Get(); }
			else { HostInventory = It->Get()->FindComponentByClass<ULyraInventoryManagerComponent>(); }
		}
		if (!RemoteController) { return; }
		auto* RemoteInventory = RemoteController->FindComponentByClass<ULyraInventoryManagerComponent>();
		auto* QuickBar = RemoteController->FindComponentByClass<ULyraQuickBarComponent>();
		auto* Equipment = RemoteController->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
		const auto Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
		const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
		if (bHost && SnapshotAppliedAt == 0.0)
		{
			auto* Original = QuickBar->GetActiveSlotItem();
			if (!Original || !HostInventory || Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).IsEmpty()) { return; }
			const FGuid OldId = RemoteInventory->GetSlotSnapshot()[0].EntryId;
			Original->RemoveStatTagStack(Magazine, MAX_int32);
			Original->RemoveStatTagStack(Reserve, MAX_int32);
			Original->AddStatTagStack(Magazine, 7);
			Original->AddStatTagStack(Reserve, 19);
			auto* AtHost = RemoteInventory->TransferItemToInventory(Original, HostInventory);
			auto* Returned = AtHost ? HostInventory->TransferItemToInventory(AtHost, RemoteInventory) : nullptr;
			if (!Returned || Returned == Original || Returned->GetOuter() != RemoteController
				|| RemoteInventory->GetSlotSnapshot()[0].EntryId == OldId
				|| QuickBar->GetActiveSlotIndex() != INDEX_NONE
				|| !Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).IsEmpty())
			{
				UE_LOG(LogTemp, Error, TEXT("INVENTORY_SNAPSHOT FAIL owner reconstruction or reference cleanup"));
				EndTest(1);
				return;
			}
			SnapshotAppliedAt = Now;
		}
		const auto Slots = RemoteInventory->GetSlotSnapshot();
		auto* Restored = Slots[0].Instance.Get();
		if (bHost && !bSnapshotMutationApplied)
		{
			if (Now - SnapshotAppliedAt < 1.0) { return; }
			// A later update exercises replication of the rebuilt subobject as well as initial state.
			Restored->RemoveStatTagStack(Magazine, 2);
			RemoteController->ForceNetUpdate();
			bSnapshotMutationApplied = true;
		}
		bool bReferencesClear = QuickBar->GetActiveSlotIndex() == INDEX_NONE
			&& Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).IsEmpty();
		for (auto* Slot : QuickBar->GetSlots()) { bReferencesClear &= Slot == nullptr; }
		if (!Restored || Restored->GetOuter() != RemoteController || Restored->GetStatTagStackCount(Magazine) != 5
			|| Restored->GetStatTagStackCount(Reserve) != 19 || Slots[0].StackCount != 1 || !bReferencesClear)
		{
			ReadyAt = 0.0;
			return;
		}
		bSnapshotsVerified = true;
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_SNAPSHOT role=%s player=%d entry=%s magazine=5 reserve=19 count=1 quickbar=clear equipment=clear"),
			*ExpectedRole, RemoteController->GetPlayerState<APlayerState>()->GetPlayerId(), *Slots[0].EntryId.ToString());
	}
	if (bVerifyOperations && !bOperationsVerified && !TickInventoryOperations(bHost))
	{
		ReadyAt = 0.0;
		return;
	}
	if (bVerifyMovement && MovedCharacters != 2)
	{
		for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
		{
			APlayerController* Controller = It->Get();
			APawn* Pawn = Controller ? Controller->GetPawn() : nullptr;
			if (Controller && Controller->IsLocalController() && Pawn && Pawn->GetActorLocation().X < -350.0)
			{
				Pawn->AddMovementInput(FVector::ForwardVector);
			}
		}
		ReadyAt = 0.0;
		return;
	}
	if (ReadyAt == 0.0)
	{
		ReadyAt = Now;
	}
	if (Now - ReadyAt >= 2.0)
	{
		PassedAt = Now;
		for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
		{
			const APlayerController* Controller = It->Get();
			const auto* Inventory = Controller->FindComponentByClass<ULyraInventoryManagerComponent>();
			for (const auto& Slot : Inventory->GetSlotSnapshot())
			{
				if (Slot.EntryId.IsValid())
				{
					UE_LOG(LogTemp, Display, TEXT("INVENTORY_DATA role=%s player=%d capacity=%d slot=%d entry=%s count=%d"),
						*ExpectedRole, Controller->PlayerState->GetPlayerId(), Inventory->GetSlotCapacity(),
						Slot.SlotIndex, *Slot.EntryId.ToString(), Slot.StackCount);
				}
			}
		}
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_NET_TEST PASS role=%s players=2 characters=2 controllers=%d inventory=ready quickbar=ready equipment=ready asc=ready movement=%s"),
			*ExpectedRole, InitializedControllers, bVerifyMovement ? TEXT("replicated") : TEXT("not_requested"));
		MarkHeartbeatActive(TEXT("Two-player inventory scene initialized"));
	}
}

bool ULyraInventoryNetworkTest::TickInventoryOperations(bool bHost)
{
	using EOp = ELyraInventoryOperation;
	using EStatus = ELyraInventoryOperationStatus;
	APlayerController* Controller = nullptr;
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (!bHost || !It->Get()->IsLocalController()) { Controller = It->Get(); break; }
	}
	if (!Controller) { return false; }
	auto* Inventory = Controller->FindComponentByClass<ULyraInventoryManagerComponent>();
	const auto Slots = Inventory->GetSlotSnapshot();
	if (Slots.Num() != 20) { return false; }
	const auto Result = Inventory->GetLastOperationResult();
	const bool bFinalLayout = Slots[1].StackCount == 10 && !Slots[2].Instance && Slots[3].StackCount == 6
		&& Inventory->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) == 176;
	if (bHost)
	{
		// The host never performs these operations on behalf of the remote player.
		if (Result.RequestId != 9 || Result.Status != EStatus::StaleRequest || !bFinalLayout) { return false; }
	}
	else
	{
		struct FStep { EOp Op; int32 Source; int32 Target; int32 Amount; int32 One; int32 Two; int32 Three; };
		static const FStep Steps[] = {
			{ EOp::Move, 2, 1, 0, 6, 0, 10 },
			{ EOp::Split, 1, 2, 2, 4, 2, 10 },
			{ EOp::Swap, 1, 3, 0, 10, 2, 4 },
			{ EOp::Merge, 2, 3, 2, 10, 0, 6 },
			{ EOp::Split, 3, 2, 2, 10, 2, 4 },
			{ EOp::Merge, 2, 3, 1, 10, 1, 5 },
			{ EOp::Merge, 2, 3, 1, 10, 0, 6 }
		};
		if (bOperationPending)
		{
			const int64 ExpectedId = FMath::Min(OperationStep + 1, 9);
			const EStatus ExpectedStatus = OperationStep < 7 ? EStatus::Success
				: OperationStep == 7 ? EStatus::StaleState : OperationStep == 8 ? EStatus::InvalidQuantity : EStatus::StaleRequest;
			if (Result.RequestId != ExpectedId) { return false; }
			// The replay uses the previous request's sequence: wait for its new result.
			if (OperationStep == 9 && Result.Status == EStatus::InvalidQuantity) { return false; }
			if (Result.Status != ExpectedStatus)
			{
				UE_LOG(LogTemp, Error, TEXT("INVENTORY_OPERATIONS FAIL step=%d status=%d expected=%d"), OperationStep, int32(Result.Status), int32(ExpectedStatus));
				EndTest(1); return false;
			}
			if (OperationStep < 7)
			{
				const auto& Step = Steps[OperationStep];
				// An RPC acknowledgement is not proof that the inventory replication arrived.
				if (Slots[1].StackCount != Step.One || Slots[2].StackCount != Step.Two || Slots[3].StackCount != Step.Three) { return false; }
			}
			else if (!bFinalLayout) { return false; }
			UE_LOG(LogTemp, Display, TEXT("INVENTORY_OPERATION_ACK step=%d request=%lld status=%d"), OperationStep + 1, Result.RequestId, int32(Result.Status));
			++OperationStep; bOperationPending = false;
		}
		if (OperationStep < 10)
		{
			if (OperationStep < 7)
			{
				const auto& Step = Steps[OperationStep];
				if (!Inventory->RequestInventoryOperation(Step.Op, Step.Source, Step.Target, Step.Amount))
				{
					UE_LOG(LogTemp, Error, TEXT("INVENTORY_OPERATIONS FAIL client could not queue request"));
					EndTest(1); return false;
				}
			}
			else if (OperationStep == 8) { Inventory->RequestInventoryOperation(EOp::Split, 3, 2, -1); }
			else
			{
				FLyraInventoryOperationRequest Request;
				Request.RequestId = OperationStep == 7 ? 8 : 9;
				Request.Operation = EOp::Split; Request.SourceSlot = 3; Request.TargetSlot = 2; Request.Quantity = 1;
				Request.SourceEntryId = OperationStep == 7 ? FGuid::NewGuid() : Slots[3].EntryId;
				Request.ExpectedSourceCount = Slots[3].StackCount;
				Inventory->ServerRequestInventoryOperation(Request);
			}
			bOperationPending = true;
			return false;
		}
	}
	bOperationsVerified = true;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_OPERATIONS role=%s player=%d successes=7 rejected=3 total=176 slot1=10 slot2=empty slot3=6"),
		*ExpectedRole, Controller->GetPlayerState<APlayerState>()->GetPlayerId());
	return true;
}
