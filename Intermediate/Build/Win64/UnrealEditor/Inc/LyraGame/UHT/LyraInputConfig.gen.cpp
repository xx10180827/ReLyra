// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Input/LyraInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputConfig();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputConfig_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInputAction();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraInputAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInputAction;
class UScriptStruct* FLyraInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInputAction, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInputAction.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInputAction>()
{
	return FLyraInputAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraInputAction\n *\n *\x09Struct used to map a input action to a gameplay input tag.\n */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraInputAction\n\n    Struct used to map a input action to a gameplay input tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "LyraInputAction" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "LyraInputAction" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraInputAction",
	Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers),
	sizeof(FLyraInputAction),
	alignof(FLyraInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInputAction.InnerSingleton, Z_Construct_UScriptStruct_FLyraInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraInputAction.InnerSingleton;
}
// End ScriptStruct FLyraInputAction

// Begin Class ULyraInputConfig Function FindAbilityInputActionForTag
struct Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics
{
	struct LyraInputConfig_eventFindAbilityInputActionForTag_Parms
	{
		FGameplayTag InputTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInputConfig_eventFindAbilityInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((LyraInputConfig_eventFindAbilityInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraInputConfig_eventFindAbilityInputActionForTag_Parms), &Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInputConfig_eventFindAbilityInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInputConfig, nullptr, "FindAbilityInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::LyraInputConfig_eventFindAbilityInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::LyraInputConfig_eventFindAbilityInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInputConfig::execFindAbilityInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindAbilityInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// End Class ULyraInputConfig Function FindAbilityInputActionForTag

// Begin Class ULyraInputConfig Function FindNativeInputActionForTag
struct Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics
{
	struct LyraInputConfig_eventFindNativeInputActionForTag_Parms
	{
		FGameplayTag InputTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInputConfig_eventFindNativeInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((LyraInputConfig_eventFindNativeInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraInputConfig_eventFindNativeInputActionForTag_Parms), &Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInputConfig_eventFindNativeInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInputConfig, nullptr, "FindNativeInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::LyraInputConfig_eventFindNativeInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::LyraInputConfig_eventFindNativeInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInputConfig::execFindNativeInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindNativeInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// End Class ULyraInputConfig Function FindNativeInputActionForTag

// Begin Class ULyraInputConfig
void ULyraInputConfig::StaticRegisterNativesULyraInputConfig()
{
	UClass* Class = ULyraInputConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindAbilityInputActionForTag", &ULyraInputConfig::execFindAbilityInputActionForTag },
		{ "FindNativeInputActionForTag", &ULyraInputConfig::execFindNativeInputActionForTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputConfig);
UClass* Z_Construct_UClass_ULyraInputConfig_NoRegister()
{
	return ULyraInputConfig::StaticClass();
}
struct Z_Construct_UClass_ULyraInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraInputConfig\n *\n *\x09Non-mutable data asset that contains input configuration properties.\n */" },
#endif
		{ "IncludePath", "Input/LyraInputConfig.h" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraInputConfig\n\n    Non-mutable data asset that contains input configuration properties." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "LyraInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound.\n" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "LyraInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags.\n" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag, "FindAbilityInputActionForTag" }, // 1734908005
		{ &Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag, "FindNativeInputActionForTag" }, // 2340640036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraInputAction, METADATA_PARAMS(0, nullptr) }; // 46609985
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 46609985
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraInputAction, METADATA_PARAMS(0, nullptr) }; // 46609985
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 46609985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputConfig_Statics::ClassParams = {
	&ULyraInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInputConfig()
{
	if (!Z_Registration_Info_UClass_ULyraInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputConfig.OuterSingleton, Z_Construct_UClass_ULyraInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInputConfig.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInputConfig>()
{
	return ULyraInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputConfig);
ULyraInputConfig::~ULyraInputConfig() {}
// End Class ULyraInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraInputAction::StaticStruct, Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewStructOps, TEXT("LyraInputAction"), &Z_Registration_Info_UScriptStruct_LyraInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInputAction), 46609985U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInputConfig, ULyraInputConfig::StaticClass, TEXT("ULyraInputConfig"), &Z_Registration_Info_UClass_ULyraInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputConfig), 2797413737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_1596402001(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
