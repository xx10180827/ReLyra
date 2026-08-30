// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraEditor/Validation/EditorValidator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator() {}

// Begin Cross Module References
DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator();
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References

// Begin Class UEditorValidator
void UEditorValidator::StaticRegisterNativesUEditorValidator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator);
UClass* Z_Construct_UClass_UEditorValidator_NoRegister()
{
	return UEditorValidator::StaticClass();
}
struct Z_Construct_UClass_UEditorValidator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/EditorValidator.h" },
		{ "ModuleRelativePath", "Validation/EditorValidator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorValidator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_Statics::ClassParams = {
	&UEditorValidator::StaticClass,
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
	0x000000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorValidator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorValidator()
{
	if (!Z_Registration_Info_UClass_UEditorValidator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator.OuterSingleton, Z_Construct_UClass_UEditorValidator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorValidator.OuterSingleton;
}
template<> LYRAEDITOR_API UClass* StaticClass<UEditorValidator>()
{
	return UEditorValidator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator);
UEditorValidator::~UEditorValidator() {}
// End Class UEditorValidator

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator, UEditorValidator::StaticClass, TEXT("UEditorValidator"), &Z_Registration_Info_UClass_UEditorValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator), 1558415094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_h_1942569314(TEXT("/Script/LyraEditor"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
