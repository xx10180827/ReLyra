// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Development/LyraDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDeveloperSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDeveloperSettings_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ECheatExecutionTime();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCheatToRun();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ECheatExecutionTime
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECheatExecutionTime;
static UEnum* ECheatExecutionTime_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECheatExecutionTime.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECheatExecutionTime.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ECheatExecutionTime, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ECheatExecutionTime"));
	}
	return Z_Registration_Info_UEnum_ECheatExecutionTime.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ECheatExecutionTime>()
{
	return ECheatExecutionTime_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
		{ "OnCheatManagerCreated.Comment", "// When the cheat manager is created\n" },
		{ "OnCheatManagerCreated.Name", "ECheatExecutionTime::OnCheatManagerCreated" },
		{ "OnCheatManagerCreated.ToolTip", "When the cheat manager is created" },
		{ "OnPlayerPawnPossession.Comment", "// When a pawn is possessed by a player\n" },
		{ "OnPlayerPawnPossession.Name", "ECheatExecutionTime::OnPlayerPawnPossession" },
		{ "OnPlayerPawnPossession.ToolTip", "When a pawn is possessed by a player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECheatExecutionTime::OnCheatManagerCreated", (int64)ECheatExecutionTime::OnCheatManagerCreated },
		{ "ECheatExecutionTime::OnPlayerPawnPossession", (int64)ECheatExecutionTime::OnPlayerPawnPossession },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ECheatExecutionTime",
	"ECheatExecutionTime",
	Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ECheatExecutionTime()
{
	if (!Z_Registration_Info_UEnum_ECheatExecutionTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECheatExecutionTime.InnerSingleton, Z_Construct_UEnum_LyraGame_ECheatExecutionTime_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECheatExecutionTime.InnerSingleton;
}
// End Enum ECheatExecutionTime

// Begin ScriptStruct FLyraCheatToRun
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCheatToRun;
class UScriptStruct* FLyraCheatToRun::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCheatToRun.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCheatToRun.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCheatToRun, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCheatToRun"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCheatToRun.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCheatToRun>()
{
	return FLyraCheatToRun::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraCheatToRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "Category", "LyraCheatToRun" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cheat_MetaData[] = {
		{ "Category", "LyraCheatToRun" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Phase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Cheat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCheatToRun>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCheatToRun, Phase), Z_Construct_UEnum_LyraGame_ECheatExecutionTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) }; // 1272832148
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat = { "Cheat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCheatToRun, Cheat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cheat_MetaData), NewProp_Cheat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Phase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewProp_Cheat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraCheatToRun",
	Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::PropPointers),
	sizeof(FLyraCheatToRun),
	alignof(FLyraCheatToRun),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraCheatToRun()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCheatToRun.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCheatToRun.InnerSingleton, Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraCheatToRun.InnerSingleton;
}
// End ScriptStruct FLyraCheatToRun

// Begin Class ULyraDeveloperSettings
void ULyraDeveloperSettings::StaticRegisterNativesULyraDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDeveloperSettings);
UClass* Z_Construct_UClass_ULyraDeveloperSettings_NoRegister()
{
	return ULyraDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Developer settings / editor cheats\n */" },
#endif
		{ "IncludePath", "Development/LyraDeveloperSettings.h" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Developer settings / editor cheats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceOverride_MetaData[] = {
		{ "AllowedTypes", "LyraExperienceDefinition" },
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The experience override to use for Play in Editor (if not set, the default for the world settings of the open map will be used)\n" },
#endif
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The experience override to use for Play in Editor (if not set, the default for the world settings of the open map will be used)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBotCount_MetaData[] = {
		{ "Category", "LyraBots" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNumPlayerBotsToSpawn_MetaData[] = {
		{ "Category", "LyraBots" },
		{ "EditCondition", "bOverrideBotCount" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlayerBotsToAttack_MetaData[] = {
		{ "Category", "LyraBots" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestFullGameFlowInPIE_MetaData[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Do the full game flow when playing in the editor, or skip 'waiting for player' / etc... game phases?\n" },
#endif
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Do the full game flow when playing in the editor, or skip 'waiting for player' / etc... game phases?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAlwaysPlayForceFeedback_MetaData[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Should force feedback effects be played, even if the last input device was not a gamepad?\n\x09* The default behavior in Lyra is to only play force feedback if the most recent input device was a gamepad.\n\x09*/" },
#endif
		{ "ConsoleVariable", "LyraPC.ShouldAlwaysPlayForceFeedback" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should force feedback effects be played, even if the last input device was not a gamepad?\nThe default behavior in Lyra is to only play force feedback if the most recent input device was a gamepad." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should game logic load cosmetic backgrounds in the editor or skip them for iteration speed?\n" },
#endif
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should game logic load cosmetic backgrounds in the editor or skip them for iteration speed?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatsToRun_MetaData[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of cheats to auto-run during 'play in editor'\n" },
#endif
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of cheats to auto-run during 'play in editor'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogGameplayMessages_MetaData[] = {
		{ "Category", "GameplayMessages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should messages broadcast through the gameplay message subsystem be logged?\n" },
#endif
		{ "ConsoleVariable", "GameplayMessageSubsystem.LogMessages" },
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should messages broadcast through the gameplay message subsystem be logged?" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonEditorMaps_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Maps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of common maps that will be accessible via the editor detoolbar */" },
#endif
		{ "ModuleRelativePath", "Development/LyraDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of common maps that will be accessible via the editor detoolbar" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceOverride;
	static void NewProp_bOverrideBotCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBotCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideNumPlayerBotsToSpawn;
	static void NewProp_bAllowPlayerBotsToAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlayerBotsToAttack;
	static void NewProp_bTestFullGameFlowInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestFullGameFlowInPIE;
	static void NewProp_bShouldAlwaysPlayForceFeedback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAlwaysPlayForceFeedback;
	static void NewProp_bSkipLoadingCosmeticBackgroundsInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipLoadingCosmeticBackgroundsInPIE;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheatsToRun_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatsToRun;
	static void NewProp_LogGameplayMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LogGameplayMessages;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonEditorMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonEditorMaps;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride = { "ExperienceOverride", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDeveloperSettings, ExperienceOverride), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceOverride_MetaData), NewProp_ExperienceOverride_MetaData) };
void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_SetBit(void* Obj)
{
	((ULyraDeveloperSettings*)Obj)->bOverrideBotCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount = { "bOverrideBotCount", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBotCount_MetaData), NewProp_bOverrideBotCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn = { "OverrideNumPlayerBotsToSpawn", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDeveloperSettings, OverrideNumPlayerBotsToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideNumPlayerBotsToSpawn_MetaData), NewProp_OverrideNumPlayerBotsToSpawn_MetaData) };
void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_SetBit(void* Obj)
{
	((ULyraDeveloperSettings*)Obj)->bAllowPlayerBotsToAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack = { "bAllowPlayerBotsToAttack", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPlayerBotsToAttack_MetaData), NewProp_bAllowPlayerBotsToAttack_MetaData) };
void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_SetBit(void* Obj)
{
	((ULyraDeveloperSettings*)Obj)->bTestFullGameFlowInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE = { "bTestFullGameFlowInPIE", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestFullGameFlowInPIE_MetaData), NewProp_bTestFullGameFlowInPIE_MetaData) };
void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_SetBit(void* Obj)
{
	((ULyraDeveloperSettings*)Obj)->bShouldAlwaysPlayForceFeedback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback = { "bShouldAlwaysPlayForceFeedback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAlwaysPlayForceFeedback_MetaData), NewProp_bShouldAlwaysPlayForceFeedback_MetaData) };
void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_SetBit(void* Obj)
{
	((ULyraDeveloperSettings*)Obj)->bSkipLoadingCosmeticBackgroundsInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE = { "bSkipLoadingCosmeticBackgroundsInPIE", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData), NewProp_bSkipLoadingCosmeticBackgroundsInPIE_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_Inner = { "CheatsToRun", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraCheatToRun, METADATA_PARAMS(0, nullptr) }; // 1176648613
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun = { "CheatsToRun", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDeveloperSettings, CheatsToRun), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatsToRun_MetaData), NewProp_CheatsToRun_MetaData) }; // 1176648613
void Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_SetBit(void* Obj)
{
	((ULyraDeveloperSettings*)Obj)->LogGameplayMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages = { "LogGameplayMessages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDeveloperSettings), &Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogGameplayMessages_MetaData), NewProp_LogGameplayMessages_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_Inner = { "CommonEditorMaps", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps = { "CommonEditorMaps", nullptr, (EPropertyFlags)0x0010000800004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDeveloperSettings, CommonEditorMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonEditorMaps_MetaData), NewProp_CommonEditorMaps_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_ExperienceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bOverrideBotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_OverrideNumPlayerBotsToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bAllowPlayerBotsToAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bTestFullGameFlowInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bShouldAlwaysPlayForceFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_bSkipLoadingCosmeticBackgroundsInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CheatsToRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_LogGameplayMessages,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDeveloperSettings_Statics::NewProp_CommonEditorMaps,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDeveloperSettings_Statics::ClassParams = {
	&ULyraDeveloperSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_ULyraDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDeveloperSettings.OuterSingleton, Z_Construct_UClass_ULyraDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraDeveloperSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraDeveloperSettings>()
{
	return ULyraDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDeveloperSettings);
ULyraDeveloperSettings::~ULyraDeveloperSettings() {}
// End Class ULyraDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECheatExecutionTime_StaticEnum, TEXT("ECheatExecutionTime"), &Z_Registration_Info_UEnum_ECheatExecutionTime, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1272832148U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraCheatToRun::StaticStruct, Z_Construct_UScriptStruct_FLyraCheatToRun_Statics::NewStructOps, TEXT("LyraCheatToRun"), &Z_Registration_Info_UScriptStruct_LyraCheatToRun, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCheatToRun), 1176648613U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDeveloperSettings, ULyraDeveloperSettings::StaticClass, TEXT("ULyraDeveloperSettings"), &Z_Registration_Info_UClass_ULyraDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDeveloperSettings), 2695044675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_3608393178(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
