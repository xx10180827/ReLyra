// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Inventory/LyraInventoryItemDefinition.h"
#include "LyraInventoryTestItemDefinition.generated.h"

/** Native, asset-free fixture. Only explicit inventory tests grant this item. */
UCLASS()
class ULyraInventoryTestItemDefinition : public ULyraInventoryItemDefinition
{
	GENERATED_BODY()
public:
	ULyraInventoryTestItemDefinition()
	{
		DisplayName = FText::FromString(TEXT("Inventory test supply"));
		ItemType = ELyraInventoryItemType::Ammunition;
		MaxStackSize = 10;
	}
};
