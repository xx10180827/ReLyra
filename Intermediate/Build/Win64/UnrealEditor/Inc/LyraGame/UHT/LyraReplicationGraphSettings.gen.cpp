// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraReplicationGraphSettings.h"
#include "LyraGame/System/LyraReplicationGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplicationGraphSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphSettings_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRepGraphActorClassSettings();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraReplicationGraphSettings
void ULyraReplicationGraphSettings::StaticRegisterNativesULyraReplicationGraphSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraphSettings);
UClass* Z_Construct_UClass_ULyraReplicationGraphSettings_NoRegister()
{
	return ULyraReplicationGraphSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraReplicationGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Default settings for the Lyra replication graph\n */" },
#endif
		{ "IncludePath", "System/LyraReplicationGraphSettings.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default settings for the Lyra replication graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableReplicationGraph_MetaData[] = {
		{ "Category", "ReplicationGraph" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReplicationGraphClass_MetaData[] = {
		{ "Category", "ReplicationGraph" },
		{ "MetaClass", "/Script/LyraGame.LyraReplicationGraph" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFastSharedPath_MetaData[] = {
		{ "Category", "FastSharedPath" },
		{ "ConsoleVariable", "Lyra.RepGraph.EnableFastSharedPath" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetKBytesSecFastSharedPath_MetaData[] = {
		{ "Category", "FastSharedPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much bandwidth to use for FastShared movement updates. This is counted independently of the NetDriver's target bandwidth.\n" },
#endif
		{ "ConsoleVariable", "Lyra.RepGraph.TargetKBytesSecFastSharedPath" },
		{ "ForceUnits", "Kilobytes" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much bandwidth to use for FastShared movement updates. This is counted independently of the NetDriver's target bandwidth." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastSharedPathCullDistPct_MetaData[] = {
		{ "Category", "FastSharedPath" },
		{ "ConsoleVariable", "Lyra.RepGraph.FastSharedPathCullDistPct" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionInfoMaxDist_MetaData[] = {
		{ "Category", "DestructionInfo" },
		{ "ConsoleVariable", "Lyra.RepGraph.DestructInfo.MaxDist" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialGridCellSize_MetaData[] = {
		{ "Category", "SpatialGrid" },
		{ "ConsoleVariable", "Lyra.RepGraph.CellSize" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBiasX_MetaData[] = {
		{ "Category", "SpatialGrid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Essentially \"Min X\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this.\n" },
#endif
		{ "ConsoleVariable", "Lyra.RepGraph.SpatialBiasX" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Essentially \"Min X\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBiasY_MetaData[] = {
		{ "Category", "SpatialGrid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Essentially \"Min Y\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this.\n" },
#endif
		{ "ConsoleVariable", "Lyra.RepGraph.SpatialBiasY" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Essentially \"Min Y\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSpatialRebuilds_MetaData[] = {
		{ "Category", "SpatialGrid" },
		{ "ConsoleVariable", "Lyra.RepGraph.DisableSpatialRebuilds" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicActorFrequencyBuckets_MetaData[] = {
		{ "Category", "DynamicSpatialFrequency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many buckets to spread dynamic, spatialized actors across.\n// High number = more buckets = smaller effective replication frequency.\n// This happens before individual actors do their own NetUpdateFrequency check.\n" },
#endif
		{ "ConsoleVariable", "Lyra.RepGraph.DynamicActorFrequencyBuckets" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many buckets to spread dynamic, spatialized actors across.\nHigh number = more buckets = smaller effective replication frequency.\nThis happens before individual actors do their own NetUpdateFrequency check." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassSettings_MetaData[] = {
		{ "Category", "ReplicationGraph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of Custom Settings for Specific Classes \n" },
#endif
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of Custom Settings for Specific Classes" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDisableReplicationGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableReplicationGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultReplicationGraphClass;
	static void NewProp_bEnableFastSharedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFastSharedPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetKBytesSecFastSharedPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FastSharedPathCullDistPct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionInfoMaxDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialGridCellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialBiasX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialBiasY;
	static void NewProp_bDisableSpatialRebuilds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSpatialRebuilds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DynamicActorFrequencyBuckets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_SetBit(void* Obj)
{
	((ULyraReplicationGraphSettings*)Obj)->bDisableReplicationGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph = { "bDisableReplicationGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraReplicationGraphSettings), &Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableReplicationGraph_MetaData), NewProp_bDisableReplicationGraph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass = { "DefaultReplicationGraphClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, DefaultReplicationGraphClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReplicationGraphClass_MetaData), NewProp_DefaultReplicationGraphClass_MetaData) };
void Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_SetBit(void* Obj)
{
	((ULyraReplicationGraphSettings*)Obj)->bEnableFastSharedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath = { "bEnableFastSharedPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraReplicationGraphSettings), &Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFastSharedPath_MetaData), NewProp_bEnableFastSharedPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath = { "TargetKBytesSecFastSharedPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, TargetKBytesSecFastSharedPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetKBytesSecFastSharedPath_MetaData), NewProp_TargetKBytesSecFastSharedPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct = { "FastSharedPathCullDistPct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, FastSharedPathCullDistPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastSharedPathCullDistPct_MetaData), NewProp_FastSharedPathCullDistPct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist = { "DestructionInfoMaxDist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, DestructionInfoMaxDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionInfoMaxDist_MetaData), NewProp_DestructionInfoMaxDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize = { "SpatialGridCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, SpatialGridCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialGridCellSize_MetaData), NewProp_SpatialGridCellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX = { "SpatialBiasX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, SpatialBiasX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialBiasX_MetaData), NewProp_SpatialBiasX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY = { "SpatialBiasY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, SpatialBiasY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialBiasY_MetaData), NewProp_SpatialBiasY_MetaData) };
void Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_SetBit(void* Obj)
{
	((ULyraReplicationGraphSettings*)Obj)->bDisableSpatialRebuilds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds = { "bDisableSpatialRebuilds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraReplicationGraphSettings), &Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSpatialRebuilds_MetaData), NewProp_bDisableSpatialRebuilds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets = { "DynamicActorFrequencyBuckets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, DynamicActorFrequencyBuckets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicActorFrequencyBuckets_MetaData), NewProp_DynamicActorFrequencyBuckets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_Inner = { "ClassSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRepGraphActorClassSettings, METADATA_PARAMS(0, nullptr) }; // 3119884048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings = { "ClassSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraphSettings, ClassSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassSettings_MetaData), NewProp_ClassSettings_MetaData) }; // 3119884048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::ClassParams = {
	&ULyraReplicationGraphSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplicationGraphSettings()
{
	if (!Z_Registration_Info_UClass_ULyraReplicationGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraphSettings.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplicationGraphSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraphSettings>()
{
	return ULyraReplicationGraphSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraphSettings);
ULyraReplicationGraphSettings::~ULyraReplicationGraphSettings() {}
// End Class ULyraReplicationGraphSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReplicationGraphSettings, ULyraReplicationGraphSettings::StaticClass, TEXT("ULyraReplicationGraphSettings"), &Z_Registration_Info_UClass_ULyraReplicationGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraphSettings), 2976429712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_2052245859(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
