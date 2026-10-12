// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "LyraInventoryTestItemDefinition.h"
#include "NativeGameplayTags.h"
#include "Templates/UnrealTemplate.h"

#if WITH_DEV_AUTOMATION_TESTS
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Inventory_TestModified, "Lyra.Inventory.Test.ModifiedState");

namespace LyraInventoryRulesTest
{
	struct FFixture
	{
		UWorld* World;
		ULyraInventoryManagerComponent* Inventory;
		TSubclassOf<ULyraInventoryItemDefinition> Definition = ULyraInventoryTestItemDefinition::StaticClass();
		FFixture(int32 Capacity = 3)
		{
			const auto Initialization = UWorld::InitializationValues().AllowAudioPlayback(false)
				.CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Initialization);
			Inventory = NewObject<ULyraInventoryManagerComponent>(World->SpawnActor<AActor>());
			Inventory->ConfigureSlotCapacity(Capacity);
		}
		~FFixture() { World->DestroyWorld(false); }
		FLyraInventoryAddResult Add(int32 Count, bool bPartial = true) { return Inventory->AddItemDefinitionWithResult(Definition, Count, bPartial); }
		int32 Total() const { return Inventory->GetTotalItemCountByDefinition(Definition); }
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryStackingTest, "Lyra.Inventory.Rules.Stacking",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryStackingTest::RunTest(const FString& Parameters)
{
	LyraInventoryRulesTest::FFixture F(2);
	F.Add(8);
	const FGuid FirstId = F.Inventory->GetSlotSnapshot()[0].EntryId;
	TestEqual(TEXT("Five more units all fit"), F.Add(5).AddedCount, 5);
	const auto Slots = F.Inventory->GetSlotSnapshot();
	TestEqual(TEXT("Fill the existing stack first"), Slots[0].StackCount, 10);
	TestEqual(TEXT("Overflow occupies a new slot"), Slots[1].StackCount, 3);
	TestEqual(TEXT("Merging preserves the original identity"), Slots[0].EntryId, FirstId);
	TestEqual(TEXT("Count units, not entries"), F.Total(), 13);
	TestEqual(TEXT("Full grid still has stack space"), F.Inventory->GetAddableItemCount(F.Definition, 100), 7);
	TestTrue(TEXT("Preview recognizes merge space"), F.Inventory->CanAddItemDefinition(F.Definition, 7));
	AddInfo(TEXT("8 + 5 became stacks [10,3], total 13, with space for 7 more despite a full grid."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryPartialTest, "Lyra.Inventory.Rules.PartialAndAtomicAdd",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryPartialTest::RunTest(const FString& Parameters)
{
	LyraInventoryRulesTest::FFixture F(2);
	F.Add(13);
	const auto Before = F.Inventory->GetSlotSnapshot();
	TestFalse(TEXT("Full request does not fit"), F.Inventory->CanAddItemDefinition(F.Definition, 12));
	TestNull(TEXT("Legacy API refuses the whole oversized request"), F.Inventory->AddItemDefinition(F.Definition, 12));
	TestEqual(TEXT("Refused addition changes no quantity"), F.Total(), 13);
	TestEqual(TEXT("Refused addition changes no identity"), F.Inventory->GetSlotSnapshot()[1].EntryId, Before[1].EntryId);
	const auto Partial = F.Add(12);
	TestTrue(TEXT("Partial result is explicit"), Partial.Status == ELyraInventoryAddStatus::Partial);
	TestEqual(TEXT("Only seven units fit"), Partial.AddedCount, 7);
	TestEqual(TEXT("Five units remain with the caller"), Partial.RemainingCount, 5);
	TestEqual(TEXT("Quantity is conserved"), F.Total() + Partial.RemainingCount, 25);
	const auto Full = F.Add(1);
	TestTrue(TEXT("Full inventory reports no space"), Full.Status == ELyraInventoryAddStatus::NoSpace);
	TestEqual(TEXT("Full inventory keeps remainder"), Full.RemainingCount, 1);
	AddInfo(TEXT("From 13/20, an all-or-nothing request for 12 was refused; partial admission accepted 7 and returned 5."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryConsumeTest, "Lyra.Inventory.Rules.AtomicConsumption",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryConsumeTest::RunTest(const FString& Parameters)
{
	LyraInventoryRulesTest::FFixture F;
	F.Add(25);
	const auto Before = F.Inventory->GetSlotSnapshot();
	TestFalse(TEXT("Insufficient quantity fails before consuming"), F.Inventory->ConsumeItemsByDefinition(F.Definition, 26));
	TestEqual(TEXT("Failed consumption keeps all units"), F.Total(), 25);
	for (int32 Index = 0; Index < Before.Num(); ++Index)
	{
		TestEqual(TEXT("Failed consumption preserves each identity"), F.Inventory->GetSlotSnapshot()[Index].EntryId, Before[Index].EntryId);
		TestEqual(TEXT("Failed consumption preserves each count"), F.Inventory->GetSlotSnapshot()[Index].StackCount, Before[Index].StackCount);
	}
	TestTrue(TEXT("Consume across multiple stacks"), F.Inventory->ConsumeItemsByDefinition(F.Definition, 14));
	const auto After = F.Inventory->GetSlotSnapshot();
	TestEqual(TEXT("Quantity remaining"), F.Total(), 11);
	TestNull(TEXT("Exhausted stack frees its slot"), After[0].Instance.Get());
	TestEqual(TEXT("Partial stack keeps six"), After[1].StackCount, 6);
	TestEqual(TEXT("Untouched stack keeps five"), After[2].StackCount, 5);
	TestEqual(TEXT("Partial consumption preserves identity"), After[1].EntryId, Before[1].EntryId);
	TestTrue(TEXT("Exact consumption empties inventory"), F.Inventory->ConsumeItemsByDefinition(F.Definition, 11));
	TestEqual(TEXT("No empty item objects remain in inventory"), F.Inventory->GetAllItems().Num(), 0);
	TestFalse(TEXT("Repeated consumption cannot spend missing units"), F.Inventory->ConsumeItemsByDefinition(F.Definition, 1));
	AddInfo(TEXT("25 units refused a cost of 26 unchanged; consuming 14 left [empty,6,5]; consuming 11 emptied the inventory."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryStateTest, "Lyra.Inventory.Rules.StateCompatibility",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryStateTest::RunTest(const FString& Parameters)
{
	LyraInventoryRulesTest::FFixture F(2);
	auto* Modified = F.Add(5).FirstInstance.Get();
	if (!TestNotNull(TEXT("Created stateful stack"), Modified)) { return false; }
	Modified->AddStatTagStack(TAG_Inventory_TestModified, 2);
	F.Add(3);
	TestEqual(TEXT("Changed state cannot merge with a default pickup"), F.Inventory->GetAllItems().Num(), 2);
	TestEqual(TEXT("Only compatible stack contributes capacity"), F.Inventory->GetAddableItemCount(F.Definition, 100), 7);
	F.Add(7);
	TestEqual(TEXT("Modified stack quantity preserved"), F.Inventory->GetSlotSnapshot()[0].StackCount, 5);
	TestEqual(TEXT("Modified state preserved"), Modified->GetStatTagStackCount(TAG_Inventory_TestModified), 2);
	Modified->RemoveStatTagStack(TAG_Inventory_TestModified, 2);
	TestEqual(TEXT("Restored default state can merge again"), F.Inventory->GetAddableItemCount(F.Definition, 100), 5);
	TestEqual(TEXT("Different definitions never merge"), F.Inventory->GetAddableItemCount(ULyraInventoryItemDefinition::StaticClass(), 1), 0);
	AddInfo(TEXT("A stack with changed instance tags remained separate; restoring its default tags made it compatible again."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryInvalidTest, "Lyra.Inventory.Rules.InvalidAndAuthority",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryInvalidTest::RunTest(const FString& Parameters)
{
	LyraInventoryRulesTest::FFixture F;
	F.Add(8);
	for (int32 Count : {0, -1, MIN_int32})
	{
		TestTrue(TEXT("Nonpositive addition is invalid"), F.Add(Count).Status == ELyraInventoryAddStatus::InvalidRequest);
		TestFalse(TEXT("Nonpositive consumption is invalid"), F.Inventory->ConsumeItemsByDefinition(F.Definition, Count));
	}
	TestTrue(TEXT("Null definition is invalid"), F.Inventory->AddItemDefinitionWithResult(nullptr, 1).Status == ELyraInventoryAddStatus::InvalidRequest);
	TestFalse(TEXT("Null consumption is invalid"), F.Inventory->ConsumeItemsByDefinition(nullptr, 1));
	F.Inventory->GetOwner()->SetRole(ROLE_SimulatedProxy);
	TestTrue(TEXT("Client insertion rejected at runtime"), F.Add(1).Status == ELyraInventoryAddStatus::NotAuthority);
	TestFalse(TEXT("Client consumption rejected at runtime"), F.Inventory->ConsumeItemsByDefinition(F.Definition, 1));
	F.Inventory->RemoveItemInstance(F.Inventory->GetAllItems()[0]);
	TestFalse(TEXT("Client cannot reconfigure capacity"), F.Inventory->ConfigureSlotCapacity(1));
	TestEqual(TEXT("All rejected mutations preserve inventory"), F.Total(), 8);
	F.Inventory->GetOwner()->SetRole(ROLE_Authority);
	AddInfo(TEXT("Zero/negative/null requests and non-authority mutations were rejected without changing the eight units."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryLargeTest, "Lyra.Inventory.Rules.LargeCountsAndWeapons",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryLargeTest::RunTest(const FString& Parameters)
{
	LyraInventoryRulesTest::FFixture F(2);
	auto* Definition = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<int32> RestoreLimit(Definition->MaxStackSize, MAX_int32);
	TGuardValue<ELyraInventoryItemType> RestoreType(Definition->ItemType, ELyraInventoryItemType::Ammunition);
	TestEqual(TEXT("Huge request fits without per-unit iteration"), F.Add(MAX_int32).AddedCount, MAX_int32);
	TestEqual(TEXT("Space calculation does not overflow"), F.Inventory->GetAddableItemCount(F.Definition, MAX_int32), MAX_int32);
	F.Add(MAX_int32);
	TestEqual(TEXT("Public int32 total saturates instead of wrapping"), F.Total(), MAX_int32);
	TestTrue(TEXT("Large consumption remains correct"), F.Inventory->ConsumeItemsByDefinition(F.Definition, MAX_int32));
	TestEqual(TEXT("Second large stack remains intact"), F.Total(), MAX_int32);
	F.Inventory->ConsumeItemsByDefinition(F.Definition, MAX_int32);
	Definition->ItemType = ELyraInventoryItemType::Weapon;
	const auto Weapons = F.Add(3);
	TestEqual(TEXT("Weapons occupy separate slots even with a huge configured limit"), Weapons.AddedCount, 2);
	TestEqual(TEXT("Third weapon stays outside"), Weapons.RemainingCount, 1);
	for (const auto& Slot : F.Inventory->GetSlotSnapshot()) { TestEqual(TEXT("One weapon per slot"), Slot.StackCount, 1); }
	AddInfo(TEXT("INT_MAX quantities did not overflow; weapon type still admitted only one unit per slot."));
	return true;
}
#endif
