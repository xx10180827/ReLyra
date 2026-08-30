// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/LyraSettingScreen.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingScreen() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingScreen();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingScreen();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingScreen_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabListWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingScreen
void ULyraSettingScreen::StaticRegisterNativesULyraSettingScreen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingScreen);
UClass* Z_Construct_UClass_ULyraSettingScreen_NoRegister()
{
	return ULyraSettingScreen::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/LyraSettingScreen.h" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopSettingsTabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
		{ "OptionalWidget", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackInputActionData_MetaData[] = {
		{ "Category", "LyraSettingScreen" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyInputActionData_MetaData[] = {
		{ "Category", "LyraSettingScreen" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelChangesInputActionData_MetaData[] = {
		{ "Category", "LyraSettingScreen" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopSettingsTabs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackInputActionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyInputActionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelChangesInputActionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs = { "TopSettingsTabs", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingScreen, TopSettingsTabs), Z_Construct_UClass_ULyraTabListWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopSettingsTabs_MetaData), NewProp_TopSettingsTabs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData = { "BackInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingScreen, BackInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackInputActionData_MetaData), NewProp_BackInputActionData_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData = { "ApplyInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingScreen, ApplyInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyInputActionData_MetaData), NewProp_ApplyInputActionData_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData = { "CancelChangesInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingScreen, CancelChangesInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelChangesInputActionData_MetaData), NewProp_CancelChangesInputActionData_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSettingScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingScreen,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingScreen_Statics::ClassParams = {
	&ULyraSettingScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingScreen()
{
	if (!Z_Registration_Info_UClass_ULyraSettingScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingScreen.OuterSingleton, Z_Construct_UClass_ULyraSettingScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingScreen.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingScreen>()
{
	return ULyraSettingScreen::StaticClass();
}
ULyraSettingScreen::ULyraSettingScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingScreen);
ULyraSettingScreen::~ULyraSettingScreen() {}
// End Class ULyraSettingScreen

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingScreen, ULyraSettingScreen::StaticClass, TEXT("ULyraSettingScreen"), &Z_Registration_Info_UClass_ULyraSettingScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingScreen), 11477670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_1945947896(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
