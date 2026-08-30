// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingAction_SafeZoneEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingAction_SafeZoneEditor() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingAction();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueScalarDynamic();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingValueScalarDynamic_SafeZoneValue
void ULyraSettingValueScalarDynamic_SafeZoneValue::StaticRegisterNativesULyraSettingValueScalarDynamic_SafeZoneValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueScalarDynamic_SafeZoneValue);
UClass* Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_NoRegister()
{
	return ULyraSettingValueScalarDynamic_SafeZoneValue::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingAction_SafeZoneEditor.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingAction_SafeZoneEditor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueScalarDynamic_SafeZoneValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValueScalarDynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics::ClassParams = {
	&ULyraSettingValueScalarDynamic_SafeZoneValue::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue()
{
	if (!Z_Registration_Info_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue.OuterSingleton, Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueScalarDynamic_SafeZoneValue>()
{
	return ULyraSettingValueScalarDynamic_SafeZoneValue::StaticClass();
}
ULyraSettingValueScalarDynamic_SafeZoneValue::ULyraSettingValueScalarDynamic_SafeZoneValue() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueScalarDynamic_SafeZoneValue);
ULyraSettingValueScalarDynamic_SafeZoneValue::~ULyraSettingValueScalarDynamic_SafeZoneValue() {}
// End Class ULyraSettingValueScalarDynamic_SafeZoneValue

// Begin Class ULyraSettingAction_SafeZoneEditor
void ULyraSettingAction_SafeZoneEditor::StaticRegisterNativesULyraSettingAction_SafeZoneEditor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingAction_SafeZoneEditor);
UClass* Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_NoRegister()
{
	return ULyraSettingAction_SafeZoneEditor::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingAction_SafeZoneEditor.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingAction_SafeZoneEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeZoneValueSetting_MetaData[] = {
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingAction_SafeZoneEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SafeZoneValueSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingAction_SafeZoneEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::NewProp_SafeZoneValueSetting = { "SafeZoneValueSetting", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingAction_SafeZoneEditor, SafeZoneValueSetting), Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeZoneValueSetting_MetaData), NewProp_SafeZoneValueSetting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::NewProp_SafeZoneValueSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingAction,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::ClassParams = {
	&ULyraSettingAction_SafeZoneEditor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor()
{
	if (!Z_Registration_Info_UClass_ULyraSettingAction_SafeZoneEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingAction_SafeZoneEditor.OuterSingleton, Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingAction_SafeZoneEditor.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingAction_SafeZoneEditor>()
{
	return ULyraSettingAction_SafeZoneEditor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingAction_SafeZoneEditor);
ULyraSettingAction_SafeZoneEditor::~ULyraSettingAction_SafeZoneEditor() {}
// End Class ULyraSettingAction_SafeZoneEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingAction_SafeZoneEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue, ULyraSettingValueScalarDynamic_SafeZoneValue::StaticClass, TEXT("ULyraSettingValueScalarDynamic_SafeZoneValue"), &Z_Registration_Info_UClass_ULyraSettingValueScalarDynamic_SafeZoneValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueScalarDynamic_SafeZoneValue), 1379380547U) },
		{ Z_Construct_UClass_ULyraSettingAction_SafeZoneEditor, ULyraSettingAction_SafeZoneEditor::StaticClass, TEXT("ULyraSettingAction_SafeZoneEditor"), &Z_Registration_Info_UClass_ULyraSettingAction_SafeZoneEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingAction_SafeZoneEditor), 2451770214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingAction_SafeZoneEditor_h_1284032265(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingAction_SafeZoneEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingAction_SafeZoneEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
