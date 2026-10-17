// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryManagerComponent.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryItemInstance.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Character/LyraHealthComponent.h"
#include "AbilitySystem/Attributes/LyraHealthSet.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Templates/UnrealTemplate.h"

FLyraInventoryOperationResult ULyraInventoryManagerComponent::ExecuteUse(
	const FLyraInventoryOperationRequest& Request, FLyraInventoryOperationResult Result)
{
	using Status = ELyraInventoryOperationStatus;
	auto* Controller = Cast<APlayerController>(GetOwner());
	auto* Pawn = Controller ? Controller->GetPawn() : nullptr;
	const auto* Health = Pawn ? ULyraHealthComponent::FindHealthComponent(Pawn) : nullptr;
	if (!IsValid(Pawn) || Pawn->IsActorBeingDestroyed() || Pawn->GetController() != Controller
		|| Controller->IsActorBeingDestroyed() || SlotCapacity <= 0
		|| (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0)))
	{ Result.Status = Status::NotAllowed; return Result; }
	auto* Entry = InventoryList.Entries.FindByPredicate([&](const auto& E) { return E.SlotIndex == Request.SourceSlot; });
	if (!Entry || !Request.SourceEntryId.IsValid() || Entry->EntryId != Request.SourceEntryId || Entry->StackCount != Request.ExpectedSourceCount)
	{ Result.Status = Status::StaleState; return Result; }
	if (Request.Quantity <= 0 || Request.Quantity > Entry->StackCount) { Result.Status = Status::InvalidQuantity; return Result; }
	if (!IsValid(Entry->Instance) || Entry->Instance->GetOuter() != Controller || !Entry->Instance->GetItemDef()) { return Result; }
	const auto* Def = GetDefault<ULyraInventoryItemDefinition>(Entry->Instance->GetItemDef());
	int32 Consumed = 0;
	TGuardValue<bool> Guard(bMutationInProgress, true);
	if (Def->UseEffect == ELyraInventoryUseEffect::Heal)
	{
		if (Request.Quantity != 1 || Request.TargetSlot != Request.SourceSlot) { Result.Status = Status::InvalidQuantity; return Result; }
		auto* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Pawn, true);
		const auto* Attributes = ASC ? ASC->GetSet<ULyraHealthSet>() : nullptr;
		if (!Attributes || Attributes->GetHealth() <= 0 || !FMath::IsFinite(Def->HealingAmount) || Def->HealingAmount <= 0)
		{ Result.Status = Status::NotAllowed; return Result; }
		const float Before = Attributes->GetHealth();
		if (Before >= Attributes->GetMaxHealth()) { Result.Status = Status::FullHealth; return Result; }
		// Instant, authority-only GAS effect preserves health notifications and replication.
		auto* Effect = NewObject<UGameplayEffect>(GetTransientPackage());
		Effect->DurationPolicy = EGameplayEffectDurationType::Instant;
		auto& Modifier = Effect->Modifiers.AddDefaulted_GetRef();
		Modifier.Attribute = ULyraHealthSet::GetHealingAttribute(); Modifier.ModifierOp = EGameplayModOp::Additive;
		Modifier.ModifierMagnitude = FScalableFloat(Def->HealingAmount);
		auto Context = ASC->MakeEffectContext(); Context.AddSourceObject(Entry->Instance);
		ASC->ApplyGameplayEffectSpecToSelf(FGameplayEffectSpec(Effect, Context, 1.0f));
		if (Attributes->GetHealth() <= Before) { Result.Status = Status::EffectFailed; return Result; }
		Consumed = 1;
	}
	else if (Def->UseEffect == ELyraInventoryUseEffect::Ammo)
	{
		auto* Bar = Controller->FindComponentByClass<ULyraQuickBarComponent>();
		auto* Item = Bar ? Bar->GetActiveSlotItem() : nullptr;
		if (!Item || Item->GetOuter() != Controller || !ContainsItem(Item) || !Item->GetItemDef()
			|| Def->AmmoWeaponDefinition.IsNull() || FSoftObjectPath(Item->GetItemDef().Get()) != Def->AmmoWeaponDefinition.ToSoftObjectPath())
		{ Result.Status = Status::WeaponMismatch; return Result; }
		const auto* Target = InventoryList.Entries.FindByPredicate([&](const auto& E) { return E.Instance == Item; });
		if (!Target || Target->EntryId != Request.TargetEntryId || Target->SlotIndex != Request.TargetSlot || Target->StackCount != Request.ExpectedTargetCount)
		{ Result.Status = Status::StaleState; return Result; }
		auto* Equipment = Pawn->FindComponentByClass<ULyraEquipmentManagerComponent>();
		const auto* Weapon = Equipment ? Equipment->GetFirstInstanceOfType<ULyraRangedWeaponInstance>() : nullptr;
		if (!Weapon || Weapon->GetInstigator() != Item) { Result.Status = Status::NotAllowed; return Result; }
		const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
		const int32 Current = Item->GetStatTagStackCount(Reserve);
		if (Current >= Weapon->GetMaxReserveAmmo()) { Result.Status = Status::ReserveFull; return Result; }
		Consumed = FMath::Min(Request.Quantity, Weapon->GetMaxReserveAmmo() - Current);
		Item->AddStatTagStack(Reserve, Consumed);
	}
	else { Result.Status = Status::Incompatible; return Result; }
	Entry->StackCount -= Consumed;
	if (Entry->StackCount == 0) { RemoveEntryAndReferences(Entry->Instance); }
	else { InventoryList.MarkItemDirty(*Entry); }
	Result.Status = Status::Success; Result.MovedCount = Consumed;
	return Result;
}
