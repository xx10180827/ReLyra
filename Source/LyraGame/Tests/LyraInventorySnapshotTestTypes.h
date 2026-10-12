// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/PlayerController.h"
#include "Inventory/InventoryFragment_SetStats.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "LyraInventorySnapshotTestTypes.generated.h"

UCLASS()
class ULyraInventoryTestStatsFragment : public UInventoryFragment_SetStats
{
	GENERATED_BODY()
public:
	void SetInitialStat(FGameplayTag Tag, int32 Count) { InitialItemStats.Add(Tag, Count); }
};

UCLASS()
class ALyraInventoryTestController : public APlayerController
{
	GENERATED_BODY()
public:
	ALyraInventoryTestController() { bReplicateUsingRegisteredSubObjectList = true; }
};

UCLASS()
class ULyraInventoryReplicationTestComponent : public ULyraInventoryManagerComponent
{
	GENERATED_BODY()
public:
	ULyraInventoryReplicationTestComponent() { bReplicateUsingRegisteredSubObjectList = true; }
};
