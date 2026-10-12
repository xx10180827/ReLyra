// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "LyraInventoryTestItemDefinition.h"
#include "LyraInventorySnapshotTestTypes.h"

#if WITH_DEV_AUTOMATION_TESTS
namespace LyraInventoryOperationsTest
{
	using EOp = ELyraInventoryOperation;
	using EStatus = ELyraInventoryOperationStatus;
	struct FFixture
	{
		UWorld* World;
		ULyraInventoryManagerComponent* Inventory;
		int64 Sequence = 0;
		FFixture(int32 Capacity = 4)
		{
			const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false)
				.CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
			Inventory = NewObject<ULyraInventoryReplicationTestComponent>(World->SpawnActor<ALyraInventoryTestController>());
			Inventory->RegisterComponent();
			Inventory->ConfigureSlotCapacity(Capacity);
			Inventory->ReadyForReplication();
		}
		~FFixture() { World->DestroyWorld(false); }
		ULyraInventoryItemInstance* Seed(int32 Count, int32 Reserve = 0)
		{
			FLyraInventoryItemSnapshot Snapshot;
			Snapshot.ItemDef = ULyraInventoryTestItemDefinition::StaticClass();
			Snapshot.StackCount = Count;
			if (Reserve > 0) { Snapshot.StatTags.Add(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo")), Reserve); }
			return Inventory->RestoreItemSnapshot(Snapshot);
		}
		FLyraInventoryOperationRequest Request(EOp Op, int32 Source, int32 Target, int32 Quantity = 0)
		{
			const auto Slots = Inventory->GetSlotSnapshot();
			FLyraInventoryOperationRequest R;
			R.RequestId = ++Sequence;
			R.Operation = Op; R.SourceSlot = Source; R.TargetSlot = Target; R.Quantity = Quantity;
			if (Slots.IsValidIndex(Source)) { R.SourceEntryId = Slots[Source].EntryId; R.ExpectedSourceCount = Slots[Source].StackCount; }
			if (Slots.IsValidIndex(Target)) { R.TargetEntryId = Slots[Target].EntryId; R.ExpectedTargetCount = Slots[Target].StackCount; }
			return R;
		}
		EStatus Run(EOp Op, int32 Source, int32 Target, int32 Quantity = 0)
		{
			return Inventory->ExecuteInventoryOperation(Request(Op, Source, Target, Quantity)).Status;
		}
		FString State() const
		{
			FString Value;
			for (const auto& Slot : Inventory->GetSlotSnapshot())
			{
				Value += FString::Printf(TEXT("%d:%s:%d:%p;"), Slot.SlotIndex, *Slot.EntryId.ToString(), Slot.StackCount, Slot.Instance.Get());
			}
			return Value;
		}
		ULyraQuickBarComponent* QuickBar()
		{
			auto* Bar = NewObject<ULyraQuickBarComponent>(Inventory->GetOwner());
			Bar->RegisterComponent(); Bar->RegisterAllComponentTickFunctions(true); Bar->BeginPlay();
			return Bar;
		}
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraOperationsMoveSwap, "Lyra.Inventory.Operations.MoveSwap",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraOperationsMoveSwap::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryOperationsTest;
	FFixture F(2);
	auto* Item = F.Seed(6, 35);
	auto* Bar = F.QuickBar(); Bar->AddItemToSlot(0, Item);
	const auto Identity = F.Inventory->GetSlotSnapshot()[0].EntryId;
	TestTrue(TEXT("Move to empty slot"), F.Run(EOp::Move, 0, 1) == EStatus::Success);
	TestTrue(TEXT("Same instance and ID follow item"), F.Inventory->GetSlotSnapshot()[1].Instance == Item && F.Inventory->GetSlotSnapshot()[1].EntryId == Identity);
	TestTrue(TEXT("Quickbar reference survives movement"), Bar->GetSlots()[0] == Item);
	auto* Other = F.Seed(3);
	TestTrue(TEXT("Swap succeeds with no free slots"), F.Run(EOp::Swap, 1, 0) == EStatus::Success);
	const auto Slots = F.Inventory->GetSlotSnapshot();
	TestTrue(TEXT("Both identities follow swapped objects"), Slots[0].Instance == Item && Slots[0].EntryId == Identity && Slots[1].Instance == Other);
	const FString Before = F.State();
	TestTrue(TEXT("Occupied move rejected"), F.Run(EOp::Move, 0, 1) == EStatus::TargetOccupied);
	TestEqual(TEXT("Rejected move unchanged"), F.State(), Before);
	TestEqual(TEXT("State preserved"), Item->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"))), 35);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraOperationsSplitState, "Lyra.Inventory.Operations.SplitState",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraOperationsSplitState::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryOperationsTest;
	FFixture F;
	auto* Original = F.Seed(8, 35);
	const FGuid Id = F.Inventory->GetSlotSnapshot()[0].EntryId;
	TestTrue(TEXT("Split into requested non-first empty slot"), F.Run(EOp::Split, 0, 2, 3) == EStatus::Success);
	const auto Slots = F.Inventory->GetSlotSnapshot();
	TestTrue(TEXT("Counts 5 plus 3, middle still empty"), Slots[0].StackCount == 5 && Slots[2].StackCount == 3 && !Slots[1].Instance);
	TestTrue(TEXT("Original identity retained; split has fresh identity"), Slots[0].Instance == Original && Slots[0].EntryId == Id && Slots[2].EntryId != Id);
	if (!TestNotNull(TEXT("New split instance"), Slots[2].Instance.Get())) { return false; }
	TestTrue(TEXT("Correct owner and replication registration"), Slots[2].Instance->GetOuter() == F.Inventory->GetOwner() && F.Inventory->IsReplicatedSubObjectRegistered(Slots[2].Instance));
	TestEqual(TEXT("Split preserves modified tags"), Slots[2].Instance->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"))), 35);
	const FString Before = F.State();
	TestTrue(TEXT("Cannot split whole stack"), F.Run(EOp::Split, 0, 3, 5) == EStatus::InvalidQuantity);
	TestEqual(TEXT("Rejected split unchanged"), F.State(), Before);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraOperationsMerge, "Lyra.Inventory.Operations.Merge",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraOperationsMerge::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryOperationsTest;
	FFixture F;
	auto* Source = F.Seed(6, 35); F.Seed(7, 35); F.Seed(1, 34);
	const FString Before = F.State();
	TestTrue(TEXT("Exact requested amount must fit"), F.Run(EOp::Merge, 0, 1, 4) == EStatus::NoSpace);
	TestTrue(TEXT("Different state cannot merge"), F.Run(EOp::Merge, 0, 2, 1) == EStatus::Incompatible);
	TestEqual(TEXT("Both rejections are atomic"), F.State(), Before);
	TestTrue(TEXT("Matching modified state can merge"), F.Run(EOp::Merge, 0, 1, 2) == EStatus::Success);
	TestTrue(TEXT("Partial merge keeps source"), F.Inventory->GetSlotSnapshot()[0].Instance == Source && F.Inventory->GetSlotSnapshot()[0].StackCount == 4 && F.Inventory->GetSlotSnapshot()[1].StackCount == 9);
	FFixture G;
	auto* Consumed = G.Seed(3); auto* Target = G.Seed(7);
	auto* Bar = G.QuickBar(); Bar->AddItemToSlot(0, Consumed); Bar->AddItemToSlot(1, Consumed);
	const FGuid TargetId = G.Inventory->GetSlotSnapshot()[1].EntryId;
	TestTrue(TEXT("Complete merge succeeds"), G.Run(EOp::Merge, 0, 1, 3) == EStatus::Success);
	TestTrue(TEXT("Target identity retained at 10; source empty"), !G.Inventory->GetSlotSnapshot()[0].Instance && G.Inventory->GetSlotSnapshot()[1].Instance == Target && G.Inventory->GetSlotSnapshot()[1].EntryId == TargetId && G.Inventory->GetSlotSnapshot()[1].StackCount == 10);
	TestFalse(TEXT("Consumed source unregistered"), G.Inventory->IsReplicatedSubObjectRegistered(Consumed));
	TestTrue(TEXT("All consumed references cleared"), !Bar->GetSlots()[0] && !Bar->GetSlots()[1]);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraOperationsValidation, "Lyra.Inventory.Operations.Validation",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraOperationsValidation::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryOperationsTest;
	FFixture F; F.Seed(6); F.Seed(2);
	const FString Before = F.State();
	TestTrue(TEXT("Negative index rejected"), F.Run(EOp::Move, -1, 2) == EStatus::InvalidRequest);
	TestTrue(TEXT("Out of range rejected"), F.Run(EOp::Move, 0, 4) == EStatus::InvalidRequest);
	TestTrue(TEXT("Same slot rejected"), F.Run(EOp::Swap, 0, 0) == EStatus::InvalidRequest);
	TestTrue(TEXT("Unknown operation rejected"), F.Run(static_cast<EOp>(255), 0, 2) == EStatus::InvalidRequest);
	for (const int32 Quantity : {0, -1, MAX_int32})
	{
		TestTrue(TEXT("Invalid split amount rejected"), F.Run(EOp::Split, 0, 2, Quantity) == EStatus::InvalidQuantity);
		TestTrue(TEXT("Invalid merge amount rejected"), F.Run(EOp::Merge, 0, 1, Quantity) == EStatus::InvalidQuantity);
	}
	TestTrue(TEXT("Move with quantity rejected"), F.Run(EOp::Move, 0, 2, 1) == EStatus::InvalidQuantity);
	TestTrue(TEXT("Swap needs occupied target"), F.Run(EOp::Swap, 0, 2) == EStatus::TargetEmpty);
	TestTrue(TEXT("Empty source rejected"), F.Run(EOp::Move, 2, 3) == EStatus::StaleState);
	FFixture Other; Other.Seed(6);
	auto Forged = F.Request(EOp::Move, 0, 2); Forged.SourceEntryId = Other.Inventory->GetSlotSnapshot()[0].EntryId;
	TestTrue(TEXT("Foreign item ID rejected"), F.Inventory->ExecuteInventoryOperation(Forged).Status == EStatus::StaleState);
	auto ChangedTarget = F.Request(EOp::Swap, 0, 1); --ChangedTarget.ExpectedTargetCount;
	TestTrue(TEXT("Changed target rejected"), F.Inventory->ExecuteInventoryOperation(ChangedTarget).Status == EStatus::StaleState);
	F.Inventory->GetOwner()->SetRole(ROLE_SimulatedProxy);
	TestTrue(TEXT("Client cannot mutate authority directly"), F.Run(EOp::Move, 0, 2) == EStatus::NotAuthority);
	F.Inventory->GetOwner()->SetRole(ROLE_Authority);
	TestEqual(TEXT("Invalid attempts preserve all identities and counts"), F.State(), Before);
	FFixture Legacy(0); Legacy.Seed(1);
	TestTrue(TEXT("Legacy inventory has no fixed-slot operation"), Legacy.Run(EOp::Move, 0, 1) == EStatus::InvalidRequest);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraOperationsReplayConservation, "Lyra.Inventory.Operations.ReplayConservation",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraOperationsReplayConservation::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryOperationsTest;
	FFixture F; F.Seed(8); F.Seed(7);
	auto Request = F.Request(EOp::Split, 0, 2, 3);
	TestTrue(TEXT("First transaction accepted"), F.Inventory->ExecuteInventoryOperation(Request).Status == EStatus::Success);
	const FString After = F.State();
	TestTrue(TEXT("Exact replay rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status == EStatus::StaleRequest);
	Request.RequestId = ++F.Sequence; Request.TargetSlot = 3;
	TestTrue(TEXT("New sequence with old state rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status == EStatus::StaleState);
	TestTrue(TEXT("Rejected sequence also consumed"), F.Inventory->ExecuteInventoryOperation(Request).Status == EStatus::StaleRequest);
	TestEqual(TEXT("Replays never duplicate or consume"), F.State(), After);
	FRandomStream Random(9122026);
	for (int32 Attempt = 0; Attempt < 120; ++Attempt)
	{
		const auto Op = static_cast<EOp>(Random.RandRange(0, 3));
		const int32 Quantity = (Op == EOp::Split || Op == EOp::Merge) ? Random.RandRange(1, 6) : 0;
		const FString Before = F.State();
		const auto Status = F.Run(Op, Random.RandRange(0, 3), Random.RandRange(0, 3), Quantity);
		if (Status != EStatus::Success) { TestEqual(TEXT("Failed transaction is atomic"), F.State(), Before); }
		int32 Total = 0; TSet<FGuid> Ids;
		for (const auto& Slot : F.Inventory->GetSlotSnapshot())
		{
			Total += Slot.StackCount;
			if (Slot.Instance)
			{
				TestTrue(TEXT("Unique identities and bounded positive quantities"), Slot.EntryId.IsValid() && !Ids.Contains(Slot.EntryId) && Slot.StackCount > 0 && Slot.StackCount <= 10);
				Ids.Add(Slot.EntryId);
			}
		}
		TestEqual(TEXT("Total conserved after every transaction"), Total, 15);
	}
	return true;
}
#endif
