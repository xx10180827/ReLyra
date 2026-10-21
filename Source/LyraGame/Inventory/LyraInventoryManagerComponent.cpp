// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryManagerComponent.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"

#include "Engine/ActorChannel.h"
#include "Engine/World.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryItemInstance.h"
#include "GameModes/LyraGameMode.h"
#include "GameFramework/PlayerController.h"
#include "NativeGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "Templates/UnrealTemplate.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraInventoryManagerComponent)

class FLifetimeProperty;
struct FReplicationFlags;

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_StackChanged, "Lyra.Inventory.Message.StackChanged");

//////////////////////////////////////////////////////////////////////
// FLyraInventoryEntry

FString FLyraInventoryEntry::GetDebugString() const
{
	TSubclassOf<ULyraInventoryItemDefinition> ItemDef;
	if (Instance != nullptr)
	{
		ItemDef = Instance->GetItemDef();
	}

	return FString::Printf(TEXT("%s (%d x %s)"), *GetNameSafe(Instance), StackCount, *GetNameSafe(ItemDef));
}

//////////////////////////////////////////////////////////////////////
// FLyraInventoryList

void FLyraInventoryList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	CastChecked<ULyraInventoryManagerComponent>(OwnerComponent)->NotifyInventoryChanged();
	for (int32 Index : RemovedIndices)
	{
		FLyraInventoryEntry& Stack = Entries[Index];
		BroadcastChangeMessage(Stack, /*OldCount=*/ Stack.StackCount, /*NewCount=*/ 0);
		Stack.LastObservedCount = 0;
	}
}

void FLyraInventoryList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	CastChecked<ULyraInventoryManagerComponent>(OwnerComponent)->NotifyInventoryChanged();
	for (int32 Index : AddedIndices)
	{
		FLyraInventoryEntry& Stack = Entries[Index];
		BroadcastChangeMessage(Stack, /*OldCount=*/ 0, /*NewCount=*/ Stack.StackCount);
		Stack.LastObservedCount = Stack.StackCount;
	}
}

void FLyraInventoryList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	CastChecked<ULyraInventoryManagerComponent>(OwnerComponent)->NotifyInventoryChanged();
	for (int32 Index : ChangedIndices)
	{
		FLyraInventoryEntry& Stack = Entries[Index];
		check(Stack.LastObservedCount != INDEX_NONE);
		BroadcastChangeMessage(Stack, /*OldCount=*/ Stack.LastObservedCount, /*NewCount=*/ Stack.StackCount);
		Stack.LastObservedCount = Stack.StackCount;
	}
}

void FLyraInventoryList::MarkItemDirty(FLyraInventoryEntry& Item)
{
	FFastArraySerializer::MarkItemDirty(Item);
	CastChecked<ULyraInventoryManagerComponent>(OwnerComponent)->NotifyInventoryChanged();
}

void FLyraInventoryList::MarkArrayDirty()
{
	FFastArraySerializer::MarkArrayDirty();
	CastChecked<ULyraInventoryManagerComponent>(OwnerComponent)->NotifyInventoryChanged();
}

void FLyraInventoryList::BroadcastChangeMessage(FLyraInventoryEntry& Entry, int32 OldCount, int32 NewCount)
{
	FLyraInventoryChangeMessage Message;
	Message.InventoryOwner = OwnerComponent;
	Message.Instance = Entry.Instance;
	Message.NewCount = NewCount;
	Message.Delta = NewCount - OldCount;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(OwnerComponent->GetWorld());
	MessageSystem.BroadcastMessage(TAG_Lyra_Inventory_Message_StackChanged, Message);
}

ULyraInventoryItemInstance* FLyraInventoryList::AddEntry(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
{
	ULyraInventoryItemInstance* Result = nullptr;

	check(ItemDef != nullptr);
 	check(OwnerComponent);

	AActor* OwningActor = OwnerComponent->GetOwner();
	check(OwningActor->HasAuthority());


	const int32 NewSlot = FindFirstFreeSlot();
	ULyraInventoryManagerComponent* Manager = CastChecked<ULyraInventoryManagerComponent>(OwnerComponent);
	if (Manager->GetSlotCapacity() > 0 && NewSlot >= Manager->GetSlotCapacity())
	{
		return nullptr;
	}
	FLyraInventoryEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.EntryId = FGuid::NewGuid();
	NewEntry.SlotIndex = NewSlot;
	NewEntry.Instance = NewObject<ULyraInventoryItemInstance>(OwnerComponent->GetOwner());  //@TODO: Using the actor instead of component as the outer due to UE-127172
	NewEntry.Instance->SetItemDef(ItemDef);
	NewEntry.Instance->OwningInventory = Manager;
	for (ULyraInventoryItemFragment* Fragment : GetDefault<ULyraInventoryItemDefinition>(ItemDef)->Fragments)
	{
		if (Fragment != nullptr)
		{
			Fragment->OnInstanceCreated(NewEntry.Instance);
		}
	}
	NewEntry.StackCount = StackCount;
	Result = NewEntry.Instance;

	//const ULyraInventoryItemDefinition* ItemCDO = GetDefault<ULyraInventoryItemDefinition>(ItemDef);
	MarkItemDirty(NewEntry);

	return Result;
}

ULyraInventoryItemInstance* FLyraInventoryList::AddEntry(const FLyraInventoryItemSnapshot& Snapshot)
{
	check(Snapshot.IsValid() && OwnerComponent && OwnerComponent->GetOwner()->HasAuthority());
	auto* Manager = CastChecked<ULyraInventoryManagerComponent>(OwnerComponent);
	const int32 NewSlot = FindFirstFreeSlot();
	if (Manager->GetSlotCapacity() > 0 && NewSlot >= Manager->GetSlotCapacity()) { return nullptr; }
	FLyraInventoryEntry& Entry = Entries.AddDefaulted_GetRef();
	Entry.EntryId = FGuid::NewGuid();
	Entry.SlotIndex = NewSlot;
	Entry.StackCount = Snapshot.StackCount;
	Entry.Instance = NewObject<ULyraInventoryItemInstance>(OwnerComponent->GetOwner());
	Entry.Instance->InitializeFromSnapshot(Snapshot);
	Entry.Instance->OwningInventory = Manager;
	MarkItemDirty(Entry);
	return Entry.Instance;
}

int32 FLyraInventoryList::FindFirstFreeSlot() const
{
	TSet<int32> OccupiedSlots;
	for (const FLyraInventoryEntry& Entry : Entries)
	{
		OccupiedSlots.Add(Entry.SlotIndex);
	}
	int32 Slot = 0;
	while (OccupiedSlots.Contains(Slot))
	{
		++Slot;
	}
	return Slot;
}

void FLyraInventoryList::RemoveEntry(ULyraInventoryItemInstance* Instance)
{
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FLyraInventoryEntry& Entry = *EntryIt;
		if (Entry.Instance == Instance)
		{
			Instance->OwningInventory.Reset();
			EntryIt.RemoveCurrent();
			MarkArrayDirty();
		}
	}
}

TArray<ULyraInventoryItemInstance*> FLyraInventoryList::GetAllItems() const
{
	TArray<ULyraInventoryItemInstance*> Results;
	Results.Reserve(Entries.Num());
	for (const FLyraInventoryEntry& Entry : Entries)
	{
		if (Entry.Instance != nullptr) //@TODO: Would prefer to not deal with this here and hide it further?
		{
			Results.Add(Entry.Instance);
		}
	}
	return Results;
}

//////////////////////////////////////////////////////////////////////
// ULyraInventoryManagerComponent

ULyraInventoryManagerComponent::ULyraInventoryManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, InventoryList(this)
{
	SetIsReplicatedByDefault(true);
}

void ULyraInventoryManagerComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InventoryList);
	DOREPLIFETIME(ThisClass, SlotCapacity);
}

void ULyraInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	if (const ALyraGameMode* Mode = GetWorld()->GetAuthGameMode<ALyraGameMode>(); Mode && Cast<APlayerController>(GetOwner()))
	{
		ensureMsgf(ConfigureSlotCapacity(Mode->InventorySlotCapacity), TEXT("Invalid inventory scene capacity"));
	}
}

void ULyraInventoryManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (GetOwner() && GetOwner()->HasAuthority())
	{
		TGuardValue<bool> MutationGuard(bMutationInProgress, true);
		for (auto* Item : GetAllItems()) { RemoveEntryAndReferences(Item); }
	}
	Super::EndPlay(EndPlayReason);
}

bool FLyraInventoryItemSnapshot::IsValid() const
{
	if (!ItemDef || StackCount <= 0) { return false; }
	for (const auto& Pair : StatTags)
	{
		if (!Pair.Key.IsValid() || Pair.Value <= 0) { return false; }
	}
	return true;
}

bool ULyraInventoryManagerComponent::ConfigureSlotCapacity(int32 NewCapacity)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bMutationInProgress || NewCapacity < 0 || NewCapacity > 1024)
	{
		return false;
	}
	for (const FLyraInventoryEntry& Entry : InventoryList.Entries)
	{
		if (NewCapacity > 0 && (Entry.SlotIndex >= NewCapacity || !IsValid(Entry.Instance)
			|| !Entry.Instance->GetItemDef() || Entry.StackCount <= 0
			|| Entry.StackCount > GetDefault<ULyraInventoryItemDefinition>(Entry.Instance->GetItemDef())->GetMaxStackSize()))
		{
			return false;
		}
	}
	SlotCapacity = NewCapacity;
	NotifyInventoryChanged();
	return true;
}

TArray<FLyraInventorySlotView> ULyraInventoryManagerComponent::GetSlotSnapshot() const
{
	int32 ViewSize = SlotCapacity;
	for (const FLyraInventoryEntry& Entry : InventoryList.Entries)
	{
		ViewSize = FMath::Max(ViewSize, Entry.SlotIndex + 1);
	}
	TArray<FLyraInventorySlotView> Result;
	Result.SetNum(ViewSize);
	for (int32 Index = 0; Index < Result.Num(); ++Index)
	{
		Result[Index].SlotIndex = Index;
	}
	for (const FLyraInventoryEntry& Entry : InventoryList.Entries)
	{
		if (Result.IsValidIndex(Entry.SlotIndex))
		{
			FLyraInventorySlotView& Slot = Result[Entry.SlotIndex];
			Slot.EntryId = Entry.EntryId;
			Slot.Instance = Entry.Instance;
			Slot.StackCount = Entry.StackCount;
		}
	}
	return Result;
}

bool ULyraInventoryManagerComponent::CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
{
	return GetOwner() && GetOwner()->HasAuthority() && !bMutationInProgress && StackCount > 0
		&& GetAddableItemCount(ItemDef, StackCount) == StackCount;
}

bool ULyraInventoryManagerComponent::CanMergeDefinition(const FLyraInventoryEntry& Entry,
	TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	return IsValid(Entry.Instance) && Entry.Instance->GetItemDef() == ItemDef && Entry.StackCount > 0
		&& Entry.StackCount < GetDefault<ULyraInventoryItemDefinition>(ItemDef)->GetMaxStackSize()
		&& Entry.Instance->HasDefaultStatTags();
}

int32 ULyraInventoryManagerComponent::GetAddableItemCount(TSubclassOf<ULyraInventoryItemDefinition> ItemDef,
	int32 RequestedCount) const
{
	if (!ItemDef || RequestedCount <= 0) { return 0; }
	if (SlotCapacity == 0) { return RequestedCount; }
	const int32 Limit = GetDefault<ULyraInventoryItemDefinition>(ItemDef)->GetMaxStackSize();
	int64 Space = int64(FMath::Max(0, SlotCapacity - InventoryList.Entries.Num())) * Limit;
	for (const auto& Entry : InventoryList.Entries)
	{
		if (CanMergeDefinition(Entry, ItemDef))
		{
			Space += int64(Limit) - Entry.StackCount;
		}
	}
	return int32(FMath::Min<int64>(RequestedCount, Space));
}

void ULyraInventoryManagerComponent::RegisterNewItem(ULyraInventoryItemInstance* Item)
{
	if (Item && IsUsingRegisteredSubObjectList() && IsReadyForReplication())
	{
		AddReplicatedSubObject(Item);
	}
}

FLyraInventoryAddResult ULyraInventoryManagerComponent::AddItemDefinitionWithResult(
	TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount, bool bAllowPartial)
{
	FLyraInventoryAddResult Result;
	Result.RemainingCount = FMath::Max(0, StackCount);
	if (!GetOwner() || !GetOwner()->HasAuthority())
	{
		Result.Status = ELyraInventoryAddStatus::NotAuthority;
		return Result;
	}
	if (bMutationInProgress)
	{
		Result.Status = ELyraInventoryAddStatus::Busy;
		return Result;
	}
	if (!ItemDef || StackCount <= 0) { return Result; }
	const int32 Accepted = GetAddableItemCount(ItemDef, StackCount);
	if (Accepted == 0 || (!bAllowPartial && Accepted != StackCount))
	{
		Result.Status = ELyraInventoryAddStatus::NoSpace;
		return Result;
	}
	// Fragment initialization cannot re-enter a transaction and invalidate preflight capacity.
	TGuardValue<bool> MutationGuard(bMutationInProgress, true);
	if (SlotCapacity == 0)
	{
		// Preserve the original mode's single-entry insertion behavior.
		Result.FirstInstance = InventoryList.AddEntry(ItemDef, Accepted);
		RegisterNewItem(Result.FirstInstance);
	}
	else
	{
		const int32 Limit = GetDefault<ULyraInventoryItemDefinition>(ItemDef)->GetMaxStackSize();
		int32 Remaining = Accepted;
		for (auto& Entry : InventoryList.Entries)
		{
			if (Remaining > 0 && CanMergeDefinition(Entry, ItemDef))
			{
				const int32 Added = FMath::Min(Remaining, Limit - Entry.StackCount);
				Entry.StackCount += Added;
				Remaining -= Added;
				InventoryList.MarkItemDirty(Entry);
				if (!Result.FirstInstance) { Result.FirstInstance = Entry.Instance; }
			}
		}
		while (Remaining > 0)
		{
			const int32 Added = FMath::Min(Remaining, Limit);
			auto* Item = InventoryList.AddEntry(ItemDef, Added);
			check(Item); // Preflight and the mutation guard guarantee a free slot.
			RegisterNewItem(Item);
			if (!Result.FirstInstance) { Result.FirstInstance = Item; }
			Remaining -= Added;
		}
	}
	Result.AddedCount = Accepted;
	Result.RemainingCount = StackCount - Accepted;
	Result.Status = Result.RemainingCount == 0 ? ELyraInventoryAddStatus::Success : ELyraInventoryAddStatus::Partial;
	return Result;
}

ULyraInventoryItemInstance* ULyraInventoryManagerComponent::AddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
{
	return AddItemDefinitionWithResult(ItemDef, StackCount, false).FirstInstance;
}

void ULyraInventoryManagerComponent::AddItemInstance(ULyraInventoryItemInstance* ItemInstance)
{
	// Legacy pointer API transfers a tracked source through value data; never adopts a foreign Outer.
	// Unowned/stale pointers are rejected. World pickups will use server-owned snapshots.
	if (IsValid(ItemInstance))
	{
		if (auto* Source = ItemInstance->OwningInventory.Get())
		{
			Source->TransferItemToInventory(ItemInstance, this);
		}
	}
}

bool ULyraInventoryManagerComponent::ContainsItem(const ULyraInventoryItemInstance* ItemInstance) const
{
	return IsValid(ItemInstance) && InventoryList.Entries.ContainsByPredicate(
		[ItemInstance](const FLyraInventoryEntry& Entry) { return Entry.Instance == ItemInstance && Entry.StackCount > 0; });
}

bool ULyraInventoryManagerComponent::CaptureItemSnapshot(ULyraInventoryItemInstance* ItemInstance,
	FLyraInventoryItemSnapshot& OutSnapshot) const
{
	OutSnapshot = FLyraInventoryItemSnapshot();
	if (!GetOwner() || !GetOwner()->HasAuthority() || bMutationInProgress || !ContainsItem(ItemInstance)) { return false; }
	for (const auto& Entry : InventoryList.Entries)
	{
		if (Entry.Instance == ItemInstance)
		{
			OutSnapshot.ItemDef = ItemInstance->GetItemDef();
			OutSnapshot.StackCount = Entry.StackCount;
			OutSnapshot.StatTags = ItemInstance->StatTags.GetTagCounts();
			return OutSnapshot.IsValid();
		}
	}
	return false;
}

bool ULyraInventoryManagerComponent::CanRestoreSnapshot(const FLyraInventoryItemSnapshot& Snapshot) const
{
	return GetOwner() && GetOwner()->HasAuthority() && !GetOwner()->IsActorBeingDestroyed()
		&& !bMutationInProgress && Snapshot.IsValid()
		&& (SlotCapacity == 0 || (Snapshot.StackCount <= GetDefault<ULyraInventoryItemDefinition>(Snapshot.ItemDef)->GetMaxStackSize()
			&& InventoryList.FindFirstFreeSlot() < SlotCapacity));
}

ULyraInventoryItemInstance* ULyraInventoryManagerComponent::RestoreItemSnapshot(const FLyraInventoryItemSnapshot& Snapshot)
{
	if (!CanRestoreSnapshot(Snapshot)) { return nullptr; }
	TGuardValue<bool> MutationGuard(bMutationInProgress, true);
	auto* Item = InventoryList.AddEntry(Snapshot);
	RegisterNewItem(Item);
	return Item;
}

ULyraInventoryItemInstance* ULyraInventoryManagerComponent::TransferItemToInventory(
	ULyraInventoryItemInstance* ItemInstance, ULyraInventoryManagerComponent* TargetInventory)
{
	FLyraInventoryItemSnapshot Snapshot;
	if (!IsValid(TargetInventory) || TargetInventory == this || TargetInventory->GetWorld() != GetWorld()
		|| !CaptureItemSnapshot(ItemInstance, Snapshot) || !TargetInventory->CanRestoreSnapshot(Snapshot)) { return nullptr; }
	TGuardValue<bool> SourceGuard(bMutationInProgress, true);
	TGuardValue<bool> TargetGuard(TargetInventory->bMutationInProgress, true);
	auto* NewItem = TargetInventory->InventoryList.AddEntry(Snapshot);
	if (!NewItem) { return nullptr; }
	TargetInventory->RegisterNewItem(NewItem);
	RemoveEntryAndReferences(ItemInstance);
	return NewItem;
}

void ULyraInventoryManagerComponent::RemoveEntryAndReferences(ULyraInventoryItemInstance* Item)
{
	if (!IsValid(Item) || !InventoryList.Entries.ContainsByPredicate(
		[Item](const FLyraInventoryEntry& Entry) { return Entry.Instance == Item; })) { return; }
	TInlineComponentArray<ULyraQuickBarComponent*> QuickBars;
	GetOwner()->GetComponents(QuickBars);
	for (auto* QuickBar : QuickBars) { QuickBar->RemoveItemReferences(Item); }
	APawn* Pawn = Cast<APawn>(GetOwner());
	if (const auto* Controller = Cast<AController>(GetOwner())) { Pawn = Controller->GetPawn(); }
	if (auto* Equipment = Pawn ? Pawn->FindComponentByClass<ULyraEquipmentManagerComponent>() : nullptr)
	{
		for (auto* Instance : Equipment->GetEquipmentInstancesOfType(ULyraEquipmentInstance::StaticClass()))
		{
			if (Instance->GetInstigator() == Item) { Equipment->UnequipItem(Instance); }
		}
	}
	InventoryList.RemoveEntry(Item);
	if (IsUsingRegisteredSubObjectList()) { RemoveReplicatedSubObject(Item); }
}

void ULyraInventoryManagerComponent::RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || bMutationInProgress || bPreservingPawnInventory) { return; }
	TGuardValue<bool> MutationGuard(bMutationInProgress, true);
	RemoveEntryAndReferences(ItemInstance);
}

void ULyraInventoryManagerComponent::RunPreservingPawnInventory(TFunctionRef<void()> Cleanup)
{
	TGuardValue<bool> Guard(bPreservingPawnInventory, true);
	Cleanup();
}

TArray<ULyraInventoryItemInstance*> ULyraInventoryManagerComponent::GetAllItems() const
{
	return InventoryList.GetAllItems();
}

ULyraInventoryItemInstance* ULyraInventoryManagerComponent::FindFirstItemStackByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	for (const FLyraInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				return Instance;
			}
		}
	}

	return nullptr;
}

int32 ULyraInventoryManagerComponent::GetTotalItemCountByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	if (!ItemDef) { return 0; }
	int64 TotalCount = 0;
	for (const FLyraInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				TotalCount += FMath::Max(0, Entry.StackCount);
			}
		}
	}

	return int32(FMath::Min<int64>(TotalCount, MAX_int32));
}

bool ULyraInventoryManagerComponent::ConsumeItemsByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 NumToConsume)
{
	AActor* OwningActor = GetOwner();
	if (!OwningActor || !OwningActor->HasAuthority() || bMutationInProgress || !ItemDef || NumToConsume <= 0
		|| GetTotalItemCountByDefinition(ItemDef) < NumToConsume)
	{
		return false;
	}

	TGuardValue<bool> MutationGuard(bMutationInProgress, true);
	int32 Remaining = NumToConsume;
	for (int32 Index = 0; Index < InventoryList.Entries.Num() && Remaining > 0;)
	{
		auto& Entry = InventoryList.Entries[Index];
		if (!IsValid(Entry.Instance) || Entry.Instance->GetItemDef() != ItemDef || Entry.StackCount <= 0)
		{
			++Index;
			continue;
		}
		const int32 Consumed = FMath::Min(Remaining, Entry.StackCount);
		Entry.StackCount -= Consumed;
		Remaining -= Consumed;
		if (Entry.StackCount == 0)
		{
			auto* Item = Entry.Instance.Get();
			RemoveEntryAndReferences(Item);
		}
		else
		{
			InventoryList.MarkItemDirty(Entry);
			++Index;
		}
	}

	check(Remaining == 0);
	return true;
}

void ULyraInventoryManagerComponent::ReadyForReplication()
{
	Super::ReadyForReplication();

	// Register existing ULyraInventoryItemInstance
	if (IsUsingRegisteredSubObjectList())
	{
		for (const FLyraInventoryEntry& Entry : InventoryList.Entries)
		{
			ULyraInventoryItemInstance* Instance = Entry.Instance;

			if (IsValid(Instance))
			{
				AddReplicatedSubObject(Instance);
			}
		}
	}
}

bool ULyraInventoryManagerComponent::ReplicateSubobjects(UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (FLyraInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (Instance && IsValid(Instance))
		{
			WroteSomething |= Channel->ReplicateSubobject(Instance, *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

//////////////////////////////////////////////////////////////////////
//

// UCLASS(Abstract)
// class ULyraInventoryFilter : public UObject
// {
// public:
// 	virtual bool PassesFilter(ULyraInventoryItemInstance* Instance) const { return true; }
// };

// UCLASS()
// class ULyraInventoryFilter_HasTag : public ULyraInventoryFilter
// {
// public:
// 	virtual bool PassesFilter(ULyraInventoryItemInstance* Instance) const { return true; }
// };


