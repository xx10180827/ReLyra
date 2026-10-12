// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryItemDefinition.h"
#include "InventoryFragment_EquippableItem.h"
#include "Templates/SubclassOf.h"
#include "UObject/ObjectPtr.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraInventoryItemDefinition)

ELyraInventoryItemType ULyraInventoryItemDefinition::GetInventoryItemType() const
{
	return FindFragmentByClass(UInventoryFragment_EquippableItem::StaticClass())
		? ELyraInventoryItemType::Weapon : ItemType;
}

int32 ULyraInventoryItemDefinition::GetMaxStackSize() const
{
	return GetInventoryItemType() == ELyraInventoryItemType::Weapon ? 1 : FMath::Max(1, MaxStackSize);
}

//////////////////////////////////////////////////////////////////////
// ULyraInventoryItemDefinition

ULyraInventoryItemDefinition::ULyraInventoryItemDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

const ULyraInventoryItemFragment* ULyraInventoryItemDefinition::FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass) const
{
	if (FragmentClass != nullptr)
	{
		for (ULyraInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->IsA(FragmentClass))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

//////////////////////////////////////////////////////////////////////
// ULyraInventoryItemDefinition

const ULyraInventoryItemFragment* ULyraInventoryFunctionLibrary::FindItemDefinitionFragment(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, TSubclassOf<ULyraInventoryItemFragment> FragmentClass)
{
	if ((ItemDef != nullptr) && (FragmentClass != nullptr))
	{
		return GetDefault<ULyraInventoryItemDefinition>(ItemDef)->FindFragmentByClass(FragmentClass);
	}
	return nullptr;
}

