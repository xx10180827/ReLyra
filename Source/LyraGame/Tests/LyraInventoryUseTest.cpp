// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraHealthSet.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventorySupplyDefinitions.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentDefinition.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "LyraInventorySnapshotTestTypes.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Templates/UnrealTemplate.h"

#if WITH_DEV_AUTOMATION_TESTS
namespace LyraInventoryUseTest
{
	struct FFixture
	{
		UWorld* World; ALyraInventoryTestController* PC; APawn* Pawn;
		ULyraInventoryManagerComponent* Inventory; ULyraQuickBarComponent* Bar;
		ULyraAbilitySystemComponent* ASC; ULyraHealthSet* Health; int64 Sequence = 0;
		FFixture()
		{
			const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false).CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
			PC = World->SpawnActor<ALyraInventoryTestController>(); Pawn = World->SpawnActor<APawn>(); PC->Possess(Pawn);
			Inventory = NewObject<ULyraInventoryManagerComponent>(PC); Inventory->RegisterComponent(); Inventory->ConfigureSlotCapacity(20);
			auto* Equipment = NewObject<ULyraEquipmentManagerComponent>(Pawn); Equipment->RegisterComponent();
			Bar = NewObject<ULyraQuickBarComponent>(PC); Bar->RegisterComponent(); Bar->BeginPlay();
			ASC = NewObject<ULyraAbilitySystemComponent>(Pawn); ASC->RegisterComponent(); ASC->InitAbilityActorInfo(Pawn, Pawn);
			Health = NewObject<ULyraHealthSet>(Pawn); ASC->AddAttributeSetSubobject(Health);
		}
		~FFixture() { World->DestroyWorld(false); }
		FLyraInventoryOperationRequest Request(int32 Source, int32 Target, int32 Quantity)
		{
			const auto S = Inventory->GetSlotSnapshot(); FLyraInventoryOperationRequest R;
			R.RequestId = ++Sequence; R.Operation = ELyraInventoryOperation::Use; R.SourceSlot = Source; R.TargetSlot = Target; R.Quantity = Quantity;
			R.SourceEntryId = S[Source].EntryId; R.TargetEntryId = S[Target].EntryId; R.ExpectedSourceCount = S[Source].StackCount; R.ExpectedTargetCount = S[Target].StackCount;
			return R;
		}
		void SetHealth(float Value) { ASC->SetNumericAttributeBase(ULyraHealthSet::GetHealthAttribute(), Value); }
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryUseHealing, "Lyra.Inventory.Use.Healing", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryUseHealing::RunTest(const FString&)
{
	using namespace LyraInventoryUseTest; using Status = ELyraInventoryOperationStatus; FFixture F;
	F.Inventory->AddItemDefinition(ULyraMedkitDefinition::StaticClass(), 3); F.SetHealth(65);
	const auto First = F.Request(0, 0, 1);
	TestEqual(TEXT("Heal succeeds"), F.Inventory->ExecuteInventoryOperation(First).Status, Status::Success);
	TestEqual(TEXT("Heal 25 through GAS"), F.Health->GetHealth(), 90.0f);
	TestEqual(TEXT("Consumes one"), F.Inventory->GetSlotSnapshot()[0].StackCount, 2);
	TestEqual(TEXT("Replay denied"), F.Inventory->ExecuteInventoryOperation(First).Status, Status::StaleRequest);
	TestEqual(TEXT("Near maximum heals"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 1)).Status, Status::Success);
	TestEqual(TEXT("Clamped to maximum"), F.Health->GetHealth(), 100.0f);
	TestEqual(TEXT("Full health denied"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 1)).Status, Status::FullHealth);
	TestEqual(TEXT("Full health preserves item"), F.Inventory->GetSlotSnapshot()[0].StackCount, 1);
	F.SetHealth(0);
	TestEqual(TEXT("Dead denied"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 1)).Status, Status::NotAllowed);
	F.SetHealth(50);
	TestEqual(TEXT("Final medkit succeeds"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 1)).Status, Status::Success);
	TestNull(TEXT("Exhausted stack removed"), F.Inventory->GetSlotSnapshot()[0].Instance.Get());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryUseAmmo, "Lyra.Inventory.Use.Ammo", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryUseAmmo::RunTest(const FString&)
{
	using namespace LyraInventoryUseTest; using Status = ELyraInventoryOperationStatus;
	auto* Def = GetMutableDefault<ULyraInventoryTestItemDefinition>();
	TGuardValue<decltype(Def->Fragments)> Fragments(Def->Fragments, {}); TGuardValue<int32> StackSize(Def->MaxStackSize, 1);
	auto* EquipDef = GetMutableDefault<ULyraEquipmentDefinition>();
	TGuardValue<decltype(EquipDef->InstanceType)> EquipmentType(EquipDef->InstanceType, ULyraRangedWeaponInstance::StaticClass());
	auto* Fragment = NewObject<UInventoryFragment_EquippableItem>(); Fragment->EquipmentDefinition = EquipDef->GetClass(); Def->Fragments.Add(Fragment);
	auto* AmmoDef = GetMutableDefault<ULyraRifleAmmoDefinition>();
	TGuardValue<decltype(AmmoDef->AmmoWeaponDefinition)> Match(AmmoDef->AmmoWeaponDefinition, TSoftClassPtr<ULyraInventoryItemDefinition>(Def->GetClass()));
	FFixture F; auto* Weapon = F.Inventory->AddItemDefinition(Def->GetClass(), 1); auto* Other = F.Inventory->AddItemDefinition(Def->GetClass(), 1);
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	Weapon->AddStatTagStack(Reserve, 85); Other->AddStatTagStack(Reserve, 7);
	F.Bar->AddItemToSlot(0, Weapon); F.Bar->SetActiveSlotIndex(0);
	F.Inventory->AddItemDefinition(AmmoDef->GetClass(), 20);
	auto R = F.Request(2, 0, 20); auto Result = F.Inventory->ExecuteInventoryOperation(R);
	TestEqual(TEXT("Partial top-up succeeds"), Result.Status, Status::Success); TestEqual(TEXT("Only five rounds transferred"), Result.MovedCount, 5);
	TestEqual(TEXT("Reserve capped"), Weapon->GetStatTagStackCount(Reserve), 90);
	TestEqual(TEXT("Other gun unchanged"), Other->GetStatTagStackCount(Reserve), 7);
	TestEqual(TEXT("Remaining ammo conserved"), F.Inventory->GetSlotSnapshot()[2].StackCount, 15);
	TestEqual(TEXT("No magazine refill"), Weapon->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"))), 0);
	TestEqual(TEXT("Replay cannot add rounds"), F.Inventory->ExecuteInventoryOperation(R).Status, Status::StaleRequest);
	TestEqual(TEXT("Full reserve denied"), F.Inventory->ExecuteInventoryOperation(F.Request(2, 0, 15)).Status, Status::ReserveFull);
	F.Inventory->AddItemDefinition(ULyraShellsDefinition::StaticClass(), 3);
	TestEqual(TEXT("Wrong ammo denied"), F.Inventory->ExecuteInventoryOperation(F.Request(3, 0, 3)).Status, Status::WeaponMismatch);
	Weapon->RemoveStatTagStack(Reserve, 20);
	TestEqual(TEXT("Consume final stack"), F.Inventory->ExecuteInventoryOperation(F.Request(2, 0, 15)).Status, Status::Success);
	TestNull(TEXT("Empty ammo stack removed"), F.Inventory->GetSlotSnapshot()[2].Instance.Get());
	TestEqual(TEXT("Exact final reserve"), Weapon->GetStatTagStackCount(Reserve), 85);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraInventoryUseValidation, "Lyra.Inventory.Use.Validation", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraInventoryUseValidation::RunTest(const FString&)
{
	using namespace LyraInventoryUseTest; using Status = ELyraInventoryOperationStatus; FFixture F;
	F.Inventory->AddItemDefinition(ULyraMedkitDefinition::StaticClass(), 3); F.SetHealth(50);
	TestEqual(TEXT("Zero quantity denied"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 0)).Status, Status::InvalidQuantity);
	TestEqual(TEXT("Multiple medkits denied"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 2)).Status, Status::InvalidQuantity);
	auto R = F.Request(0, 0, 1); R.SourceEntryId = FGuid::NewGuid();
	TestEqual(TEXT("Foreign or stale identity denied"), F.Inventory->ExecuteInventoryOperation(R).Status, Status::StaleState);
	R = F.Request(0, 0, 1); R.ExpectedSourceCount = 2;
	TestEqual(TEXT("Stale count denied"), F.Inventory->ExecuteInventoryOperation(R).Status, Status::StaleState);
	F.PC->UnPossess();
	TestEqual(TEXT("No pawn denied"), F.Inventory->ExecuteInventoryOperation(F.Request(0, 0, 1)).Status, Status::NotAllowed);
	TestEqual(TEXT("Failure preserves health"), F.Health->GetHealth(), 50.0f);
	TestEqual(TEXT("Failure preserves inventory"), F.Inventory->GetSlotSnapshot()[0].StackCount, 3);
	return true;
}
#endif
