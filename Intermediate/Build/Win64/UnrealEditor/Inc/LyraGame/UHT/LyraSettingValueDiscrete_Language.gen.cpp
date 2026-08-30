// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingValueDiscrete_Language.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscrete_Language() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingValueDiscrete_Language
void ULyraSettingValueDiscrete_Language::StaticRegisterNativesULyraSettingValueDiscrete_Language()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscrete_Language);
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language_NoRegister()
{
	return ULyraSettingValueDiscrete_Language::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscrete_Language.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscrete_Language.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscrete_Language>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscrete,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::ClassParams = {
	&ULyraSettingValueDiscrete_Language::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language()
{
	if (!Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscrete_Language>()
{
	return ULyraSettingValueDiscrete_Language::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscrete_Language);
ULyraSettingValueDiscrete_Language::~ULyraSettingValueDiscrete_Language() {}
// End Class ULyraSettingValueDiscrete_Language

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscrete_Language, ULyraSettingValueDiscrete_Language::StaticClass, TEXT("ULyraSettingValueDiscrete_Language"), &Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscrete_Language), 80251537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_3509725333(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
