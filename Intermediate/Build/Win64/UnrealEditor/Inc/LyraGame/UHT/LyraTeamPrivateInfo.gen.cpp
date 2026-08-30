// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/LyraTeamPrivateInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamPrivateInfo() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamInfoBase();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPrivateInfo();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraTeamPrivateInfo
void ALyraTeamPrivateInfo::StaticRegisterNativesALyraTeamPrivateInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraTeamPrivateInfo);
UClass* Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister()
{
	return ALyraTeamPrivateInfo::StaticClass();
}
struct Z_Construct_UClass_ALyraTeamPrivateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Teams/LyraTeamPrivateInfo.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamPrivateInfo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraTeamPrivateInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALyraTeamPrivateInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALyraTeamInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamPrivateInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraTeamPrivateInfo_Statics::ClassParams = {
	&ALyraTeamPrivateInfo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamPrivateInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraTeamPrivateInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraTeamPrivateInfo()
{
	if (!Z_Registration_Info_UClass_ALyraTeamPrivateInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraTeamPrivateInfo.OuterSingleton, Z_Construct_UClass_ALyraTeamPrivateInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraTeamPrivateInfo.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraTeamPrivateInfo>()
{
	return ALyraTeamPrivateInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraTeamPrivateInfo);
ALyraTeamPrivateInfo::~ALyraTeamPrivateInfo() {}
// End Class ALyraTeamPrivateInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPrivateInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraTeamPrivateInfo, ALyraTeamPrivateInfo::StaticClass, TEXT("ALyraTeamPrivateInfo"), &Z_Registration_Info_UClass_ALyraTeamPrivateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraTeamPrivateInfo), 2594129218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPrivateInfo_h_459707015(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPrivateInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPrivateInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
