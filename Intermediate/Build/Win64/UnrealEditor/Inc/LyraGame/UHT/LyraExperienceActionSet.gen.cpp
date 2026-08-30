// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraExperienceActionSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraExperienceActionSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceActionSet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceActionSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraExperienceActionSet
void ULyraExperienceActionSet::StaticRegisterNativesULyraExperienceActionSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraExperienceActionSet);
UClass* Z_Construct_UClass_ULyraExperienceActionSet_NoRegister()
{
	return ULyraExperienceActionSet::StaticClass();
}
struct Z_Construct_UClass_ULyraExperienceActionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Definition of a set of actions to perform as part of entering an experience\n */" },
#endif
		{ "IncludePath", "GameModes/LyraExperienceActionSet.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definition of a set of actions to perform as part of entering an experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions to Perform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions to Perform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Feature Dependencies" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraExperienceActionSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraExperienceActionSet, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraExperienceActionSet, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraExperienceActionSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::ClassParams = {
	&ULyraExperienceActionSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraExperienceActionSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraExperienceActionSet()
{
	if (!Z_Registration_Info_UClass_ULyraExperienceActionSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraExperienceActionSet.OuterSingleton, Z_Construct_UClass_ULyraExperienceActionSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraExperienceActionSet.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraExperienceActionSet>()
{
	return ULyraExperienceActionSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraExperienceActionSet);
ULyraExperienceActionSet::~ULyraExperienceActionSet() {}
// End Class ULyraExperienceActionSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraExperienceActionSet, ULyraExperienceActionSet::StaticClass, TEXT("ULyraExperienceActionSet"), &Z_Registration_Info_UClass_ULyraExperienceActionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraExperienceActionSet), 4055757052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_1260607070(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
