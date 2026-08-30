// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Hotfix/LyraHotfixManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHotfixManager() {}

// Begin Cross Module References
HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHotfixManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHotfixManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraHotfixManager
void ULyraHotfixManager::StaticRegisterNativesULyraHotfixManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHotfixManager);
UClass* Z_Construct_UClass_ULyraHotfixManager_NoRegister()
{
	return ULyraHotfixManager::StaticClass();
}
struct Z_Construct_UClass_ULyraHotfixManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Hotfix/LyraHotfixManager.h" },
		{ "ModuleRelativePath", "Hotfix/LyraHotfixManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHotfixManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraHotfixManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineHotfixManager,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHotfixManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHotfixManager_Statics::ClassParams = {
	&ULyraHotfixManager::StaticClass,
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
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHotfixManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraHotfixManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraHotfixManager()
{
	if (!Z_Registration_Info_UClass_ULyraHotfixManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHotfixManager.OuterSingleton, Z_Construct_UClass_ULyraHotfixManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraHotfixManager.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraHotfixManager>()
{
	return ULyraHotfixManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHotfixManager);
// End Class ULyraHotfixManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraHotfixManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHotfixManager, ULyraHotfixManager::StaticClass, TEXT("ULyraHotfixManager"), &Z_Registration_Info_UClass_ULyraHotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHotfixManager), 3421603915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraHotfixManager_h_2693062744(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraHotfixManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraHotfixManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
