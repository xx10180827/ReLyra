// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingValueDiscrete_OverallQuality.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscrete_OverallQuality() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingValueDiscrete_OverallQuality
void ULyraSettingValueDiscrete_OverallQuality::StaticRegisterNativesULyraSettingValueDiscrete_OverallQuality()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscrete_OverallQuality);
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_NoRegister()
{
	return ULyraSettingValueDiscrete_OverallQuality::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscrete_OverallQuality.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscrete_OverallQuality.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscrete_OverallQuality>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscrete,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics::ClassParams = {
	&ULyraSettingValueDiscrete_OverallQuality::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality()
{
	if (!Z_Registration_Info_UClass_ULyraSettingValueDiscrete_OverallQuality.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscrete_OverallQuality.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingValueDiscrete_OverallQuality.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscrete_OverallQuality>()
{
	return ULyraSettingValueDiscrete_OverallQuality::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscrete_OverallQuality);
ULyraSettingValueDiscrete_OverallQuality::~ULyraSettingValueDiscrete_OverallQuality() {}
// End Class ULyraSettingValueDiscrete_OverallQuality

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_OverallQuality_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscrete_OverallQuality, ULyraSettingValueDiscrete_OverallQuality::StaticClass, TEXT("ULyraSettingValueDiscrete_OverallQuality"), &Z_Registration_Info_UClass_ULyraSettingValueDiscrete_OverallQuality, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscrete_OverallQuality), 2702593385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_OverallQuality_h_2558643524(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_OverallQuality_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_OverallQuality_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
