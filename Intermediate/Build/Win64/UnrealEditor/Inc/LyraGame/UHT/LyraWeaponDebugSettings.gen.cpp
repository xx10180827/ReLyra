// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraWeaponDebugSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponDebugSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponDebugSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponDebugSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraWeaponDebugSettings
void ULyraWeaponDebugSettings::StaticRegisterNativesULyraWeaponDebugSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponDebugSettings);
UClass* Z_Construct_UClass_ULyraWeaponDebugSettings_NoRegister()
{
	return ULyraWeaponDebugSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraWeaponDebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Developer debugging settings for weapons\n */" },
#endif
		{ "IncludePath", "Weapons/LyraWeaponDebugSettings.h" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Developer debugging settings for weapons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawBulletTraceDuration_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we do debug drawing for bullet traces (if above zero, sets how long (in seconds)\n" },
#endif
		{ "ConsoleVariable", "lyra.Weapon.DrawBulletTraceDuration" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we do debug drawing for bullet traces (if above zero, sets how long (in seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawBulletHitDuration_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we do debug drawing for bullet impacts (if above zero, sets how long (in seconds)\n" },
#endif
		{ "ConsoleVariable", "lyra.Weapon.DrawBulletHitDuration" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we do debug drawing for bullet impacts (if above zero, sets how long (in seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawBulletHitRadius_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When bullet hit debug drawing is enabled (see DrawBulletHitDuration), how big should the hit radius be? (in cm)\n" },
#endif
		{ "ConsoleVariable", "lyra.Weapon.DrawBulletHitRadius" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When bullet hit debug drawing is enabled (see DrawBulletHitDuration), how big should the hit radius be? (in cm)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawBulletTraceDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawBulletHitDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawBulletHitRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponDebugSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration = { "DrawBulletTraceDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponDebugSettings, DrawBulletTraceDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawBulletTraceDuration_MetaData), NewProp_DrawBulletTraceDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration = { "DrawBulletHitDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponDebugSettings, DrawBulletHitDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawBulletHitDuration_MetaData), NewProp_DrawBulletHitDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius = { "DrawBulletHitRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponDebugSettings, DrawBulletHitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawBulletHitRadius_MetaData), NewProp_DrawBulletHitRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::ClassParams = {
	&ULyraWeaponDebugSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWeaponDebugSettings()
{
	if (!Z_Registration_Info_UClass_ULyraWeaponDebugSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponDebugSettings.OuterSingleton, Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWeaponDebugSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponDebugSettings>()
{
	return ULyraWeaponDebugSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponDebugSettings);
ULyraWeaponDebugSettings::~ULyraWeaponDebugSettings() {}
// End Class ULyraWeaponDebugSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponDebugSettings, ULyraWeaponDebugSettings::StaticClass, TEXT("ULyraWeaponDebugSettings"), &Z_Registration_Info_UClass_ULyraWeaponDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponDebugSettings), 181903601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_991744976(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
