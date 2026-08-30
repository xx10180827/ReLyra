// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Input/LyraInputModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputModifiers() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAimSensitivityData_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierAimInversion();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierAimInversion_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierDeadZone();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierDeadZone_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingBasedScalar();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingBasedScalar_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EDeadzoneStick();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraTargetingType();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingBasedScalar
void ULyraSettingBasedScalar::StaticRegisterNativesULyraSettingBasedScalar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingBasedScalar);
UClass* Z_Construct_UClass_ULyraSettingBasedScalar_NoRegister()
{
	return ULyraSettingBasedScalar::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingBasedScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n*  Scales input basedon a double property in the SharedUserSettings\n*/" },
#endif
		{ "DisplayName", "Setting Based Scalar" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales input basedon a double property in the SharedUserSettings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the property that will be used to clamp the X Axis of this value */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the property that will be used to clamp the X Axis of this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the property that will be used to clamp the Y Axis of this value */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the property that will be used to clamp the Y Axis of this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the property that will be used to clamp the Z Axis of this value */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the property that will be used to clamp the Z Axis of this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueClamp_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the maximium value of this setting on each axis. */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximium value of this setting on each axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValueClamp_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the minimum value of this setting on each axis. */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the minimum value of this setting on each axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_XAxisScalarSettingName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_YAxisScalarSettingName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ZAxisScalarSettingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValueClamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinValueClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingBasedScalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName = { "XAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingBasedScalar, XAxisScalarSettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxisScalarSettingName_MetaData), NewProp_XAxisScalarSettingName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName = { "YAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingBasedScalar, YAxisScalarSettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisScalarSettingName_MetaData), NewProp_YAxisScalarSettingName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName = { "ZAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingBasedScalar, ZAxisScalarSettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxisScalarSettingName_MetaData), NewProp_ZAxisScalarSettingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp = { "MaxValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingBasedScalar, MaxValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValueClamp_MetaData), NewProp_MaxValueClamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp = { "MinValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingBasedScalar, MinValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValueClamp_MetaData), NewProp_MinValueClamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSettingBasedScalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::ClassParams = {
	&ULyraSettingBasedScalar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers),
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingBasedScalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingBasedScalar()
{
	if (!Z_Registration_Info_UClass_ULyraSettingBasedScalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingBasedScalar.OuterSingleton, Z_Construct_UClass_ULyraSettingBasedScalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingBasedScalar.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingBasedScalar>()
{
	return ULyraSettingBasedScalar::StaticClass();
}
ULyraSettingBasedScalar::ULyraSettingBasedScalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingBasedScalar);
ULyraSettingBasedScalar::~ULyraSettingBasedScalar() {}
// End Class ULyraSettingBasedScalar

// Begin Enum EDeadzoneStick
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeadzoneStick;
static UEnum* EDeadzoneStick_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EDeadzoneStick, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EDeadzoneStick"));
	}
	return Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<EDeadzoneStick>()
{
	return EDeadzoneStick_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents which stick that this deadzone is for, either the move or the look stick */" },
#endif
		{ "LookStick.Comment", "/** Deadzone for the looking stick */" },
		{ "LookStick.Name", "EDeadzoneStick::LookStick" },
		{ "LookStick.ToolTip", "Deadzone for the looking stick" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "MoveStick.Comment", "/** Deadzone for the movement stick */" },
		{ "MoveStick.Name", "EDeadzoneStick::MoveStick" },
		{ "MoveStick.ToolTip", "Deadzone for the movement stick" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents which stick that this deadzone is for, either the move or the look stick" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDeadzoneStick::MoveStick", (int64)EDeadzoneStick::MoveStick },
		{ "EDeadzoneStick::LookStick", (int64)EDeadzoneStick::LookStick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"EDeadzoneStick",
	"EDeadzoneStick",
	Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_EDeadzoneStick()
{
	if (!Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton, Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton;
}
// End Enum EDeadzoneStick

// Begin Class ULyraInputModifierDeadZone
void ULyraInputModifierDeadZone::StaticRegisterNativesULyraInputModifierDeadZone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputModifierDeadZone);
UClass* Z_Construct_UClass_ULyraInputModifierDeadZone_NoRegister()
{
	return ULyraInputModifierDeadZone::StaticClass();
}
struct Z_Construct_UClass_ULyraInputModifierDeadZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is a deadzone input modifier that will have it's thresholds driven by what is in the Lyra Shared game settings. \n */" },
#endif
		{ "DisplayName", "Lyra Settings Driven Dead Zone" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a deadzone input modifier that will have it's thresholds driven by what is in the Lyra Shared game settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperThreshold_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Threshold above which input is clamped to 1\n" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Threshold above which input is clamped to 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneStick_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Which stick this deadzone is for. This controls which setting will be used when calculating the deadzone */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which stick this deadzone is for. This controls which setting will be used when calculating the deadzone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeadzoneStick_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeadzoneStick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputModifierDeadZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputModifierDeadZone, Type), Z_Construct_UEnum_EnhancedInput_EDeadZoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1668477402
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold = { "UpperThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputModifierDeadZone, UpperThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperThreshold_MetaData), NewProp_UpperThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick = { "DeadzoneStick", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputModifierDeadZone, DeadzoneStick), Z_Construct_UEnum_LyraGame_EDeadzoneStick, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadzoneStick_MetaData), NewProp_DeadzoneStick_MetaData) }; // 2169288601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::ClassParams = {
	&ULyraInputModifierDeadZone::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInputModifierDeadZone()
{
	if (!Z_Registration_Info_UClass_ULyraInputModifierDeadZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputModifierDeadZone.OuterSingleton, Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInputModifierDeadZone.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInputModifierDeadZone>()
{
	return ULyraInputModifierDeadZone::StaticClass();
}
ULyraInputModifierDeadZone::ULyraInputModifierDeadZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputModifierDeadZone);
ULyraInputModifierDeadZone::~ULyraInputModifierDeadZone() {}
// End Class ULyraInputModifierDeadZone

// Begin Enum ELyraTargetingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraTargetingType;
static UEnum* ELyraTargetingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraTargetingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraTargetingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraTargetingType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraTargetingType"));
	}
	return Z_Registration_Info_UEnum_ELyraTargetingType.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraTargetingType>()
{
	return ELyraTargetingType_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ADS.Comment", "/** The sensitivity that should be applied while Aiming Down Sights */" },
		{ "ADS.Name", "ELyraTargetingType::ADS" },
		{ "ADS.ToolTip", "The sensitivity that should be applied while Aiming Down Sights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of targeting sensitity that should be considered */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "Normal.Comment", "/** Sensitivity to be applied why normally looking around */" },
		{ "Normal.Name", "ELyraTargetingType::Normal" },
		{ "Normal.ToolTip", "Sensitivity to be applied why normally looking around" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of targeting sensitity that should be considered" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraTargetingType::Normal", (int64)ELyraTargetingType::Normal },
		{ "ELyraTargetingType::ADS", (int64)ELyraTargetingType::ADS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraTargetingType",
	"ELyraTargetingType",
	Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraTargetingType()
{
	if (!Z_Registration_Info_UEnum_ELyraTargetingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraTargetingType.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraTargetingType.InnerSingleton;
}
// End Enum ELyraTargetingType

// Begin Class ULyraInputModifierGamepadSensitivity
void ULyraInputModifierGamepadSensitivity::StaticRegisterNativesULyraInputModifierGamepadSensitivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputModifierGamepadSensitivity);
UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_NoRegister()
{
	return ULyraInputModifierGamepadSensitivity::StaticClass();
}
struct Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a scalar modifier based on the current gamepad settings in Lyra Shared game settings.  */" },
#endif
		{ "DisplayName", "Lyra Gamepad Sensitivity" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a scalar modifier based on the current gamepad settings in Lyra Shared game settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingType_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of targeting to use for this Sensitivity */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of targeting to use for this Sensitivity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensitivityLevelTable_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "LyraInputModifierGamepadSensitivity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Asset that gives us access to the float scalar value being used for sensitivty */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset that gives us access to the float scalar value being used for sensitivty" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetingType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SensitivityLevelTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputModifierGamepadSensitivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType = { "TargetingType", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputModifierGamepadSensitivity, TargetingType), Z_Construct_UEnum_LyraGame_ELyraTargetingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingType_MetaData), NewProp_TargetingType_MetaData) }; // 667227071
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable = { "SensitivityLevelTable", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInputModifierGamepadSensitivity, SensitivityLevelTable), Z_Construct_UClass_ULyraAimSensitivityData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensitivityLevelTable_MetaData), NewProp_SensitivityLevelTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::ClassParams = {
	&ULyraInputModifierGamepadSensitivity::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity()
{
	if (!Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity.OuterSingleton, Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInputModifierGamepadSensitivity>()
{
	return ULyraInputModifierGamepadSensitivity::StaticClass();
}
ULyraInputModifierGamepadSensitivity::ULyraInputModifierGamepadSensitivity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputModifierGamepadSensitivity);
ULyraInputModifierGamepadSensitivity::~ULyraInputModifierGamepadSensitivity() {}
// End Class ULyraInputModifierGamepadSensitivity

// Begin Class ULyraInputModifierAimInversion
void ULyraInputModifierAimInversion::StaticRegisterNativesULyraInputModifierAimInversion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputModifierAimInversion);
UClass* Z_Construct_UClass_ULyraInputModifierAimInversion_NoRegister()
{
	return ULyraInputModifierAimInversion::StaticClass();
}
struct Z_Construct_UClass_ULyraInputModifierAimInversion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies an inversion of axis values based on a setting in the Lyra Shared game settings */" },
#endif
		{ "DisplayName", "Lyra Aim Inversion Setting" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies an inversion of axis values based on a setting in the Lyra Shared game settings" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputModifierAimInversion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::ClassParams = {
	&ULyraInputModifierAimInversion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInputModifierAimInversion()
{
	if (!Z_Registration_Info_UClass_ULyraInputModifierAimInversion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputModifierAimInversion.OuterSingleton, Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInputModifierAimInversion.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInputModifierAimInversion>()
{
	return ULyraInputModifierAimInversion::StaticClass();
}
ULyraInputModifierAimInversion::ULyraInputModifierAimInversion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputModifierAimInversion);
ULyraInputModifierAimInversion::~ULyraInputModifierAimInversion() {}
// End Class ULyraInputModifierAimInversion

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDeadzoneStick_StaticEnum, TEXT("EDeadzoneStick"), &Z_Registration_Info_UEnum_EDeadzoneStick, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2169288601U) },
		{ ELyraTargetingType_StaticEnum, TEXT("ELyraTargetingType"), &Z_Registration_Info_UEnum_ELyraTargetingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 667227071U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingBasedScalar, ULyraSettingBasedScalar::StaticClass, TEXT("ULyraSettingBasedScalar"), &Z_Registration_Info_UClass_ULyraSettingBasedScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingBasedScalar), 1309995525U) },
		{ Z_Construct_UClass_ULyraInputModifierDeadZone, ULyraInputModifierDeadZone::StaticClass, TEXT("ULyraInputModifierDeadZone"), &Z_Registration_Info_UClass_ULyraInputModifierDeadZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputModifierDeadZone), 2220464076U) },
		{ Z_Construct_UClass_ULyraInputModifierGamepadSensitivity, ULyraInputModifierGamepadSensitivity::StaticClass, TEXT("ULyraInputModifierGamepadSensitivity"), &Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputModifierGamepadSensitivity), 3129653212U) },
		{ Z_Construct_UClass_ULyraInputModifierAimInversion, ULyraInputModifierAimInversion::StaticClass, TEXT("ULyraInputModifierAimInversion"), &Z_Registration_Info_UClass_ULyraInputModifierAimInversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputModifierAimInversion), 1499972857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_4061074004(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
