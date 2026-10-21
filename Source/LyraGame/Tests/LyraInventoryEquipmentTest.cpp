// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Character/LyraHealthComponent.h"
#include "Character/LyraCharacter.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
#include "Inventory/LyraInventorySupplyDefinitions.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentDefinition.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "LyraInventoryTestItemDefinition.h"
#include "LyraInventorySnapshotTestTypes.h"
#include "Templates/UnrealTemplate.h"
#include "Player/LyraPlayerController.h"

#if WITH_DEV_AUTOMATION_TESTS
namespace LyraInventoryEquipmentTest
{
	struct FFixture
	{
		UWorld* World;
		ALyraInventoryTestController* Controller;
		ULyraInventoryManagerComponent* Inventory;
		ULyraQuickBarComponent* Bar;
		ULyraEquipmentManagerComponent* Equipment;
		int64 Sequence = 0;
		FFixture()
		{
			const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false).CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
			Controller = World->SpawnActor<ALyraInventoryTestController>();
			auto* Pawn = World->SpawnActor<APawn>(); Controller->Possess(Pawn);
			Inventory = NewObject<ULyraInventoryManagerComponent>(Controller); Inventory->RegisterComponent(); Inventory->ConfigureSlotCapacity(20);
			Equipment = NewObject<ULyraEquipmentManagerComponent>(Pawn); Equipment->RegisterComponent();
			Bar = NewObject<ULyraQuickBarComponent>(Controller); Bar->RegisterComponent(); Bar->RegisterAllComponentTickFunctions(true); Bar->BeginPlay();
		}
		~FFixture() { World->DestroyWorld(false); }
		FLyraInventoryOperationRequest Request(ELyraInventoryOperation Operation, int32 Source, int32 Target)
		{
			FLyraInventoryOperationRequest R; R.RequestId = ++Sequence; R.Operation = Operation; R.SourceSlot = Source; R.TargetSlot = Target;
			const auto Slots = Inventory->GetSlotSnapshot(); R.SourceEntryId = Slots[Source].EntryId; R.ExpectedSourceCount = Slots[Source].StackCount;
			R.ExpectedActiveSlot = Bar->GetActiveSlotIndex();
			for (const auto* Item : Bar->GetSlots())
			{
				const auto* View = Slots.FindByPredicate([Item](const auto& Slot) { return Item && Slot.Instance == Item; });
				R.ExpectedQuickBar.Add(View ? View->EntryId : FGuid());
			}
			return R;
		}
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryEquipmentReferencesTest, "Lyra.Inventory.Equipment.ReferencesAndState",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryEquipmentReferencesTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryEquipmentTest;
	using Op = ELyraInventoryOperation; using Status = ELyraInventoryOperationStatus;
	auto* Def = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<decltype(Def->Fragments)> Fragments(Def->Fragments, {});
	TGuardValue<int32> StackSize(Def->MaxStackSize, 1);
	auto* Fragment = NewObject<UInventoryFragment_EquippableItem>(); Fragment->EquipmentDefinition = ULyraEquipmentDefinition::StaticClass(); Def->Fragments.Add(Fragment);
	FFixture F;
	auto* A = F.Inventory->AddItemDefinition(Def->GetClass(), 1);
	auto* B = F.Inventory->AddItemDefinition(Def->GetClass(), 1);
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo")); A->AddStatTagStack(Reserve, 19); B->AddStatTagStack(Reserve, 7);
	const auto Original = F.Inventory->GetSlotSnapshot();
	const auto Apply = [&](Op Operation, int32 Source, int32 Target) { return F.Inventory->ExecuteInventoryOperation(F.Request(Operation, Source, Target)).Status; };
	TestEqual(TEXT("Equip first slot"), Apply(Op::Equip, 0, 0), Status::Success);
	auto* OldEquipment = F.Equipment->GetFirstInstanceOfType<ULyraEquipmentInstance>();
	TestTrue(TEXT("Equipment refers to same item"), OldEquipment && OldEquipment->GetInstigator() == A);
	TestEqual(TEXT("Equip another weapon"), Apply(Op::Equip, 1, 1), Status::Success);
	TestNull(TEXT("Old equipment instigator released"), OldEquipment->GetInstigator());
	TestEqual(TEXT("Switch back"), Apply(Op::Activate, 0, 0), Status::Success);
	TestEqual(TEXT("Replace occupied slot while moving existing reference"), Apply(Op::Equip, 0, 1), Status::Success);
	TestNull(TEXT("No duplicate shortcut"), F.Bar->GetSlots()[0]);
	TestTrue(TEXT("Target refers to original A"), F.Bar->GetSlots()[1] == A);
	TestTrue(TEXT("Replaced B stays in inventory"), F.Inventory->ContainsItem(B));
	TestEqual(TEXT("Inventory IDs unchanged"), F.Inventory->GetSlotSnapshot()[0].EntryId, Original[0].EntryId);
	TestEqual(TEXT("Remove active shortcut"), Apply(Op::Unequip, 0, 1), Status::Success);
	TestEqual(TEXT("No active slot"), F.Bar->GetActiveSlotIndex(), INDEX_NONE);
	TestEqual(TEXT("No equipment left"), F.Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 0);
	TestEqual(TEXT("Re-equip empty magazine"), Apply(Op::Equip, 0, 2), Status::Success);
	TestEqual(TEXT("Magazine stays zero"), A->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"))), 0);
	TestEqual(TEXT("Reserve A preserved"), A->GetStatTagStackCount(Reserve), 19);
	TestEqual(TEXT("Reserve B independent"), B->GetStatTagStackCount(Reserve), 7);
	F.Inventory->RemoveItemInstance(A);
	TestNull(TEXT("Removal clears shortcut"), F.Bar->GetSlots()[2]);
	TestEqual(TEXT("Removal clears equipment"), F.Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 0);
	TestEqual(TEXT("Only B remains"), F.Inventory->GetAllItems().Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryEquipmentValidationTest, "Lyra.Inventory.Equipment.Validation",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryEquipmentValidationTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryEquipmentTest;
	using Op = ELyraInventoryOperation; using Status = ELyraInventoryOperationStatus;
	auto* Def = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<decltype(Def->Fragments)> Fragments(Def->Fragments, {});
	TGuardValue<int32> StackSize(Def->MaxStackSize, 1);
	auto* Fragment = NewObject<UInventoryFragment_EquippableItem>(); Fragment->EquipmentDefinition = ULyraEquipmentDefinition::StaticClass(); Def->Fragments.Add(Fragment);
	FFixture F;
	F.Inventory->AddItemDefinition(Def->GetClass(), 1); F.Inventory->AddItemDefinition(ULyraRifleAmmoDefinition::StaticClass(), 1);
	auto Request = F.Request(Op::Equip, 0, 0);
	TestEqual(TEXT("Initial request"), F.Inventory->ExecuteInventoryOperation(Request).Status, Status::Success);
	TestEqual(TEXT("Replay rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status, Status::StaleRequest);
	Request.RequestId = ++F.Sequence;
	TestEqual(TEXT("Stale quickbar rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status, Status::StaleState);
	Request = F.Request(Op::Equip, 0, 1); Request.SourceEntryId = FGuid::NewGuid();
	TestEqual(TEXT("Foreign/fabricated entry rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status, Status::StaleState);
	Request = F.Request(Op::Equip, 0, 3);
	TestEqual(TEXT("Invalid quickbar index"), F.Inventory->ExecuteInventoryOperation(Request).Status, Status::InvalidRequest);
	Request = F.Request(Op::Equip, 0, 1); Request.Quantity = 1;
	TestEqual(TEXT("Quantity on equipment request rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status, Status::InvalidQuantity);
	TestEqual(TEXT("Ammo cannot equip"), F.Inventory->ExecuteInventoryOperation(F.Request(Op::Equip, 1, 1)).Status, Status::Incompatible);
	TestEqual(TEXT("Cannot activate empty slot"), F.Inventory->ExecuteInventoryOperation(F.Request(Op::Activate, 0, 1)).Status, Status::StaleState);
	TestEqual(TEXT("Cannot clear another slot using wrong item"), F.Inventory->ExecuteInventoryOperation(F.Request(Op::Unequip, 0, 1)).Status, Status::StaleState);
	auto* Pawn = F.Controller->GetPawn();
	F.Controller->UnPossess();
	TestEqual(TEXT("No controlled pawn"), F.Inventory->ExecuteInventoryOperation(F.Request(Op::Equip, 0, 1)).Status, Status::NotAllowed);
	F.Controller->Possess(Pawn);
	auto* Health = NewObject<ULyraHealthComponent>(Pawn); Health->RegisterComponent();
	TestEqual(TEXT("Unready health cannot equip"), F.Inventory->ExecuteInventoryOperation(F.Request(Op::Equip, 0, 1)).Status, Status::NotAllowed);
	TestTrue(TEXT("Rejected requests preserve shortcut"), F.Bar->GetSlots()[0] == F.Inventory->GetSlotSnapshot()[0].Instance);
	TestEqual(TEXT("Rejected requests preserve inventory"), F.Inventory->GetAllItems().Num(), 2);
	return true;
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryRespawnEquipmentTest, "Lyra.Inventory.Equipment.PawnLifecycle",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryRespawnEquipmentTest::RunTest(const FString& Parameters)
{
	using namespace LyraInventoryEquipmentTest;
	auto* Def = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<decltype(Def->Fragments)> Fragments(Def->Fragments, {});
	TGuardValue<int32> StackSize(Def->MaxStackSize, 1);
	auto* Fragment = NewObject<UInventoryFragment_EquippableItem>();
	Fragment->EquipmentDefinition = ULyraEquipmentDefinition::StaticClass(); Def->Fragments.Add(Fragment);
	FFixture F;
	auto* Item = F.Inventory->AddItemDefinition(Def->GetClass(), 1);
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	Item->AddStatTagStack(Reserve, 19);
	const FGuid Id = F.Inventory->GetSlotSnapshot()[0].EntryId;
	F.Inventory->ExecuteInventoryOperation(F.Request(ELyraInventoryOperation::Equip, 0, 1));
	F.Inventory->RunPreservingPawnInventory([&]
	{
		F.Bar->RemoveItemFromSlot(1);
		F.Inventory->RemoveItemInstance(Item);
	});
	TestTrue(TEXT("Legacy pawn cleanup preserves inventory and selection"), F.Inventory->CanReferenceItem(Item) && F.Bar->GetActiveSlotItem() == Item);
	auto* OldEquipment = F.Equipment->GetFirstInstanceOfType<ULyraEquipmentInstance>();
	F.Bar->ReleasePawnEquipment(); F.Controller->UnPossess(); F.Bar->RestorePawnEquipment();
	F.Bar->SetActiveSlotIndex(0);
	TestNull(TEXT("Old pawn equipment releases inventory instigator"), OldEquipment->GetInstigator());
	TestEqual(TEXT("Old pawn no equipment"), F.Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 0);
	TestEqual(TEXT("Selection survives no-pawn interval"), F.Bar->GetActiveSlotIndex(), 1);
	auto* NewPawn = F.World->SpawnActor<APawn>();
	auto* NewEquipment = NewObject<ULyraEquipmentManagerComponent>(NewPawn); NewEquipment->RegisterComponent();
	F.Controller->Possess(NewPawn); F.Bar->RestorePawnEquipment(); F.Bar->RestorePawnEquipment();
	auto* Restored = NewEquipment->GetFirstInstanceOfType<ULyraEquipmentInstance>();
	TestTrue(TEXT("New pawn equipment references original inventory item"), Restored && Restored != OldEquipment && Restored->GetPawn() == NewPawn && Restored->GetInstigator() == Item);
	TestEqual(TEXT("Repeated ready ticks cannot duplicate equipment"), NewEquipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 1);
	TestEqual(TEXT("Stable inventory entry survives pawn change"), F.Inventory->GetSlotSnapshot()[0].EntryId, Id);
	TestEqual(TEXT("Reserve preserved"), Item->GetStatTagStackCount(Reserve), 19);
	F.Inventory->RemoveItemInstance(Item); F.Bar->RestorePawnEquipment();
	TestEqual(TEXT("Removed weapon cannot be restored"), NewEquipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()).Num(), 0);
	// A delayed backpack command must not act during the no-pawn interval or replay later.
	auto* Player = F.World->SpawnActor<ALyraPlayerController>();
	auto* PlayerInventory = NewObject<ULyraInventoryManagerComponent>(Player);
	PlayerInventory->RegisterComponent(); PlayerInventory->ConfigureSlotCapacity(20);
	PlayerInventory->AddItemDefinition(Def->GetClass(), 1);
	FLyraInventoryOperationRequest Move;
	Move.RequestId = 1; Move.Operation = ELyraInventoryOperation::Move;
	Move.SourceSlot = 0; Move.TargetSlot = 1;
	Move.SourceEntryId = PlayerInventory->GetSlotSnapshot()[0].EntryId; Move.ExpectedSourceCount = 1;
	TestEqual(TEXT("No-pawn command rejected"), PlayerInventory->ExecuteInventoryOperation(Move).Status, ELyraInventoryOperationStatus::NotAllowed);
	Player->Possess(F.World->SpawnActor<APawn>());
	TestEqual(TEXT("Rejected death command cannot replay after respawn"), PlayerInventory->ExecuteInventoryOperation(Move).Status, ELyraInventoryOperationStatus::StaleRequest);
	Move.RequestId = 2;
	TestEqual(TEXT("Fresh command works on the new pawn"), PlayerInventory->ExecuteInventoryOperation(Move).Status, ELyraInventoryOperationStatus::Success);
	auto* Character = F.World->SpawnActor<ALyraCharacter>();
	F.Controller->Possess(Character);
	F.Controller->SetIgnoreMoveInput(true); // A separate menu/cinematic owns this lock.
	ULyraHealthComponent::FindHealthComponent(Character)->StartDeath();
	Character->Reset(); // Native auto-respawn also resets an already dying pawn.
	TestTrue(TEXT("Pawn cleanup preserves other input locks"), F.Controller->IsMoveInputIgnored());
	F.Controller->SetIgnoreMoveInput(false);
	TestFalse(TEXT("Death and reset do not leave an extra movement lock"), F.Controller->IsMoveInputIgnored());
	return true;
}
#endif
