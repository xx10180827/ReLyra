// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraExperienceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraExperienceManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraExperienceManager
void ULyraExperienceManager::StaticRegisterNativesULyraExperienceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraExperienceManager);
UClass* Z_Construct_UClass_ULyraExperienceManager_NoRegister()
{
	return ULyraExperienceManager::StaticClass();
}
struct Z_Construct_UClass_ULyraExperienceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager for experiences - primarily for arbitration between multiple PIE sessions\n */" },
#endif
		{ "IncludePath", "GameModes/LyraExperienceManager.h" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for experiences - primarily for arbitration between multiple PIE sessions" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraExperienceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraExperienceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraExperienceManager_Statics::ClassParams = {
	&ULyraExperienceManager::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraExperienceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraExperienceManager()
{
	if (!Z_Registration_Info_UClass_ULyraExperienceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraExperienceManager.OuterSingleton, Z_Construct_UClass_ULyraExperienceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraExperienceManager.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraExperienceManager>()
{
	return ULyraExperienceManager::StaticClass();
}
ULyraExperienceManager::ULyraExperienceManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraExperienceManager);
ULyraExperienceManager::~ULyraExperienceManager() {}
// End Class ULyraExperienceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraExperienceManager, ULyraExperienceManager::StaticClass, TEXT("ULyraExperienceManager"), &Z_Registration_Info_UClass_ULyraExperienceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraExperienceManager), 3492659886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManager_h_702102588(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
