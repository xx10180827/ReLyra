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
		DisplayName = FText::FromString(TEXT("测试补给"));
		Description = FText::FromString(TEXT("用于背包整理体验的测试补给。每格最多 10 个，可拖动、拆分和合并。当前不提供使用效果。"));
		ItemType = ELyraInventoryItemType::Ammunition;
		MaxStackSize = 10;
	}
};
