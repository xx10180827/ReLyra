// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Camera/LyraPenetrationAvoidanceFeeler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPenetrationAvoidanceFeeler() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraPenetrationAvoidanceFeeler
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler;
class UScriptStruct* FLyraPenetrationAvoidanceFeeler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraPenetrationAvoidanceFeeler"));
	}
	return Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraPenetrationAvoidanceFeeler>()
{
	return FLyraPenetrationAvoidanceFeeler::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a feeler ray used for camera penetration avoidance.\n */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a feeler ray used for camera penetration avoidance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentRot_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FRotator describing deviance from main ray */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FRotator describing deviance from main ray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how much this feeler affects the final position if it hits the world */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much this feeler affects the final position if it hits the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all) */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** extent to use for collision when tracing this feeler */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "extent to use for collision when tracing this feeler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceInterval_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** minimum frame interval between traces with this feeler if nothing was hit last frame */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "minimum frame interval between traces with this feeler if nothing was hit last frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesUntilNextTrace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** number of frames since this feeler was used */" },
#endif
		{ "ModuleRelativePath", "Camera/LyraPenetrationAvoidanceFeeler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "number of frames since this feeler was used" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustmentRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesUntilNextTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraPenetrationAvoidanceFeeler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot = { "AdjustmentRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, AdjustmentRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentRot_MetaData), NewProp_AdjustmentRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight = { "WorldWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, WorldWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldWeight_MetaData), NewProp_WorldWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight = { "PawnWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, PawnWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnWeight_MetaData), NewProp_PawnWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, Extent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval = { "TraceInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, TraceInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceInterval_MetaData), NewProp_TraceInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace = { "FramesUntilNextTrace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPenetrationAvoidanceFeeler, FramesUntilNextTrace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesUntilNextTrace_MetaData), NewProp_FramesUntilNextTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_TraceInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewProp_FramesUntilNextTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraPenetrationAvoidanceFeeler",
	Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::PropPointers),
	sizeof(FLyraPenetrationAvoidanceFeeler),
	alignof(FLyraPenetrationAvoidanceFeeler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.InnerSingleton, Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler.InnerSingleton;
}
// End ScriptStruct FLyraPenetrationAvoidanceFeeler

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraPenetrationAvoidanceFeeler::StaticStruct, Z_Construct_UScriptStruct_FLyraPenetrationAvoidanceFeeler_Statics::NewStructOps, TEXT("LyraPenetrationAvoidanceFeeler"), &Z_Registration_Info_UScriptStruct_LyraPenetrationAvoidanceFeeler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraPenetrationAvoidanceFeeler), 2900195724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_4124090625(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPenetrationAvoidanceFeeler_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
