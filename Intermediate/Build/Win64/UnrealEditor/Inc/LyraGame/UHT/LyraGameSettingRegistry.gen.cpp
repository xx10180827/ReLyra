// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/LyraGameSettingRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameSettingRegistry() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRegistry();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameSettingRegistry();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameSettingRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameSettingRegistry
void ULyraGameSettingRegistry::StaticRegisterNativesULyraGameSettingRegistry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameSettingRegistry);
UClass* Z_Construct_UClass_ULyraGameSettingRegistry_NoRegister()
{
	return ULyraGameSettingRegistry::StaticClass();
}
struct Z_Construct_UClass_ULyraGameSettingRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Settings/LyraGameSettingRegistry.h" },
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplaySettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAndKeyboardSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplaySettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseAndKeyboardSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameSettingRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings = { "VideoSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameSettingRegistry, VideoSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoSettings_MetaData), NewProp_VideoSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings = { "AudioSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameSettingRegistry, AudioSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSettings_MetaData), NewProp_AudioSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings = { "GameplaySettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameSettingRegistry, GameplaySettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplaySettings_MetaData), NewProp_GameplaySettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings = { "MouseAndKeyboardSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameSettingRegistry, MouseAndKeyboardSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAndKeyboardSettings_MetaData), NewProp_MouseAndKeyboardSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings = { "GamepadSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameSettingRegistry, GamepadSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSettings_MetaData), NewProp_GamepadSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameSettingRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingRegistry,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::ClassParams = {
	&ULyraGameSettingRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameSettingRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameSettingRegistry()
{
	if (!Z_Registration_Info_UClass_ULyraGameSettingRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameSettingRegistry.OuterSingleton, Z_Construct_UClass_ULyraGameSettingRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameSettingRegistry.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameSettingRegistry>()
{
	return ULyraGameSettingRegistry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameSettingRegistry);
ULyraGameSettingRegistry::~ULyraGameSettingRegistry() {}
// End Class ULyraGameSettingRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameSettingRegistry, ULyraGameSettingRegistry::StaticClass, TEXT("ULyraGameSettingRegistry"), &Z_Registration_Info_UClass_ULyraGameSettingRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameSettingRegistry), 14763327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_3890635981(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
