// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraEditor/Validation/EditorValidator_Blueprints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_Blueprints() {}

// Begin Cross Module References
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator();
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_Blueprints();
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_Blueprints_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References

// Begin Class UEditorValidator_Blueprints
void UEditorValidator_Blueprints::StaticRegisterNativesUEditorValidator_Blueprints()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_Blueprints);
UClass* Z_Construct_UClass_UEditorValidator_Blueprints_NoRegister()
{
	return UEditorValidator_Blueprints::StaticClass();
}
struct Z_Construct_UClass_UEditorValidator_Blueprints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/EditorValidator_Blueprints.h" },
		{ "ModuleRelativePath", "Validation/EditorValidator_Blueprints.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_Blueprints>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorValidator_Blueprints_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorValidator,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Blueprints_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_Blueprints_Statics::ClassParams = {
	&UEditorValidator_Blueprints::StaticClass,
	"Editor",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Blueprints_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorValidator_Blueprints_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorValidator_Blueprints()
{
	if (!Z_Registration_Info_UClass_UEditorValidator_Blueprints.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_Blueprints.OuterSingleton, Z_Construct_UClass_UEditorValidator_Blueprints_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorValidator_Blueprints.OuterSingleton;
}
template<> LYRAEDITOR_API UClass* StaticClass<UEditorValidator_Blueprints>()
{
	return UEditorValidator_Blueprints::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_Blueprints);
UEditorValidator_Blueprints::~UEditorValidator_Blueprints() {}
// End Class UEditorValidator_Blueprints

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_Blueprints, UEditorValidator_Blueprints::StaticClass, TEXT("UEditorValidator_Blueprints"), &Z_Registration_Info_UClass_UEditorValidator_Blueprints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_Blueprints), 1019358107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_3215022478(TEXT("/Script/LyraEditor"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
