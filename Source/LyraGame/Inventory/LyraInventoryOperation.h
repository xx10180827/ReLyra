// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "LyraInventoryOperation.generated.h"

UENUM(BlueprintType)
enum class ELyraInventoryOperation : uint8 { Move, Swap, Split, Merge, Drop, Equip, Unequip, Activate };

UENUM(BlueprintType)
enum class ELyraInventoryOperationStatus : uint8
{
	Success, NotAuthority, Busy, InvalidRequest, StaleRequest, StaleState,
	InvalidQuantity, TargetOccupied, TargetEmpty, Incompatible, NoSpace, NotAllowed, InvalidLocation, SpawnFailed
};

/** An optimistic request for this inventory only; no client-supplied instance or inventory pointer. */
USTRUCT(BlueprintType)
struct FLyraInventoryOperationRequest
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int64 RequestId = 0;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	ELyraInventoryOperation Operation = ELyraInventoryOperation::Move;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int32 SourceSlot = INDEX_NONE;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int32 TargetSlot = INDEX_NONE;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	FGuid SourceEntryId;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	FGuid TargetEntryId;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int32 ExpectedSourceCount = 0;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int32 ExpectedTargetCount = 0;
	// Move/Swap use 0; Split/Merge require an exact positive quantity.
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int32 Quantity = 0;
	// Equipment requests address TargetSlot in the quick bar, and compare its complete view.
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	TArray<FGuid> ExpectedQuickBar;
	UPROPERTY(BlueprintReadWrite, Category=Inventory)
	int32 ExpectedActiveSlot = INDEX_NONE;
};

USTRUCT(BlueprintType)
struct FLyraInventoryOperationResult
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int64 RequestId = 0;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int64 LastProcessedRequestId = 0;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	ELyraInventoryOperationStatus Status = ELyraInventoryOperationStatus::InvalidRequest;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 MovedCount = 0;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLyraInventoryOperationResultDelegate,
	const FLyraInventoryOperationResult&, Result);
