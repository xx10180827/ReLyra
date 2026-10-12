// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "LyraInventoryItemDefinition.generated.h"

template <typename T> class TSubclassOf;

class ULyraInventoryItemInstance;
class UTexture2D;
struct FFrame;

UENUM(BlueprintType)
enum class ELyraInventoryItemType : uint8
{
	Miscellaneous,
	Weapon,
	Ammunition,
	Consumable
};

//////////////////////////////////////////////////////////////////////

// Represents a fragment of an item definition
UCLASS(DefaultToInstanced, EditInlineNew, Abstract)
class LYRAGAME_API ULyraInventoryItemFragment : public UObject
{
	GENERATED_BODY()

public:
	virtual void OnInstanceCreated(ULyraInventoryItemInstance* Instance) const {}
};

//////////////////////////////////////////////////////////////////////

/**
 * ULyraInventoryItemDefinition
 */
UCLASS(Blueprintable, Const, Abstract)
class ULyraInventoryItemDefinition : public UObject
{
	GENERATED_BODY()

public:
	ULyraInventoryItemDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display, meta=(MultiLine=true))
	FText Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display)
	TSoftObjectPtr<UTexture2D> InventoryIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Inventory)
	ELyraInventoryItemType ItemType = ELyraInventoryItemType::Miscellaneous;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Inventory, meta=(ClampMin="1"))
	int32 MaxStackSize = 1;

	// Existing equippable definitions remain weapons without rewriting their assets.
	UFUNCTION(BlueprintPure, Category=Inventory)
	ELyraInventoryItemType GetInventoryItemType() const;

	UFUNCTION(BlueprintPure, Category=Inventory)
	int32 GetMaxStackSize() const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display, Instanced)
	TArray<TObjectPtr<ULyraInventoryItemFragment>> Fragments;

public:
	const ULyraInventoryItemFragment* FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass) const;
};

//@TODO: Make into a subsystem instead?
UCLASS()
class ULyraInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta=(DeterminesOutputType=FragmentClass))
	static const ULyraInventoryItemFragment* FindItemDefinitionFragment(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, TSubclassOf<ULyraInventoryItemFragment> FragmentClass);
};
