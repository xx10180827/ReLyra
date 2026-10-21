// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraQuickBarComponent.h"

#include "Equipment/LyraEquipmentDefinition.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameFramework/Pawn.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Templates/UnrealTemplate.h"
#include "NativeGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "Character/LyraHealthComponent.h"
#include "Character/LyraPawnExtensionComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraQuickBarComponent)

class FLifetimeProperty;
class ULyraEquipmentDefinition;

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_QuickBar_Message_SlotsChanged, "Lyra.QuickBar.Message.SlotsChanged");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_QuickBar_Message_ActiveIndexChanged, "Lyra.QuickBar.Message.ActiveIndexChanged");

ULyraQuickBarComponent::ULyraQuickBarComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}

void ULyraQuickBarComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, Slots);
	DOREPLIFETIME(ThisClass, ActiveSlotIndex);
}

void ULyraQuickBarComponent::BeginPlay()
{
	if (Slots.Num() < NumSlots)
	{
		Slots.AddDefaulted(NumSlots - Slots.Num());
	}

	Super::BeginPlay();
}

void ULyraQuickBarComponent::CycleActiveSlotForward()
{
	if (Slots.Num() < 2)
	{
		return;
	}

	const int32 OldIndex = (ActiveSlotIndex < 0 ? Slots.Num()-1 : ActiveSlotIndex);
	int32 NewIndex = ActiveSlotIndex;
	do
	{
		NewIndex = (NewIndex + 1) % Slots.Num();
		if (Slots[NewIndex] != nullptr)
		{
			SetActiveSlotIndex(NewIndex);
			return;
		}
	} while (NewIndex != OldIndex);
}

void ULyraQuickBarComponent::CycleActiveSlotBackward()
{
	if (Slots.Num() < 2)
	{
		return;
	}

	const int32 OldIndex = (ActiveSlotIndex < 0 ? Slots.Num()-1 : ActiveSlotIndex);
	int32 NewIndex = ActiveSlotIndex;
	do
	{
		NewIndex = (NewIndex - 1 + Slots.Num()) % Slots.Num();
		if (Slots[NewIndex] != nullptr)
		{
			SetActiveSlotIndex(NewIndex);
			return;
		}
	} while (NewIndex != OldIndex);
}

void ULyraQuickBarComponent::EquipItemInSlot()
{
	check(Slots.IsValidIndex(ActiveSlotIndex));
	check(EquippedItem == nullptr);

	if (ULyraInventoryItemInstance* SlotItem = Slots[ActiveSlotIndex])
	{
		if (const UInventoryFragment_EquippableItem* EquipInfo = SlotItem->FindFragmentByClass<UInventoryFragment_EquippableItem>())
		{
			TSubclassOf<ULyraEquipmentDefinition> EquipDef = EquipInfo->EquipmentDefinition;
			if (EquipDef != nullptr)
			{
				if (ULyraEquipmentManagerComponent* EquipmentManager = FindEquipmentManager())
				{
					EquippedItem = EquipmentManager->EquipItem(EquipDef);
					if (EquippedItem != nullptr)
					{
						EquippedItem->SetInstigator(SlotItem);
					}
				}
			}
		}
	}
}

void ULyraQuickBarComponent::UnequipItemInSlot()
{
	ULyraEquipmentInstance* Previous = EquippedItem;
	EquippedItem = nullptr;
	// The controller may already possess another pawn. Clean up the actual equipment owner.
	if (IsValid(Previous))
	{
		APawn* PreviousPawn = Previous->GetPawn();
		if (auto* EquipmentManager = PreviousPawn ? PreviousPawn->FindComponentByClass<ULyraEquipmentManagerComponent>() : nullptr)
		{
			EquipmentManager->UnequipItem(Previous);
		}
		Previous->SetInstigator(nullptr);
	}
}

void ULyraQuickBarComponent::ReleasePawnEquipment()
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bChangingSlots) { return; }
	TGuardValue<bool> Guard(bChangingSlots, true);
	UnequipItemInSlot();
}

void ULyraQuickBarComponent::RestorePawnEquipment()
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bChangingSlots) { return; }
	auto* Controller = Cast<AController>(GetOwner());
	auto* Pawn = Controller ? Controller->GetPawn() : nullptr;
	const auto* Health = ULyraHealthComponent::FindHealthComponent(Pawn);
	const auto* Extension = ULyraPawnExtensionComponent::FindPawnExtensionComponent(Pawn);
	if (!Pawn || (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0)) || (Extension && !Extension->GetLyraAbilitySystemComponent()) || !FindEquipmentManager()) { return; }
	TGuardValue<bool> Guard(bChangingSlots, true);
	if (EquippedItem && EquippedItem->GetPawn() != Pawn) { UnequipItemInSlot(); }
	const auto* Inventory = GetOwner()->FindComponentByClass<ULyraInventoryManagerComponent>();
	if (!EquippedItem && GetActiveSlotItem() && Inventory && Inventory->CanReferenceItem(GetActiveSlotItem()))
	{
		EquipItemInSlot();
	}
}

ULyraEquipmentManagerComponent* ULyraQuickBarComponent::FindEquipmentManager() const
{
	if (AController* OwnerController = Cast<AController>(GetOwner()))
	{
		if (APawn* Pawn = OwnerController->GetPawn())
		{
			return Pawn->FindComponentByClass<ULyraEquipmentManagerComponent>();
		}
	}
	return nullptr;
}

void ULyraQuickBarComponent::SetActiveSlotIndex_Implementation(int32 NewIndex)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bChangingSlots) { return; }
	const auto* Controller = Cast<AController>(GetOwner());
	if (Controller && !Controller->GetPawn()) { return; }
	const auto* Health = ULyraHealthComponent::FindHealthComponent(Controller ? Controller->GetPawn() : nullptr);
	if (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0)) { return; }
	if (const auto* Inventory = GetOwner()->FindComponentByClass<ULyraInventoryManagerComponent>())
	{
		if (Slots.IsValidIndex(NewIndex) && Slots[NewIndex] && !Inventory->CanReferenceItem(Slots[NewIndex])) { return; }
	}
	TGuardValue<bool> Guard(bChangingSlots, true);
	if (Slots.IsValidIndex(NewIndex) && (ActiveSlotIndex != NewIndex))
	{
		UnequipItemInSlot();

		ActiveSlotIndex = NewIndex;

		EquipItemInSlot();

		OnRep_ActiveSlotIndex();
	}
}

ULyraInventoryItemInstance* ULyraQuickBarComponent::GetActiveSlotItem() const
{
	return Slots.IsValidIndex(ActiveSlotIndex) ? Slots[ActiveSlotIndex] : nullptr;
}

int32 ULyraQuickBarComponent::GetNextFreeItemSlot() const
{
	int32 SlotIndex = 0;
	for (const TObjectPtr<ULyraInventoryItemInstance>& ItemPtr : Slots)
	{
		if (ItemPtr == nullptr)
		{
			return SlotIndex;
		}
		++SlotIndex;
	}

	return INDEX_NONE;
}

void ULyraQuickBarComponent::AddItemToSlot(int32 SlotIndex, ULyraInventoryItemInstance* Item)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bChangingSlots || !IsValid(Item)) { return; }
	if (const auto* Inventory = GetOwner()->FindComponentByClass<ULyraInventoryManagerComponent>())
	{
		if (!Inventory->CanReferenceItem(Item)) { return; }
	}
	TGuardValue<bool> Guard(bChangingSlots, true);
	if (Slots.IsValidIndex(SlotIndex) && (Item != nullptr))
	{
		if (Slots[SlotIndex] == nullptr)
		{
			Slots[SlotIndex] = Item;
			OnRep_Slots();
		}
	}
}

ULyraInventoryItemInstance* ULyraQuickBarComponent::RemoveItemFromSlot(int32 SlotIndex)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bChangingSlots || !Slots.IsValidIndex(SlotIndex)) { return nullptr; }
	if (const auto* Inventory = GetOwner()->FindComponentByClass<ULyraInventoryManagerComponent>();
		Inventory && Inventory->IsPreservingPawnInventory()) { return nullptr; }
	TGuardValue<bool> Guard(bChangingSlots, true);
	ULyraInventoryItemInstance* Result = nullptr;

	if (ActiveSlotIndex == SlotIndex)
	{
		UnequipItemInSlot();
		ActiveSlotIndex = -1;
		OnRep_ActiveSlotIndex();
	}

	if (Slots.IsValidIndex(SlotIndex))
	{
		Result = Slots[SlotIndex];

		if (Result != nullptr)
		{
			Slots[SlotIndex] = nullptr;
			OnRep_Slots();
		}
	}

	return Result;
}

void ULyraQuickBarComponent::RemoveItemReferences(ULyraInventoryItemInstance* Item)
{
	if (!IsValid(Item) || !GetOwner() || !GetOwner()->HasAuthority()) { return; }
	// Inventory cleanup must also work if an unequip/message callback removes an item.
	// Clear references before invoking callbacks; do not skip cleanup while slots are changing.
	TGuardValue<bool> Guard(bChangingSlots, true);
	const bool bWasActive = GetActiveSlotItem() == Item;
	bool bChanged = false;
	for (auto& Slot : Slots)
	{
		if (Slot == Item) { Slot = nullptr; bChanged = true; }
	}
	if (bWasActive) { ActiveSlotIndex = INDEX_NONE; }
	if (bWasActive || (EquippedItem && EquippedItem->GetInstigator() == Item)) { UnequipItemInSlot(); }
	if (bChanged) { OnRep_Slots(); }
	if (bWasActive) { OnRep_ActiveSlotIndex(); }
}

void ULyraQuickBarComponent::OnRep_Slots()
{
	if (!UGameplayMessageSubsystem::HasInstance(this)) { return; }
	FLyraQuickBarSlotsChangedMessage Message;
	Message.Owner = GetOwner();
	Message.Slots = Slots;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(TAG_Lyra_QuickBar_Message_SlotsChanged, Message);
}

bool ULyraQuickBarComponent::ApplyInventorySelection(int32 SlotIndex, ULyraInventoryItemInstance* Item)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bChangingSlots || !Slots.IsValidIndex(SlotIndex)
		|| !FindEquipmentManager()) { return false; }
	if (Item && Slots[SlotIndex] == Item && ActiveSlotIndex == SlotIndex && EquippedItem) { return true; }
	TGuardValue<bool> Guard(bChangingSlots, true);
	const bool bChangesActive = Item || ActiveSlotIndex == SlotIndex;
	// Commit references before equipment callbacks. The enclosing inventory guard prevents removal/reentry.
	if (Item)
	{
		for (auto& Slot : Slots) { if (Slot == Item) { Slot = nullptr; } }
	}
	Slots[SlotIndex] = Item;
	if (bChangesActive)
	{
		ActiveSlotIndex = Item ? SlotIndex : INDEX_NONE;
		UnequipItemInSlot();
		if (Item) { EquipItemInSlot(); }
	}
	OnRep_Slots();
	if (bChangesActive) { OnRep_ActiveSlotIndex(); }
	return true;
}

void ULyraQuickBarComponent::OnRep_ActiveSlotIndex()
{
	if (!UGameplayMessageSubsystem::HasInstance(this)) { return; }
	FLyraQuickBarActiveIndexChangedMessage Message;
	Message.Owner = GetOwner();
	Message.ActiveIndex = ActiveSlotIndex;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(TAG_Lyra_QuickBar_Message_ActiveIndexChanged, Message);
}

