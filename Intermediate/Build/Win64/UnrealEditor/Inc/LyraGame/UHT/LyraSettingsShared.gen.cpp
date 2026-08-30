// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/LyraSettingsShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingsShared() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSaveGame();
GAMESUBTITLES_API UEnum* Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayBackgroundOpacity();
GAMESUBTITLES_API UEnum* Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextBorder();
GAMESUBTITLES_API UEnum* Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextColor();
GAMESUBTITLES_API UEnum* Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextSize();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsShared();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsShared_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EColorBlindMode();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum EColorBlindMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorBlindMode;
static UEnum* EColorBlindMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EColorBlindMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EColorBlindMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EColorBlindMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EColorBlindMode"));
	}
	return Z_Registration_Info_UEnum_EColorBlindMode.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<EColorBlindMode>()
{
	return EColorBlindMode_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deuteranope.Comment", "// Deuteranope (green weak/blind)\n" },
		{ "Deuteranope.Name", "EColorBlindMode::Deuteranope" },
		{ "Deuteranope.ToolTip", "Deuteranope (green weak/blind)" },
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
		{ "Off.Name", "EColorBlindMode::Off" },
		{ "Protanope.Comment", "// Protanope (red weak/blind)\n" },
		{ "Protanope.Name", "EColorBlindMode::Protanope" },
		{ "Protanope.ToolTip", "Protanope (red weak/blind)" },
		{ "Tritanope.Comment", "// Tritanope(blue weak / bind)\n" },
		{ "Tritanope.Name", "EColorBlindMode::Tritanope" },
		{ "Tritanope.ToolTip", "Tritanope(blue weak / bind)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EColorBlindMode::Off", (int64)EColorBlindMode::Off },
		{ "EColorBlindMode::Deuteranope", (int64)EColorBlindMode::Deuteranope },
		{ "EColorBlindMode::Protanope", (int64)EColorBlindMode::Protanope },
		{ "EColorBlindMode::Tritanope", (int64)EColorBlindMode::Tritanope },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"EColorBlindMode",
	"EColorBlindMode",
	Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_EColorBlindMode()
{
	if (!Z_Registration_Info_UEnum_EColorBlindMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorBlindMode.InnerSingleton, Z_Construct_UEnum_LyraGame_EColorBlindMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EColorBlindMode.InnerSingleton;
}
// End Enum EColorBlindMode

// Begin Enum ELyraAllowBackgroundAudioSetting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting;
static UEnum* ELyraAllowBackgroundAudioSetting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraAllowBackgroundAudioSetting"));
	}
	return Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraAllowBackgroundAudioSetting>()
{
	return ELyraAllowBackgroundAudioSetting_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllSounds.Name", "ELyraAllowBackgroundAudioSetting::AllSounds" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ELyraAllowBackgroundAudioSetting::Num" },
		{ "Off.Name", "ELyraAllowBackgroundAudioSetting::Off" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraAllowBackgroundAudioSetting::Off", (int64)ELyraAllowBackgroundAudioSetting::Off },
		{ "ELyraAllowBackgroundAudioSetting::AllSounds", (int64)ELyraAllowBackgroundAudioSetting::AllSounds },
		{ "ELyraAllowBackgroundAudioSetting::Num", (int64)ELyraAllowBackgroundAudioSetting::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraAllowBackgroundAudioSetting",
	"ELyraAllowBackgroundAudioSetting",
	Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting()
{
	if (!Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting.InnerSingleton;
}
// End Enum ELyraAllowBackgroundAudioSetting

// Begin Enum ELyraGamepadSensitivity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraGamepadSensitivity;
static UEnum* ELyraGamepadSensitivity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraGamepadSensitivity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraGamepadSensitivity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraGamepadSensitivity"));
	}
	return Z_Registration_Info_UEnum_ELyraGamepadSensitivity.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraGamepadSensitivity>()
{
	return ELyraGamepadSensitivity_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fast.DisplayName", "07 - Fast" },
		{ "Fast.Name", "ELyraGamepadSensitivity::Fast" },
		{ "FastPlus.DisplayName", "08 - Fast+" },
		{ "FastPlus.Name", "ELyraGamepadSensitivity::FastPlus" },
		{ "FastPlusPlus.DisplayName", "09 - Fast++" },
		{ "FastPlusPlus.Name", "ELyraGamepadSensitivity::FastPlusPlus" },
		{ "Insane.DisplayName", "10 - Insane" },
		{ "Insane.Name", "ELyraGamepadSensitivity::Insane" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELyraGamepadSensitivity::Invalid" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ELyraGamepadSensitivity::MAX" },
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
		{ "Normal.DisplayName", "04 - Normal" },
		{ "Normal.Name", "ELyraGamepadSensitivity::Normal" },
		{ "NormalPlus.DisplayName", "05 - Normal+" },
		{ "NormalPlus.Name", "ELyraGamepadSensitivity::NormalPlus" },
		{ "NormalPlusPlus.DisplayName", "06 - Normal++" },
		{ "NormalPlusPlus.Name", "ELyraGamepadSensitivity::NormalPlusPlus" },
		{ "Slow.DisplayName", "01 - Slow" },
		{ "Slow.Name", "ELyraGamepadSensitivity::Slow" },
		{ "SlowPlus.DisplayName", "02 - Slow+" },
		{ "SlowPlus.Name", "ELyraGamepadSensitivity::SlowPlus" },
		{ "SlowPlusPlus.DisplayName", "03 - Slow++" },
		{ "SlowPlusPlus.Name", "ELyraGamepadSensitivity::SlowPlusPlus" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraGamepadSensitivity::Invalid", (int64)ELyraGamepadSensitivity::Invalid },
		{ "ELyraGamepadSensitivity::Slow", (int64)ELyraGamepadSensitivity::Slow },
		{ "ELyraGamepadSensitivity::SlowPlus", (int64)ELyraGamepadSensitivity::SlowPlus },
		{ "ELyraGamepadSensitivity::SlowPlusPlus", (int64)ELyraGamepadSensitivity::SlowPlusPlus },
		{ "ELyraGamepadSensitivity::Normal", (int64)ELyraGamepadSensitivity::Normal },
		{ "ELyraGamepadSensitivity::NormalPlus", (int64)ELyraGamepadSensitivity::NormalPlus },
		{ "ELyraGamepadSensitivity::NormalPlusPlus", (int64)ELyraGamepadSensitivity::NormalPlusPlus },
		{ "ELyraGamepadSensitivity::Fast", (int64)ELyraGamepadSensitivity::Fast },
		{ "ELyraGamepadSensitivity::FastPlus", (int64)ELyraGamepadSensitivity::FastPlus },
		{ "ELyraGamepadSensitivity::FastPlusPlus", (int64)ELyraGamepadSensitivity::FastPlusPlus },
		{ "ELyraGamepadSensitivity::Insane", (int64)ELyraGamepadSensitivity::Insane },
		{ "ELyraGamepadSensitivity::MAX", (int64)ELyraGamepadSensitivity::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraGamepadSensitivity",
	"ELyraGamepadSensitivity",
	Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity()
{
	if (!Z_Registration_Info_UEnum_ELyraGamepadSensitivity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraGamepadSensitivity.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraGamepadSensitivity.InnerSingleton;
}
// End Enum ELyraGamepadSensitivity

// Begin Class ULyraSettingsShared Function GetAllowAudioInBackgroundSetting
struct Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics
{
	struct LyraSettingsShared_eventGetAllowAudioInBackgroundSetting_Parms
	{
		ELyraAllowBackgroundAudioSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetAllowAudioInBackgroundSetting_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting, METADATA_PARAMS(0, nullptr) }; // 2007560343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetAllowAudioInBackgroundSetting", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::LyraSettingsShared_eventGetAllowAudioInBackgroundSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::LyraSettingsShared_eventGetAllowAudioInBackgroundSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetAllowAudioInBackgroundSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELyraAllowBackgroundAudioSetting*)Z_Param__Result=P_THIS->GetAllowAudioInBackgroundSetting();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetAllowAudioInBackgroundSetting

// Begin Class ULyraSettingsShared Function GetColorBlindMode
struct Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics
{
	struct LyraSettingsShared_eventGetColorBlindMode_Parms
	{
		EColorBlindMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////////////////////////////////\n// Color Blind Options\n" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color Blind Options" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetColorBlindMode_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_EColorBlindMode, METADATA_PARAMS(0, nullptr) }; // 651048152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetColorBlindMode", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::LyraSettingsShared_eventGetColorBlindMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::LyraSettingsShared_eventGetColorBlindMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetColorBlindMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EColorBlindMode*)Z_Param__Result=P_THIS->GetColorBlindMode();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetColorBlindMode

// Begin Class ULyraSettingsShared Function GetColorBlindStrength
struct Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics
{
	struct LyraSettingsShared_eventGetColorBlindStrength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetColorBlindStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetColorBlindStrength", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::LyraSettingsShared_eventGetColorBlindStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::LyraSettingsShared_eventGetColorBlindStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetColorBlindStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetColorBlindStrength();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetColorBlindStrength

// Begin Class ULyraSettingsShared Function GetForceFeedbackEnabled
struct Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics
{
	struct LyraSettingsShared_eventGetForceFeedbackEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventGetForceFeedbackEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventGetForceFeedbackEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetForceFeedbackEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::LyraSettingsShared_eventGetForceFeedbackEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::LyraSettingsShared_eventGetForceFeedbackEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetForceFeedbackEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetForceFeedbackEnabled();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetForceFeedbackEnabled

// Begin Class ULyraSettingsShared Function GetGamepadLookSensitivityPreset
struct Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics
{
	struct LyraSettingsShared_eventGetGamepadLookSensitivityPreset_Parms
	{
		ELyraGamepadSensitivity ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetGamepadLookSensitivityPreset_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(0, nullptr) }; // 4214474486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetGamepadLookSensitivityPreset", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::LyraSettingsShared_eventGetGamepadLookSensitivityPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::LyraSettingsShared_eventGetGamepadLookSensitivityPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetGamepadLookSensitivityPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELyraGamepadSensitivity*)Z_Param__Result=P_THIS->GetGamepadLookSensitivityPreset();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetGamepadLookSensitivityPreset

// Begin Class ULyraSettingsShared Function GetGamepadLookStickDeadZone
struct Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics
{
	struct LyraSettingsShared_eventGetGamepadLookStickDeadZone_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for gamepad look stick dead zone value. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for gamepad look stick dead zone value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetGamepadLookStickDeadZone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetGamepadLookStickDeadZone", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::LyraSettingsShared_eventGetGamepadLookStickDeadZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::LyraSettingsShared_eventGetGamepadLookStickDeadZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetGamepadLookStickDeadZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGamepadLookStickDeadZone();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetGamepadLookStickDeadZone

// Begin Class ULyraSettingsShared Function GetGamepadMoveStickDeadZone
struct Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics
{
	struct LyraSettingsShared_eventGetGamepadMoveStickDeadZone_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for gamepad move stick dead zone value. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for gamepad move stick dead zone value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetGamepadMoveStickDeadZone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetGamepadMoveStickDeadZone", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::LyraSettingsShared_eventGetGamepadMoveStickDeadZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::LyraSettingsShared_eventGetGamepadMoveStickDeadZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetGamepadMoveStickDeadZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGamepadMoveStickDeadZone();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetGamepadMoveStickDeadZone

// Begin Class ULyraSettingsShared Function GetGamepadTargetingSensitivityPreset
struct Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics
{
	struct LyraSettingsShared_eventGetGamepadTargetingSensitivityPreset_Parms
	{
		ELyraGamepadSensitivity ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetGamepadTargetingSensitivityPreset_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(0, nullptr) }; // 4214474486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetGamepadTargetingSensitivityPreset", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::LyraSettingsShared_eventGetGamepadTargetingSensitivityPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::LyraSettingsShared_eventGetGamepadTargetingSensitivityPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetGamepadTargetingSensitivityPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELyraGamepadSensitivity*)Z_Param__Result=P_THIS->GetGamepadTargetingSensitivityPreset();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetGamepadTargetingSensitivityPreset

// Begin Class ULyraSettingsShared Function GetInvertHorizontalAxis
struct Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics
{
	struct LyraSettingsShared_eventGetInvertHorizontalAxis_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventGetInvertHorizontalAxis_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventGetInvertHorizontalAxis_Parms), &Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetInvertHorizontalAxis", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::LyraSettingsShared_eventGetInvertHorizontalAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::LyraSettingsShared_eventGetInvertHorizontalAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetInvertHorizontalAxis)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInvertHorizontalAxis();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetInvertHorizontalAxis

// Begin Class ULyraSettingsShared Function GetInvertVerticalAxis
struct Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics
{
	struct LyraSettingsShared_eventGetInvertVerticalAxis_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventGetInvertVerticalAxis_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventGetInvertVerticalAxis_Parms), &Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetInvertVerticalAxis", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::LyraSettingsShared_eventGetInvertVerticalAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::LyraSettingsShared_eventGetInvertVerticalAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetInvertVerticalAxis)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInvertVerticalAxis();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetInvertVerticalAxis

// Begin Class ULyraSettingsShared Function GetMouseSensitivityX
struct Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics
{
	struct LyraSettingsShared_eventGetMouseSensitivityX_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetMouseSensitivityX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetMouseSensitivityX", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::LyraSettingsShared_eventGetMouseSensitivityX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::LyraSettingsShared_eventGetMouseSensitivityX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetMouseSensitivityX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetMouseSensitivityX();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetMouseSensitivityX

// Begin Class ULyraSettingsShared Function GetMouseSensitivityY
struct Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics
{
	struct LyraSettingsShared_eventGetMouseSensitivityY_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetMouseSensitivityY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetMouseSensitivityY", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::LyraSettingsShared_eventGetMouseSensitivityY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::LyraSettingsShared_eventGetMouseSensitivityY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetMouseSensitivityY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetMouseSensitivityY();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetMouseSensitivityY

// Begin Class ULyraSettingsShared Function GetSubtitlesBackgroundOpacity
struct Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics
{
	struct LyraSettingsShared_eventGetSubtitlesBackgroundOpacity_Parms
	{
		ESubtitleDisplayBackgroundOpacity ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetSubtitlesBackgroundOpacity_Parms, ReturnValue), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayBackgroundOpacity, METADATA_PARAMS(0, nullptr) }; // 587908002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetSubtitlesBackgroundOpacity", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::LyraSettingsShared_eventGetSubtitlesBackgroundOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::LyraSettingsShared_eventGetSubtitlesBackgroundOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetSubtitlesBackgroundOpacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESubtitleDisplayBackgroundOpacity*)Z_Param__Result=P_THIS->GetSubtitlesBackgroundOpacity();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetSubtitlesBackgroundOpacity

// Begin Class ULyraSettingsShared Function GetSubtitlesEnabled
struct Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics
{
	struct LyraSettingsShared_eventGetSubtitlesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventGetSubtitlesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventGetSubtitlesEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetSubtitlesEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::LyraSettingsShared_eventGetSubtitlesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::LyraSettingsShared_eventGetSubtitlesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetSubtitlesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSubtitlesEnabled();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetSubtitlesEnabled

// Begin Class ULyraSettingsShared Function GetSubtitlesTextBorder
struct Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics
{
	struct LyraSettingsShared_eventGetSubtitlesTextBorder_Parms
	{
		ESubtitleDisplayTextBorder ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetSubtitlesTextBorder_Parms, ReturnValue), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextBorder, METADATA_PARAMS(0, nullptr) }; // 4054656008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetSubtitlesTextBorder", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::LyraSettingsShared_eventGetSubtitlesTextBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::LyraSettingsShared_eventGetSubtitlesTextBorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetSubtitlesTextBorder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESubtitleDisplayTextBorder*)Z_Param__Result=P_THIS->GetSubtitlesTextBorder();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetSubtitlesTextBorder

// Begin Class ULyraSettingsShared Function GetSubtitlesTextColor
struct Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics
{
	struct LyraSettingsShared_eventGetSubtitlesTextColor_Parms
	{
		ESubtitleDisplayTextColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetSubtitlesTextColor_Parms, ReturnValue), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextColor, METADATA_PARAMS(0, nullptr) }; // 3844635282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetSubtitlesTextColor", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::LyraSettingsShared_eventGetSubtitlesTextColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::LyraSettingsShared_eventGetSubtitlesTextColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetSubtitlesTextColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESubtitleDisplayTextColor*)Z_Param__Result=P_THIS->GetSubtitlesTextColor();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetSubtitlesTextColor

// Begin Class ULyraSettingsShared Function GetSubtitlesTextSize
struct Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics
{
	struct LyraSettingsShared_eventGetSubtitlesTextSize_Parms
	{
		ESubtitleDisplayTextSize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetSubtitlesTextSize_Parms, ReturnValue), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextSize, METADATA_PARAMS(0, nullptr) }; // 4054621106
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetSubtitlesTextSize", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::LyraSettingsShared_eventGetSubtitlesTextSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::LyraSettingsShared_eventGetSubtitlesTextSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetSubtitlesTextSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESubtitleDisplayTextSize*)Z_Param__Result=P_THIS->GetSubtitlesTextSize();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetSubtitlesTextSize

// Begin Class ULyraSettingsShared Function GetTargetingMultiplier
struct Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics
{
	struct LyraSettingsShared_eventGetTargetingMultiplier_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetTargetingMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetTargetingMultiplier", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::LyraSettingsShared_eventGetTargetingMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::LyraSettingsShared_eventGetTargetingMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetTargetingMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetTargetingMultiplier();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetTargetingMultiplier

// Begin Class ULyraSettingsShared Function GetTriggerHapticsEnabled
struct Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics
{
	struct LyraSettingsShared_eventGetTriggerHapticsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventGetTriggerHapticsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventGetTriggerHapticsEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetTriggerHapticsEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::LyraSettingsShared_eventGetTriggerHapticsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::LyraSettingsShared_eventGetTriggerHapticsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetTriggerHapticsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTriggerHapticsEnabled();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetTriggerHapticsEnabled

// Begin Class ULyraSettingsShared Function GetTriggerHapticStartPosition
struct Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics
{
	struct LyraSettingsShared_eventGetTriggerHapticStartPosition_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetTriggerHapticStartPosition_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetTriggerHapticStartPosition", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::LyraSettingsShared_eventGetTriggerHapticStartPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::LyraSettingsShared_eventGetTriggerHapticStartPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetTriggerHapticStartPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetTriggerHapticStartPosition();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetTriggerHapticStartPosition

// Begin Class ULyraSettingsShared Function GetTriggerHapticStrength
struct Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics
{
	struct LyraSettingsShared_eventGetTriggerHapticStrength_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventGetTriggerHapticStrength_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetTriggerHapticStrength", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::LyraSettingsShared_eventGetTriggerHapticStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::LyraSettingsShared_eventGetTriggerHapticStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetTriggerHapticStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetTriggerHapticStrength();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetTriggerHapticStrength

// Begin Class ULyraSettingsShared Function GetTriggerPullUsesHapticThreshold
struct Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics
{
	struct LyraSettingsShared_eventGetTriggerPullUsesHapticThreshold_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventGetTriggerPullUsesHapticThreshold_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventGetTriggerPullUsesHapticThreshold_Parms), &Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "GetTriggerPullUsesHapticThreshold", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::LyraSettingsShared_eventGetTriggerPullUsesHapticThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::LyraSettingsShared_eventGetTriggerPullUsesHapticThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execGetTriggerPullUsesHapticThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTriggerPullUsesHapticThreshold();
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function GetTriggerPullUsesHapticThreshold

// Begin Class ULyraSettingsShared Function SetAllowAudioInBackgroundSetting
struct Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics
{
	struct LyraSettingsShared_eventSetAllowAudioInBackgroundSetting_Parms
	{
		ELyraAllowBackgroundAudioSetting NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetAllowAudioInBackgroundSetting_Parms, NewValue), Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting, METADATA_PARAMS(0, nullptr) }; // 2007560343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::NewProp_NewValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetAllowAudioInBackgroundSetting", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::LyraSettingsShared_eventSetAllowAudioInBackgroundSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::LyraSettingsShared_eventSetAllowAudioInBackgroundSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetAllowAudioInBackgroundSetting)
{
	P_GET_ENUM(ELyraAllowBackgroundAudioSetting,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowAudioInBackgroundSetting(ELyraAllowBackgroundAudioSetting(Z_Param_NewValue));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetAllowAudioInBackgroundSetting

// Begin Class ULyraSettingsShared Function SetColorBlindMode
struct Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics
{
	struct LyraSettingsShared_eventSetColorBlindMode_Parms
	{
		EColorBlindMode InMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::NewProp_InMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::NewProp_InMode = { "InMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetColorBlindMode_Parms, InMode), Z_Construct_UEnum_LyraGame_EColorBlindMode, METADATA_PARAMS(0, nullptr) }; // 651048152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::NewProp_InMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::NewProp_InMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetColorBlindMode", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::LyraSettingsShared_eventSetColorBlindMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::LyraSettingsShared_eventSetColorBlindMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetColorBlindMode)
{
	P_GET_ENUM(EColorBlindMode,Z_Param_InMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorBlindMode(EColorBlindMode(Z_Param_InMode));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetColorBlindMode

// Begin Class ULyraSettingsShared Function SetColorBlindStrength
struct Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics
{
	struct LyraSettingsShared_eventSetColorBlindStrength_Parms
	{
		int32 InColorBlindStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InColorBlindStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::NewProp_InColorBlindStrength = { "InColorBlindStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetColorBlindStrength_Parms, InColorBlindStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::NewProp_InColorBlindStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetColorBlindStrength", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::LyraSettingsShared_eventSetColorBlindStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::LyraSettingsShared_eventSetColorBlindStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetColorBlindStrength)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InColorBlindStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorBlindStrength(Z_Param_InColorBlindStrength);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetColorBlindStrength

// Begin Class ULyraSettingsShared Function SetForceFeedbackEnabled
struct Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics
{
	struct LyraSettingsShared_eventSetForceFeedbackEnabled_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventSetForceFeedbackEnabled_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventSetForceFeedbackEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetForceFeedbackEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::LyraSettingsShared_eventSetForceFeedbackEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::LyraSettingsShared_eventSetForceFeedbackEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetForceFeedbackEnabled)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceFeedbackEnabled(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetForceFeedbackEnabled

// Begin Class ULyraSettingsShared Function SetGamepadLookStickDeadZone
struct Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics
{
	struct LyraSettingsShared_eventSetGamepadLookStickDeadZone_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter for gamepad look stick dead zone value. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter for gamepad look stick dead zone value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetGamepadLookStickDeadZone_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetGamepadLookStickDeadZone", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::LyraSettingsShared_eventSetGamepadLookStickDeadZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::LyraSettingsShared_eventSetGamepadLookStickDeadZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetGamepadLookStickDeadZone)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGamepadLookStickDeadZone(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetGamepadLookStickDeadZone

// Begin Class ULyraSettingsShared Function SetGamepadMoveStickDeadZone
struct Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics
{
	struct LyraSettingsShared_eventSetGamepadMoveStickDeadZone_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter for gamepad move stick dead zone value. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter for gamepad move stick dead zone value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetGamepadMoveStickDeadZone_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetGamepadMoveStickDeadZone", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::LyraSettingsShared_eventSetGamepadMoveStickDeadZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::LyraSettingsShared_eventSetGamepadMoveStickDeadZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetGamepadMoveStickDeadZone)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGamepadMoveStickDeadZone(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetGamepadMoveStickDeadZone

// Begin Class ULyraSettingsShared Function SetGamepadTargetingSensitivityPreset
struct Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics
{
	struct LyraSettingsShared_eventSetGamepadTargetingSensitivityPreset_Parms
	{
		ELyraGamepadSensitivity NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetGamepadTargetingSensitivityPreset_Parms, NewValue), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(0, nullptr) }; // 4214474486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::NewProp_NewValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetGamepadTargetingSensitivityPreset", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::LyraSettingsShared_eventSetGamepadTargetingSensitivityPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::LyraSettingsShared_eventSetGamepadTargetingSensitivityPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetGamepadTargetingSensitivityPreset)
{
	P_GET_ENUM(ELyraGamepadSensitivity,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGamepadTargetingSensitivityPreset(ELyraGamepadSensitivity(Z_Param_NewValue));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetGamepadTargetingSensitivityPreset

// Begin Class ULyraSettingsShared Function SetInvertHorizontalAxis
struct Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics
{
	struct LyraSettingsShared_eventSetInvertHorizontalAxis_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventSetInvertHorizontalAxis_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventSetInvertHorizontalAxis_Parms), &Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetInvertHorizontalAxis", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::LyraSettingsShared_eventSetInvertHorizontalAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::LyraSettingsShared_eventSetInvertHorizontalAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetInvertHorizontalAxis)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvertHorizontalAxis(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetInvertHorizontalAxis

// Begin Class ULyraSettingsShared Function SetInvertVerticalAxis
struct Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics
{
	struct LyraSettingsShared_eventSetInvertVerticalAxis_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventSetInvertVerticalAxis_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventSetInvertVerticalAxis_Parms), &Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetInvertVerticalAxis", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::LyraSettingsShared_eventSetInvertVerticalAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::LyraSettingsShared_eventSetInvertVerticalAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetInvertVerticalAxis)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvertVerticalAxis(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetInvertVerticalAxis

// Begin Class ULyraSettingsShared Function SetLookSensitivityPreset
struct Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics
{
	struct LyraSettingsShared_eventSetLookSensitivityPreset_Parms
	{
		ELyraGamepadSensitivity NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetLookSensitivityPreset_Parms, NewValue), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(0, nullptr) }; // 4214474486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::NewProp_NewValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetLookSensitivityPreset", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::LyraSettingsShared_eventSetLookSensitivityPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::LyraSettingsShared_eventSetLookSensitivityPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetLookSensitivityPreset)
{
	P_GET_ENUM(ELyraGamepadSensitivity,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLookSensitivityPreset(ELyraGamepadSensitivity(Z_Param_NewValue));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetLookSensitivityPreset

// Begin Class ULyraSettingsShared Function SetMouseSensitivityX
struct Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics
{
	struct LyraSettingsShared_eventSetMouseSensitivityX_Parms
	{
		double NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetMouseSensitivityX_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetMouseSensitivityX", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::LyraSettingsShared_eventSetMouseSensitivityX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::LyraSettingsShared_eventSetMouseSensitivityX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetMouseSensitivityX)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivityX(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetMouseSensitivityX

// Begin Class ULyraSettingsShared Function SetMouseSensitivityY
struct Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics
{
	struct LyraSettingsShared_eventSetMouseSensitivityY_Parms
	{
		double NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetMouseSensitivityY_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetMouseSensitivityY", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::LyraSettingsShared_eventSetMouseSensitivityY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::LyraSettingsShared_eventSetMouseSensitivityY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetMouseSensitivityY)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivityY(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetMouseSensitivityY

// Begin Class ULyraSettingsShared Function SetSubtitlesBackgroundOpacity
struct Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics
{
	struct LyraSettingsShared_eventSetSubtitlesBackgroundOpacity_Parms
	{
		ESubtitleDisplayBackgroundOpacity Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetSubtitlesBackgroundOpacity_Parms, Value), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayBackgroundOpacity, METADATA_PARAMS(0, nullptr) }; // 587908002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetSubtitlesBackgroundOpacity", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::LyraSettingsShared_eventSetSubtitlesBackgroundOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::LyraSettingsShared_eventSetSubtitlesBackgroundOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetSubtitlesBackgroundOpacity)
{
	P_GET_ENUM(ESubtitleDisplayBackgroundOpacity,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity(Z_Param_Value));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetSubtitlesBackgroundOpacity

// Begin Class ULyraSettingsShared Function SetSubtitlesEnabled
struct Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics
{
	struct LyraSettingsShared_eventSetSubtitlesEnabled_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::NewProp_Value_SetBit(void* Obj)
{
	((LyraSettingsShared_eventSetSubtitlesEnabled_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventSetSubtitlesEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetSubtitlesEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::LyraSettingsShared_eventSetSubtitlesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::LyraSettingsShared_eventSetSubtitlesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetSubtitlesEnabled)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesEnabled(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetSubtitlesEnabled

// Begin Class ULyraSettingsShared Function SetSubtitlesTextBorder
struct Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics
{
	struct LyraSettingsShared_eventSetSubtitlesTextBorder_Parms
	{
		ESubtitleDisplayTextBorder Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetSubtitlesTextBorder_Parms, Value), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextBorder, METADATA_PARAMS(0, nullptr) }; // 4054656008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetSubtitlesTextBorder", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::LyraSettingsShared_eventSetSubtitlesTextBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::LyraSettingsShared_eventSetSubtitlesTextBorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetSubtitlesTextBorder)
{
	P_GET_ENUM(ESubtitleDisplayTextBorder,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesTextBorder(ESubtitleDisplayTextBorder(Z_Param_Value));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetSubtitlesTextBorder

// Begin Class ULyraSettingsShared Function SetSubtitlesTextColor
struct Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics
{
	struct LyraSettingsShared_eventSetSubtitlesTextColor_Parms
	{
		ESubtitleDisplayTextColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetSubtitlesTextColor_Parms, Value), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextColor, METADATA_PARAMS(0, nullptr) }; // 3844635282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetSubtitlesTextColor", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::LyraSettingsShared_eventSetSubtitlesTextColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::LyraSettingsShared_eventSetSubtitlesTextColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetSubtitlesTextColor)
{
	P_GET_ENUM(ESubtitleDisplayTextColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesTextColor(ESubtitleDisplayTextColor(Z_Param_Value));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetSubtitlesTextColor

// Begin Class ULyraSettingsShared Function SetSubtitlesTextSize
struct Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics
{
	struct LyraSettingsShared_eventSetSubtitlesTextSize_Parms
	{
		ESubtitleDisplayTextSize Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetSubtitlesTextSize_Parms, Value), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextSize, METADATA_PARAMS(0, nullptr) }; // 4054621106
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetSubtitlesTextSize", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::LyraSettingsShared_eventSetSubtitlesTextSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::LyraSettingsShared_eventSetSubtitlesTextSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetSubtitlesTextSize)
{
	P_GET_ENUM(ESubtitleDisplayTextSize,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesTextSize(ESubtitleDisplayTextSize(Z_Param_Value));
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetSubtitlesTextSize

// Begin Class ULyraSettingsShared Function SetTargetingMultiplier
struct Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics
{
	struct LyraSettingsShared_eventSetTargetingMultiplier_Parms
	{
		double NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetTargetingMultiplier_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetTargetingMultiplier", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::LyraSettingsShared_eventSetTargetingMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::LyraSettingsShared_eventSetTargetingMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetTargetingMultiplier)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetingMultiplier(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetTargetingMultiplier

// Begin Class ULyraSettingsShared Function SetTriggerHapticsEnabled
struct Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics
{
	struct LyraSettingsShared_eventSetTriggerHapticsEnabled_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventSetTriggerHapticsEnabled_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventSetTriggerHapticsEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetTriggerHapticsEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::LyraSettingsShared_eventSetTriggerHapticsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::LyraSettingsShared_eventSetTriggerHapticsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetTriggerHapticsEnabled)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriggerHapticsEnabled(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetTriggerHapticsEnabled

// Begin Class ULyraSettingsShared Function SetTriggerHapticStartPosition
struct Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics
{
	struct LyraSettingsShared_eventSetTriggerHapticStartPosition_Parms
	{
		uint8 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetTriggerHapticStartPosition_Parms, NewValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetTriggerHapticStartPosition", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::LyraSettingsShared_eventSetTriggerHapticStartPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::LyraSettingsShared_eventSetTriggerHapticStartPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetTriggerHapticStartPosition)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriggerHapticStartPosition(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetTriggerHapticStartPosition

// Begin Class ULyraSettingsShared Function SetTriggerHapticStrength
struct Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics
{
	struct LyraSettingsShared_eventSetTriggerHapticStrength_Parms
	{
		uint8 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsShared_eventSetTriggerHapticStrength_Parms, NewValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetTriggerHapticStrength", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::LyraSettingsShared_eventSetTriggerHapticStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::LyraSettingsShared_eventSetTriggerHapticStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetTriggerHapticStrength)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriggerHapticStrength(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetTriggerHapticStrength

// Begin Class ULyraSettingsShared Function SetTriggerPullUsesHapticThreshold
struct Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics
{
	struct LyraSettingsShared_eventSetTriggerPullUsesHapticThreshold_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((LyraSettingsShared_eventSetTriggerPullUsesHapticThreshold_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsShared_eventSetTriggerPullUsesHapticThreshold_Parms), &Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsShared, nullptr, "SetTriggerPullUsesHapticThreshold", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::LyraSettingsShared_eventSetTriggerPullUsesHapticThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::LyraSettingsShared_eventSetTriggerPullUsesHapticThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsShared::execSetTriggerPullUsesHapticThreshold)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriggerPullUsesHapticThreshold(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULyraSettingsShared Function SetTriggerPullUsesHapticThreshold

// Begin Class ULyraSettingsShared
void ULyraSettingsShared::StaticRegisterNativesULyraSettingsShared()
{
	UClass* Class = ULyraSettingsShared::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllowAudioInBackgroundSetting", &ULyraSettingsShared::execGetAllowAudioInBackgroundSetting },
		{ "GetColorBlindMode", &ULyraSettingsShared::execGetColorBlindMode },
		{ "GetColorBlindStrength", &ULyraSettingsShared::execGetColorBlindStrength },
		{ "GetForceFeedbackEnabled", &ULyraSettingsShared::execGetForceFeedbackEnabled },
		{ "GetGamepadLookSensitivityPreset", &ULyraSettingsShared::execGetGamepadLookSensitivityPreset },
		{ "GetGamepadLookStickDeadZone", &ULyraSettingsShared::execGetGamepadLookStickDeadZone },
		{ "GetGamepadMoveStickDeadZone", &ULyraSettingsShared::execGetGamepadMoveStickDeadZone },
		{ "GetGamepadTargetingSensitivityPreset", &ULyraSettingsShared::execGetGamepadTargetingSensitivityPreset },
		{ "GetInvertHorizontalAxis", &ULyraSettingsShared::execGetInvertHorizontalAxis },
		{ "GetInvertVerticalAxis", &ULyraSettingsShared::execGetInvertVerticalAxis },
		{ "GetMouseSensitivityX", &ULyraSettingsShared::execGetMouseSensitivityX },
		{ "GetMouseSensitivityY", &ULyraSettingsShared::execGetMouseSensitivityY },
		{ "GetSubtitlesBackgroundOpacity", &ULyraSettingsShared::execGetSubtitlesBackgroundOpacity },
		{ "GetSubtitlesEnabled", &ULyraSettingsShared::execGetSubtitlesEnabled },
		{ "GetSubtitlesTextBorder", &ULyraSettingsShared::execGetSubtitlesTextBorder },
		{ "GetSubtitlesTextColor", &ULyraSettingsShared::execGetSubtitlesTextColor },
		{ "GetSubtitlesTextSize", &ULyraSettingsShared::execGetSubtitlesTextSize },
		{ "GetTargetingMultiplier", &ULyraSettingsShared::execGetTargetingMultiplier },
		{ "GetTriggerHapticsEnabled", &ULyraSettingsShared::execGetTriggerHapticsEnabled },
		{ "GetTriggerHapticStartPosition", &ULyraSettingsShared::execGetTriggerHapticStartPosition },
		{ "GetTriggerHapticStrength", &ULyraSettingsShared::execGetTriggerHapticStrength },
		{ "GetTriggerPullUsesHapticThreshold", &ULyraSettingsShared::execGetTriggerPullUsesHapticThreshold },
		{ "SetAllowAudioInBackgroundSetting", &ULyraSettingsShared::execSetAllowAudioInBackgroundSetting },
		{ "SetColorBlindMode", &ULyraSettingsShared::execSetColorBlindMode },
		{ "SetColorBlindStrength", &ULyraSettingsShared::execSetColorBlindStrength },
		{ "SetForceFeedbackEnabled", &ULyraSettingsShared::execSetForceFeedbackEnabled },
		{ "SetGamepadLookStickDeadZone", &ULyraSettingsShared::execSetGamepadLookStickDeadZone },
		{ "SetGamepadMoveStickDeadZone", &ULyraSettingsShared::execSetGamepadMoveStickDeadZone },
		{ "SetGamepadTargetingSensitivityPreset", &ULyraSettingsShared::execSetGamepadTargetingSensitivityPreset },
		{ "SetInvertHorizontalAxis", &ULyraSettingsShared::execSetInvertHorizontalAxis },
		{ "SetInvertVerticalAxis", &ULyraSettingsShared::execSetInvertVerticalAxis },
		{ "SetLookSensitivityPreset", &ULyraSettingsShared::execSetLookSensitivityPreset },
		{ "SetMouseSensitivityX", &ULyraSettingsShared::execSetMouseSensitivityX },
		{ "SetMouseSensitivityY", &ULyraSettingsShared::execSetMouseSensitivityY },
		{ "SetSubtitlesBackgroundOpacity", &ULyraSettingsShared::execSetSubtitlesBackgroundOpacity },
		{ "SetSubtitlesEnabled", &ULyraSettingsShared::execSetSubtitlesEnabled },
		{ "SetSubtitlesTextBorder", &ULyraSettingsShared::execSetSubtitlesTextBorder },
		{ "SetSubtitlesTextColor", &ULyraSettingsShared::execSetSubtitlesTextColor },
		{ "SetSubtitlesTextSize", &ULyraSettingsShared::execSetSubtitlesTextSize },
		{ "SetTargetingMultiplier", &ULyraSettingsShared::execSetTargetingMultiplier },
		{ "SetTriggerHapticsEnabled", &ULyraSettingsShared::execSetTriggerHapticsEnabled },
		{ "SetTriggerHapticStartPosition", &ULyraSettingsShared::execSetTriggerHapticStartPosition },
		{ "SetTriggerHapticStrength", &ULyraSettingsShared::execSetTriggerHapticStrength },
		{ "SetTriggerPullUsesHapticThreshold", &ULyraSettingsShared::execSetTriggerPullUsesHapticThreshold },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingsShared);
UClass* Z_Construct_UClass_ULyraSettingsShared_NoRegister()
{
	return ULyraSettingsShared::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingsShared_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraSettingsShared - The \"Shared\" settings are stored as part of the USaveGame system, these settings are not machine\n * specific like the local settings, and are safe to store in the cloud - and 'share' them.  Using the save game system\n * we can also store settings per player, so things like controller keybind preferences should go here, because if those\n * are stored in the local settings all users would get them.\n *\n */" },
#endif
		{ "IncludePath", "Settings/LyraSettingsShared.h" },
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraSettingsShared - The \"Shared\" settings are stored as part of the USaveGame system, these settings are not machine\nspecific like the local settings, and are safe to store in the cloud - and 'share' them.  Using the save game system\nwe can also store settings per player, so things like controller keybind preferences should go here, because if those\nare stored in the local settings all users would get them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBlindMode_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBlindStrength_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFeedbackEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is force feedback enabled when a controller is being used? */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is force feedback enabled when a controller is being used?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadMoveStickDeadZone_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the gamepad move stick dead zone value. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the gamepad move stick dead zone value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadLookStickDeadZone_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the gamepad look stick dead zone value. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the gamepad look stick dead zone value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerHapticsEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Are trigger haptics enabled? */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Are trigger haptics enabled?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerPullUsesHapticThreshold_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Does the game use the haptic feedback as its threshold for judging button presses? */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does the game use the haptic feedback as its threshold for judging button presses?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerHapticStrength_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The strength of the trigger haptic effects. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The strength of the trigger haptic effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerHapticStartPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The start position of the trigger haptic effects */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The start position of the trigger haptic effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubtitles_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleTextSize_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleTextColor_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleTextBorder_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleBackgroundOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowAudioInBackground_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingCulture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The pending culture to apply */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pending culture to apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityX_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the mouse horizontal sensitivity */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the mouse horizontal sensitivity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityY_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the mouse vertical sensitivity */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the mouse vertical sensitivity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingMultiplier_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplier applied while Aiming down sights. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier applied while Aiming down sights." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertVerticalAxis_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true then the vertical look axis should be inverted */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the vertical look axis should be inverted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertHorizontalAxis_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true then the horizontal look axis should be inverted */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the horizontal look axis should be inverted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadLookSensitivityPreset_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadTargetingSensitivityPreset_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorBlindMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorBlindMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColorBlindStrength;
	static void NewProp_bForceFeedbackEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFeedbackEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadMoveStickDeadZone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadLookStickDeadZone;
	static void NewProp_bTriggerHapticsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerHapticsEnabled;
	static void NewProp_bTriggerPullUsesHapticThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerPullUsesHapticThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerHapticStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerHapticStartPosition;
	static void NewProp_bEnableSubtitles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubtitles;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubtitleTextSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubtitleTextSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubtitleTextColor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubtitleTextColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubtitleTextBorder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubtitleTextBorder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubtitleBackgroundOpacity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubtitleBackgroundOpacity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowAudioInBackground_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowAudioInBackground;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PendingCulture;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MouseSensitivityX;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MouseSensitivityY;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetingMultiplier;
	static void NewProp_bInvertVerticalAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertVerticalAxis;
	static void NewProp_bInvertHorizontalAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertHorizontalAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamepadLookSensitivityPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamepadLookSensitivityPreset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamepadTargetingSensitivityPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamepadTargetingSensitivityPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetAllowAudioInBackgroundSetting, "GetAllowAudioInBackgroundSetting" }, // 3225280458
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindMode, "GetColorBlindMode" }, // 1572107721
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetColorBlindStrength, "GetColorBlindStrength" }, // 4112635604
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetForceFeedbackEnabled, "GetForceFeedbackEnabled" }, // 535918361
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookSensitivityPreset, "GetGamepadLookSensitivityPreset" }, // 858797814
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetGamepadLookStickDeadZone, "GetGamepadLookStickDeadZone" }, // 4235017447
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetGamepadMoveStickDeadZone, "GetGamepadMoveStickDeadZone" }, // 1249502549
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetGamepadTargetingSensitivityPreset, "GetGamepadTargetingSensitivityPreset" }, // 3203572878
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetInvertHorizontalAxis, "GetInvertHorizontalAxis" }, // 2396955491
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetInvertVerticalAxis, "GetInvertVerticalAxis" }, // 294143857
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityX, "GetMouseSensitivityX" }, // 1561454442
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetMouseSensitivityY, "GetMouseSensitivityY" }, // 5681093
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesBackgroundOpacity, "GetSubtitlesBackgroundOpacity" }, // 1044132358
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesEnabled, "GetSubtitlesEnabled" }, // 755499391
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextBorder, "GetSubtitlesTextBorder" }, // 2320481361
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextColor, "GetSubtitlesTextColor" }, // 2665808546
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetSubtitlesTextSize, "GetSubtitlesTextSize" }, // 1886224070
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetTargetingMultiplier, "GetTargetingMultiplier" }, // 2643776537
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticsEnabled, "GetTriggerHapticsEnabled" }, // 3028491183
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStartPosition, "GetTriggerHapticStartPosition" }, // 71959617
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetTriggerHapticStrength, "GetTriggerHapticStrength" }, // 1489767379
		{ &Z_Construct_UFunction_ULyraSettingsShared_GetTriggerPullUsesHapticThreshold, "GetTriggerPullUsesHapticThreshold" }, // 337728852
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetAllowAudioInBackgroundSetting, "SetAllowAudioInBackgroundSetting" }, // 3538814134
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindMode, "SetColorBlindMode" }, // 3973780014
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetColorBlindStrength, "SetColorBlindStrength" }, // 3007008632
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetForceFeedbackEnabled, "SetForceFeedbackEnabled" }, // 288356983
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetGamepadLookStickDeadZone, "SetGamepadLookStickDeadZone" }, // 3755572504
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetGamepadMoveStickDeadZone, "SetGamepadMoveStickDeadZone" }, // 1228243062
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetGamepadTargetingSensitivityPreset, "SetGamepadTargetingSensitivityPreset" }, // 1594129908
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetInvertHorizontalAxis, "SetInvertHorizontalAxis" }, // 2127369391
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetInvertVerticalAxis, "SetInvertVerticalAxis" }, // 3653237345
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetLookSensitivityPreset, "SetLookSensitivityPreset" }, // 2235375033
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityX, "SetMouseSensitivityX" }, // 1035738593
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetMouseSensitivityY, "SetMouseSensitivityY" }, // 63555230
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesBackgroundOpacity, "SetSubtitlesBackgroundOpacity" }, // 3142074255
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesEnabled, "SetSubtitlesEnabled" }, // 3470772753
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextBorder, "SetSubtitlesTextBorder" }, // 3674504155
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextColor, "SetSubtitlesTextColor" }, // 1760877953
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetSubtitlesTextSize, "SetSubtitlesTextSize" }, // 432592285
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetTargetingMultiplier, "SetTargetingMultiplier" }, // 3593949278
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticsEnabled, "SetTriggerHapticsEnabled" }, // 3181429218
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStartPosition, "SetTriggerHapticStartPosition" }, // 467071736
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetTriggerHapticStrength, "SetTriggerHapticStrength" }, // 4169127111
		{ &Z_Construct_UFunction_ULyraSettingsShared_SetTriggerPullUsesHapticThreshold, "SetTriggerPullUsesHapticThreshold" }, // 3474456121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingsShared>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_ColorBlindMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, ColorBlindMode), Z_Construct_UEnum_LyraGame_EColorBlindMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBlindMode_MetaData), NewProp_ColorBlindMode_MetaData) }; // 651048152
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_ColorBlindStrength = { "ColorBlindStrength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, ColorBlindStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBlindStrength_MetaData), NewProp_ColorBlindStrength_MetaData) };
void Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bForceFeedbackEnabled_SetBit(void* Obj)
{
	((ULyraSettingsShared*)Obj)->bForceFeedbackEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bForceFeedbackEnabled = { "bForceFeedbackEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsShared), &Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bForceFeedbackEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFeedbackEnabled_MetaData), NewProp_bForceFeedbackEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadMoveStickDeadZone = { "GamepadMoveStickDeadZone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, GamepadMoveStickDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadMoveStickDeadZone_MetaData), NewProp_GamepadMoveStickDeadZone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadLookStickDeadZone = { "GamepadLookStickDeadZone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, GamepadLookStickDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadLookStickDeadZone_MetaData), NewProp_GamepadLookStickDeadZone_MetaData) };
void Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerHapticsEnabled_SetBit(void* Obj)
{
	((ULyraSettingsShared*)Obj)->bTriggerHapticsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerHapticsEnabled = { "bTriggerHapticsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsShared), &Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerHapticsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerHapticsEnabled_MetaData), NewProp_bTriggerHapticsEnabled_MetaData) };
void Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerPullUsesHapticThreshold_SetBit(void* Obj)
{
	((ULyraSettingsShared*)Obj)->bTriggerPullUsesHapticThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerPullUsesHapticThreshold = { "bTriggerPullUsesHapticThreshold", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsShared), &Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerPullUsesHapticThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerPullUsesHapticThreshold_MetaData), NewProp_bTriggerPullUsesHapticThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_TriggerHapticStrength = { "TriggerHapticStrength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, TriggerHapticStrength), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerHapticStrength_MetaData), NewProp_TriggerHapticStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_TriggerHapticStartPosition = { "TriggerHapticStartPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, TriggerHapticStartPosition), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerHapticStartPosition_MetaData), NewProp_TriggerHapticStartPosition_MetaData) };
void Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bEnableSubtitles_SetBit(void* Obj)
{
	((ULyraSettingsShared*)Obj)->bEnableSubtitles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bEnableSubtitles = { "bEnableSubtitles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsShared), &Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bEnableSubtitles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubtitles_MetaData), NewProp_bEnableSubtitles_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextSize = { "SubtitleTextSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, SubtitleTextSize), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleTextSize_MetaData), NewProp_SubtitleTextSize_MetaData) }; // 4054621106
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextColor = { "SubtitleTextColor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, SubtitleTextColor), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleTextColor_MetaData), NewProp_SubtitleTextColor_MetaData) }; // 3844635282
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextBorder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextBorder = { "SubtitleTextBorder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, SubtitleTextBorder), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayTextBorder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleTextBorder_MetaData), NewProp_SubtitleTextBorder_MetaData) }; // 4054656008
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleBackgroundOpacity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleBackgroundOpacity = { "SubtitleBackgroundOpacity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, SubtitleBackgroundOpacity), Z_Construct_UEnum_GameSubtitles_ESubtitleDisplayBackgroundOpacity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleBackgroundOpacity_MetaData), NewProp_SubtitleBackgroundOpacity_MetaData) }; // 587908002
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_AllowAudioInBackground_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_AllowAudioInBackground = { "AllowAudioInBackground", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, AllowAudioInBackground), Z_Construct_UEnum_LyraGame_ELyraAllowBackgroundAudioSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowAudioInBackground_MetaData), NewProp_AllowAudioInBackground_MetaData) }; // 2007560343
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_PendingCulture = { "PendingCulture", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, PendingCulture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingCulture_MetaData), NewProp_PendingCulture_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_MouseSensitivityX = { "MouseSensitivityX", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, MouseSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityX_MetaData), NewProp_MouseSensitivityX_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_MouseSensitivityY = { "MouseSensitivityY", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, MouseSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityY_MetaData), NewProp_MouseSensitivityY_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_TargetingMultiplier = { "TargetingMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, TargetingMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingMultiplier_MetaData), NewProp_TargetingMultiplier_MetaData) };
void Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertVerticalAxis_SetBit(void* Obj)
{
	((ULyraSettingsShared*)Obj)->bInvertVerticalAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertVerticalAxis = { "bInvertVerticalAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsShared), &Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertVerticalAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertVerticalAxis_MetaData), NewProp_bInvertVerticalAxis_MetaData) };
void Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertHorizontalAxis_SetBit(void* Obj)
{
	((ULyraSettingsShared*)Obj)->bInvertHorizontalAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertHorizontalAxis = { "bInvertHorizontalAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsShared), &Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertHorizontalAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertHorizontalAxis_MetaData), NewProp_bInvertHorizontalAxis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadLookSensitivityPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadLookSensitivityPreset = { "GamepadLookSensitivityPreset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, GamepadLookSensitivityPreset), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadLookSensitivityPreset_MetaData), NewProp_GamepadLookSensitivityPreset_MetaData) }; // 4214474486
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadTargetingSensitivityPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadTargetingSensitivityPreset = { "GamepadTargetingSensitivityPreset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsShared, GamepadTargetingSensitivityPreset), Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadTargetingSensitivityPreset_MetaData), NewProp_GamepadTargetingSensitivityPreset_MetaData) }; // 4214474486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingsShared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_ColorBlindMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_ColorBlindMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_ColorBlindStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bForceFeedbackEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadMoveStickDeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadLookStickDeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerHapticsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bTriggerPullUsesHapticThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_TriggerHapticStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_TriggerHapticStartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bEnableSubtitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextColor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextBorder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleTextBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleBackgroundOpacity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_SubtitleBackgroundOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_AllowAudioInBackground_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_AllowAudioInBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_PendingCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_MouseSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_MouseSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_TargetingMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertVerticalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_bInvertHorizontalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadLookSensitivityPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadLookSensitivityPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadTargetingSensitivityPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsShared_Statics::NewProp_GamepadTargetingSensitivityPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsShared_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSettingsShared_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsShared_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingsShared_Statics::ClassParams = {
	&ULyraSettingsShared::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraSettingsShared_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsShared_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsShared_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingsShared_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingsShared()
{
	if (!Z_Registration_Info_UClass_ULyraSettingsShared.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingsShared.OuterSingleton, Z_Construct_UClass_ULyraSettingsShared_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingsShared.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingsShared>()
{
	return ULyraSettingsShared::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingsShared);
ULyraSettingsShared::~ULyraSettingsShared() {}
// End Class ULyraSettingsShared

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EColorBlindMode_StaticEnum, TEXT("EColorBlindMode"), &Z_Registration_Info_UEnum_EColorBlindMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 651048152U) },
		{ ELyraAllowBackgroundAudioSetting_StaticEnum, TEXT("ELyraAllowBackgroundAudioSetting"), &Z_Registration_Info_UEnum_ELyraAllowBackgroundAudioSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2007560343U) },
		{ ELyraGamepadSensitivity_StaticEnum, TEXT("ELyraGamepadSensitivity"), &Z_Registration_Info_UEnum_ELyraGamepadSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4214474486U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingsShared, ULyraSettingsShared::StaticClass, TEXT("ULyraSettingsShared"), &Z_Registration_Info_UClass_ULyraSettingsShared, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingsShared), 1816384728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_2403577367(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
