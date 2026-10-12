// Copyright Epic Games, Inc. All Rights Reserved.

#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraInventoryGameMode.h"
#include "Templates/UnrealTemplate.h"

#if WITH_DEV_AUTOMATION_TESTS
namespace LyraInventoryDataTest
{
	struct FFixture
	{
		UWorld* World = nullptr;
		ULyraInventoryManagerComponent* Inventory = nullptr;

		FFixture()
		{
			const auto Initialization = UWorld::InitializationValues().AllowAudioPlayback(false)
				.CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			// CreateWorld already initializes its persistent level and world settings.
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr,
				true, ERHIFeatureLevel::Num, &Initialization);
			AActor* Owner = World->SpawnActor<AActor>();
			Inventory = NewObject<ULyraInventoryManagerComponent>(Owner);
		}

		~FFixture() { World->DestroyWorld(false); }

		ULyraInventoryItemInstance* Add()
		{
			// The definition is read as a CDO; no abstract definition object is instantiated.
			return Inventory->AddItemDefinition(ULyraInventoryItemDefinition::StaticClass());
		}
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryCapacityTest, "Lyra.Inventory.Data.Capacity",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryCapacityTest::RunTest(const FString& Parameters)
{
	LyraInventoryDataTest::FFixture Fixture;
	auto* Inventory = Fixture.Inventory;
	const int32 DefaultCapacity = GetDefault<ALyraInventoryGameMode>()->InventorySlotCapacity;
	TestEqual(TEXT("Inventory experience defaults to 20 positions"), DefaultCapacity, 20);
	TestTrue(TEXT("Enable fixed capacity on authority"), Inventory->ConfigureSlotCapacity(DefaultCapacity));
	TestEqual(TEXT("Empty inventory still exposes all 20 positions"), Inventory->GetSlotSnapshot().Num(), 20);
	for (int32 Index = 0; Index < 20; ++Index)
	{
		TestNotNull(TEXT("Each free position accepts an entry"), Fixture.Add());
	}
	TestNull(TEXT("The 21st entry is refused"), Fixture.Add());
	TestEqual(TEXT("Refused entry does not change inventory"), Inventory->GetAllItems().Num(), 20);
	TestFalse(TEXT("Cannot shrink across occupied positions"), Inventory->ConfigureSlotCapacity(12));
	TestEqual(TEXT("Rejected configuration preserves capacity"), Inventory->GetSlotCapacity(), 20);
	AddInfo(TEXT("20 positions accepted 20 entries; entry 21 and destructive shrink were refused."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryStableSlotsTest, "Lyra.Inventory.Data.StableSlots",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryStableSlotsTest::RunTest(const FString& Parameters)
{
	LyraInventoryDataTest::FFixture Fixture;
	auto* Inventory = Fixture.Inventory;
	Inventory->ConfigureSlotCapacity(3);
	auto* First = Fixture.Add();
	Fixture.Add();
	Fixture.Add();
	const auto Before = Inventory->GetSlotSnapshot();
	if (!TestEqual(TEXT("Three occupied slots"), Before.Num(), 3)) { return false; }
	TestTrue(TEXT("Identity exists"), Before[0].EntryId.IsValid());
	TestTrue(TEXT("Duplicate definitions get distinct identities"), Before[0].EntryId != Before[1].EntryId);
	Inventory->RemoveItemInstance(First);
	const auto Removed = Inventory->GetSlotSnapshot();
	TestNull(TEXT("Removal leaves the original position empty"), Removed[0].Instance.Get());
	TestFalse(TEXT("Empty position has no identity"), Removed[0].EntryId.IsValid());
	TestEqual(TEXT("Remaining entry keeps position and identity"), Removed[1].EntryId, Before[1].EntryId);
	TestEqual(TEXT("Last entry is not shifted into the hole"), Removed[2].EntryId, Before[2].EntryId);
	TestNotNull(TEXT("A new item reuses the hole"), Fixture.Add());
	const auto Refilled = Inventory->GetSlotSnapshot();
	TestTrue(TEXT("New entry never reuses removed identity"), Refilled[0].EntryId != Before[0].EntryId);
	TestEqual(TEXT("Filling a hole preserves other identities"), Refilled[1].EntryId, Before[1].EntryId);
	AddInfo(TEXT("Deleting slot 0 preserved slots 1 and 2; reuse created a new identity."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryConfigurationTest, "Lyra.Inventory.Data.Configuration",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryConfigurationTest::RunTest(const FString& Parameters)
{
	LyraInventoryDataTest::FFixture Fixture;
	auto* Inventory = Fixture.Inventory;
	TestEqual(TEXT("Existing game modes retain unlimited inventory by default"), Inventory->GetSlotCapacity(), 0);
	for (int32 Index = 0; Index < 25; ++Index) { TestNotNull(TEXT("Legacy inventory accepts more than 20 entries"), Fixture.Add()); }
	TestFalse(TEXT("Cannot enable capacity that would hide existing items"), Inventory->ConfigureSlotCapacity(20));
	for (auto* Item : Inventory->GetAllItems()) { Inventory->RemoveItemInstance(Item); }
	TestTrue(TEXT("Capacity is configurable to 12"), Inventory->ConfigureSlotCapacity(12));
	TestEqual(TEXT("Snapshot exposes 12 empty positions"), Inventory->GetSlotSnapshot().Num(), 12);
	TestFalse(TEXT("Negative capacity refused"), Inventory->ConfigureSlotCapacity(-1));
	TestFalse(TEXT("Unreasonable allocation refused"), Inventory->ConfigureSlotCapacity(1025));
	TestNull(TEXT("Null definition refused"), Inventory->AddItemDefinition(nullptr));
	TestNull(TEXT("Zero count refused"), Inventory->AddItemDefinition(ULyraInventoryItemDefinition::StaticClass(), 0));
	TestEqual(TEXT("Invalid requests preserve all empty positions"), Inventory->GetAllItems().Num(), 0);
	AddInfo(TEXT("Legacy inventory accepts 25 entries; fixed capacity can be changed to 12 without losing data."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryMetadataTest, "Lyra.Inventory.Data.Metadata",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryMetadataTest::RunTest(const FString& Parameters)
{
	auto* Definition = GetMutableDefault<ULyraInventoryItemDefinition>();
	TGuardValue<ELyraInventoryItemType> RestoreType(Definition->ItemType, ELyraInventoryItemType::Ammunition);
	TGuardValue<int32> RestoreStackSize(Definition->MaxStackSize, 60);
	TestTrue(TEXT("Ammunition category is readable"), Definition->GetInventoryItemType() == ELyraInventoryItemType::Ammunition);
	TestEqual(TEXT("Ammunition limit is configurable"), Definition->GetMaxStackSize(), 60);
	Definition->ItemType = ELyraInventoryItemType::Consumable;
	Definition->MaxStackSize = 5;
	TestEqual(TEXT("Consumable uses its own limit"), Definition->GetMaxStackSize(), 5);
	Definition->ItemType = ELyraInventoryItemType::Weapon;
	TestEqual(TEXT("Weapon always occupies one unit per stack"), Definition->GetMaxStackSize(), 1);
	Definition->ItemType = ELyraInventoryItemType::Miscellaneous;
	Definition->MaxStackSize = -8;
	TestEqual(TEXT("Invalid configured limit is clamped to one"), Definition->GetMaxStackSize(), 1);
	AddInfo(TEXT("Metadata resolves ammo=60, consumable=5 and weapon=1; stack operations are not implemented by this test."));
	return true;
}
#endif
