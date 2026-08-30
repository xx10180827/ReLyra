// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/LyraInventoryManagerComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInventoryManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryManagerComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryChangeMessage();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryEntry();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryList();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraInventoryChangeMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage;
class UScriptStruct* FLyraInventoryChangeMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInventoryChangeMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInventoryChangeMessage>()
{
	return FLyraInventoryChangeMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A message when an item is added to the inventory */" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A message when an item is added to the inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOwner_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInventoryChangeMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner = { "InventoryOwner", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryChangeMessage, InventoryOwner), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryOwner_MetaData), NewProp_InventoryOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryChangeMessage, Instance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryChangeMessage, NewCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCount_MetaData), NewProp_NewCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryChangeMessage, Delta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraInventoryChangeMessage",
	Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers),
	sizeof(FLyraInventoryChangeMessage),
	alignof(FLyraInventoryChangeMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryChangeMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.InnerSingleton;
}
// End ScriptStruct FLyraInventoryChangeMessage

// Begin ScriptStruct FLyraInventoryEntry
static_assert(std::is_polymorphic<FLyraInventoryEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraInventoryEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInventoryEntry;
class UScriptStruct* FLyraInventoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInventoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInventoryEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInventoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInventoryEntry>()
{
	return FLyraInventoryEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A single entry in an inventory */" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single entry in an inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastObservedCount_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastObservedCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInventoryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryEntry, Instance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryEntry, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount = { "LastObservedCount", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryEntry, LastObservedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastObservedCount_MetaData), NewProp_LastObservedCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"LyraInventoryEntry",
	Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers),
	sizeof(FLyraInventoryEntry),
	alignof(FLyraInventoryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInventoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryEntry.InnerSingleton;
}
// End ScriptStruct FLyraInventoryEntry

// Begin ScriptStruct FLyraInventoryList
static_assert(std::is_polymorphic<FLyraInventoryList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraInventoryList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInventoryList;
class UScriptStruct* FLyraInventoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInventoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInventoryList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInventoryList"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInventoryList>()
{
	return FLyraInventoryList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FLyraInventoryList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraInventoryList);
#endif
struct Z_Construct_UScriptStruct_FLyraInventoryList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of inventory items */" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of inventory items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of items\n" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInventoryList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraInventoryEntry, METADATA_PARAMS(0, nullptr) }; // 2762558394
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2762558394
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInventoryList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"LyraInventoryList",
	Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers),
	sizeof(FLyraInventoryList),
	alignof(FLyraInventoryList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraInventoryList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryList()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInventoryList.InnerSingleton, Z_Construct_UScriptStruct_FLyraInventoryList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryList.InnerSingleton;
}
// End ScriptStruct FLyraInventoryList

// Begin Class ULyraInventoryManagerComponent Function AddItemDefinition
struct Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics
{
	struct LyraInventoryManagerComponent_eventAddItemDefinition_Parms
	{
		TSubclassOf<ULyraInventoryItemDefinition> ItemDef;
		int32 StackCount;
		ULyraInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_StackCount", "1" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemDefinition_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "AddItemDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::LyraInventoryManagerComponent_eventAddItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::LyraInventoryManagerComponent_eventAddItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryManagerComponent::execAddItemDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->AddItemDefinition(Z_Param_ItemDef,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraInventoryManagerComponent Function AddItemDefinition

// Begin Class ULyraInventoryManagerComponent Function AddItemInstance
struct Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics
{
	struct LyraInventoryManagerComponent_eventAddItemInstance_Parms
	{
		ULyraInventoryItemInstance* ItemInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "AddItemInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::LyraInventoryManagerComponent_eventAddItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::LyraInventoryManagerComponent_eventAddItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryManagerComponent::execAddItemInstance)
{
	P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemInstance(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class ULyraInventoryManagerComponent Function AddItemInstance

// Begin Class ULyraInventoryManagerComponent Function CanAddItemDefinition
struct Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics
{
	struct LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms
	{
		TSubclassOf<ULyraInventoryItemDefinition> ItemDef;
		int32 StackCount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_StackCount", "1" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms), &Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "CanAddItemDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryManagerComponent::execCanAddItemDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddItemDefinition(Z_Param_ItemDef,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraInventoryManagerComponent Function CanAddItemDefinition

// Begin Class ULyraInventoryManagerComponent Function FindFirstItemStackByDefinition
struct Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics
{
	struct LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms
	{
		TSubclassOf<ULyraInventoryItemDefinition> ItemDef;
		ULyraInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "FindFirstItemStackByDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryManagerComponent::execFindFirstItemStackByDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->FindFirstItemStackByDefinition(Z_Param_ItemDef);
	P_NATIVE_END;
}
// End Class ULyraInventoryManagerComponent Function FindFirstItemStackByDefinition

// Begin Class ULyraInventoryManagerComponent Function GetAllItems
struct Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics
{
	struct LyraInventoryManagerComponent_eventGetAllItems_Parms
	{
		TArray<ULyraInventoryItemInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "GetAllItems", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::LyraInventoryManagerComponent_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::LyraInventoryManagerComponent_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryManagerComponent::execGetAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetAllItems();
	P_NATIVE_END;
}
// End Class ULyraInventoryManagerComponent Function GetAllItems

// Begin Class ULyraInventoryManagerComponent Function RemoveItemInstance
struct Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics
{
	struct LyraInventoryManagerComponent_eventRemoveItemInstance_Parms
	{
		ULyraInventoryItemInstance* ItemInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryManagerComponent_eventRemoveItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "RemoveItemInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::LyraInventoryManagerComponent_eventRemoveItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::LyraInventoryManagerComponent_eventRemoveItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryManagerComponent::execRemoveItemInstance)
{
	P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemInstance(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class ULyraInventoryManagerComponent Function RemoveItemInstance

// Begin Class ULyraInventoryManagerComponent
void ULyraInventoryManagerComponent::StaticRegisterNativesULyraInventoryManagerComponent()
{
	UClass* Class = ULyraInventoryManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemDefinition", &ULyraInventoryManagerComponent::execAddItemDefinition },
		{ "AddItemInstance", &ULyraInventoryManagerComponent::execAddItemInstance },
		{ "CanAddItemDefinition", &ULyraInventoryManagerComponent::execCanAddItemDefinition },
		{ "FindFirstItemStackByDefinition", &ULyraInventoryManagerComponent::execFindFirstItemStackByDefinition },
		{ "GetAllItems", &ULyraInventoryManagerComponent::execGetAllItems },
		{ "RemoveItemInstance", &ULyraInventoryManagerComponent::execRemoveItemInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryManagerComponent);
UClass* Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister()
{
	return ULyraInventoryManagerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraInventoryManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages an inventory\n */" },
#endif
		{ "IncludePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages an inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition, "AddItemDefinition" }, // 940893233
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance, "AddItemInstance" }, // 2139561162
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition, "CanAddItemDefinition" }, // 732182595
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition, "FindFirstItemStackByDefinition" }, // 2009381956
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems, "GetAllItems" }, // 231367481
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance, "RemoveItemInstance" }, // 92560425
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInventoryManagerComponent, InventoryList), Z_Construct_UScriptStruct_FLyraInventoryList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryList_MetaData), NewProp_InventoryList_MetaData) }; // 3911428757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::ClassParams = {
	&ULyraInventoryManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInventoryManagerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraInventoryManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInventoryManagerComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryManagerComponent>()
{
	return ULyraInventoryManagerComponent::StaticClass();
}
void ULyraInventoryManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_InventoryList(TEXT("InventoryList"));
	const bool bIsValid = true
		&& Name_InventoryList == ClassReps[(int32)ENetFields_Private::InventoryList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraInventoryManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryManagerComponent);
ULyraInventoryManagerComponent::~ULyraInventoryManagerComponent() {}
// End Class ULyraInventoryManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraInventoryChangeMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewStructOps, TEXT("LyraInventoryChangeMessage"), &Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInventoryChangeMessage), 385530698U) },
		{ FLyraInventoryEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewStructOps, TEXT("LyraInventoryEntry"), &Z_Registration_Info_UScriptStruct_LyraInventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInventoryEntry), 2762558394U) },
		{ FLyraInventoryList::StaticStruct, Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewStructOps, TEXT("LyraInventoryList"), &Z_Registration_Info_UScriptStruct_LyraInventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInventoryList), 3911428757U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInventoryManagerComponent, ULyraInventoryManagerComponent::StaticClass, TEXT("ULyraInventoryManagerComponent"), &Z_Registration_Info_UClass_ULyraInventoryManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryManagerComponent), 1171517227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_70412829(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
