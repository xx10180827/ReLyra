// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/InventoryFragment_ReticleConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_ReticleConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UInventoryFragment_ReticleConfig
void UInventoryFragment_ReticleConfig::StaticRegisterNativesUInventoryFragment_ReticleConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_ReticleConfig);
UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig_NoRegister()
{
	return UInventoryFragment_ReticleConfig::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/InventoryFragment_ReticleConfig.h" },
		{ "ModuleRelativePath", "Weapons/InventoryFragment_ReticleConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleWidgets_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Weapons/InventoryFragment_ReticleConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReticleWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_ReticleConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_Inner = { "ReticleWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets = { "ReticleWidgets", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_ReticleConfig, ReticleWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleWidgets_MetaData), NewProp_ReticleWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::ClassParams = {
	&UInventoryFragment_ReticleConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig.OuterSingleton, Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_ReticleConfig>()
{
	return UInventoryFragment_ReticleConfig::StaticClass();
}
UInventoryFragment_ReticleConfig::UInventoryFragment_ReticleConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_ReticleConfig);
UInventoryFragment_ReticleConfig::~UInventoryFragment_ReticleConfig() {}
// End Class UInventoryFragment_ReticleConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_ReticleConfig, UInventoryFragment_ReticleConfig::StaticClass, TEXT("UInventoryFragment_ReticleConfig"), &Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_ReticleConfig), 2367396655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_2541663250(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
