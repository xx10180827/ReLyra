// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraEditor/Private/LyraContextEffectsLibraryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectsLibraryFactory() {}

// Begin Cross Module References
LYRAEDITOR_API UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory();
LYRAEDITOR_API UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References

// Begin Class ULyraContextEffectsLibraryFactory
void ULyraContextEffectsLibraryFactory::StaticRegisterNativesULyraContextEffectsLibraryFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsLibraryFactory);
UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory_NoRegister()
{
	return ULyraContextEffectsLibraryFactory::StaticClass();
}
struct Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LyraContextEffectsLibraryFactory.h" },
		{ "ModuleRelativePath", "Private/LyraContextEffectsLibraryFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectsLibraryFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::ClassParams = {
	&ULyraContextEffectsLibraryFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory()
{
	if (!Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory.OuterSingleton;
}
template<> LYRAEDITOR_API UClass* StaticClass<ULyraContextEffectsLibraryFactory>()
{
	return ULyraContextEffectsLibraryFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsLibraryFactory);
ULyraContextEffectsLibraryFactory::~ULyraContextEffectsLibraryFactory() {}
// End Class ULyraContextEffectsLibraryFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectsLibraryFactory, ULyraContextEffectsLibraryFactory::StaticClass, TEXT("ULyraContextEffectsLibraryFactory"), &Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsLibraryFactory), 1260297978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_3943478111(TEXT("/Script/LyraEditor"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
