// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "LyraInventorySnapshotTestTypes.h"
#include "LyraInventoryTestItemDefinition.h"
#include "UI/Inventory/LyraInventoryScreen.h"

#if WITH_DEV_AUTOMATION_TESTS
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryUIConsumedSlotReuse, "Lyra.Inventory.UI.ConsumedSlotReuse",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool FLyraInventoryUIConsumedSlotReuse::RunTest(const FString& Parameters)
{
	using EOp = ELyraInventoryOperation;
	for (const EOp Operation : { EOp::Drop, EOp::Use })
	{
		for (const bool bAckFirst : { false, true })
		{
			const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false)
				.CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			UWorld* World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
			auto* Controller = World->SpawnActor<ALyraInventoryTestController>();
			auto* Inventory = NewObject<ULyraInventoryReplicationTestComponent>(Controller);
			Inventory->RegisterComponent();
			Inventory->ConfigureSlotCapacity(2);
			Inventory->ReadyForReplication();
			auto* Original = Inventory->AddItemDefinition(ULyraInventoryTestItemDefinition::StaticClass(), 1);
			auto* Screen = NewObject<ULyraInventoryScreen>(Controller);
			Screen->Inventory = Inventory;
			Screen->PendingSource = Screen->PendingTarget = Inventory->GetSlotSnapshot()[0];
			Screen->PendingOperation = Operation;
			Screen->PendingRequestId = 1;
			Screen->Quantity = 1;
			Screen->bRequestPending = true;
			FLyraInventoryOperationResult Ack;
			Ack.RequestId = 1; Ack.Status = ELyraInventoryOperationStatus::Success; Ack.MovedCount = 1;
			if (bAckFirst)
			{
				Screen->OperationCompleted(Ack);
				Screen->RefreshInventory();
				TestTrue(TEXT("Success acknowledgement still waits for inventory replication"), Screen->IsRequestPending());
			}
			// Coalesced replication: the removed entry's slot already holds a new entry.
			Inventory->RemoveItemInstance(Original);
			Inventory->AddItemDefinition(ULyraInventoryTestItemDefinition::StaticClass(), 1);
			TestTrue(TEXT("Original slot reused by a fresh identity"), Inventory->GetSlotSnapshot()[0].EntryId != Screen->PendingSource.EntryId);
			Screen->RefreshInventory();
			if (!bAckFirst)
			{
				TestTrue(TEXT("Replicated change alone does not bypass the server acknowledgement"), Screen->IsRequestPending());
				Screen->OperationCompleted(Ack);
				Screen->RefreshInventory();
			}
			TestFalse(TEXT("Whole-stack removal completes even when the slot is already occupied"), Screen->IsRequestPending());
			TestEqual(TEXT("Replacement item is not consumed by UI completion"), Inventory->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()), 1);
			Screen->Inventory = nullptr;
			World->DestroyWorld(false);
		}
	}
	return true;
}
#endif
