// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingValueDiscrete_Resolution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscrete_Resolution() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingValueDiscrete_Resolution
void ULyraSettingValueDiscrete_Resolution::StaticRegisterNativesULyraSettingValueDiscrete_Resolution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscrete_Resolution);
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_NoRegister()
{
	return ULyraSettingValueDiscrete_Resolution::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscrete_Resolution.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscrete_Resolution.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscrete_Resolution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscrete,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics::ClassParams = {
	&ULyraSettingValueDiscrete_Resolution::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution()
{
	if (!Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Resolution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Resolution.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Resolution.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscrete_Resolution>()
{
	return ULyraSettingValueDiscrete_Resolution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscrete_Resolution);
ULyraSettingValueDiscrete_Resolution::~ULyraSettingValueDiscrete_Resolution() {}
// End Class ULyraSettingValueDiscrete_Resolution

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Resolution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscrete_Resolution, ULyraSettingValueDiscrete_Resolution::StaticClass, TEXT("ULyraSettingValueDiscrete_Resolution"), &Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Resolution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscrete_Resolution), 1917978537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Resolution_h_453710866(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Resolution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Resolution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
