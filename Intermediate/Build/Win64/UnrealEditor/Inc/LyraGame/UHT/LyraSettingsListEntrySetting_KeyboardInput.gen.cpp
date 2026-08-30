// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingsListEntrySetting_KeyboardInput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntry_Setting();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPressAnyKey_NoRegister();
GAMESETTINGS_API UClass* Z_Construct_UClass_UKeyAlreadyBoundWarning_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingKeyboardInput_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingsListEntrySetting_KeyboardInput
void ULyraSettingsListEntrySetting_KeyboardInput::StaticRegisterNativesULyraSettingsListEntrySetting_KeyboardInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingsListEntrySetting_KeyboardInput);
UClass* Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_NoRegister()
{
	return ULyraSettingsListEntrySetting_KeyboardInput::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// ULyraSettingsListEntrySetting_KeyboardInput\n//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraSettingsListEntrySetting_KeyboardInput" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalKeyToBind_MetaData[] = {
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardInputSetting_MetaData[] = {
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressAnyKeyPanelClass_MetaData[] = {
		{ "Category", "LyraSettingsListEntrySetting_KeyboardInput" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyAlreadyBoundWarningPanelClass_MetaData[] = {
		{ "Category", "LyraSettingsListEntrySetting_KeyboardInput" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_PrimaryKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "LyraSettingsListEntrySetting_KeyboardInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bound Widgets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bound Widgets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_SecondaryKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "LyraSettingsListEntrySetting_KeyboardInput" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Clear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "LyraSettingsListEntrySetting_KeyboardInput" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_ResetToDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "LyraSettingsListEntrySetting_KeyboardInput" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Widgets/LyraSettingsListEntrySetting_KeyboardInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalKeyToBind;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyboardInputSetting;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressAnyKeyPanelClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_KeyAlreadyBoundWarningPanelClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_PrimaryKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_SecondaryKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Clear;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_ResetToDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingsListEntrySetting_KeyboardInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_OriginalKeyToBind = { "OriginalKeyToBind", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, OriginalKeyToBind), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalKeyToBind_MetaData), NewProp_OriginalKeyToBind_MetaData) }; // 658672854
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_KeyboardInputSetting = { "KeyboardInputSetting", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, KeyboardInputSetting), Z_Construct_UClass_ULyraSettingKeyboardInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardInputSetting_MetaData), NewProp_KeyboardInputSetting_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_PressAnyKeyPanelClass = { "PressAnyKeyPanelClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, PressAnyKeyPanelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameSettingPressAnyKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressAnyKeyPanelClass_MetaData), NewProp_PressAnyKeyPanelClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_KeyAlreadyBoundWarningPanelClass = { "KeyAlreadyBoundWarningPanelClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, KeyAlreadyBoundWarningPanelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyAlreadyBoundWarning_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyAlreadyBoundWarningPanelClass_MetaData), NewProp_KeyAlreadyBoundWarningPanelClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_PrimaryKey = { "Button_PrimaryKey", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, Button_PrimaryKey), Z_Construct_UClass_ULyraButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_PrimaryKey_MetaData), NewProp_Button_PrimaryKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_SecondaryKey = { "Button_SecondaryKey", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, Button_SecondaryKey), Z_Construct_UClass_ULyraButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_SecondaryKey_MetaData), NewProp_Button_SecondaryKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_Clear = { "Button_Clear", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, Button_Clear), Z_Construct_UClass_ULyraButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Clear_MetaData), NewProp_Button_Clear_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_ResetToDefault = { "Button_ResetToDefault", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsListEntrySetting_KeyboardInput, Button_ResetToDefault), Z_Construct_UClass_ULyraButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_ResetToDefault_MetaData), NewProp_Button_ResetToDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_OriginalKeyToBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_KeyboardInputSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_PressAnyKeyPanelClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_KeyAlreadyBoundWarningPanelClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_PrimaryKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_SecondaryKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_Clear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::NewProp_Button_ResetToDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingListEntry_Setting,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::ClassParams = {
	&ULyraSettingsListEntrySetting_KeyboardInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput()
{
	if (!Z_Registration_Info_UClass_ULyraSettingsListEntrySetting_KeyboardInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingsListEntrySetting_KeyboardInput.OuterSingleton, Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingsListEntrySetting_KeyboardInput.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingsListEntrySetting_KeyboardInput>()
{
	return ULyraSettingsListEntrySetting_KeyboardInput::StaticClass();
}
ULyraSettingsListEntrySetting_KeyboardInput::ULyraSettingsListEntrySetting_KeyboardInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingsListEntrySetting_KeyboardInput);
ULyraSettingsListEntrySetting_KeyboardInput::~ULyraSettingsListEntrySetting_KeyboardInput() {}
// End Class ULyraSettingsListEntrySetting_KeyboardInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Widgets_LyraSettingsListEntrySetting_KeyboardInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingsListEntrySetting_KeyboardInput, ULyraSettingsListEntrySetting_KeyboardInput::StaticClass, TEXT("ULyraSettingsListEntrySetting_KeyboardInput"), &Z_Registration_Info_UClass_ULyraSettingsListEntrySetting_KeyboardInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingsListEntrySetting_KeyboardInput), 2694618644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Widgets_LyraSettingsListEntrySetting_KeyboardInput_h_1983663647(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Widgets_LyraSettingsListEntrySetting_KeyboardInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Widgets_LyraSettingsListEntrySetting_KeyboardInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
