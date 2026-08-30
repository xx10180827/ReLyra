// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Weapons/SCircumferenceMarkerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCircumferenceMarkerWidget() {}

// Begin Cross Module References
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FCircumferenceMarkerEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry;
class UScriptStruct* FCircumferenceMarkerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("CircumferenceMarkerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FCircumferenceMarkerEntry>()
{
	return FCircumferenceMarkerEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/Weapons/SCircumferenceMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAngle_MetaData[] = {
		{ "Category", "CircumferenceMarkerEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The angle to place this marker around the circle (in degrees)\n" },
#endif
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "UI/Weapons/SCircumferenceMarkerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The angle to place this marker around the circle (in degrees)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageRotationAngle_MetaData[] = {
		{ "Category", "CircumferenceMarkerEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The angle to rotate the marker image (in degrees)\n" },
#endif
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "UI/Weapons/SCircumferenceMarkerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The angle to rotate the marker image (in degrees)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImageRotationAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircumferenceMarkerEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle = { "PositionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircumferenceMarkerEntry, PositionAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAngle_MetaData), NewProp_PositionAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle = { "ImageRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircumferenceMarkerEntry, ImageRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageRotationAngle_MetaData), NewProp_ImageRotationAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"CircumferenceMarkerEntry",
	Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers),
	sizeof(FCircumferenceMarkerEntry),
	alignof(FCircumferenceMarkerEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry()
{
	if (!Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.InnerSingleton, Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.InnerSingleton;
}
// End ScriptStruct FCircumferenceMarkerEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCircumferenceMarkerEntry::StaticStruct, Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewStructOps, TEXT("CircumferenceMarkerEntry"), &Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCircumferenceMarkerEntry), 3476315904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_3083010810(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
