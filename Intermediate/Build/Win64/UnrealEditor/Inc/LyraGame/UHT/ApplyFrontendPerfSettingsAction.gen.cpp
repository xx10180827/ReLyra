// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Frontend/ApplyFrontendPerfSettingsAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplyFrontendPerfSettingsAction() {}

// Begin Cross Module References
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
LYRAGAME_API UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction();
LYRAGAME_API UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UApplyFrontendPerfSettingsAction
void UApplyFrontendPerfSettingsAction::StaticRegisterNativesUApplyFrontendPerfSettingsAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApplyFrontendPerfSettingsAction);
UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction_NoRegister()
{
	return UApplyFrontendPerfSettingsAction::StaticClass();
}
struct Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction responsible for telling the user settings to apply frontend/menu specific performance settings\n */" },
#endif
		{ "DisplayName", "Use Frontend Perf Settings" },
		{ "IncludePath", "UI/Frontend/ApplyFrontendPerfSettingsAction.h" },
		{ "ModuleRelativePath", "UI/Frontend/ApplyFrontendPerfSettingsAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction responsible for telling the user settings to apply frontend/menu specific performance settings" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplyFrontendPerfSettingsAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::ClassParams = {
	&UApplyFrontendPerfSettingsAction::StaticClass,
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
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction()
{
	if (!Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction.OuterSingleton, Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UApplyFrontendPerfSettingsAction>()
{
	return UApplyFrontendPerfSettingsAction::StaticClass();
}
UApplyFrontendPerfSettingsAction::UApplyFrontendPerfSettingsAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UApplyFrontendPerfSettingsAction);
UApplyFrontendPerfSettingsAction::~UApplyFrontendPerfSettingsAction() {}
// End Class UApplyFrontendPerfSettingsAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UApplyFrontendPerfSettingsAction, UApplyFrontendPerfSettingsAction::StaticClass, TEXT("UApplyFrontendPerfSettingsAction"), &Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplyFrontendPerfSettingsAction), 3626913931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_3821545779(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
