// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"
#include "Inventory/LyraInventoryItemSnapshot.h"
#include "Inventory/LyraInventoryOperation.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "LyraInventoryManagerComponent.generated.h"

class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
class ULyraInventoryManagerComponent;
class UObject;
struct FFrame;
struct FLyraInventoryList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

UENUM(BlueprintType)
enum class ELyraInventoryAddStatus : uint8
{
	Success,
	Partial,
	NoSpace,
	InvalidRequest,
	NotAuthority,
	Busy
};

USTRUCT(BlueprintType)
struct FLyraInventoryAddResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	ELyraInventoryAddStatus Status = ELyraInventoryAddStatus::InvalidRequest;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 AddedCount = 0;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 RemainingCount = 0;

	// May be an existing merged stack. The added quantity can span multiple entries.
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<ULyraInventoryItemInstance> FirstInstance = nullptr;
};

/** Read-only view of a position; empty slots have an invalid EntryId and null Instance. */
USTRUCT(BlueprintType)
struct FLyraInventorySlotView
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 SlotIndex = INDEX_NONE;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	FGuid EntryId;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 StackCount = 0;
};

/** A message when an item is added to the inventory */
USTRUCT(BlueprintType)
struct FLyraInventoryChangeMessage
{
	GENERATED_BODY()

	//@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<UActorComponent> InventoryOwner = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = Inventory)
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 NewCount = 0;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 Delta = 0;
};

/** A single entry in an inventory */
USTRUCT(BlueprintType)
struct FLyraInventoryEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FLyraInventoryEntry()
	{}

	FString GetDebugString() const;

private:
	friend FLyraInventoryList;
	friend ULyraInventoryManagerComponent;

	UPROPERTY()
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY()
	int32 StackCount = 0;

	// Neither the FastArray's storage index nor its replication ID is a gameplay identity.
	UPROPERTY()
	FGuid EntryId;

	UPROPERTY()
	int32 SlotIndex = INDEX_NONE;

	UPROPERTY(NotReplicated)
	int32 LastObservedCount = INDEX_NONE;
};

/** List of inventory items */
USTRUCT(BlueprintType)
struct FLyraInventoryList : public FFastArraySerializer
{
	GENERATED_BODY()

	FLyraInventoryList()
		: OwnerComponent(nullptr)
	{
	}

	FLyraInventoryList(UActorComponent* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{
	}

	TArray<ULyraInventoryItemInstance*> GetAllItems() const;

public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	// UI listeners invalidate their view; rendering is deferred until the transaction is complete.
	void MarkItemDirty(FLyraInventoryEntry& Item);
	void MarkArrayDirty();
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FLyraInventoryEntry, FLyraInventoryList>(Entries, DeltaParms, *this);
	}

	ULyraInventoryItemInstance* AddEntry(TSubclassOf<ULyraInventoryItemDefinition> ItemClass, int32 StackCount);
	ULyraInventoryItemInstance* AddEntry(const FLyraInventoryItemSnapshot& Snapshot);

	void RemoveEntry(ULyraInventoryItemInstance* Instance);

	int32 FindFirstFreeSlot() const;

private:
	void BroadcastChangeMessage(FLyraInventoryEntry& Entry, int32 OldCount, int32 NewCount);

private:
	friend ULyraInventoryManagerComponent;

private:
	// Replicated list of items
	UPROPERTY()
	TArray<FLyraInventoryEntry> Entries;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FLyraInventoryList> : public TStructOpsTypeTraitsBase2<FLyraInventoryList>
{
	enum { WithNetDeltaSerializer = true };
};










/**
 * Manages an inventory
 */
UCLASS(BlueprintType)
class LYRAGAME_API ULyraInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULyraInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	DECLARE_MULTICAST_DELEGATE(FOnInventoryChanged);
	FOnInventoryChanged OnInventoryChanged;
	void NotifyInventoryChanged() { OnInventoryChanged.Broadcast(); }

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Zero retains the original unlimited inventory. Rejects shrinking over occupied positions.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	bool ConfigureSlotCapacity(int32 NewCapacity);

	UFUNCTION(BlueprintPure, Category=Inventory)
	int32 GetSlotCapacity() const { return SlotCapacity; }

	// Fixed inventories include empty slots. No array index is exposed as an item identity.
	UFUNCTION(BlueprintCallable, BlueprintPure=false, Category=Inventory)
	TArray<FLyraInventorySlotView> GetSlotSnapshot() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	bool CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintPure, Category=Inventory)
	int32 GetAddableItemCount(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 RequestedCount) const;

	// New pickup transactions use the returned remainder; legacy AddItemDefinition is all-or-nothing.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	FLyraInventoryAddResult AddItemDefinitionWithResult(TSubclassOf<ULyraInventoryItemDefinition> ItemDef,
		int32 StackCount, bool bAllowPartial = true);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	ULyraInventoryItemInstance* AddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void AddItemInstance(ULyraInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintPure, Category=Inventory)
	bool ContainsItem(const ULyraInventoryItemInstance* ItemInstance) const;

	// Used by reference holders to reject re-adding an item during its removal transaction.
	bool CanReferenceItem(const ULyraInventoryItemInstance* ItemInstance) const
	{
		return !bMutationInProgress && ContainsItem(ItemInstance);
	}

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	bool CaptureItemSnapshot(ULyraInventoryItemInstance* ItemInstance, FLyraInventoryItemSnapshot& OutSnapshot) const;

	// Trusted server data only. Restores one stack into a free slot, with a fresh instance and EntryId.
	// The caller owns the world-pickup/save transaction and must consume its source exactly once.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	ULyraInventoryItemInstance* RestoreItemSnapshot(const FLyraInventoryItemSnapshot& Snapshot);
	// Trusted world source only; merges compatible state and returns the exact admitted quantity.
	FLyraInventoryAddResult AddItemSnapshotWithResult(const FLyraInventoryItemSnapshot& Snapshot);

	// Transfers an entire owned stack. Failure leaves both inventories and equipment unchanged.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	ULyraInventoryItemInstance* TransferItemToInventory(ULyraInventoryItemInstance* ItemInstance,
		ULyraInventoryManagerComponent* TargetInventory);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure=false)
	TArray<ULyraInventoryItemInstance*> GetAllItems() const;

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure)
	ULyraInventoryItemInstance* FindFirstItemStackByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;

	UFUNCTION(BlueprintPure, Category=Inventory)
	int32 GetTotalItemCountByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	bool ConsumeItemsByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 NumToConsume);

	// Fixed-slot inventories only. Returns whether queued, not whether the server accepted it.
	UFUNCTION(BlueprintCallable, Category=Inventory)
	bool RequestInventoryOperation(ELyraInventoryOperation Operation, int32 SourceSlot, int32 TargetSlot, int32 Quantity = 0);

	// UE routes this RPC through the owning PlayerController connection. Native callers can
	// provide expected IDs/counts explicitly; Blueprint UI uses RequestInventoryOperation.
	UFUNCTION(Server, Reliable)
	void ServerRequestInventoryOperation(const FLyraInventoryOperationRequest& Request);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	FLyraInventoryOperationResult ExecuteInventoryOperation(const FLyraInventoryOperationRequest& Request);

	UFUNCTION(BlueprintPure, Category=Inventory)
	FLyraInventoryOperationResult GetLastOperationResult() const { return LastOperationResult; }
	int64 GetNextLocalOperationId() const { return NextLocalOperationId < MAX_int64 ? NextLocalOperationId + 1 : 0; }

	// The result can arrive before the replicated inventory; UI still renders inventory data.
	UPROPERTY(BlueprintAssignable, Category=Inventory)
	FLyraInventoryOperationResultDelegate OnInventoryOperationResult;

	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	//~End of UObject interface

private:
	UFUNCTION(Client, Reliable)
	void ClientReceiveInventoryOperationResult(const FLyraInventoryOperationResult& Result);

	int64 NextLocalOperationId = 0;
	int64 LastProcessedOperationId = 0;
	UPROPERTY(Transient)
	FLyraInventoryOperationResult LastOperationResult;

	bool bMutationInProgress = false;
	bool CanMergeDefinition(const FLyraInventoryEntry& Entry, TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	void RegisterNewItem(ULyraInventoryItemInstance* Item);
	bool CanRestoreSnapshot(const FLyraInventoryItemSnapshot& Snapshot) const;
	void RemoveEntryAndReferences(ULyraInventoryItemInstance* Item);
	FLyraInventoryOperationResult ExecuteDrop(const FLyraInventoryOperationRequest& Request, FLyraInventoryOperationResult Result);

	UPROPERTY(Replicated)
	int32 SlotCapacity = 0;

	UPROPERTY(Replicated)
	FLyraInventoryList InventoryList;
};
