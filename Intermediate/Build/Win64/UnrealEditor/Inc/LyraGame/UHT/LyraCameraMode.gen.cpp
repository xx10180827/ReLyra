// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Camera/LyraCameraMode.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraModeStack();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraModeStack_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ELyraCameraModeBlendFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction;
static UEnum* ELyraCameraModeBlendFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraCameraModeBlendFunction"));
	}
	return Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraCameraModeBlendFunction>()
{
	return ELyraCameraModeBlendFunction_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ELyraCameraModeBlendFunction\n *\n *\x09""Blend function used for transitioning between camera modes.\n */" },
#endif
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "ELyraCameraModeBlendFunction::COUNT" },
		{ "EaseIn.Comment", "// Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseIn.Name", "ELyraCameraModeBlendFunction::EaseIn" },
		{ "EaseIn.ToolTip", "Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent." },
		{ "EaseInOut.Comment", "// Smoothly accelerates and decelerates.  Ease amount controlled by the exponent.\n" },
		{ "EaseInOut.Name", "ELyraCameraModeBlendFunction::EaseInOut" },
		{ "EaseInOut.ToolTip", "Smoothly accelerates and decelerates.  Ease amount controlled by the exponent." },
		{ "EaseOut.Comment", "// Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseOut.Name", "ELyraCameraModeBlendFunction::EaseOut" },
		{ "EaseOut.ToolTip", "Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent." },
		{ "Linear.Comment", "// Does a simple linear interpolation.\n" },
		{ "Linear.Name", "ELyraCameraModeBlendFunction::Linear" },
		{ "Linear.ToolTip", "Does a simple linear interpolation." },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ELyraCameraModeBlendFunction\n\n    Blend function used for transitioning between camera modes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraCameraModeBlendFunction::Linear", (int64)ELyraCameraModeBlendFunction::Linear },
		{ "ELyraCameraModeBlendFunction::EaseIn", (int64)ELyraCameraModeBlendFunction::EaseIn },
		{ "ELyraCameraModeBlendFunction::EaseOut", (int64)ELyraCameraModeBlendFunction::EaseOut },
		{ "ELyraCameraModeBlendFunction::EaseInOut", (int64)ELyraCameraModeBlendFunction::EaseInOut },
		{ "ELyraCameraModeBlendFunction::COUNT", (int64)ELyraCameraModeBlendFunction::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraCameraModeBlendFunction",
	"ELyraCameraModeBlendFunction",
	Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction()
{
	if (!Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.InnerSingleton;
}
// End Enum ELyraCameraModeBlendFunction

// Begin Class ULyraCameraMode
void ULyraCameraMode::StaticRegisterNativesULyraCameraMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraMode);
UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister()
{
	return ULyraCameraMode::StaticClass();
}
struct Z_Construct_UClass_ULyraCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraCameraMode\n *\n *\x09""Base class for all camera modes.\n */" },
#endif
		{ "IncludePath", "Camera/LyraCameraMode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraCameraMode\n\n    Base class for all camera modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTypeTag_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A tag that can be queried by gameplay code that cares when a kind of camera mode is active\n// without having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A tag that can be queried by gameplay code that cares when a kind of camera mode is active\nwithout having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "170.0" },
		{ "ClampMin", "5.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The horizontal field of view (in degrees).\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal field of view (in degrees)." },
#endif
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum view pitch (in degrees).\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum view pitch (in degrees)." },
#endif
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum view pitch (in degrees).\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum view pitch (in degrees)." },
#endif
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long it takes to blend in this mode.\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long it takes to blend in this mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function used for blending.\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function used for blending." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exponent used by blend functions to control the shape of the curve.\n" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exponent used by blend functions to control the shape of the curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetInterpolation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame. */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTypeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendFunction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
	static void NewProp_bResetInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag = { "CameraTypeTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, CameraTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTypeTag_MetaData), NewProp_CameraTypeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, ViewPitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMin_MetaData), NewProp_ViewPitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, ViewPitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMax_MetaData), NewProp_ViewPitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, BlendFunction), Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFunction_MetaData), NewProp_BlendFunction_MetaData) }; // 1611382477
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraMode, BlendExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendExponent_MetaData), NewProp_BlendExponent_MetaData) };
void Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_SetBit(void* Obj)
{
	((ULyraCameraMode*)Obj)->bResetInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation = { "bResetInterpolation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULyraCameraMode), &Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetInterpolation_MetaData), NewProp_bResetInterpolation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraMode_Statics::ClassParams = {
	&ULyraCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCameraMode()
{
	if (!Z_Registration_Info_UClass_ULyraCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraMode.OuterSingleton, Z_Construct_UClass_ULyraCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCameraMode.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCameraMode>()
{
	return ULyraCameraMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraMode);
ULyraCameraMode::~ULyraCameraMode() {}
// End Class ULyraCameraMode

// Begin Class ULyraCameraModeStack
void ULyraCameraModeStack::StaticRegisterNativesULyraCameraModeStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraModeStack);
UClass* Z_Construct_UClass_ULyraCameraModeStack_NoRegister()
{
	return ULyraCameraModeStack::StaticClass();
}
struct Z_Construct_UClass_ULyraCameraModeStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraCameraModeStack\n *\n *\x09Stack used for blending camera modes.\n */" },
#endif
		{ "IncludePath", "Camera/LyraCameraMode.h" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraCameraModeStack\n\n    Stack used for blending camera modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraModeStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraModeStack, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeInstances_MetaData), NewProp_CameraModeInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_Inner = { "CameraModeStack", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCameraModeStack, CameraModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraCameraModeStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraModeStack_Statics::ClassParams = {
	&ULyraCameraModeStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCameraModeStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCameraModeStack()
{
	if (!Z_Registration_Info_UClass_ULyraCameraModeStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraModeStack.OuterSingleton, Z_Construct_UClass_ULyraCameraModeStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCameraModeStack.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCameraModeStack>()
{
	return ULyraCameraModeStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraModeStack);
ULyraCameraModeStack::~ULyraCameraModeStack() {}
// End Class ULyraCameraModeStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELyraCameraModeBlendFunction_StaticEnum, TEXT("ELyraCameraModeBlendFunction"), &Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611382477U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraMode, ULyraCameraMode::StaticClass, TEXT("ULyraCameraMode"), &Z_Registration_Info_UClass_ULyraCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraMode), 3822634538U) },
		{ Z_Construct_UClass_ULyraCameraModeStack, ULyraCameraModeStack::StaticClass, TEXT("ULyraCameraModeStack"), &Z_Registration_Info_UClass_ULyraCameraModeStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraModeStack), 2902396006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_3882960887(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
