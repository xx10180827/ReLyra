// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraEditor/Commandlets/ContentValidationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentValidationCommandlet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
LYRAEDITOR_API UClass* Z_Construct_UClass_UContentValidationCommandlet();
LYRAEDITOR_API UClass* Z_Construct_UClass_UContentValidationCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References

// Begin Class UContentValidationCommandlet
void UContentValidationCommandlet::StaticRegisterNativesUContentValidationCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentValidationCommandlet);
UClass* Z_Construct_UClass_UContentValidationCommandlet_NoRegister()
{
	return UContentValidationCommandlet::StaticClass();
}
struct Z_Construct_UClass_UContentValidationCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ContentValidationCommandlet.h" },
		{ "ModuleRelativePath", "Commandlets/ContentValidationCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentValidationCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentValidationCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentValidationCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentValidationCommandlet_Statics::ClassParams = {
	&UContentValidationCommandlet::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentValidationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentValidationCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentValidationCommandlet()
{
	if (!Z_Registration_Info_UClass_UContentValidationCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentValidationCommandlet.OuterSingleton, Z_Construct_UClass_UContentValidationCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentValidationCommandlet.OuterSingleton;
}
template<> LYRAEDITOR_API UClass* StaticClass<UContentValidationCommandlet>()
{
	return UContentValidationCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentValidationCommandlet);
UContentValidationCommandlet::~UContentValidationCommandlet() {}
// End Class UContentValidationCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentValidationCommandlet, UContentValidationCommandlet::StaticClass, TEXT("UContentValidationCommandlet"), &Z_Registration_Info_UClass_UContentValidationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentValidationCommandlet), 3892784367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_2650959484(TEXT("/Script/LyraEditor"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
