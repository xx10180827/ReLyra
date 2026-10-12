// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentDefinition.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "LyraInventoryTestItemDefinition.h"
#include "LyraInventorySnapshotTestTypes.h"
#include "Templates/UnrealTemplate.h"

#if WITH_DEV_AUTOMATION_TESTS
namespace LyraInventorySnapshotTest
{
	struct FFixture
	{
		UWorld* World;
		ULyraInventoryManagerComponent* Source;
		ULyraInventoryManagerComponent* Target;
		TSubclassOf<ULyraInventoryItemDefinition> Definition = ULyraInventoryTestItemDefinition::StaticClass();
		FFixture()
		{
			const auto Initialization = UWorld::InitializationValues().AllowAudioPlayback(false)
				.CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Initialization);
			Source = NewObject<ULyraInventoryReplicationTestComponent>(World->SpawnActor<ALyraInventoryTestController>());
			Target = NewObject<ULyraInventoryReplicationTestComponent>(World->SpawnActor<ALyraInventoryTestController>());
			Source->RegisterComponent();
			Target->RegisterComponent();
			Source->ConfigureSlotCapacity(3);
			Target->ConfigureSlotCapacity(1);
		}
		~FFixture() { World->DestroyWorld(false); }
	};
	FGameplayTag Magazine() { return FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo")); }
	FGameplayTag Reserve() { return FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo")); }
	FGameplayTag Size() { return FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineSize")); }
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraSnapshotRoundTripTest, "Lyra.Inventory.Snapshot.RoundTrip",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraSnapshotRoundTripTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventorySnapshotTest;
	FFixture F;
	auto* Definition = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<decltype(Definition->Fragments)> RestoreFragments(Definition->Fragments, {});
	auto* Defaults = NewObject<ULyraInventoryTestStatsFragment>();
	Defaults->SetInitialStat(Magazine(), 30);
	Defaults->SetInitialStat(Reserve(), 90);
	Defaults->SetInitialStat(Size(), 30);
	Definition->Fragments.Add(Defaults);
	auto* Original = F.Source->AddItemDefinition(F.Definition, 1);
	Original->RemoveStatTagStack(Magazine(), 18);
	Original->RemoveStatTagStack(Reserve(), 55);
	const auto OldId = F.Source->GetSlotSnapshot()[0].EntryId;
	FLyraInventoryItemSnapshot Snapshot;
	TestTrue(TEXT("Capture owned item"), F.Source->CaptureItemSnapshot(Original, Snapshot));
	TestEqual(TEXT("Snapshot preserves remaining magazine"), Snapshot.StatTags.FindRef(Magazine()), 12);
	TestEqual(TEXT("Snapshot preserves remaining reserve"), Snapshot.StatTags.FindRef(Reserve()), 35);
	F.Source->RemoveItemInstance(Original);
	auto* Restored = F.Target->RestoreItemSnapshot(Snapshot);
	if (!TestNotNull(TEXT("Restore snapshot"), Restored)) { return false; }
	TestTrue(TEXT("New UObject under target actor"), Restored != Original && Restored->GetOuter() == F.Target->GetOwner());
	TestTrue(TEXT("New entry identity"), F.Target->GetSlotSnapshot()[0].EntryId != OldId);
	TestEqual(TEXT("Restored quantity"), F.Target->GetTotalItemCountByDefinition(F.Definition), 1);
	auto* Weapon = NewObject<ULyraRangedWeaponInstance>();
	Weapon->SetFiniteAmmoSystemEnabled(true);
	Weapon->SetInstigator(Restored);
	TestEqual(TEXT("Equipping does not refill magazine"), Weapon->GetCurrentAmmo(), 12);
	TestEqual(TEXT("Equipping does not refill reserve"), Weapon->GetCurrentReserveAmmo(), 35);
	Restored->RemoveStatTagStack(Magazine(), 12);
	F.Target->CaptureItemSnapshot(Restored, Snapshot);
	TestFalse(TEXT("Empty magazine is absent, not a default value"), Snapshot.StatTags.Contains(Magazine()));
	F.Target->RemoveItemInstance(Restored);
	auto* Empty = F.Source->RestoreItemSnapshot(Snapshot);
	if (!TestNotNull(TEXT("Restore empty magazine"), Empty)) { return false; }
	Weapon->SetInstigator(Empty);
	TestEqual(TEXT("Empty magazine stays empty on re-equip"), Weapon->GetCurrentAmmo(), 0);
	TestEqual(TEXT("Reserve remains 35"), Weapon->GetCurrentReserveAmmo(), 35);
	AddInfo(TEXT("Saved 12/35 ammunition; rebuilt under the new owner without reapplying 30/90 defaults; an empty magazine stayed empty."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraSnapshotTransferTest, "Lyra.Inventory.Snapshot.Transfer",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraSnapshotTransferTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventorySnapshotTest;
	FFixture F;
	auto* Original = F.Source->AddItemDefinition(F.Definition, 4);
	Original->AddStatTagStack(Reserve(), 35);
	const auto OldId = F.Source->GetSlotSnapshot()[0].EntryId;
	auto* Blocker = F.Target->AddItemDefinition(F.Definition, 1);
	TestNull(TEXT("Full target refuses whole-state transfer"), F.Source->TransferItemToInventory(Original, F.Target));
	TestEqual(TEXT("Source quantity unchanged"), F.Source->GetTotalItemCountByDefinition(F.Definition), 4);
	TestEqual(TEXT("Source identity unchanged"), F.Source->GetSlotSnapshot()[0].EntryId, OldId);
	TestEqual(TEXT("Source state unchanged"), Original->GetStatTagStackCount(Reserve()), 35);
	F.Target->RemoveItemInstance(Blocker);
	auto* Transferred = F.Source->TransferItemToInventory(Original, F.Target);
	if (!TestNotNull(TEXT("Transfer succeeds after space is freed"), Transferred)) { return false; }
	TestEqual(TEXT("Source emptied"), F.Source->GetAllItems().Num(), 0);
	TestEqual(TEXT("Target owns all four units"), F.Target->GetTotalItemCountByDefinition(F.Definition), 4);
	TestTrue(TEXT("Foreign pointer was not reused"), Transferred != Original && Transferred->GetOuter() == F.Target->GetOwner());
	TestEqual(TEXT("State preserved"), Transferred->GetStatTagStackCount(Reserve()), 35);
	TestNull(TEXT("Stale pointer cannot be transferred twice"), F.Source->TransferItemToInventory(Original, F.Target));
	F.Target->AddItemInstance(Original);
	F.Target->AddItemInstance(Transferred);
	TestEqual(TEXT("Legacy API cannot duplicate stale or already owned instances"), F.Target->GetTotalItemCountByDefinition(F.Definition), 4);
	F.Source->AddItemInstance(Transferred);
	TestEqual(TEXT("Legacy pointer entry safely transfers through a new object"), F.Target->GetAllItems().Num(), 0);
	TestEqual(TEXT("Four units returned"), F.Source->GetTotalItemCountByDefinition(F.Definition), 4);
	TestTrue(TEXT("Returned object has correct Outer"), F.Source->GetAllItems()[0]->GetOuter() == F.Source->GetOwner());
	AddInfo(TEXT("Full target rejected without mutation; success moved four units to a new owner; stale/repeated pointers did not duplicate items."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraSnapshotValidationTest, "Lyra.Inventory.Snapshot.Validation",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraSnapshotValidationTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventorySnapshotTest;
	FFixture F;
	auto* Item = F.Source->AddItemDefinition(F.Definition, 1);
	FLyraInventoryItemSnapshot Good;
	F.Source->CaptureItemSnapshot(Item, Good);
	for (int32 Case = 0; Case < 6; ++Case)
	{
		auto Invalid = Good;
		if (Case == 0) { Invalid.ItemDef = nullptr; }
		if (Case == 1) { Invalid.StackCount = 0; }
		if (Case == 2) { Invalid.StackCount = -1; }
		if (Case == 3) { Invalid.StatTags.Add(FGameplayTag(), 1); }
		if (Case == 4) { Invalid.StatTags.Add(Reserve(), -1); }
		if (Case == 5) { Invalid.StackCount = 11; }
		TestNull(TEXT("Invalid snapshot rejected"), F.Target->RestoreItemSnapshot(Invalid));
	}
	FLyraInventoryItemSnapshot Output = Good;
	TestFalse(TEXT("Foreign inventory cannot capture item"), F.Target->CaptureItemSnapshot(Item, Output));
	TestFalse(TEXT("Failed capture clears output"), Output.IsValid());
	TestNull(TEXT("Cannot transfer to self"), F.Source->TransferItemToInventory(Item, F.Source));
	FFixture OtherWorld;
	TestNull(TEXT("Cross-world transfer rejected"), F.Source->TransferItemToInventory(Item, OtherWorld.Target));
	F.Target->GetOwner()->SetRole(ROLE_SimulatedProxy);
	TestNull(TEXT("Client cannot restore snapshot"), F.Target->RestoreItemSnapshot(Good));
	TestNull(TEXT("Cannot transfer into non-authority target"), F.Source->TransferItemToInventory(Item, F.Target));
	F.Target->GetOwner()->SetRole(ROLE_Authority);
	F.Source->GetOwner()->SetRole(ROLE_SimulatedProxy);
	TestFalse(TEXT("Client cannot produce authoritative snapshot"), F.Source->CaptureItemSnapshot(Item, Output));
	F.Target->AddItemInstance(Item);
	F.Source->GetOwner()->SetRole(ROLE_Authority);
	TestEqual(TEXT("Rejected requests preserve source"), F.Source->GetAllItems().Num(), 1);
	TestEqual(TEXT("Rejected requests leave target empty"), F.Target->GetAllItems().Num(), 0);
	AddInfo(TEXT("Invalid quantities, tags, definitions, foreign membership, cross-world transfers and non-authority calls were refused unchanged."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraSnapshotRegistrationTest, "Lyra.Inventory.Snapshot.Registration",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraSnapshotRegistrationTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventorySnapshotTest;
	FFixture F;
	auto* BeforeReady = F.Source->AddItemDefinition(F.Definition, 1);
	F.Source->ReadyForReplication();
	F.Target->ReadyForReplication();
	TestTrue(TEXT("Pre-existing item registered when ready"), F.Source->IsReplicatedSubObjectRegistered(BeforeReady));
	auto* Moved = F.Source->TransferItemToInventory(BeforeReady, F.Target);
	if (!TestNotNull(TEXT("Transfer after replication ready"), Moved)) { return false; }
	TestFalse(TEXT("Old subobject unregistered"), F.Source->IsReplicatedSubObjectRegistered(BeforeReady));
	TestTrue(TEXT("New subobject registered with target"), F.Target->IsReplicatedSubObjectRegistered(Moved));
	TestTrue(TEXT("Consume restored item"), F.Target->ConsumeItemsByDefinition(F.Definition, 1));
	TestFalse(TEXT("Consumed subobject unregistered"), F.Target->IsReplicatedSubObjectRegistered(Moved));
	auto* Removed = F.Source->AddItemDefinition(F.Definition, 1);
	F.Source->RemoveItemInstance(Removed);
	TestFalse(TEXT("Explicit removal unregisters"), F.Source->IsReplicatedSubObjectRegistered(Removed));
	auto* OnExit = F.Source->AddItemDefinition(F.Definition, 1);
	F.Source->RegisterAllComponentTickFunctions(true);
	F.Source->BeginPlay();
	F.Source->EndPlay(EEndPlayReason::Destroyed);
	TestFalse(TEXT("EndPlay unregisters remaining subobjects"), F.Source->IsReplicatedSubObjectRegistered(OnExit));
	TestEqual(TEXT("EndPlay releases inventory references"), F.Source->GetAllItems().Num(), 0);
	AddInfo(TEXT("Items added before and after replication readiness were registered; transfer, consumption, removal and EndPlay unregistered retired objects."));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraSnapshotReferencesTest, "Lyra.Inventory.Snapshot.References",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraSnapshotReferencesTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventorySnapshotTest;
	FFixture F;
	auto* Definition = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<decltype(Definition->Fragments)> RestoreFragments(Definition->Fragments, {});
	auto* Equippable = NewObject<UInventoryFragment_EquippableItem>();
	Equippable->EquipmentDefinition = ULyraEquipmentDefinition::StaticClass();
	Definition->Fragments.Add(Equippable);
	auto* Controller = CastChecked<APlayerController>(F.Source->GetOwner());
	auto* Pawn = F.World->SpawnActor<APawn>();
	Controller->Possess(Pawn);
	auto* Equipment = NewObject<ULyraEquipmentManagerComponent>(Pawn);
	Equipment->RegisterComponent();
	auto* QuickBar = NewObject<ULyraQuickBarComponent>(Controller);
	QuickBar->RegisterComponent();
	QuickBar->RegisterAllComponentTickFunctions(true);
	QuickBar->BeginPlay();
	auto* Item = F.Source->AddItemDefinition(F.Definition, 1);
	QuickBar->AddItemToSlot(0, Item);
	QuickBar->AddItemToSlot(1, Item);
	QuickBar->SetActiveSlotIndex(0);
	auto* Equipped = Equipment->GetFirstInstanceOfType(ULyraEquipmentInstance::StaticClass());
	if (!TestNotNull(TEXT("Equipment created"), Equipped)) { return false; }
	TestTrue(TEXT("Equipped item linked to inventory"), Equipped->GetInstigator() == Item);
	auto* Blocker = F.Target->AddItemDefinition(F.Definition, 1);
	TestNull(TEXT("Failed transfer preserves references"), F.Source->TransferItemToInventory(Item, F.Target));
	TestTrue(TEXT("Failed transfer preserves equipped item"), QuickBar->GetActiveSlotItem() == Item && Equipped->GetInstigator() == Item);
	F.Target->RemoveItemInstance(Blocker);
	auto* Moved = F.Source->TransferItemToInventory(Item, F.Target);
	TestNotNull(TEXT("Move equipped item"), Moved);
	for (auto* Slot : QuickBar->GetSlots()) { TestNull(TEXT("Every quickbar reference cleared"), Slot); }
	TestEqual(TEXT("Active index reset"), QuickBar->GetActiveSlotIndex(), INDEX_NONE);
	TestNull(TEXT("Equipment instigator cleared"), Equipped->GetInstigator());
	TestEqual(TEXT("Equipment list emptied"), Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 0);
	QuickBar->AddItemToSlot(0, Item);
	QuickBar->AddItemToSlot(1, Moved);
	for (auto* Slot : QuickBar->GetSlots()) { TestNull(TEXT("Cannot reattach removed or foreign item"), Slot); }
	// Also exercise quantity exhaustion, which must use the same reference cleanup path.
	auto* Consumed = F.Source->AddItemDefinition(F.Definition, 1);
	QuickBar->AddItemToSlot(0, Consumed);
	QuickBar->SetActiveSlotIndex(0);
	F.Source->ConsumeItemsByDefinition(F.Definition, 1);
	TestNull(TEXT("Consumption clears active item"), QuickBar->GetActiveSlotItem());
	TestEqual(TEXT("Consumption unequips"), Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 0);
	AddInfo(TEXT("Failed transfer kept equipment; successful transfer and consumption cleared all quickbar slots, active index and equipment instigator."));
	return true;
}
#endif
