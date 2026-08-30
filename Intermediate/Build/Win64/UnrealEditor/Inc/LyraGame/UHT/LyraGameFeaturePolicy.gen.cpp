// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameFeatures/LyraGameFeaturePolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameFeaturePolicy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameFeature_HotfixManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameFeature_HotfixManager_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameFeaturePolicy();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameFeaturePolicy_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameFeaturePolicy
void ULyraGameFeaturePolicy::StaticRegisterNativesULyraGameFeaturePolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameFeaturePolicy);
UClass* Z_Construct_UClass_ULyraGameFeaturePolicy_NoRegister()
{
	return ULyraGameFeaturePolicy::StaticClass();
}
struct Z_Construct_UClass_ULyraGameFeaturePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager to keep track of the state machines that bring a game feature plugin into memory and active\n * This class discovers plugins either that are built-in and distributed with the game or are reported externally (i.e. by a web service or other endpoint)\n */" },
#endif
		{ "IncludePath", "GameFeatures/LyraGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/LyraGameFeaturePolicy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager to keep track of the state machines that bring a game feature plugin into memory and active\nThis class discovers plugins either that are built-in and distributed with the game or are reported externally (i.e. by a web service or other endpoint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "GameFeatures/LyraGameFeaturePolicy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameFeaturePolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameFeaturePolicy, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observers_MetaData), NewProp_Observers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::NewProp_Observers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::NewProp_Observers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::ClassParams = {
	&ULyraGameFeaturePolicy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameFeaturePolicy()
{
	if (!Z_Registration_Info_UClass_ULyraGameFeaturePolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameFeaturePolicy.OuterSingleton, Z_Construct_UClass_ULyraGameFeaturePolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameFeaturePolicy.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameFeaturePolicy>()
{
	return ULyraGameFeaturePolicy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameFeaturePolicy);
ULyraGameFeaturePolicy::~ULyraGameFeaturePolicy() {}
// End Class ULyraGameFeaturePolicy

// Begin Class ULyraGameFeature_HotfixManager
void ULyraGameFeature_HotfixManager::StaticRegisterNativesULyraGameFeature_HotfixManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameFeature_HotfixManager);
UClass* Z_Construct_UClass_ULyraGameFeature_HotfixManager_NoRegister()
{
	return ULyraGameFeature_HotfixManager::StaticClass();
}
struct Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// checked\n" },
#endif
		{ "IncludePath", "GameFeatures/LyraGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/LyraGameFeaturePolicy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "checked" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameFeature_HotfixManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(ULyraGameFeature_HotfixManager, IGameFeatureStateChangeObserver), false },  // 487324916
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::ClassParams = {
	&ULyraGameFeature_HotfixManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameFeature_HotfixManager()
{
	if (!Z_Registration_Info_UClass_ULyraGameFeature_HotfixManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameFeature_HotfixManager.OuterSingleton, Z_Construct_UClass_ULyraGameFeature_HotfixManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameFeature_HotfixManager.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameFeature_HotfixManager>()
{
	return ULyraGameFeature_HotfixManager::StaticClass();
}
ULyraGameFeature_HotfixManager::ULyraGameFeature_HotfixManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameFeature_HotfixManager);
ULyraGameFeature_HotfixManager::~ULyraGameFeature_HotfixManager() {}
// End Class ULyraGameFeature_HotfixManager

// Begin Class ULyraGameFeature_AddGameplayCuePaths
void ULyraGameFeature_AddGameplayCuePaths::StaticRegisterNativesULyraGameFeature_AddGameplayCuePaths()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameFeature_AddGameplayCuePaths);
UClass* Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_NoRegister()
{
	return ULyraGameFeature_AddGameplayCuePaths::StaticClass();
}
struct Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// checked\n" },
#endif
		{ "IncludePath", "GameFeatures/LyraGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/LyraGameFeaturePolicy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "checked" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameFeature_AddGameplayCuePaths>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(ULyraGameFeature_AddGameplayCuePaths, IGameFeatureStateChangeObserver), false },  // 487324916
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::ClassParams = {
	&ULyraGameFeature_AddGameplayCuePaths::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths()
{
	if (!Z_Registration_Info_UClass_ULyraGameFeature_AddGameplayCuePaths.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameFeature_AddGameplayCuePaths.OuterSingleton, Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameFeature_AddGameplayCuePaths.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameFeature_AddGameplayCuePaths>()
{
	return ULyraGameFeature_AddGameplayCuePaths::StaticClass();
}
ULyraGameFeature_AddGameplayCuePaths::ULyraGameFeature_AddGameplayCuePaths(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameFeature_AddGameplayCuePaths);
ULyraGameFeature_AddGameplayCuePaths::~ULyraGameFeature_AddGameplayCuePaths() {}
// End Class ULyraGameFeature_AddGameplayCuePaths

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameFeatures_LyraGameFeaturePolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameFeaturePolicy, ULyraGameFeaturePolicy::StaticClass, TEXT("ULyraGameFeaturePolicy"), &Z_Registration_Info_UClass_ULyraGameFeaturePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameFeaturePolicy), 4110007641U) },
		{ Z_Construct_UClass_ULyraGameFeature_HotfixManager, ULyraGameFeature_HotfixManager::StaticClass, TEXT("ULyraGameFeature_HotfixManager"), &Z_Registration_Info_UClass_ULyraGameFeature_HotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameFeature_HotfixManager), 114562789U) },
		{ Z_Construct_UClass_ULyraGameFeature_AddGameplayCuePaths, ULyraGameFeature_AddGameplayCuePaths::StaticClass, TEXT("ULyraGameFeature_AddGameplayCuePaths"), &Z_Registration_Info_UClass_ULyraGameFeature_AddGameplayCuePaths, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameFeature_AddGameplayCuePaths), 65435744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameFeatures_LyraGameFeaturePolicy_h_3864838416(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameFeatures_LyraGameFeaturePolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameFeatures_LyraGameFeaturePolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
