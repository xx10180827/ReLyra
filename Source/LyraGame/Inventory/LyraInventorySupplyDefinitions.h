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
		Description = NSLOCTEXT("Inventory", "RifleAmmoDescription", "每格最多 60 发。使用时补充当前手持步枪的备弹，按实际补入数量扣除，剩余留在背包。");
		ItemType = ELyraInventoryItemType::Ammunition; MaxStackSize = 60;
		UseEffect = ELyraInventoryUseEffect::Ammo;
		AmmoWeaponDefinition = TSoftClassPtr<ULyraInventoryItemDefinition>(FSoftObjectPath(TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C")));
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
		Description = NSLOCTEXT("Inventory", "ShellsDescription", "每格最多 24 发。使用时补充当前手持霰弹枪的备弹，按实际补入数量扣除，剩余留在背包。");
		ItemType = ELyraInventoryItemType::Ammunition; MaxStackSize = 24;
		UseEffect = ELyraInventoryUseEffect::Ammo;
		AmmoWeaponDefinition = TSoftClassPtr<ULyraInventoryItemDefinition>(FSoftObjectPath(TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C")));
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
		Description = NSLOCTEXT("Inventory", "MedkitDescription", "每格最多 5 个。使用 1 个恢复生命，最多恢复至生命上限；满血或死亡时不消耗。");
		ItemType = ELyraInventoryItemType::Consumable; MaxStackSize = 5;
		UseEffect = ELyraInventoryUseEffect::Heal;
	}
};
