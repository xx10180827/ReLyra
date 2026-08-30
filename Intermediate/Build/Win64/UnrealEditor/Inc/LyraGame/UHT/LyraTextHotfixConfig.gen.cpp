// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Hotfix/LyraTextHotfixConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTextHotfixConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTextHotfixConfig();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTextHotfixConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTextHotfixConfig
void ULyraTextHotfixConfig::StaticRegisterNativesULyraTextHotfixConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTextHotfixConfig);
UClass* Z_Construct_UClass_ULyraTextHotfixConfig_NoRegister()
{
	return ULyraTextHotfixConfig::StaticClass();
}
struct Z_Construct_UClass_ULyraTextHotfixConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class allows hotfixing individual FText values anywhere\n */" },
#endif
		{ "IncludePath", "Hotfix/LyraTextHotfixConfig.h" },
		{ "ModuleRelativePath", "Hotfix/LyraTextHotfixConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class allows hotfixing individual FText values anywhere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextReplacements_MetaData[] = {
		{ "Category", "LyraTextHotfixConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The list of FText values to hotfix\n" },
#endif
		{ "ModuleRelativePath", "Hotfix/LyraTextHotfixConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of FText values to hotfix" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextReplacements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextReplacements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTextHotfixConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_Inner = { "TextReplacements", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements = { "TextReplacements", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTextHotfixConfig, TextReplacements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextReplacements_MetaData), NewProp_TextReplacements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraTextHotfixConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTextHotfixConfig_Statics::ClassParams = {
	&ULyraTextHotfixConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTextHotfixConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTextHotfixConfig()
{
	if (!Z_Registration_Info_UClass_ULyraTextHotfixConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTextHotfixConfig.OuterSingleton, Z_Construct_UClass_ULyraTextHotfixConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTextHotfixConfig.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTextHotfixConfig>()
{
	return ULyraTextHotfixConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTextHotfixConfig);
ULyraTextHotfixConfig::~ULyraTextHotfixConfig() {}
// End Class ULyraTextHotfixConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTextHotfixConfig, ULyraTextHotfixConfig::StaticClass, TEXT("ULyraTextHotfixConfig"), &Z_Registration_Info_UClass_ULyraTextHotfixConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTextHotfixConfig), 2094281449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_385615995(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
