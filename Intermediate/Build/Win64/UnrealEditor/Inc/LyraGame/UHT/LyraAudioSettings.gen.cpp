// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Audio/LyraAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAudioSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioSettings_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraSubmixEffectChainMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap;
class UScriptStruct* FLyraSubmixEffectChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraSubmixEffectChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraSubmixEffectChainMap>()
{
	return FLyraSubmixEffectChainMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "LyraSubmixEffectChainMap" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundEffectSubmixPreset" },
		{ "Category", "LyraSubmixEffectChainMap" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraSubmixEffectChainMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraSubmixEffectChainMap, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraSubmixEffectChainMap, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraSubmixEffectChainMap",
	Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers),
	sizeof(FLyraSubmixEffectChainMap),
	alignof(FLyraSubmixEffectChainMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap()
{
	if (!Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.InnerSingleton, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.InnerSingleton;
}
// End ScriptStruct FLyraSubmixEffectChainMap

// Begin Class ULyraAudioSettings
void ULyraAudioSettings::StaticRegisterNativesULyraAudioSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAudioSettings);
UClass* Z_Construct_UClass_ULyraAudioSettings_NoRegister()
{
	return ULyraAudioSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "LyraAudioSettings" },
		{ "IncludePath", "Audio/LyraAudioSettings.h" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Default Base Control Bus Mix */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Base Control Bus Mix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Default Base Control Bus Mix */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Base Control Bus Mix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the Overall sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the Overall sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the Music sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the Music sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the SoundFX sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the SoundFX sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the Dialogue sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the Dialogue sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the VoiceChat sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the VoiceChat sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "EffectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Submix Processing Chains to achieve high dynamic range audio output */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Processing Chains to achieve high dynamic range audio output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "EffectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Submix Processing Chains to achieve low dynamic range audio output */" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Processing Chains to achieve low dynamic range audio output" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultControlBusMix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingScreenControlBusMix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserSettingsControlBusMix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverallVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MusicVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundFXVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceChatVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HDRAudioSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRAudioSubmixEffectChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LDRAudioSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRAudioSubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAudioSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix = { "DefaultControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, DefaultControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultControlBusMix_MetaData), NewProp_DefaultControlBusMix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix = { "LoadingScreenControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, LoadingScreenControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenControlBusMix_MetaData), NewProp_LoadingScreenControlBusMix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix = { "UserSettingsControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, UserSettingsControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettingsControlBusMix_MetaData), NewProp_UserSettingsControlBusMix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus = { "OverallVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, OverallVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolumeControlBus_MetaData), NewProp_OverallVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus = { "MusicVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, MusicVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolumeControlBus_MetaData), NewProp_MusicVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus = { "SoundFXVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, SoundFXVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolumeControlBus_MetaData), NewProp_SoundFXVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus = { "DialogueVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, DialogueVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVolumeControlBus_MetaData), NewProp_DialogueVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus = { "VoiceChatVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, VoiceChatVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatVolumeControlBus_MetaData), NewProp_VoiceChatVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap, METADATA_PARAMS(0, nullptr) }; // 2674517442
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, HDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HDRAudioSubmixEffectChain_MetaData), NewProp_HDRAudioSubmixEffectChain_MetaData) }; // 2674517442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap, METADATA_PARAMS(0, nullptr) }; // 2674517442
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioSettings, LDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDRAudioSubmixEffectChain_MetaData), NewProp_LDRAudioSubmixEffectChain_MetaData) }; // 2674517442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAudioSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAudioSettings_Statics::ClassParams = {
	&ULyraAudioSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAudioSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAudioSettings()
{
	if (!Z_Registration_Info_UClass_ULyraAudioSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAudioSettings.OuterSingleton, Z_Construct_UClass_ULyraAudioSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAudioSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAudioSettings>()
{
	return ULyraAudioSettings::StaticClass();
}
ULyraAudioSettings::ULyraAudioSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAudioSettings);
ULyraAudioSettings::~ULyraAudioSettings() {}
// End Class ULyraAudioSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraSubmixEffectChainMap::StaticStruct, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewStructOps, TEXT("LyraSubmixEffectChainMap"), &Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraSubmixEffectChainMap), 2674517442U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAudioSettings, ULyraAudioSettings::StaticClass, TEXT("ULyraAudioSettings"), &Z_Registration_Info_UClass_ULyraAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAudioSettings), 2583634539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_1014962831(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
