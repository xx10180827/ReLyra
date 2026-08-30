// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/Screens/LyraSafeZoneEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSafeZoneEditor() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingActionInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSafeZoneEditor();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSafeZoneEditor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSafeZoneEditor Function HandleBackClicked
struct Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSafeZoneEditor, nullptr, "HandleBackClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSafeZoneEditor::execHandleBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBackClicked();
	P_NATIVE_END;
}
// End Class ULyraSafeZoneEditor Function HandleBackClicked

// Begin Class ULyraSafeZoneEditor Function HandleDoneClicked
struct Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSafeZoneEditor, nullptr, "HandleDoneClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSafeZoneEditor::execHandleDoneClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDoneClicked();
	P_NATIVE_END;
}
// End Class ULyraSafeZoneEditor Function HandleDoneClicked

// Begin Class ULyraSafeZoneEditor
void ULyraSafeZoneEditor::StaticRegisterNativesULyraSafeZoneEditor()
{
	UClass* Class = ULyraSafeZoneEditor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleBackClicked", &ULyraSafeZoneEditor::execHandleBackClicked },
		{ "HandleDoneClicked", &ULyraSafeZoneEditor::execHandleDoneClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSafeZoneEditor);
UClass* Z_Construct_UClass_ULyraSafeZoneEditor_NoRegister()
{
	return ULyraSafeZoneEditor::StaticClass();
}
struct Z_Construct_UClass_ULyraSafeZoneEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/Screens/LyraSafeZoneEditor.h" },
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCancel_MetaData[] = {
		{ "Category", "Restrictions" },
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_SafeZoneMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraSafeZoneEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RichText_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraSafeZoneEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraSafeZoneEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Done_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "LyraSafeZoneEditor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settings/Screens/LyraSafeZoneEditor.h" },
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
		{ &Z_Construct_UFunction_ULyraSafeZoneEditor_HandleBackClicked, "HandleBackClicked" }, // 2322836823
		{ &Z_Construct_UFunction_ULyraSafeZoneEditor_HandleDoneClicked, "HandleDoneClicked" }, // 3861433268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSafeZoneEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_bCanCancel_SetBit(void* Obj)
{
	((ULyraSafeZoneEditor*)Obj)->bCanCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_bCanCancel = { "bCanCancel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSafeZoneEditor), &Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_bCanCancel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCancel_MetaData), NewProp_bCanCancel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_Switcher_SafeZoneMessage = { "Switcher_SafeZoneMessage", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSafeZoneEditor, Switcher_SafeZoneMessage), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switcher_SafeZoneMessage_MetaData), NewProp_Switcher_SafeZoneMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_RichText_Default = { "RichText_Default", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSafeZoneEditor, RichText_Default), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RichText_Default_MetaData), NewProp_RichText_Default_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_Button_Back = { "Button_Back", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSafeZoneEditor, Button_Back), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Back_MetaData), NewProp_Button_Back_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_Button_Done = { "Button_Done", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSafeZoneEditor, Button_Done), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Done_MetaData), NewProp_Button_Done_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSafeZoneEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_bCanCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_Switcher_SafeZoneMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_RichText_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_Button_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSafeZoneEditor_Statics::NewProp_Button_Done,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSafeZoneEditor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSafeZoneEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSafeZoneEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameSettingActionInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraSafeZoneEditor, IGameSettingActionInterface), false },  // 3882456604
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSafeZoneEditor_Statics::ClassParams = {
	&ULyraSafeZoneEditor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraSafeZoneEditor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSafeZoneEditor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSafeZoneEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSafeZoneEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSafeZoneEditor()
{
	if (!Z_Registration_Info_UClass_ULyraSafeZoneEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSafeZoneEditor.OuterSingleton, Z_Construct_UClass_ULyraSafeZoneEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSafeZoneEditor.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSafeZoneEditor>()
{
	return ULyraSafeZoneEditor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSafeZoneEditor);
ULyraSafeZoneEditor::~ULyraSafeZoneEditor() {}
// End Class ULyraSafeZoneEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraSafeZoneEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSafeZoneEditor, ULyraSafeZoneEditor::StaticClass, TEXT("ULyraSafeZoneEditor"), &Z_Registration_Info_UClass_ULyraSafeZoneEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSafeZoneEditor), 370134849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraSafeZoneEditor_h_2821972669(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraSafeZoneEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraSafeZoneEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
