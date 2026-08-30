// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraEditor/Validation/EditorValidator_SourceControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_SourceControl() {}

// Begin Cross Module References
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator();
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_SourceControl();
LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_SourceControl_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References

// Begin Class UEditorValidator_SourceControl
void UEditorValidator_SourceControl::StaticRegisterNativesUEditorValidator_SourceControl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_SourceControl);
UClass* Z_Construct_UClass_UEditorValidator_SourceControl_NoRegister()
{
	return UEditorValidator_SourceControl::StaticClass();
}
struct Z_Construct_UClass_UEditorValidator_SourceControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/EditorValidator_SourceControl.h" },
		{ "ModuleRelativePath", "Validation/EditorValidator_SourceControl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_SourceControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorValidator_SourceControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorValidator,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_SourceControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_SourceControl_Statics::ClassParams = {
	&UEditorValidator_SourceControl::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_SourceControl_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorValidator_SourceControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorValidator_SourceControl()
{
	if (!Z_Registration_Info_UClass_UEditorValidator_SourceControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_SourceControl.OuterSingleton, Z_Construct_UClass_UEditorValidator_SourceControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorValidator_SourceControl.OuterSingleton;
}
template<> LYRAEDITOR_API UClass* StaticClass<UEditorValidator_SourceControl>()
{
	return UEditorValidator_SourceControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_SourceControl);
UEditorValidator_SourceControl::~UEditorValidator_SourceControl() {}
// End Class UEditorValidator_SourceControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_SourceControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_SourceControl, UEditorValidator_SourceControl::StaticClass, TEXT("UEditorValidator_SourceControl"), &Z_Registration_Info_UClass_UEditorValidator_SourceControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_SourceControl), 1445471712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_SourceControl_h_1310207534(TEXT("/Script/LyraEditor"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_SourceControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_SourceControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
