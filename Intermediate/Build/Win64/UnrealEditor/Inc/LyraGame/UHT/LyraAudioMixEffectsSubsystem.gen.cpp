// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Audio/LyraAudioMixEffectsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAudioMixEffectsSubsystem() {}

// Begin Cross Module References
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraAudioSubmixEffectsChain
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain;
class UScriptStruct* FLyraAudioSubmixEffectsChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAudioSubmixEffectsChain"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAudioSubmixEffectsChain>()
{
	return FLyraAudioSubmixEffectsChain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Submix on which to apply the Submix Effect Chain Override\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix on which to apply the Submix Effect Chain Override" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Submix Effect Chain Override (Effects processed in Array index order)\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Effect Chain Override (Effects processed in Array index order)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAudioSubmixEffectsChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAudioSubmixEffectsChain, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAudioSubmixEffectsChain, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAudioSubmixEffectsChain",
	Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers),
	sizeof(FLyraAudioSubmixEffectsChain),
	alignof(FLyraAudioSubmixEffectsChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.InnerSingleton, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.InnerSingleton;
}
// End ScriptStruct FLyraAudioSubmixEffectsChain

// Begin Class ULyraAudioMixEffectsSubsystem
void ULyraAudioMixEffectsSubsystem::StaticRegisterNativesULyraAudioMixEffectsSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAudioMixEffectsSubsystem);
UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_NoRegister()
{
	return ULyraAudioMixEffectsSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This subsystem is meant to automatically engage default and user control bus mixes\n * to retrieve previously saved user settings and apply them to the activated user mix.\n * Additionally, this subsystem will automatically apply HDR/LDR Audio Submix Effect Chain Overrides\n * based on the user's preference for HDR Audio. Submix Effect Chain Overrides are defined in the\n * Lyra Audio Settings.\n */" },
#endif
		{ "IncludePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This subsystem is meant to automatically engage default and user control bus mixes\nto retrieve previously saved user settings and apply them to the activated user mix.\nAdditionally, this subsystem will automatically apply HDR/LDR Audio Submix Effect Chain Overrides\nbased on the user's preference for HDR Audio. Submix Effect Chain Overrides are defined in the\nLyra Audio Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseMix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default Sound Control Bus Mix retrieved from the Lyra Audio Settings\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Sound Control Bus Mix retrieved from the Lyra Audio Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenMix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loading Screen Sound Control Bus Mix retrieved from the Lyra Audio Settings\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading Screen Sound Control Bus Mix retrieved from the Lyra Audio Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// User Sound Control Bus Mix retrieved from the Lyra Audio Settings\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User Sound Control Bus Mix retrieved from the Lyra Audio Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallControlBus_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overall Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overall Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicControlBus_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Music Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Music Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXControlBus_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SoundFX Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SoundFX Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueControlBus_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatControlBus_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VoiceChat Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VoiceChat Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HDRSubmixEffectChain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Submix Effect Chain Overrides to apply when HDR Audio is turned on\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Effect Chain Overrides to apply when HDR Audio is turned on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDRSubmixEffectChain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Submix Effect hain Overrides to apply when HDR Audio is turned off\n" },
#endif
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Effect hain Overrides to apply when HDR Audio is turned off" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBaseMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingScreenMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverallControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundFXControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceChatControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HDRSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRSubmixEffectChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LDRSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRSubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAudioMixEffectsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix = { "DefaultBaseMix", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, DefaultBaseMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBaseMix_MetaData), NewProp_DefaultBaseMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix = { "LoadingScreenMix", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, LoadingScreenMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenMix_MetaData), NewProp_LoadingScreenMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix = { "UserMix", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, UserMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMix_MetaData), NewProp_UserMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus = { "OverallControlBus", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, OverallControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallControlBus_MetaData), NewProp_OverallControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus = { "MusicControlBus", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, MusicControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicControlBus_MetaData), NewProp_MusicControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus = { "SoundFXControlBus", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, SoundFXControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXControlBus_MetaData), NewProp_SoundFXControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus = { "DialogueControlBus", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, DialogueControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueControlBus_MetaData), NewProp_DialogueControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus = { "VoiceChatControlBus", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, VoiceChatControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatControlBus_MetaData), NewProp_VoiceChatControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_Inner = { "HDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain, METADATA_PARAMS(0, nullptr) }; // 2051370987
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain = { "HDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, HDRSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HDRSubmixEffectChain_MetaData), NewProp_HDRSubmixEffectChain_MetaData) }; // 2051370987
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_Inner = { "LDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain, METADATA_PARAMS(0, nullptr) }; // 2051370987
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain = { "LDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, LDRSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDRSubmixEffectChain_MetaData), NewProp_LDRSubmixEffectChain_MetaData) }; // 2051370987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::ClassParams = {
	&ULyraAudioMixEffectsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem()
{
	if (!Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem.OuterSingleton, Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAudioMixEffectsSubsystem>()
{
	return ULyraAudioMixEffectsSubsystem::StaticClass();
}
ULyraAudioMixEffectsSubsystem::ULyraAudioMixEffectsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAudioMixEffectsSubsystem);
ULyraAudioMixEffectsSubsystem::~ULyraAudioMixEffectsSubsystem() {}
// End Class ULyraAudioMixEffectsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAudioSubmixEffectsChain::StaticStruct, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewStructOps, TEXT("LyraAudioSubmixEffectsChain"), &Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAudioSubmixEffectsChain), 2051370987U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAudioMixEffectsSubsystem, ULyraAudioMixEffectsSubsystem::StaticClass, TEXT("ULyraAudioMixEffectsSubsystem"), &Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAudioMixEffectsSubsystem), 3146904743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_219221928(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
