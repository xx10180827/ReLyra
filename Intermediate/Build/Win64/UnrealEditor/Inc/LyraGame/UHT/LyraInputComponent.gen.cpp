// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Input/LyraInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraInputComponent
void ULyraInputComponent::StaticRegisterNativesULyraInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputComponent);
UClass* Z_Construct_UClass_ULyraInputComponent_NoRegister()
{
	return ULyraInputComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraInputComponent\n *\n *\x09""Component used to manage input mappings and bindings using an input config data asset.\n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/LyraInputComponent.h" },
		{ "ModuleRelativePath", "Input/LyraInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraInputComponent\n\n    Component used to manage input mappings and bindings using an input config data asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputComponent_Statics::ClassParams = {
	&ULyraInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInputComponent()
{
	if (!Z_Registration_Info_UClass_ULyraInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputComponent.OuterSingleton, Z_Construct_UClass_ULyraInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInputComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInputComponent>()
{
	return ULyraInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputComponent);
ULyraInputComponent::~ULyraInputComponent() {}
// End Class ULyraInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInputComponent, ULyraInputComponent::StaticClass, TEXT("ULyraInputComponent"), &Z_Registration_Info_UClass_ULyraInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputComponent), 4289628356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_4023734558(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
