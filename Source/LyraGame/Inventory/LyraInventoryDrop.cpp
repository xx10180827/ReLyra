// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryManagerComponent.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryItemInstance.h"
#include "LyraWorldPickup.h"
#include "Character/LyraHealthComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Templates/UnrealTemplate.h"

FLyraInventoryAddResult ULyraInventoryManagerComponent::AddItemSnapshotWithResult(const FLyraInventoryItemSnapshot& Snapshot)
{
	FLyraInventoryAddResult Result;
	Result.RemainingCount = Snapshot.StackCount;
	if (!GetOwner() || !GetOwner()->HasAuthority()) { Result.Status = ELyraInventoryAddStatus::NotAuthority; return Result; }
	if (bMutationInProgress) { Result.Status = ELyraInventoryAddStatus::Busy; return Result; }
	if (GetOwner()->IsActorBeingDestroyed() || !Snapshot.IsValid() || Snapshot.ItemDef->HasAnyClassFlags(CLASS_Abstract) || SlotCapacity <= 0) { return Result; }
	const int32 Limit = GetDefault<ULyraInventoryItemDefinition>(Snapshot.ItemDef)->GetMaxStackSize();
	const auto Compatible = [&](const FLyraInventoryEntry& Entry)
	{
		return Limit > 1 && IsValid(Entry.Instance) && Entry.Instance->GetItemDef() == Snapshot.ItemDef
			&& Entry.Instance->StatTags.GetTagCounts().OrderIndependentCompareEqual(Snapshot.StatTags);
	};
	int64 Space = int64(FMath::Max(0, SlotCapacity - InventoryList.Entries.Num())) * Limit;
	for (const auto& Entry : InventoryList.Entries) { if (Compatible(Entry)) { Space += FMath::Max(0, Limit - Entry.StackCount); } }
	const int32 Accepted = int32(FMath::Min<int64>(Space, Snapshot.StackCount));
	if (Accepted <= 0) { Result.Status = ELyraInventoryAddStatus::NoSpace; return Result; }
	TGuardValue<bool> Guard(bMutationInProgress, true);
	int32 Remaining = Accepted;
	for (auto& Entry : InventoryList.Entries)
	{
		if (Remaining > 0 && Compatible(Entry))
		{
			const int32 Count = FMath::Min(Remaining, FMath::Max(0, Limit - Entry.StackCount));
			if (Count == 0) { continue; }
			Entry.StackCount += Count; Remaining -= Count;
			if (!Result.FirstInstance) { Result.FirstInstance = Entry.Instance; }
			InventoryList.MarkItemDirty(Entry);
		}
	}
	while (Remaining > 0)
	{
		auto Part = Snapshot; Part.StackCount = FMath::Min(Remaining, Limit);
		auto* Item = InventoryList.AddEntry(Part);
		check(Item); // Capacity was checked; snapshot restoration invokes no fragment callbacks.
		RegisterNewItem(Item);
		if (!Result.FirstInstance) { Result.FirstInstance = Item; }
		Remaining -= Part.StackCount;
	}
	Result.AddedCount = Accepted; Result.RemainingCount -= Accepted;
	Result.Status = Result.RemainingCount ? ELyraInventoryAddStatus::Partial : ELyraInventoryAddStatus::Success;
	return Result;
}

FLyraInventoryOperationResult ULyraInventoryManagerComponent::ExecuteDrop(
	const FLyraInventoryOperationRequest& Request, FLyraInventoryOperationResult Result)
{
	using Status = ELyraInventoryOperationStatus;
	auto* Controller = Cast<APlayerController>(GetOwner());
	auto* Pawn = Controller ? Controller->GetPawn() : nullptr;
	const auto* Health = Pawn ? ULyraHealthComponent::FindHealthComponent(Pawn) : nullptr;
	if (!IsValid(Pawn) || Pawn->IsActorBeingDestroyed() || Pawn->GetController() != Controller
		|| GetOwner()->IsActorBeingDestroyed() || SlotCapacity <= 0
		|| (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0)))
	{ Result.Status = Status::NotAllowed; return Result; }
	if (Request.SourceSlot < 0 || Request.SourceSlot >= SlotCapacity || Request.TargetSlot != Request.SourceSlot) { return Result; }
	auto* Entry = InventoryList.Entries.FindByPredicate([&](const auto& Value) { return Value.SlotIndex == Request.SourceSlot; });
	if (!Entry || !Request.SourceEntryId.IsValid() || Entry->EntryId != Request.SourceEntryId || Entry->StackCount != Request.ExpectedSourceCount)
	{ Result.Status = Status::StaleState; return Result; }
	if (Request.Quantity <= 0 || Request.Quantity > Entry->StackCount) { Result.Status = Status::InvalidQuantity; return Result; }
	FLyraInventoryItemSnapshot Snapshot;
	if (!IsValid(Entry->Instance) || Entry->Instance->GetOuter() != Controller || !CaptureItemSnapshot(Entry->Instance, Snapshot)) { return Result; }
	Snapshot.StackCount = Request.Quantity;

	// No client-provided transform: a supported, unobstructed point in front of the server pawn.
	const FVector Origin = Pawn->GetActorLocation();
	const FVector Forward = FRotator(0, Controller->GetControlRotation().Yaw, 0).Vector();
	FCollisionQueryParams Params(SCENE_QUERY_STAT(InventoryDrop), false, Pawn);
	auto* World = GetWorld();
	FVector Location;
	const auto Shape = FCollisionShape::MakeSphere(30);
	const auto TryLocation = [&](float Distance, float Angle)
	{
		const FVector Probe = Origin + Forward.RotateAngleAxis(Angle, FVector::UpVector) * Distance;
		FHitResult Floor, Obstacle;
		if (!World->LineTraceSingleByChannel(Floor, Probe + FVector(0, 0, 40), Probe - FVector(0, 0, 220), ECC_Visibility, Params)
			|| Floor.ImpactNormal.Z < 0.65f || !Floor.GetComponent() || Floor.GetComponent()->Mobility != EComponentMobility::Static) { return false; }
		const FVector Candidate = Floor.ImpactPoint + FVector(0, 0, 34);
		if (FVector::DistSquared(Origin, Candidate) > FMath::Square(ALyraWorldPickup::PickupDistance)
			|| World->SweepSingleByChannel(Obstacle, Origin, Candidate, FQuat::Identity, ECC_Visibility, Shape, Params)
			|| World->OverlapBlockingTestByChannel(Candidate, FQuat::Identity, ECC_Visibility, Shape, Params)
			|| World->LineTraceSingleByChannel(Obstacle, Pawn->GetPawnViewLocation(), Candidate, ECC_Visibility, Params)) { return false; }
		Location = Candidate;
		return true;
	};
	// Keep the original forward point first, then fan out around existing drops.
	// Each candidate retains ground, wall, distance and collision checks; weapons stay distinct.
	bool bFoundLocation = false;
	for (const float Distance : {130.0f, 210.0f})
	{
		for (const float Angle : {0.0f, 35.0f, -35.0f, 70.0f, -70.0f, 20.0f, -20.0f, 50.0f, -50.0f, 85.0f, -85.0f})
		{
			if (TryLocation(Distance, Angle)) { bFoundLocation = true; break; }
		}
		if (bFoundLocation) { break; }
	}
	if (!bFoundLocation) { Result.Status = Status::InvalidLocation; return Result; }

	TGuardValue<bool> Guard(bMutationInProgress, true);
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding;
	auto* Pickup = World->SpawnActor<ALyraWorldPickup>(Location, FRotator(0, Controller->GetControlRotation().Yaw, 0), SpawnParams);
	if (!IsValid(Pickup) || Pickup->IsActorBeingDestroyed() || !Pickup->InitializeDroppedSnapshot(Snapshot))
	{
		if (IsValid(Pickup)) { Pickup->Destroy(); }
		Result.Status = Status::SpawnFailed; return Result;
	}
	// The new source rejects claims until the source inventory and references are committed.
	Entry->StackCount -= Request.Quantity;
	if (Entry->StackCount == 0) { RemoveEntryAndReferences(Entry->Instance); }
	else { InventoryList.MarkItemDirty(*Entry); }
	Pickup->CommitDrop();
	Result.Status = Status::Success; Result.MovedCount = Request.Quantity;
	return Result;
}
