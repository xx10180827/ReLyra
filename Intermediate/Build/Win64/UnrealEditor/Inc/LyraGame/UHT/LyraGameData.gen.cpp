// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameData();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameData_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameData
void ULyraGameData::StaticRegisterNativesULyraGameData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameData);
UClass* Z_Construct_UClass_ULyraGameData_NoRegister()
{
	return ULyraGameData::StaticClass();
}
struct Z_Construct_UClass_ULyraGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameData\n *\n *\x09Non-mutable data asset that contains global game data.\n */" },
#endif
		{ "DisplayName", "Lyra Game Data" },
		{ "IncludePath", "System/LyraGameData.h" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
		{ "ShortTooltip", "Data asset containing global game data." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameData\n\n    Non-mutable data asset that contains global game data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.\n" },
#endif
		{ "DisplayName", "Damage Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.\n" },
#endif
		{ "DisplayName", "Heal Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTagGameplayEffect_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to add and remove dynamic tags.\n" },
#endif
		{ "ModuleRelativePath", "System/LyraGameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to add and remove dynamic tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DamageGameplayEffect_SetByCaller;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HealGameplayEffect_SetByCaller;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DynamicTagGameplayEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller = { "DamageGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameData, DamageGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffect_SetByCaller_MetaData), NewProp_DamageGameplayEffect_SetByCaller_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller = { "HealGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameData, HealGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealGameplayEffect_SetByCaller_MetaData), NewProp_HealGameplayEffect_SetByCaller_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect = { "DynamicTagGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameData, DynamicTagGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicTagGameplayEffect_MetaData), NewProp_DynamicTagGameplayEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameData_Statics::ClassParams = {
	&ULyraGameData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraGameData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameData()
{
	if (!Z_Registration_Info_UClass_ULyraGameData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameData.OuterSingleton, Z_Construct_UClass_ULyraGameData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameData.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameData>()
{
	return ULyraGameData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameData);
ULyraGameData::~ULyraGameData() {}
// End Class ULyraGameData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameData, ULyraGameData::StaticClass, TEXT("ULyraGameData"), &Z_Registration_Info_UClass_ULyraGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameData), 4048312696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_594414258(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
