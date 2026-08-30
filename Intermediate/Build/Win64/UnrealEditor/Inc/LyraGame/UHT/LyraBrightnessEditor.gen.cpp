// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/Screens/LyraBrightnessEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraBrightnessEditor() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingActionInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraBrightnessEditor();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraBrightnessEditor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraBrightnessEditor Function HandleBackClicked
struct Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBrightnessEditor, nullptr, "HandleBackClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBrightnessEditor::execHandleBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackClicked();
	P_NATIVE_END;
}
// End Class ULyraBrightnessEditor Function HandleBackClicked

// Begin Class ULyraBrightnessEditor Function HandleDoneClicked
struct Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBrightnessEditor, nullptr, "HandleDoneClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBrightnessEditor::execHandleDoneClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDoneClicked();
	P_NATIVE_END;
}
// End Class ULyraBrightnessEditor Function HandleDoneClicked

// Begin Class ULyraBrightnessEditor
void ULyraBrightnessEditor::StaticRegisterNativesULyraBrightnessEditor()
{
	UClass* Class = ULyraBrightnessEditor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleBackClicked", &ULyraBrightnessEditor::execHandleBackClicked },
		{ "HandleDoneClicked", &ULyraBrightnessEditor::execHandleDoneClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraBrightnessEditor);
UClass* Z_Construct_UClass_ULyraBrightnessEditor_NoRegister()
{
	return ULyraBrightnessEditor::StaticClass();
}
struct Z_Construct_UClass_ULyraBrightnessEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/Screens/LyraBrightnessEditor.h" },
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCancel_MetaData[] = {
		{ "Category", "Restrictions" },
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_SafeZoneMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraBrightnessEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RichText_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraBrightnessEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraBrightnessEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Done_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraBrightnessEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraBrightnessEditor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCancel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Switcher_SafeZoneMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText_Default;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Back;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Done;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraBrightnessEditor_HandleBackClicked, "HandleBackClicked" }, // 2180966280
		{ &Z_Construct_UFunction_ULyraBrightnessEditor_HandleDoneClicked, "HandleDoneClicked" }, // 3117725778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraBrightnessEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_bCanCancel_SetBit(void* Obj)
{
	((ULyraBrightnessEditor*)Obj)->bCanCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_bCanCancel = { "bCanCancel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraBrightnessEditor), &Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_bCanCancel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCancel_MetaData), NewProp_bCanCancel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_Switcher_SafeZoneMessage = { "Switcher_SafeZoneMessage", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBrightnessEditor, Switcher_SafeZoneMessage), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switcher_SafeZoneMessage_MetaData), NewProp_Switcher_SafeZoneMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_RichText_Default = { "RichText_Default", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBrightnessEditor, RichText_Default), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RichText_Default_MetaData), NewProp_RichText_Default_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_Button_Back = { "Button_Back", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBrightnessEditor, Button_Back), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Back_MetaData), NewProp_Button_Back_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_Button_Done = { "Button_Done", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBrightnessEditor, Button_Done), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Done_MetaData), NewProp_Button_Done_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraBrightnessEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_bCanCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_Switcher_SafeZoneMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_RichText_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_Button_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBrightnessEditor_Statics::NewProp_Button_Done,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBrightnessEditor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraBrightnessEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBrightnessEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameSettingActionInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraBrightnessEditor, IGameSettingActionInterface), false },  // 3882456604
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraBrightnessEditor_Statics::ClassParams = {
	&ULyraBrightnessEditor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraBrightnessEditor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBrightnessEditor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBrightnessEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraBrightnessEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraBrightnessEditor()
{
	if (!Z_Registration_Info_UClass_ULyraBrightnessEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraBrightnessEditor.OuterSingleton, Z_Construct_UClass_ULyraBrightnessEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraBrightnessEditor.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraBrightnessEditor>()
{
	return ULyraBrightnessEditor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraBrightnessEditor);
ULyraBrightnessEditor::~ULyraBrightnessEditor() {}
// End Class ULyraBrightnessEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraBrightnessEditor, ULyraBrightnessEditor::StaticClass, TEXT("ULyraBrightnessEditor"), &Z_Registration_Info_UClass_ULyraBrightnessEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraBrightnessEditor), 13687562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_791578548(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
