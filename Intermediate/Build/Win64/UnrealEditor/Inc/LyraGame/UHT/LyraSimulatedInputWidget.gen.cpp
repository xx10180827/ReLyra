// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/LyraSimulatedInputWidget.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSimulatedInputWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonHardwareVisibilityBorder_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSimulatedInputWidget Function FlushSimulatedInput
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "FlushSimulatedInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execFlushSimulatedInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlushSimulatedInput();
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function FlushSimulatedInput

// Begin Class ULyraSimulatedInputWidget Function GetAssociatedAction
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics
{
	struct LyraSimulatedInputWidget_eventGetAssociatedAction_Parms
	{
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSimulatedInputWidget_eventGetAssociatedAction_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "GetAssociatedAction", nullptr, nullptr, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::LyraSimulatedInputWidget_eventGetAssociatedAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::LyraSimulatedInputWidget_eventGetAssociatedAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execGetAssociatedAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->GetAssociatedAction();
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function GetAssociatedAction

// Begin Class ULyraSimulatedInputWidget Function GetEnhancedInputSubsystem
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics
{
	struct LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms
	{
		UEnhancedInputLocalPlayerSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the enhanced input subsystem based on the owning local player of this widget. Will return null if there is no owning player */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the enhanced input subsystem based on the owning local player of this widget. Will return null if there is no owning player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "GetEnhancedInputSubsystem", nullptr, nullptr, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execGetEnhancedInputSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedInputLocalPlayerSubsystem**)Z_Param__Result=P_THIS->GetEnhancedInputSubsystem();
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function GetEnhancedInputSubsystem

// Begin Class ULyraSimulatedInputWidget Function GetSimulatedKey
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics
{
	struct LyraSimulatedInputWidget_eventGetSimulatedKey_Parms
	{
		FKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current key that will be used to input any values. */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current key that will be used to input any values." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSimulatedInputWidget_eventGetSimulatedKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "GetSimulatedKey", nullptr, nullptr, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::LyraSimulatedInputWidget_eventGetSimulatedKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::LyraSimulatedInputWidget_eventGetSimulatedKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execGetSimulatedKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKey*)Z_Param__Result=P_THIS->GetSimulatedKey();
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function GetSimulatedKey

// Begin Class ULyraSimulatedInputWidget Function InputKeyValue
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics
{
	struct LyraSimulatedInputWidget_eventInputKeyValue_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Injects the given vector as an input to the current simulated key.\n\x09 * This calls \"InputKey\" on the current player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Injects the given vector as an input to the current simulated key.\nThis calls \"InputKey\" on the current player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSimulatedInputWidget_eventInputKeyValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "InputKeyValue", nullptr, nullptr, Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::LyraSimulatedInputWidget_eventInputKeyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::LyraSimulatedInputWidget_eventInputKeyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execInputKeyValue)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputKeyValue(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function InputKeyValue

// Begin Class ULyraSimulatedInputWidget Function InputKeyValue2D
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics
{
	struct LyraSimulatedInputWidget_eventInputKeyValue2D_Parms
	{
		FVector2D Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Injects the given vector as an input to the current simulated key.\n\x09 * This calls \"InputKey\" on the current player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Injects the given vector as an input to the current simulated key.\nThis calls \"InputKey\" on the current player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSimulatedInputWidget_eventInputKeyValue2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "InputKeyValue2D", nullptr, nullptr, Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::LyraSimulatedInputWidget_eventInputKeyValue2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::LyraSimulatedInputWidget_eventInputKeyValue2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execInputKeyValue2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputKeyValue2D(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function InputKeyValue2D

// Begin Class ULyraSimulatedInputWidget Function OnControlMappingsRebuilt
struct Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called whenever control mappings change, so we have a chance to adapt our own keys */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever control mappings change, so we have a chance to adapt our own keys" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "OnControlMappingsRebuilt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSimulatedInputWidget::execOnControlMappingsRebuilt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControlMappingsRebuilt();
	P_NATIVE_END;
}
// End Class ULyraSimulatedInputWidget Function OnControlMappingsRebuilt

// Begin Class ULyraSimulatedInputWidget
void ULyraSimulatedInputWidget::StaticRegisterNativesULyraSimulatedInputWidget()
{
	UClass* Class = ULyraSimulatedInputWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushSimulatedInput", &ULyraSimulatedInputWidget::execFlushSimulatedInput },
		{ "GetAssociatedAction", &ULyraSimulatedInputWidget::execGetAssociatedAction },
		{ "GetEnhancedInputSubsystem", &ULyraSimulatedInputWidget::execGetEnhancedInputSubsystem },
		{ "GetSimulatedKey", &ULyraSimulatedInputWidget::execGetSimulatedKey },
		{ "InputKeyValue", &ULyraSimulatedInputWidget::execInputKeyValue },
		{ "InputKeyValue2D", &ULyraSimulatedInputWidget::execInputKeyValue2D },
		{ "OnControlMappingsRebuilt", &ULyraSimulatedInputWidget::execOnControlMappingsRebuilt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSimulatedInputWidget);
UClass* Z_Construct_UClass_ULyraSimulatedInputWidget_NoRegister()
{
	return ULyraSimulatedInputWidget::StaticClass();
}
struct Z_Construct_UClass_ULyraSimulatedInputWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A UMG widget with base functionality to inject input (keys or input actions)\n *  to the enhanced input subsystem.\n */" },
#endif
		{ "DisplayName", "Lyra Simulated Input Widget" },
		{ "IncludePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A UMG widget with base functionality to inject input (keys or input actions)\nto the enhanced input subsystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonVisibilityBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LyraSimulatedInputWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The common visibility border will allow you to specify UI for only specific platforms if desired */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The common visibility border will allow you to specify UI for only specific platforms if desired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedAction_MetaData[] = {
		{ "Category", "LyraSimulatedInputWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The associated input action that we should simulate input for */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The associated input action that we should simulate input for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackBindingKey_MetaData[] = {
		{ "Category", "LyraSimulatedInputWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Key to simulate input for in the case where none are currently bound to the associated action */" },
#endif
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Key to simulate input for in the case where none are currently bound to the associated action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonVisibilityBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackBindingKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput, "FlushSimulatedInput" }, // 745470216
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction, "GetAssociatedAction" }, // 1224732831
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem, "GetEnhancedInputSubsystem" }, // 1990826529
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey, "GetSimulatedKey" }, // 3602096030
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue, "InputKeyValue" }, // 3749652842
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D, "InputKeyValue2D" }, // 3478275248
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_OnControlMappingsRebuilt, "OnControlMappingsRebuilt" }, // 1241237992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSimulatedInputWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder = { "CommonVisibilityBorder", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSimulatedInputWidget, CommonVisibilityBorder), Z_Construct_UClass_UCommonHardwareVisibilityBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonVisibilityBorder_MetaData), NewProp_CommonVisibilityBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction = { "AssociatedAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSimulatedInputWidget, AssociatedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedAction_MetaData), NewProp_AssociatedAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey = { "FallbackBindingKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSimulatedInputWidget, FallbackBindingKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackBindingKey_MetaData), NewProp_FallbackBindingKey_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::ClassParams = {
	&ULyraSimulatedInputWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSimulatedInputWidget()
{
	if (!Z_Registration_Info_UClass_ULyraSimulatedInputWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSimulatedInputWidget.OuterSingleton, Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSimulatedInputWidget.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSimulatedInputWidget>()
{
	return ULyraSimulatedInputWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSimulatedInputWidget);
ULyraSimulatedInputWidget::~ULyraSimulatedInputWidget() {}
// End Class ULyraSimulatedInputWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSimulatedInputWidget, ULyraSimulatedInputWidget::StaticClass, TEXT("ULyraSimulatedInputWidget"), &Z_Registration_Info_UClass_ULyraSimulatedInputWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSimulatedInputWidget), 3223835899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_3345679177(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
