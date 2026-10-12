// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "LyraInventoryItemSnapshot.generated.h"

class ULyraInventoryItemDefinition;

/** Server-owned item data, not a client request or a reusable pickup claim.
 * Contains values only: no actor, instance, replication IDs or old inventory slot.
 */
USTRUCT(BlueprintType)
struct LYRAGAME_API FLyraInventoryItemSnapshot
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Inventory)
	TSubclassOf<ULyraInventoryItemDefinition> ItemDef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Inventory)
	int32 StackCount = 0;

	// Absent tags mean zero. Restoring must not reapply definition defaults.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Inventory)
	TMap<FGameplayTag, int32> StatTags;

	bool IsValid() const;
};
