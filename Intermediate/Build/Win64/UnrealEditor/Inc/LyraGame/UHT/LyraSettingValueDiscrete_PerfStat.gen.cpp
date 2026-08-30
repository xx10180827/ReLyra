// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingValueDiscrete_PerfStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscrete_PerfStat() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingValueDiscrete_PerfStat
void ULyraSettingValueDiscrete_PerfStat::StaticRegisterNativesULyraSettingValueDiscrete_PerfStat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscrete_PerfStat);
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_NoRegister()
{
	return ULyraSettingValueDiscrete_PerfStat::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscrete_PerfStat.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscrete_PerfStat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscrete_PerfStat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscrete,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::ClassParams = {
	&ULyraSettingValueDiscrete_PerfStat::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat()
{
	if (!Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscrete_PerfStat>()
{
	return ULyraSettingValueDiscrete_PerfStat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscrete_PerfStat);
ULyraSettingValueDiscrete_PerfStat::~ULyraSettingValueDiscrete_PerfStat() {}
// End Class ULyraSettingValueDiscrete_PerfStat

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat, ULyraSettingValueDiscrete_PerfStat::StaticClass, TEXT("ULyraSettingValueDiscrete_PerfStat"), &Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscrete_PerfStat), 3988054496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_270335341(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
