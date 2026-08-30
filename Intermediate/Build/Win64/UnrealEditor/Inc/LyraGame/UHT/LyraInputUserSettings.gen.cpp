// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Input/LyraInputUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputUserSettings() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputUserSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputUserSettings_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlayerMappableKeySettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlayerMappableKeySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraInputUserSettings
void ULyraInputUserSettings::StaticRegisterNativesULyraInputUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputUserSettings);
UClass* Z_Construct_UClass_ULyraInputUserSettings_NoRegister()
{
	return ULyraInputUserSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraInputUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Custom settings class for any input related settings for the Lyra game.\n * This will be serialized out at the same time as the Lyra Shared Settings and is\n * compatible with cloud saves through by calling the \"Serialize\" function.\n */" },
#endif
		{ "IncludePath", "Input/LyraInputUserSettings.h" },
		{ "ModuleRelativePath", "Input/LyraInputUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom settings class for any input related settings for the Lyra game.\nThis will be serialized out at the same time as the Lyra Shared Settings and is\ncompatible with cloud saves through by calling the \"Serialize\" function." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraInputUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputUserSettings_Statics::ClassParams = {
	&ULyraInputUserSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInputUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInputUserSettings()
{
	if (!Z_Registration_Info_UClass_ULyraInputUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputUserSettings.OuterSingleton, Z_Construct_UClass_ULyraInputUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInputUserSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInputUserSettings>()
{
	return ULyraInputUserSettings::StaticClass();
}
ULyraInputUserSettings::ULyraInputUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputUserSettings);
ULyraInputUserSettings::~ULyraInputUserSettings() {}
// End Class ULyraInputUserSettings

// Begin Class ULyraPlayerMappableKeySettings
void ULyraPlayerMappableKeySettings::StaticRegisterNativesULyraPlayerMappableKeySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPlayerMappableKeySettings);
UClass* Z_Construct_UClass_ULyraPlayerMappableKeySettings_NoRegister()
{
	return ULyraPlayerMappableKeySettings::StaticClass();
}
struct Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player Mappable Key settings are settings that are accessible per-action key mapping.\n * This is where you could place additional metadata that may be used by your settings UI,\n * input triggers, or other places where you want to know about a key setting.\n */" },
#endif
		{ "IncludePath", "Input/LyraInputUserSettings.h" },
		{ "ModuleRelativePath", "Input/LyraInputUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Mappable Key settings are settings that are accessible per-action key mapping.\nThis is where you could place additional metadata that may be used by your settings UI,\ninput triggers, or other places where you want to know about a key setting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The tooltip that should be associated with this action when displayed on the settings screen */" },
#endif
		{ "ModuleRelativePath", "Input/LyraInputUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tooltip that should be associated with this action when displayed on the settings screen" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPlayerMappableKeySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPlayerMappableKeySettings, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::NewProp_Tooltip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayerMappableKeySettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::ClassParams = {
	&ULyraPlayerMappableKeySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPlayerMappableKeySettings()
{
	if (!Z_Registration_Info_UClass_ULyraPlayerMappableKeySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPlayerMappableKeySettings.OuterSingleton, Z_Construct_UClass_ULyraPlayerMappableKeySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPlayerMappableKeySettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPlayerMappableKeySettings>()
{
	return ULyraPlayerMappableKeySettings::StaticClass();
}
ULyraPlayerMappableKeySettings::ULyraPlayerMappableKeySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPlayerMappableKeySettings);
ULyraPlayerMappableKeySettings::~ULyraPlayerMappableKeySettings() {}
// End Class ULyraPlayerMappableKeySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputUserSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInputUserSettings, ULyraInputUserSettings::StaticClass, TEXT("ULyraInputUserSettings"), &Z_Registration_Info_UClass_ULyraInputUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputUserSettings), 2953623852U) },
		{ Z_Construct_UClass_ULyraPlayerMappableKeySettings, ULyraPlayerMappableKeySettings::StaticClass, TEXT("ULyraPlayerMappableKeySettings"), &Z_Registration_Info_UClass_ULyraPlayerMappableKeySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPlayerMappableKeySettings), 3458016927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputUserSettings_h_2426659615(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
