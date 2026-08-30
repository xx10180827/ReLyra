// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Equipment/LyraEquipmentManagerComponent.h"
#include "LyraGame/AbilitySystem/LyraAbilitySet.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEquipmentManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraEquipmentList();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraAppliedEquipmentEntry
static_assert(std::is_polymorphic<FLyraAppliedEquipmentEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraAppliedEquipmentEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry;
class UScriptStruct* FLyraAppliedEquipmentEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAppliedEquipmentEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAppliedEquipmentEntry>()
{
	return FLyraAppliedEquipmentEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A single piece of applied equipment */" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single piece of applied equipment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The equipment class that got equipped\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The equipment class that got equipped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Authority-only list of granted handles\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authority-only list of granted handles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAppliedEquipmentEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAppliedEquipmentEntry, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentDefinition_MetaData), NewProp_EquipmentDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAppliedEquipmentEntry, Instance), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles = { "GrantedHandles", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAppliedEquipmentEntry, GrantedHandles), Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedHandles_MetaData), NewProp_GrantedHandles_MetaData) }; // 3322214549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"LyraAppliedEquipmentEntry",
	Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers),
	sizeof(FLyraAppliedEquipmentEntry),
	alignof(FLyraAppliedEquipmentEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.InnerSingleton;
}
// End ScriptStruct FLyraAppliedEquipmentEntry

// Begin ScriptStruct FLyraEquipmentList
static_assert(std::is_polymorphic<FLyraEquipmentList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraEquipmentList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraEquipmentList;
class UScriptStruct* FLyraEquipmentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraEquipmentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraEquipmentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraEquipmentList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraEquipmentList"));
	}
	return Z_Registration_Info_UScriptStruct_LyraEquipmentList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraEquipmentList>()
{
	return FLyraEquipmentList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FLyraEquipmentList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraEquipmentList);
#endif
struct Z_Construct_UScriptStruct_FLyraEquipmentList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of applied equipment */" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of applied equipment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of equipment entries\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of equipment entries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraEquipmentList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry, METADATA_PARAMS(0, nullptr) }; // 3484684559
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraEquipmentList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3484684559
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraEquipmentList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"LyraEquipmentList",
	Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers),
	sizeof(FLyraEquipmentList),
	alignof(FLyraEquipmentList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraEquipmentList()
{
	if (!Z_Registration_Info_UScriptStruct_LyraEquipmentList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraEquipmentList.InnerSingleton, Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraEquipmentList.InnerSingleton;
}
// End ScriptStruct FLyraEquipmentList

// Begin Class ULyraEquipmentManagerComponent Function EquipItem
struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics
{
	struct LyraEquipmentManagerComponent_eventEquipItem_Parms
	{
		TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition;
		ULyraEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventEquipItem_Parms, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventEquipItem_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_EquipmentDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "EquipItem", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::LyraEquipmentManagerComponent_eventEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::LyraEquipmentManagerComponent_eventEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execEquipItem)
{
	P_GET_OBJECT(UClass,Z_Param_EquipmentDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->EquipItem(Z_Param_EquipmentDefinition);
	P_NATIVE_END;
}
// End Class ULyraEquipmentManagerComponent Function EquipItem

// Begin Class ULyraEquipmentManagerComponent Function GetEquipmentInstancesOfType
struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics
{
	struct LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms
	{
		TSubclassOf<ULyraEquipmentInstance> InstanceType;
		TArray<ULyraEquipmentInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns all equipped instances of a given type, or an empty array if none are found */" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all equipped instances of a given type, or an empty array if none are found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "GetEquipmentInstancesOfType", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execGetEquipmentInstancesOfType)
{
	P_GET_OBJECT(UClass,Z_Param_InstanceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraEquipmentInstance*>*)Z_Param__Result=P_THIS->GetEquipmentInstancesOfType(Z_Param_InstanceType);
	P_NATIVE_END;
}
// End Class ULyraEquipmentManagerComponent Function GetEquipmentInstancesOfType

// Begin Class ULyraEquipmentManagerComponent Function GetFirstInstanceOfType
struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics
{
	struct LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms
	{
		TSubclassOf<ULyraEquipmentInstance> InstanceType;
		ULyraEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the first equipped instance of a given type, or nullptr if none are found */" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first equipped instance of a given type, or nullptr if none are found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "GetFirstInstanceOfType", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execGetFirstInstanceOfType)
{
	P_GET_OBJECT(UClass,Z_Param_InstanceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->GetFirstInstanceOfType(Z_Param_InstanceType);
	P_NATIVE_END;
}
// End Class ULyraEquipmentManagerComponent Function GetFirstInstanceOfType

// Begin Class ULyraEquipmentManagerComponent Function UnequipItem
struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics
{
	struct LyraEquipmentManagerComponent_eventUnequipItem_Parms
	{
		ULyraEquipmentInstance* ItemInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventUnequipItem_Parms, ItemInstance), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "UnequipItem", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::LyraEquipmentManagerComponent_eventUnequipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::LyraEquipmentManagerComponent_eventUnequipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execUnequipItem)
{
	P_GET_OBJECT(ULyraEquipmentInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnequipItem(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class ULyraEquipmentManagerComponent Function UnequipItem

// Begin Class ULyraEquipmentManagerComponent
void ULyraEquipmentManagerComponent::StaticRegisterNativesULyraEquipmentManagerComponent()
{
	UClass* Class = ULyraEquipmentManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipItem", &ULyraEquipmentManagerComponent::execEquipItem },
		{ "GetEquipmentInstancesOfType", &ULyraEquipmentManagerComponent::execGetEquipmentInstancesOfType },
		{ "GetFirstInstanceOfType", &ULyraEquipmentManagerComponent::execGetFirstInstanceOfType },
		{ "UnequipItem", &ULyraEquipmentManagerComponent::execUnequipItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraEquipmentManagerComponent);
UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent_NoRegister()
{
	return ULyraEquipmentManagerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages equipment applied to a pawn\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages equipment applied to a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentList_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem, "EquipItem" }, // 2559626297
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType, "GetEquipmentInstancesOfType" }, // 2246725947
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType, "GetFirstInstanceOfType" }, // 4237005983
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem, "UnequipItem" }, // 664167058
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraEquipmentManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList = { "EquipmentList", nullptr, (EPropertyFlags)0x0040008000000030, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraEquipmentManagerComponent, EquipmentList), Z_Construct_UScriptStruct_FLyraEquipmentList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentList_MetaData), NewProp_EquipmentList_MetaData) }; // 1014251434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::ClassParams = {
	&ULyraEquipmentManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers),
	0,
	0x00A100A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraEquipmentManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraEquipmentManagerComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraEquipmentManagerComponent>()
{
	return ULyraEquipmentManagerComponent::StaticClass();
}
void ULyraEquipmentManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EquipmentList(TEXT("EquipmentList"));
	const bool bIsValid = true
		&& Name_EquipmentList == ClassReps[(int32)ENetFields_Private::EquipmentList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraEquipmentManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraEquipmentManagerComponent);
ULyraEquipmentManagerComponent::~ULyraEquipmentManagerComponent() {}
// End Class ULyraEquipmentManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAppliedEquipmentEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewStructOps, TEXT("LyraAppliedEquipmentEntry"), &Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAppliedEquipmentEntry), 3484684559U) },
		{ FLyraEquipmentList::StaticStruct, Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewStructOps, TEXT("LyraEquipmentList"), &Z_Registration_Info_UScriptStruct_LyraEquipmentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraEquipmentList), 1014251434U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraEquipmentManagerComponent, ULyraEquipmentManagerComponent::StaticClass, TEXT("ULyraEquipmentManagerComponent"), &Z_Registration_Info_UClass_ULyraEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraEquipmentManagerComponent), 430992799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_1778271864(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
