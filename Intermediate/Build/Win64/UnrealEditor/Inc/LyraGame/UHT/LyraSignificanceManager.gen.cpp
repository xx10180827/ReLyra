// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraSignificanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSignificanceManager() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSignificanceManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSignificanceManager_NoRegister();
SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSignificanceManager
void ULyraSignificanceManager::StaticRegisterNativesULyraSignificanceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSignificanceManager);
UClass* Z_Construct_UClass_ULyraSignificanceManager_NoRegister()
{
	return ULyraSignificanceManager::StaticClass();
}
struct Z_Construct_UClass_ULyraSignificanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraSignificanceManager.h" },
		{ "ModuleRelativePath", "System/LyraSignificanceManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSignificanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSignificanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USignificanceManager,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSignificanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSignificanceManager_Statics::ClassParams = {
	&ULyraSignificanceManager::StaticClass,
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
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSignificanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSignificanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSignificanceManager()
{
	if (!Z_Registration_Info_UClass_ULyraSignificanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSignificanceManager.OuterSingleton, Z_Construct_UClass_ULyraSignificanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSignificanceManager.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSignificanceManager>()
{
	return ULyraSignificanceManager::StaticClass();
}
ULyraSignificanceManager::ULyraSignificanceManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSignificanceManager);
ULyraSignificanceManager::~ULyraSignificanceManager() {}
// End Class ULyraSignificanceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSignificanceManager, ULyraSignificanceManager::StaticClass, TEXT("ULyraSignificanceManager"), &Z_Registration_Info_UClass_ULyraSignificanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSignificanceManager), 4040095829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_1883940489(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSignificanceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
