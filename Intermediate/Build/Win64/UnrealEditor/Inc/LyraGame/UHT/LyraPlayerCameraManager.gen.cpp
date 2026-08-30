// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Camera/LyraPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerCameraManager();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerCameraManager_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraPlayerCameraManager
void ALyraPlayerCameraManager::StaticRegisterNativesALyraPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerCameraManager);
UClass* Z_Construct_UClass_ALyraPlayerCameraManager_NoRegister()
{
	return ALyraPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_ALyraPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraPlayerCameraManager\n *\n *\x09The base player camera manager class used by this project.\n */" },
#endif
		{ "IncludePath", "Camera/LyraPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Camera/LyraPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraPlayerCameraManager\n\n    The base player camera manager class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UICamera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/LyraPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UICamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera = { "UICamera", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerCameraManager, UICamera), Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UICamera_MetaData), NewProp_UICamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerCameraManager_Statics::ClassParams = {
	&ALyraPlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_ALyraPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerCameraManager.OuterSingleton, Z_Construct_UClass_ALyraPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraPlayerCameraManager.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerCameraManager>()
{
	return ALyraPlayerCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerCameraManager);
ALyraPlayerCameraManager::~ALyraPlayerCameraManager() {}
// End Class ALyraPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerCameraManager, ALyraPlayerCameraManager::StaticClass, TEXT("ALyraPlayerCameraManager"), &Z_Registration_Info_UClass_ALyraPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerCameraManager), 518527475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_4061157007(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
