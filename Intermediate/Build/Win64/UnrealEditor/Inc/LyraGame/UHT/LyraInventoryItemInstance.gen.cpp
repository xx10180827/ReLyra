// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/LyraInventoryItemInstance.h"
#include "LyraGame/System/GameplayTagStack.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInventoryItemInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraInventoryItemInstance Function AddStatTagStack
struct Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics
{
	struct LyraInventoryItemInstance_eventAddStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)\n" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "AddStatTagStack", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::LyraInventoryItemInstance_eventAddStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::LyraInventoryItemInstance_eventAddStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryItemInstance::execAddStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraInventoryItemInstance Function AddStatTagStack

// Begin Class ULyraInventoryItemInstance Function FindFragmentByClass
struct Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics
{
	struct LyraInventoryItemInstance_eventFindFragmentByClass_Parms
	{
		TSubclassOf<ULyraInventoryItemFragment> FragmentClass;
		const ULyraInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventFindFragmentByClass_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "FindFragmentByClass", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::LyraInventoryItemInstance_eventFindFragmentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::LyraInventoryItemInstance_eventFindFragmentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryItemInstance::execFindFragmentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ULyraInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_FragmentClass);
	P_NATIVE_END;
}
// End Class ULyraInventoryItemInstance Function FindFragmentByClass

// Begin Class ULyraInventoryItemInstance Function GetStatTagStackCount
struct Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics
{
	struct LyraInventoryItemInstance_eventGetStatTagStackCount_Parms
	{
		FGameplayTag Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present)\n" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "GetStatTagStackCount", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::LyraInventoryItemInstance_eventGetStatTagStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::LyraInventoryItemInstance_eventGetStatTagStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryItemInstance::execGetStatTagStackCount)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ULyraInventoryItemInstance Function GetStatTagStackCount

// Begin Class ULyraInventoryItemInstance Function HasStatTag
struct Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics
{
	struct LyraInventoryItemInstance_eventHasStatTag_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if there is at least one stack of the specified tag\n" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventHasStatTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraInventoryItemInstance_eventHasStatTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraInventoryItemInstance_eventHasStatTag_Parms), &Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "HasStatTag", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::LyraInventoryItemInstance_eventHasStatTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::LyraInventoryItemInstance_eventHasStatTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryItemInstance::execHasStatTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasStatTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ULyraInventoryItemInstance Function HasStatTag

// Begin Class ULyraInventoryItemInstance Function RemoveStatTagStack
struct Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics
{
	struct LyraInventoryItemInstance_eventRemoveStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)\n" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryItemInstance_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "RemoveStatTagStack", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::LyraInventoryItemInstance_eventRemoveStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::LyraInventoryItemInstance_eventRemoveStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryItemInstance::execRemoveStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraInventoryItemInstance Function RemoveStatTagStack

// Begin Class ULyraInventoryItemInstance
void ULyraInventoryItemInstance::StaticRegisterNativesULyraInventoryItemInstance()
{
	UClass* Class = ULyraInventoryItemInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddStatTagStack", &ULyraInventoryItemInstance::execAddStatTagStack },
		{ "FindFragmentByClass", &ULyraInventoryItemInstance::execFindFragmentByClass },
		{ "GetStatTagStackCount", &ULyraInventoryItemInstance::execGetStatTagStackCount },
		{ "HasStatTag", &ULyraInventoryItemInstance::execHasStatTag },
		{ "RemoveStatTagStack", &ULyraInventoryItemInstance::execRemoveStatTagStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryItemInstance);
UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister()
{
	return ULyraInventoryItemInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraInventoryItemInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraInventoryItemInstance\n */" },
#endif
		{ "IncludePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraInventoryItemInstance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The item definition\n" },
#endif
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The item definition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack, "AddStatTagStack" }, // 196181504
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass, "FindFragmentByClass" }, // 1722664729
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount, "GetStatTagStackCount" }, // 4193754830
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag, "HasStatTag" }, // 2598682131
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack, "RemoveStatTagStack" }, // 3359208670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryItemInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInventoryItemInstance, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTags_MetaData), NewProp_StatTags_MetaData) }; // 3610867483
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0044000000000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInventoryItemInstance, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDef_MetaData), NewProp_ItemDef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraInventoryItemInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryItemInstance_Statics::ClassParams = {
	&ULyraInventoryItemInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInventoryItemInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInventoryItemInstance()
{
	if (!Z_Registration_Info_UClass_ULyraInventoryItemInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryItemInstance.OuterSingleton, Z_Construct_UClass_ULyraInventoryItemInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInventoryItemInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryItemInstance>()
{
	return ULyraInventoryItemInstance::StaticClass();
}
void ULyraInventoryItemInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StatTags(TEXT("StatTags"));
	static const FName Name_ItemDef(TEXT("ItemDef"));
	const bool bIsValid = true
		&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName()
		&& Name_ItemDef == ClassReps[(int32)ENetFields_Private::ItemDef].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraInventoryItemInstance"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryItemInstance);
ULyraInventoryItemInstance::~ULyraInventoryItemInstance() {}
// End Class ULyraInventoryItemInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInventoryItemInstance, ULyraInventoryItemInstance::StaticClass, TEXT("ULyraInventoryItemInstance"), &Z_Registration_Info_UClass_ULyraInventoryItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryItemInstance), 2390782932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_2796688837(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
