// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraDebugCameraController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDebugCameraController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraDebugCameraController();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraDebugCameraController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraDebugCameraController
void ALyraDebugCameraController::StaticRegisterNativesALyraDebugCameraController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraDebugCameraController);
UClass* Z_Construct_UClass_ALyraDebugCameraController_NoRegister()
{
	return ALyraDebugCameraController::StaticClass();
}
struct Z_Construct_UClass_ALyraDebugCameraController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraDebugCameraController\n *\n *\x09Used for controlling the debug camera when it is enabled via the cheat manager.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraDebugCameraController.h" },
		{ "ModuleRelativePath", "Player/LyraDebugCameraController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraDebugCameraController\n\n    Used for controlling the debug camera when it is enabled via the cheat manager." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraDebugCameraController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALyraDebugCameraController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraDebugCameraController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraDebugCameraController_Statics::ClassParams = {
	&ALyraDebugCameraController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraDebugCameraController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraDebugCameraController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraDebugCameraController()
{
	if (!Z_Registration_Info_UClass_ALyraDebugCameraController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraDebugCameraController.OuterSingleton, Z_Construct_UClass_ALyraDebugCameraController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraDebugCameraController.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraDebugCameraController>()
{
	return ALyraDebugCameraController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraDebugCameraController);
ALyraDebugCameraController::~ALyraDebugCameraController() {}
// End Class ALyraDebugCameraController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraDebugCameraController, ALyraDebugCameraController::StaticClass, TEXT("ALyraDebugCameraController"), &Z_Registration_Info_UClass_ALyraDebugCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraDebugCameraController), 3706557634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_612271146(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
