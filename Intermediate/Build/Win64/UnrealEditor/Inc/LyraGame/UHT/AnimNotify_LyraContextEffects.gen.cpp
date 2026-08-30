// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/ContextEffects/AnimNotify_LyraContextEffects.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_LyraContextEffects() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects();
LYRAGAME_API UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraContextEffectAnimNotifyVFXSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyVFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyVFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyVFXSettings>()
{
	return FLyraContextEffectAnimNotifyVFXSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale to spawn the particle system at\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to spawn the particle system at" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyVFXSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyVFXSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraContextEffectAnimNotifyVFXSettings",
	Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers),
	sizeof(FLyraContextEffectAnimNotifyVFXSettings),
	alignof(FLyraContextEffectAnimNotifyVFXSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.InnerSingleton;
}
// End ScriptStruct FLyraContextEffectAnimNotifyVFXSettings

// Begin ScriptStruct FLyraContextEffectAnimNotifyAudioSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyAudioSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyAudioSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyAudioSettings>()
{
	return FLyraContextEffectAnimNotifyAudioSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Volume Multiplier\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volume Multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pitch Multiplier\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch Multiplier" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyAudioSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyAudioSettings, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyAudioSettings, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraContextEffectAnimNotifyAudioSettings",
	Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers),
	sizeof(FLyraContextEffectAnimNotifyAudioSettings),
	alignof(FLyraContextEffectAnimNotifyAudioSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.InnerSingleton;
}
// End ScriptStruct FLyraContextEffectAnimNotifyAudioSettings

// Begin ScriptStruct FLyraContextEffectAnimNotifyTraceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyTraceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyTraceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyTraceSettings>()
{
	return FLyraContextEffectAnimNotifyTraceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trace Channel\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace Channel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTraceLocationOffset_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vector offset from Effect Location\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector offset from Effect Location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreActor_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ignore this Actor when getting trace result\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore this Actor when getting trace result" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndTraceLocationOffset;
	static void NewProp_bIgnoreActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyTraceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyTraceSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset = { "EndTraceLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyTraceSettings, EndTraceLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTraceLocationOffset_MetaData), NewProp_EndTraceLocationOffset_MetaData) };
void Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_SetBit(void* Obj)
{
	((FLyraContextEffectAnimNotifyTraceSettings*)Obj)->bIgnoreActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor = { "bIgnoreActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLyraContextEffectAnimNotifyTraceSettings), &Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreActor_MetaData), NewProp_bIgnoreActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraContextEffectAnimNotifyTraceSettings",
	Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers),
	sizeof(FLyraContextEffectAnimNotifyTraceSettings),
	alignof(FLyraContextEffectAnimNotifyTraceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.InnerSingleton;
}
// End ScriptStruct FLyraContextEffectAnimNotifyTraceSettings

// Begin ScriptStruct FLyraContextEffectAnimNotifyPreviewSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyPreviewSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyPreviewSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyPreviewSettings>()
{
	return FLyraContextEffectAnimNotifyPreviewSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewPhysicalSurfaceAsContext_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will attempt to match selected Surface Type to Context Tag via Project Settings\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will attempt to match selected Surface Type to Context Tag via Project Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPhysicalSurface_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Surface Type\n" },
#endif
		{ "EditCondition", "bPreviewPhysicalSurfaceAsContext" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface Type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewContextEffectsLibrary_MetaData[] = {
		{ "AllowedClasses", "/Script/LyraGame.LyraContextEffectsLibrary" },
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Preview Library\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preview Library" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewContexts_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Preview Context\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preview Context" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPreviewPhysicalSurfaceAsContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewPhysicalSurfaceAsContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewPhysicalSurface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewContextEffectsLibrary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyPreviewSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_SetBit(void* Obj)
{
	((FLyraContextEffectAnimNotifyPreviewSettings*)Obj)->bPreviewPhysicalSurfaceAsContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext = { "bPreviewPhysicalSurfaceAsContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLyraContextEffectAnimNotifyPreviewSettings), &Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewPhysicalSurfaceAsContext_MetaData), NewProp_bPreviewPhysicalSurfaceAsContext_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface = { "PreviewPhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyPreviewSettings, PreviewPhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewPhysicalSurface_MetaData), NewProp_PreviewPhysicalSurface_MetaData) }; // 161619406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary = { "PreviewContextEffectsLibrary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyPreviewSettings, PreviewContextEffectsLibrary), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewContextEffectsLibrary_MetaData), NewProp_PreviewContextEffectsLibrary_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts = { "PreviewContexts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraContextEffectAnimNotifyPreviewSettings, PreviewContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewContexts_MetaData), NewProp_PreviewContexts_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraContextEffectAnimNotifyPreviewSettings",
	Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers),
	sizeof(FLyraContextEffectAnimNotifyPreviewSettings),
	alignof(FLyraContextEffectAnimNotifyPreviewSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.InnerSingleton;
}
// End ScriptStruct FLyraContextEffectAnimNotifyPreviewSettings

// Begin Class UAnimNotify_LyraContextEffects Function SetParameters
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics
{
	struct AnimNotify_LyraContextEffects_eventSetParameters_Parms
	{
		FGameplayTag EffectIn;
		FVector LocationOffsetIn;
		FRotator RotationOffsetIn;
		FLyraContextEffectAnimNotifyVFXSettings VFXPropertiesIn;
		FLyraContextEffectAnimNotifyAudioSettings AudioPropertiesIn;
		bool bAttachedIn;
		FName SocketNameIn;
		bool bPerformTraceIn;
		FLyraContextEffectAnimNotifyTraceSettings TracePropertiesIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffsetIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsetIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VFXPropertiesIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioPropertiesIn;
	static void NewProp_bAttachedIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachedIn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameIn;
	static void NewProp_bPerformTraceIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformTraceIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TracePropertiesIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_EffectIn = { "EffectIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, EffectIn), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_LocationOffsetIn = { "LocationOffsetIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, LocationOffsetIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_RotationOffsetIn = { "RotationOffsetIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, RotationOffsetIn), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_VFXPropertiesIn = { "VFXPropertiesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, VFXPropertiesIn), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings, METADATA_PARAMS(0, nullptr) }; // 817972917
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_AudioPropertiesIn = { "AudioPropertiesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, AudioPropertiesIn), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings, METADATA_PARAMS(0, nullptr) }; // 2521679084
void Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn_SetBit(void* Obj)
{
	((AnimNotify_LyraContextEffects_eventSetParameters_Parms*)Obj)->bAttachedIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn = { "bAttachedIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotify_LyraContextEffects_eventSetParameters_Parms), &Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_SocketNameIn = { "SocketNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, SocketNameIn), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn_SetBit(void* Obj)
{
	((AnimNotify_LyraContextEffects_eventSetParameters_Parms*)Obj)->bPerformTraceIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn = { "bPerformTraceIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotify_LyraContextEffects_eventSetParameters_Parms), &Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_TracePropertiesIn = { "TracePropertiesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, TracePropertiesIn), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings, METADATA_PARAMS(0, nullptr) }; // 2936355306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_EffectIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_LocationOffsetIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_RotationOffsetIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_VFXPropertiesIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_AudioPropertiesIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_SocketNameIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_TracePropertiesIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_LyraContextEffects, nullptr, "SetParameters", nullptr, nullptr, Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::AnimNotify_LyraContextEffects_eventSetParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x64820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::AnimNotify_LyraContextEffects_eventSetParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimNotify_LyraContextEffects::execSetParameters)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EffectIn);
	P_GET_STRUCT(FVector,Z_Param_LocationOffsetIn);
	P_GET_STRUCT(FRotator,Z_Param_RotationOffsetIn);
	P_GET_STRUCT(FLyraContextEffectAnimNotifyVFXSettings,Z_Param_VFXPropertiesIn);
	P_GET_STRUCT(FLyraContextEffectAnimNotifyAudioSettings,Z_Param_AudioPropertiesIn);
	P_GET_UBOOL(Z_Param_bAttachedIn);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketNameIn);
	P_GET_UBOOL(Z_Param_bPerformTraceIn);
	P_GET_STRUCT(FLyraContextEffectAnimNotifyTraceSettings,Z_Param_TracePropertiesIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameters(Z_Param_EffectIn,Z_Param_LocationOffsetIn,Z_Param_RotationOffsetIn,Z_Param_VFXPropertiesIn,Z_Param_AudioPropertiesIn,Z_Param_bAttachedIn,Z_Param_SocketNameIn,Z_Param_bPerformTraceIn,Z_Param_TracePropertiesIn);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimNotify_LyraContextEffects Function SetParameters

// Begin Class UAnimNotify_LyraContextEffects
void UAnimNotify_LyraContextEffects::StaticRegisterNativesUAnimNotify_LyraContextEffects()
{
#if WITH_EDITOR
	UClass* Class = UAnimNotify_LyraContextEffects::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetParameters", &UAnimNotify_LyraContextEffects::execSetParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_LyraContextEffects);
UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects_NoRegister()
{
	return UAnimNotify_LyraContextEffects::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Play Context Effects" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effect to Play\n" },
#endif
		{ "DisplayName", "Effect" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect to Play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Location offset from the socket\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location offset from the socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation offset from socket\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation offset from socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFXProperties_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale to spawn the particle system at\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to spawn the particle system at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioProperties_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale to spawn the particle system at\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to spawn the particle system at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[] = {
		{ "Category", "AttachmentProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should attach to the bone/socket\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should attach to the bone/socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AttachmentProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SocketName to attach to\n" },
#endif
		{ "EditCondition", "bAttached" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SocketName to attach to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformTrace_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will perform a trace, required for SurfaceType to Context Conversion\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will perform a trace, required for SurfaceType to Context Conversion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceProperties_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale to spawn the particle system at\n" },
#endif
		{ "EditCondition", "bPerformTrace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to spawn the particle system at" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewInEditor_MetaData[] = {
		{ "Category", "PreviewProperties" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewProperties_MetaData[] = {
		{ "Category", "PreviewProperties" },
		{ "EditCondition", "bPreviewInEditor" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VFXProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioProperties;
	static void NewProp_bAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttached;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static void NewProp_bPerformTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformTrace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProperties;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewInEditor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewProperties;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters, "SetParameters" }, // 1208848875
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_LyraContextEffects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, Effect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties = { "VFXProperties", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, VFXProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFXProperties_MetaData), NewProp_VFXProperties_MetaData) }; // 817972917
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties = { "AudioProperties", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, AudioProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioProperties_MetaData), NewProp_AudioProperties_MetaData) }; // 2521679084
void Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_SetBit(void* Obj)
{
	((UAnimNotify_LyraContextEffects*)Obj)->bAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached = { "bAttached", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimNotify_LyraContextEffects), &Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttached_MetaData), NewProp_bAttached_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
void Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_SetBit(void* Obj)
{
	((UAnimNotify_LyraContextEffects*)Obj)->bPerformTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace = { "bPerformTrace", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimNotify_LyraContextEffects), &Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformTrace_MetaData), NewProp_bPerformTrace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties = { "TraceProperties", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, TraceProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceProperties_MetaData), NewProp_TraceProperties_MetaData) }; // 2936355306
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_SetBit(void* Obj)
{
	((UAnimNotify_LyraContextEffects*)Obj)->bPreviewInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor = { "bPreviewInEditor", nullptr, (EPropertyFlags)0x0010000800004011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimNotify_LyraContextEffects), &Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewInEditor_MetaData), NewProp_bPreviewInEditor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties = { "PreviewProperties", nullptr, (EPropertyFlags)0x0010000800000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, PreviewProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewProperties_MetaData), NewProp_PreviewProperties_MetaData) }; // 1783893619
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::ClassParams = {
	&UAnimNotify_LyraContextEffects::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers),
	0,
	0x001120A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects.OuterSingleton, Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UAnimNotify_LyraContextEffects>()
{
	return UAnimNotify_LyraContextEffects::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_LyraContextEffects);
UAnimNotify_LyraContextEffects::~UAnimNotify_LyraContextEffects() {}
// End Class UAnimNotify_LyraContextEffects

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraContextEffectAnimNotifyVFXSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyVFXSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyVFXSettings), 817972917U) },
		{ FLyraContextEffectAnimNotifyAudioSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyAudioSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyAudioSettings), 2521679084U) },
		{ FLyraContextEffectAnimNotifyTraceSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyTraceSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyTraceSettings), 2936355306U) },
		{ FLyraContextEffectAnimNotifyPreviewSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyPreviewSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyPreviewSettings), 1783893619U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_LyraContextEffects, UAnimNotify_LyraContextEffects::StaticClass, TEXT("UAnimNotify_LyraContextEffects"), &Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_LyraContextEffects), 2277929134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_535087911(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
