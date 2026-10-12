// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryManagerComponent.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryItemInstance.h"
#include "GameFramework/PlayerController.h"
#include "Templates/UnrealTemplate.h"

bool ULyraInventoryManagerComponent::RequestInventoryOperation(ELyraInventoryOperation Operation,
	int32 SourceSlot, int32 TargetSlot, int32 Quantity)
{
	const auto* Controller = Cast<APlayerController>(GetOwner());
	if (!Controller || !Controller->IsLocalController() || SlotCapacity <= 0 || NextLocalOperationId == MAX_int64) { return false; }
	const auto Slots = GetSlotSnapshot();
	if (!Slots.IsValidIndex(SourceSlot) || !Slots.IsValidIndex(TargetSlot)) { return false; }
	FLyraInventoryOperationRequest Request;
	Request.RequestId = ++NextLocalOperationId;
	Request.Operation = Operation;
	Request.SourceSlot = SourceSlot;
	Request.TargetSlot = TargetSlot;
	Request.SourceEntryId = Slots[SourceSlot].EntryId;
	Request.TargetEntryId = Slots[TargetSlot].EntryId;
	Request.ExpectedSourceCount = Slots[SourceSlot].StackCount;
	Request.ExpectedTargetCount = Slots[TargetSlot].StackCount;
	Request.Quantity = Quantity;
	ServerRequestInventoryOperation(Request);
	return true;
}

void ULyraInventoryManagerComponent::ServerRequestInventoryOperation_Implementation(const FLyraInventoryOperationRequest& Request)
{
	if (!Cast<APlayerController>(GetOwner())) { return; }
	LastOperationResult = ExecuteInventoryOperation(Request);
	ClientReceiveInventoryOperationResult(LastOperationResult);
}

void ULyraInventoryManagerComponent::ClientReceiveInventoryOperationResult_Implementation(const FLyraInventoryOperationResult& Result)
{
	LastOperationResult = Result;
	NextLocalOperationId = FMath::Max(NextLocalOperationId, Result.LastProcessedRequestId);
	OnInventoryOperationResult.Broadcast(Result);
}

FLyraInventoryOperationResult ULyraInventoryManagerComponent::ExecuteInventoryOperation(const FLyraInventoryOperationRequest& Request)
{
	using EStatus = ELyraInventoryOperationStatus;
	using EOperation = ELyraInventoryOperation;
	FLyraInventoryOperationResult Result;
	Result.RequestId = Request.RequestId;
	Result.LastProcessedRequestId = LastProcessedOperationId;
	if (!GetOwner() || !GetOwner()->HasAuthority()) { Result.Status = EStatus::NotAuthority; return Result; }
	if (bMutationInProgress) { Result.Status = EStatus::Busy; return Result; }
	if (Request.RequestId <= 0) { return Result; }
	if (Request.RequestId <= LastProcessedOperationId) { Result.Status = EStatus::StaleRequest; return Result; }
	// Retain a watermark instead of an unbounded request cache. Invalid requests are consumed too.
	LastProcessedOperationId = Request.RequestId;
	Result.LastProcessedRequestId = LastProcessedOperationId;
	if (GetOwner()->IsActorBeingDestroyed() || SlotCapacity <= 0 || Request.SourceSlot < 0 || Request.TargetSlot < 0
		|| Request.SourceSlot >= SlotCapacity || Request.TargetSlot >= SlotCapacity || Request.SourceSlot == Request.TargetSlot
		|| uint8(Request.Operation) > uint8(EOperation::Merge)) { return Result; }
	auto& Entries = InventoryList.Entries;
	const int32 SourceIndex = Entries.IndexOfByPredicate([&](const FLyraInventoryEntry& Entry) { return Entry.SlotIndex == Request.SourceSlot; });
	const int32 TargetIndex = Entries.IndexOfByPredicate([&](const FLyraInventoryEntry& Entry) { return Entry.SlotIndex == Request.TargetSlot; });
	if (SourceIndex == INDEX_NONE || !Request.SourceEntryId.IsValid()
		|| Entries[SourceIndex].EntryId != Request.SourceEntryId || Entries[SourceIndex].StackCount != Request.ExpectedSourceCount
		|| (TargetIndex == INDEX_NONE ? Request.TargetEntryId.IsValid() || Request.ExpectedTargetCount != 0
			: Entries[TargetIndex].EntryId != Request.TargetEntryId || Entries[TargetIndex].StackCount != Request.ExpectedTargetCount))
	{
		Result.Status = EStatus::StaleState;
		return Result;
	}
	auto& Source = Entries[SourceIndex];
	if (!IsValid(Source.Instance) || !Source.Instance->GetItemDef() || Source.StackCount <= 0
		|| Source.Instance->GetOuter() != GetOwner()) { return Result; }
	if (TargetIndex != INDEX_NONE && (!IsValid(Entries[TargetIndex].Instance) || Entries[TargetIndex].StackCount <= 0
		|| Entries[TargetIndex].Instance->GetOuter() != GetOwner())) { return Result; }
	const bool bQuantityOperation = Request.Operation == EOperation::Split || Request.Operation == EOperation::Merge;
	if (bQuantityOperation ? Request.Quantity <= 0 || Request.Quantity > Source.StackCount : Request.Quantity != 0)
	{
		Result.Status = EStatus::InvalidQuantity;
		return Result;
	}
	const bool bNeedsEmptyTarget = Request.Operation == EOperation::Move || Request.Operation == EOperation::Split;
	if (bNeedsEmptyTarget && TargetIndex != INDEX_NONE) { Result.Status = EStatus::TargetOccupied; return Result; }
	if (!bNeedsEmptyTarget && TargetIndex == INDEX_NONE) { Result.Status = EStatus::TargetEmpty; return Result; }
	const int32 Limit = GetDefault<ULyraInventoryItemDefinition>(Source.Instance->GetItemDef())->GetMaxStackSize();
	FLyraInventoryItemSnapshot SplitSnapshot;
	if (Request.Operation == EOperation::Split)
	{
		if (Request.Quantity >= Source.StackCount || Request.Quantity > Limit)
		{
			Result.Status = EStatus::InvalidQuantity;
			return Result;
		}
		SplitSnapshot.ItemDef = Source.Instance->GetItemDef();
		SplitSnapshot.StackCount = Request.Quantity;
		SplitSnapshot.StatTags = Source.Instance->StatTags.GetTagCounts();
		if (!SplitSnapshot.IsValid()) { return Result; }
	}
	if (Request.Operation == EOperation::Merge)
	{
		const auto& Target = Entries[TargetIndex];
		if (Limit <= 1 || Source.Instance->GetItemDef() != Target.Instance->GetItemDef()
			|| !Source.Instance->StatTags.GetTagCounts().OrderIndependentCompareEqual(Target.Instance->StatTags.GetTagCounts()))
		{
			Result.Status = EStatus::Incompatible;
			return Result;
		}
		if (int64(Target.StackCount) + Request.Quantity > Limit) { Result.Status = EStatus::NoSpace; return Result; }
	}

	TGuardValue<bool> Guard(bMutationInProgress, true);
	Result.MovedCount = bQuantityOperation ? Request.Quantity : Source.StackCount;
	switch (Request.Operation)
	{
	case EOperation::Move:
		Source.SlotIndex = Request.TargetSlot;
		InventoryList.MarkItemDirty(Source);
		break;
	case EOperation::Swap:
		Source.SlotIndex = Request.TargetSlot;
		Entries[TargetIndex].SlotIndex = Request.SourceSlot;
		InventoryList.MarkItemDirty(Source);
		InventoryList.MarkItemDirty(Entries[TargetIndex]);
		break;
	case EOperation::Split:
	{
		auto* NewItem = InventoryList.AddEntry(SplitSnapshot);
		check(NewItem); // Validated empty target guarantees space; restoration invokes no fragment callbacks.
		// Adding can reallocate the array. Reacquire by index instead of using Source.
		Entries.Last().SlotIndex = Request.TargetSlot;
		InventoryList.MarkItemDirty(Entries.Last());
		Entries[SourceIndex].StackCount -= Request.Quantity;
		InventoryList.MarkItemDirty(Entries[SourceIndex]);
		RegisterNewItem(NewItem);
		break;
	}
	case EOperation::Merge:
	{
		auto* SourceItem = Source.Instance.Get();
		Source.StackCount -= Request.Quantity;
		Entries[TargetIndex].StackCount += Request.Quantity;
		InventoryList.MarkItemDirty(Entries[TargetIndex]);
		if (Source.StackCount == 0) { RemoveEntryAndReferences(SourceItem); }
		else { InventoryList.MarkItemDirty(Source); }
		break;
	}
	default:
		checkNoEntry();
	}
	Result.Status = EStatus::Success;
	return Result;
}
