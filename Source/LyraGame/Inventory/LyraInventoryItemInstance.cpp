// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryItemInstance.h"

#include "Inventory/LyraInventoryItemDefinition.h"
#include "Inventory/LyraInventoryItemSnapshot.h"
#include "Inventory/InventoryFragment_SetStats.h"
#include "Net/UnrealNetwork.h"

#if UE_WITH_IRIS
#include "Iris/ReplicationSystem/ReplicationFragmentUtil.h"
#endif // UE_WITH_IRIS

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraInventoryItemInstance)

class FLifetimeProperty;

ULyraInventoryItemInstance::ULyraInventoryItemInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ULyraInventoryItemInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, StatTags);
	DOREPLIFETIME(ThisClass, ItemDef);
}

#if UE_WITH_IRIS
void ULyraInventoryItemInstance::RegisterReplicationFragments(UE::Net::FFragmentRegistrationContext& Context, UE::Net::EFragmentRegistrationFlags RegistrationFlags)
{
	using namespace UE::Net;

	// Build descriptors and allocate PropertyReplicationFragments for this object
	FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject(this, Context, RegistrationFlags);
}
#endif // UE_WITH_IRIS

void ULyraInventoryItemInstance::AddStatTagStack(FGameplayTag Tag, int32 StackCount)
{
	StatTags.AddStack(Tag, StackCount);
}

void ULyraInventoryItemInstance::RemoveStatTagStack(FGameplayTag Tag, int32 StackCount)
{
	StatTags.RemoveStack(Tag, StackCount);
}

int32 ULyraInventoryItemInstance::GetStatTagStackCount(FGameplayTag Tag) const
{
	return StatTags.GetStackCount(Tag);
}

bool ULyraInventoryItemInstance::HasStatTag(FGameplayTag Tag) const
{
	return StatTags.ContainsTag(Tag);
}

bool ULyraInventoryItemInstance::HasDefaultStatTags() const
{
	if (!ItemDef) { return false; }
	TMap<FGameplayTag, int32> Expected;
	for (const ULyraInventoryItemFragment* Fragment : GetDefault<ULyraInventoryItemDefinition>(ItemDef)->Fragments)
	{
		if (const auto* Stats = Cast<UInventoryFragment_SetStats>(Fragment))
		{
			for (const auto& Pair : Stats->GetInitialItemStats())
			{
				if (Pair.Key.IsValid() && Pair.Value > 0)
				{
					const int64 Sum = int64(Expected.FindRef(Pair.Key)) + Pair.Value;
					if (Sum > MAX_int32) { return false; }
					Expected.Add(Pair.Key, int32(Sum));
				}
			}
		}
	}
	const auto& Actual = StatTags.GetTagCounts();
	if (Expected.Num() != Actual.Num()) { return false; }
	for (const auto& Pair : Expected)
	{
		if (Actual.FindRef(Pair.Key) != Pair.Value) { return false; }
	}
	return true;
}

void ULyraInventoryItemInstance::SetItemDef(TSubclassOf<ULyraInventoryItemDefinition> InDef)
{
	ItemDef = InDef;
}

void ULyraInventoryItemInstance::InitializeFromSnapshot(const FLyraInventoryItemSnapshot& Snapshot)
{
	// Only called on a fresh instance. Never copy a live FastArray serializer.
	check(Snapshot.IsValid());
	check(!ItemDef && StatTags.GetTagCounts().IsEmpty());
	ItemDef = Snapshot.ItemDef;
	for (const auto& Pair : Snapshot.StatTags)
	{
		StatTags.AddStack(Pair.Key, Pair.Value);
	}
}

const ULyraInventoryItemFragment* ULyraInventoryItemInstance::FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass) const
{
	if ((ItemDef != nullptr) && (FragmentClass != nullptr))
	{
		return GetDefault<ULyraInventoryItemDefinition>(ItemDef)->FindFragmentByClass(FragmentClass);
	}

	return nullptr;
}


