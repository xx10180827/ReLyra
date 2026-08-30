// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Basic/MaterialProgressBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialProgressBar() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UMaterialProgressBar();
LYRAGAME_API UClass* Z_Construct_UClass_UMaterialProgressBar_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Delegate FOnFillAnimationFinished
struct Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "OnFillAnimationFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMaterialProgressBar::FOnFillAnimationFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFillAnimationFinished)
{
	OnFillAnimationFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFillAnimationFinished

// Begin Class UMaterialProgressBar Function AnimateProgressFromCurrent
struct Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics
{
	struct MaterialProgressBar_eventAnimateProgressFromCurrent_Parms
	{
		float End;
		float AnimSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_AnimSpeed", "1.000000" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromCurrent_Parms, End), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_AnimSpeed = { "AnimSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromCurrent_Parms, AnimSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_AnimSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "AnimateProgressFromCurrent", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::MaterialProgressBar_eventAnimateProgressFromCurrent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::MaterialProgressBar_eventAnimateProgressFromCurrent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execAnimateProgressFromCurrent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimateProgressFromCurrent(Z_Param_End,Z_Param_AnimSpeed);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function AnimateProgressFromCurrent

// Begin Class UMaterialProgressBar Function AnimateProgressFromStart
struct Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics
{
	struct MaterialProgressBar_eventAnimateProgressFromStart_Parms
	{
		float Start;
		float End;
		float AnimSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_AnimSpeed", "1.000000" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Start;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromStart_Parms, Start), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromStart_Parms, End), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_AnimSpeed = { "AnimSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromStart_Parms, AnimSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_AnimSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "AnimateProgressFromStart", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::MaterialProgressBar_eventAnimateProgressFromStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::MaterialProgressBar_eventAnimateProgressFromStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execAnimateProgressFromStart)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Start);
	P_GET_PROPERTY(FFloatProperty,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimateProgressFromStart(Z_Param_Start,Z_Param_End,Z_Param_AnimSpeed);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function AnimateProgressFromStart

// Begin Class UMaterialProgressBar Function SetColorA
struct Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics
{
	struct MaterialProgressBar_eventSetColorA_Parms
	{
		FLinearColor ColorA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::NewProp_ColorA = { "ColorA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventSetColorA_Parms, ColorA), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::NewProp_ColorA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetColorA", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::MaterialProgressBar_eventSetColorA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::MaterialProgressBar_eventSetColorA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetColorA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execSetColorA)
{
	P_GET_STRUCT(FLinearColor,Z_Param_ColorA);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorA(Z_Param_ColorA);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function SetColorA

// Begin Class UMaterialProgressBar Function SetColorB
struct Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics
{
	struct MaterialProgressBar_eventSetColorB_Parms
	{
		FLinearColor ColorB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventSetColorB_Parms, ColorB), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::NewProp_ColorB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetColorB", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::MaterialProgressBar_eventSetColorB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::MaterialProgressBar_eventSetColorB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetColorB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execSetColorB)
{
	P_GET_STRUCT(FLinearColor,Z_Param_ColorB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorB(Z_Param_ColorB);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function SetColorB

// Begin Class UMaterialProgressBar Function SetColorBackground
struct Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics
{
	struct MaterialProgressBar_eventSetColorBackground_Parms
	{
		FLinearColor ColorBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::NewProp_ColorBackground = { "ColorBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventSetColorBackground_Parms, ColorBackground), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::NewProp_ColorBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetColorBackground", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::MaterialProgressBar_eventSetColorBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::MaterialProgressBar_eventSetColorBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execSetColorBackground)
{
	P_GET_STRUCT(FLinearColor,Z_Param_ColorBackground);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorBackground(Z_Param_ColorBackground);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function SetColorBackground

// Begin Class UMaterialProgressBar Function SetProgress
struct Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics
{
	struct MaterialProgressBar_eventSetProgress_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventSetProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetProgress", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::MaterialProgressBar_eventSetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::MaterialProgressBar_eventSetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execSetProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProgress(Z_Param_Progress);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function SetProgress

// Begin Class UMaterialProgressBar Function SetStartProgress
struct Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics
{
	struct MaterialProgressBar_eventSetStartProgress_Parms
	{
		float StartProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::NewProp_StartProgress = { "StartProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialProgressBar_eventSetStartProgress_Parms, StartProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::NewProp_StartProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetStartProgress", nullptr, nullptr, Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::MaterialProgressBar_eventSetStartProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::MaterialProgressBar_eventSetStartProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialProgressBar::execSetStartProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartProgress(Z_Param_StartProgress);
	P_NATIVE_END;
}
// End Class UMaterialProgressBar Function SetStartProgress

// Begin Class UMaterialProgressBar
void UMaterialProgressBar::StaticRegisterNativesUMaterialProgressBar()
{
	UClass* Class = UMaterialProgressBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimateProgressFromCurrent", &UMaterialProgressBar::execAnimateProgressFromCurrent },
		{ "AnimateProgressFromStart", &UMaterialProgressBar::execAnimateProgressFromStart },
		{ "SetColorA", &UMaterialProgressBar::execSetColorA },
		{ "SetColorB", &UMaterialProgressBar::execSetColorB },
		{ "SetColorBackground", &UMaterialProgressBar::execSetColorBackground },
		{ "SetProgress", &UMaterialProgressBar::execSetProgress },
		{ "SetStartProgress", &UMaterialProgressBar::execSetStartProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialProgressBar);
UClass* Z_Construct_UClass_UMaterialProgressBar_NoRegister()
{
	return UMaterialProgressBar::StaticClass();
}
struct Z_Construct_UClass_UMaterialProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Basic/MaterialProgressBar.h" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFillAnimationFinished_MetaData[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultColorA_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "CachedColorA" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorA_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Color A" },
		{ "EditCondition", "bOverrideDefaultColorA" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultColorB_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "CachedColorB" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorB_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Color B" },
		{ "EditCondition", "bOverrideDefaultColorB" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultColorBackground_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "CachedColorBackground" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorBackground_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Color Background" },
		{ "EditCondition", "bOverrideDefaultColorBackground" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultSegments_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "Segments" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultSegments" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultSegmentEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "SegmentEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultSegmentEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultFillEdgeSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "FillEdgeSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillEdgeSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultFillEdgeSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultGlowEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "GlowEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlowEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultGlowEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultGlowSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "GlowSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlowSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultGlowSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultOutlineScale_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "OutlineScale" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineScale_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultOutlineScale" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStroke_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeMaterial_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoStrokeMaterial_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignTime_Progress_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Design Time Progress" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Bar_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "MaterialProgressBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundAnim_FillBar_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidgetAnim", "" },
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFillAnimationFinished;
	static void NewProp_bOverrideDefaultColorA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultColorA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorA;
	static void NewProp_bOverrideDefaultColorB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultColorB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorB;
	static void NewProp_bOverrideDefaultColorBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultColorBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorBackground;
	static void NewProp_bOverrideDefaultSegments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultSegments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
	static void NewProp_bOverrideDefaultSegmentEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultSegmentEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentEdge;
	static void NewProp_bOverrideDefaultFillEdgeSoftness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultFillEdgeSoftness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FillEdgeSoftness;
	static void NewProp_bOverrideDefaultGlowEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultGlowEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlowEdge;
	static void NewProp_bOverrideDefaultGlowSoftness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultGlowSoftness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlowSoftness;
	static void NewProp_bOverrideDefaultOutlineScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultOutlineScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineScale;
	static void NewProp_bUseStroke_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStroke;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrokeMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoStrokeMaterial;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesignTime_Progress;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Bar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundAnim_FillBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent, "AnimateProgressFromCurrent" }, // 1553828117
		{ &Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart, "AnimateProgressFromStart" }, // 4187224471
		{ &Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature, "OnFillAnimationFinished__DelegateSignature" }, // 3055943253
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetColorA, "SetColorA" }, // 1785433109
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetColorB, "SetColorB" }, // 694941076
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground, "SetColorBackground" }, // 1992410816
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetProgress, "SetProgress" }, // 2876077076
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress, "SetStartProgress" }, // 1774450658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished = { "OnFillAnimationFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, OnFillAnimationFinished), Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFillAnimationFinished_MetaData), NewProp_OnFillAnimationFinished_MetaData) }; // 3055943253
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultColorA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA = { "bOverrideDefaultColorA", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultColorA_MetaData), NewProp_bOverrideDefaultColorA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA = { "CachedColorA", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, CachedColorA), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedColorA_MetaData), NewProp_CachedColorA_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultColorB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB = { "bOverrideDefaultColorB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultColorB_MetaData), NewProp_bOverrideDefaultColorB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB = { "CachedColorB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, CachedColorB), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedColorB_MetaData), NewProp_CachedColorB_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultColorBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground = { "bOverrideDefaultColorBackground", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultColorBackground_MetaData), NewProp_bOverrideDefaultColorBackground_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground = { "CachedColorBackground", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, CachedColorBackground), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedColorBackground_MetaData), NewProp_CachedColorBackground_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultSegments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments = { "bOverrideDefaultSegments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultSegments_MetaData), NewProp_bOverrideDefaultSegments_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, Segments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultSegmentEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge = { "bOverrideDefaultSegmentEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultSegmentEdge_MetaData), NewProp_bOverrideDefaultSegmentEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge = { "SegmentEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, SegmentEdge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEdge_MetaData), NewProp_SegmentEdge_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultFillEdgeSoftness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness = { "bOverrideDefaultFillEdgeSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultFillEdgeSoftness_MetaData), NewProp_bOverrideDefaultFillEdgeSoftness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness = { "FillEdgeSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, FillEdgeSoftness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillEdgeSoftness_MetaData), NewProp_FillEdgeSoftness_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultGlowEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge = { "bOverrideDefaultGlowEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultGlowEdge_MetaData), NewProp_bOverrideDefaultGlowEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge = { "GlowEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, GlowEdge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlowEdge_MetaData), NewProp_GlowEdge_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultGlowSoftness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness = { "bOverrideDefaultGlowSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultGlowSoftness_MetaData), NewProp_bOverrideDefaultGlowSoftness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness = { "GlowSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, GlowSoftness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlowSoftness_MetaData), NewProp_GlowSoftness_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bOverrideDefaultOutlineScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale = { "bOverrideDefaultOutlineScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultOutlineScale_MetaData), NewProp_bOverrideDefaultOutlineScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale = { "OutlineScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, OutlineScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineScale_MetaData), NewProp_OutlineScale_MetaData) };
void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_SetBit(void* Obj)
{
	((UMaterialProgressBar*)Obj)->bUseStroke = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke = { "bUseStroke", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStroke_MetaData), NewProp_bUseStroke_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial = { "StrokeMaterial", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, StrokeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeMaterial_MetaData), NewProp_StrokeMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial = { "NoStrokeMaterial", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, NoStrokeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoStrokeMaterial_MetaData), NewProp_NoStrokeMaterial_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress = { "DesignTime_Progress", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, DesignTime_Progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignTime_Progress_MetaData), NewProp_DesignTime_Progress_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar = { "Image_Bar", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, Image_Bar), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Bar_MetaData), NewProp_Image_Bar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar = { "BoundAnim_FillBar", nullptr, (EPropertyFlags)0x0144000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, BoundAnim_FillBar), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundAnim_FillBar_MetaData), NewProp_BoundAnim_FillBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID = { "CachedMID", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialProgressBar, CachedMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMID_MetaData), NewProp_CachedMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialProgressBar_Statics::ClassParams = {
	&UMaterialProgressBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialProgressBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialProgressBar()
{
	if (!Z_Registration_Info_UClass_UMaterialProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialProgressBar.OuterSingleton, Z_Construct_UClass_UMaterialProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialProgressBar.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UMaterialProgressBar>()
{
	return UMaterialProgressBar::StaticClass();
}
UMaterialProgressBar::UMaterialProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialProgressBar);
UMaterialProgressBar::~UMaterialProgressBar() {}
// End Class UMaterialProgressBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialProgressBar, UMaterialProgressBar::StaticClass, TEXT("UMaterialProgressBar"), &Z_Registration_Info_UClass_UMaterialProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialProgressBar), 451010589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_821733276(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
