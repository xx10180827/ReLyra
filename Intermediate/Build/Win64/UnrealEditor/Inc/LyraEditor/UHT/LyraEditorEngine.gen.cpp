// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraEditor/LyraEditorEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEditorEngine() {}

// Begin Cross Module References
LYRAEDITOR_API UClass* Z_Construct_UClass_ULyraEditorEngine();
LYRAEDITOR_API UClass* Z_Construct_UClass_ULyraEditorEngine_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References

// Begin Class ULyraEditorEngine
void ULyraEditorEngine::StaticRegisterNativesULyraEditorEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraEditorEngine);
UClass* Z_Construct_UClass_ULyraEditorEngine_NoRegister()
{
	return ULyraEditorEngine::StaticClass();
}
struct Z_Construct_UClass_ULyraEditorEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LyraEditorEngine.h" },
		{ "ModuleRelativePath", "LyraEditorEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraEditorEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraEditorEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEditorEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraEditorEngine_Statics::ClassParams = {
	&ULyraEditorEngine::StaticClass,
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
	0x008000AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEditorEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraEditorEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraEditorEngine()
{
	if (!Z_Registration_Info_UClass_ULyraEditorEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraEditorEngine.OuterSingleton, Z_Construct_UClass_ULyraEditorEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraEditorEngine.OuterSingleton;
}
template<> LYRAEDITOR_API UClass* StaticClass<ULyraEditorEngine>()
{
	return ULyraEditorEngine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraEditorEngine);
ULyraEditorEngine::~ULyraEditorEngine() {}
// End Class ULyraEditorEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_LyraEditorEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraEditorEngine, ULyraEditorEngine::StaticClass, TEXT("ULyraEditorEngine"), &Z_Registration_Info_UClass_ULyraEditorEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraEditorEngine), 1370523509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_LyraEditorEngine_h_552021552(TEXT("/Script/LyraEditor"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_LyraEditorEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_LyraEditorEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
