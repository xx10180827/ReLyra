// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "LyraInventoryItemDefinition.h"
#include "LyraInventorySupplyDefinitions.generated.h"

UCLASS()
class ULyraRifleAmmoDefinition : public ULyraInventoryItemDefinition
{
	GENERATED_BODY()
public:
	ULyraRifleAmmoDefinition()
	{
		DisplayName = NSLOCTEXT("Inventory", "RifleAmmo", "步枪弹药");
		Description = NSLOCTEXT("Inventory", "RifleAmmoDescription", "步枪备用弹药，每格最多 60 发。当前支持拾取与整理，使用补弹将在后续步骤接入。");
		ItemType = ELyraInventoryItemType::Ammunition; MaxStackSize = 60;
	}
};
UCLASS()
class ULyraShellsDefinition : public ULyraInventoryItemDefinition
{
	GENERATED_BODY()
public:
	ULyraShellsDefinition()
	{
		DisplayName = NSLOCTEXT("Inventory", "Shells", "霰弹枪弹药");
		Description = NSLOCTEXT("Inventory", "ShellsDescription", "霰弹枪备用弹药，每格最多 24 发。当前支持拾取与整理，使用补弹将在后续步骤接入。");
		ItemType = ELyraInventoryItemType::Ammunition; MaxStackSize = 24;
	}
};
UCLASS()
class ULyraMedkitDefinition : public ULyraInventoryItemDefinition
{
	GENERATED_BODY()
public:
	ULyraMedkitDefinition()
	{
		DisplayName = NSLOCTEXT("Inventory", "Medkit", "医疗包");
		Description = NSLOCTEXT("Inventory", "MedkitDescription", "治疗物资，每格最多 5 个。当前支持拾取与整理，治疗效果将在后续步骤接入。");
		ItemType = ELyraInventoryItemType::Consumable; MaxStackSize = 5;
	}
};
