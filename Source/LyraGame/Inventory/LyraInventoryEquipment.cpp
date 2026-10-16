// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryManagerComponent.h"
#include "LyraInventoryItemInstance.h"
#include "InventoryFragment_EquippableItem.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentDefinition.h"
#include "Character/LyraHealthComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Templates/UnrealTemplate.h"

FLyraInventoryOperationResult ULyraInventoryManagerComponent::ExecuteEquipmentOperation(
	const FLyraInventoryOperationRequest& Request, FLyraInventoryOperationResult Result)
{
	using Status = ELyraInventoryOperationStatus;
	auto* Controller = Cast<APlayerController>(GetOwner());
	auto* Pawn = Controller ? Controller->GetPawn() : nullptr;
	const auto* Health = Pawn ? ULyraHealthComponent::FindHealthComponent(Pawn) : nullptr;
	auto* Bar = GetOwner()->FindComponentByClass<ULyraQuickBarComponent>();
	if (!IsValid(Pawn) || Pawn->IsActorBeingDestroyed() || GetOwner()->IsActorBeingDestroyed()
		|| Pawn->GetController() != Controller || (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0))
		|| !Bar || !Pawn->FindComponentByClass<ULyraEquipmentManagerComponent>())
	{
		Result.Status = Status::NotAllowed; return Result;
	}
	const auto Slots = GetSlotSnapshot();
	const auto QuickSlots = Bar->GetSlots();
	if (Request.Quantity != 0) { Result.Status = Status::InvalidQuantity; return Result; }
	if (!Slots.IsValidIndex(Request.SourceSlot) || !QuickSlots.IsValidIndex(Request.TargetSlot)
		|| Request.ExpectedQuickBar.Num() != QuickSlots.Num()) { return Result; }
	const auto& Source = Slots[Request.SourceSlot];
	if (!Source.Instance || !Request.SourceEntryId.IsValid() || Source.EntryId != Request.SourceEntryId
		|| Source.StackCount != Request.ExpectedSourceCount || Bar->GetActiveSlotIndex() != Request.ExpectedActiveSlot)
	{
		Result.Status = Status::StaleState; return Result;
	}
	for (int32 Index = 0; Index < QuickSlots.Num(); ++Index)
	{
		const auto* Item = QuickSlots[Index];
		const auto* View = Slots.FindByPredicate([Item](const auto& Slot) { return Item && Slot.Instance == Item; });
		if ((Item && !View) || Request.ExpectedQuickBar[Index] != (View ? View->EntryId : FGuid()))
		{
			Result.Status = Status::StaleState; return Result;
		}
	}
	if (Source.Instance->GetOuter() != GetOwner() || !CanReferenceItem(Source.Instance)) { return Result; }
	const auto* Fragment = Source.Instance->FindFragmentByClass<UInventoryFragment_EquippableItem>();
	if (Source.StackCount != 1 || !Fragment || !Fragment->EquipmentDefinition)
	{
		Result.Status = Status::Incompatible; return Result;
	}
	if (Request.Operation != ELyraInventoryOperation::Equip && QuickSlots[Request.TargetSlot] != Source.Instance)
	{
		Result.Status = Status::StaleState; return Result;
	}
	TGuardValue<bool> Guard(bMutationInProgress, true);
	Result.Status = Bar->ApplyInventorySelection(Request.TargetSlot,
		Request.Operation == ELyraInventoryOperation::Unequip ? nullptr : Source.Instance.Get()) ? Status::Success : Status::Busy;
	return Result;
}
