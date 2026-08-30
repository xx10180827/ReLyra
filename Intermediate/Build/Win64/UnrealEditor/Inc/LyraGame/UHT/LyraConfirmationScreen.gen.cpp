// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Foundation/LyraConfirmationScreen.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraConfirmationScreen() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog();
COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraConfirmationScreen();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraConfirmationScreen_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraConfirmationScreen Function HandleTapToCloseZoneMouseButtonDown
struct Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics
{
	struct LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(0, nullptr) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MyGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_MouseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraConfirmationScreen, nullptr, "HandleTapToCloseZoneMouseButtonDown", nullptr, nullptr, Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::LyraConfirmationScreen_eventHandleTapToCloseZoneMouseButtonDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraConfirmationScreen::execHandleTapToCloseZoneMouseButtonDown)
{
	P_GET_STRUCT(FGeometry,Z_Param_MyGeometry);
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_MouseEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=P_THIS->HandleTapToCloseZoneMouseButtonDown(Z_Param_MyGeometry,Z_Param_Out_MouseEvent);
	P_NATIVE_END;
}
// End Class ULyraConfirmationScreen Function HandleTapToCloseZoneMouseButtonDown

// Begin Class ULyraConfirmationScreen
void ULyraConfirmationScreen::StaticRegisterNativesULyraConfirmationScreen()
{
	UClass* Class = ULyraConfirmationScreen::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleTapToCloseZoneMouseButtonDown", &ULyraConfirmationScreen::execHandleTapToCloseZoneMouseButtonDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraConfirmationScreen);
UClass* Z_Construct_UClass_ULyraConfirmationScreen_NoRegister()
{
	return ULyraConfirmationScreen::StaticClass();
}
struct Z_Construct_UClass_ULyraConfirmationScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09\n */" },
#endif
		{ "IncludePath", "UI/Foundation/LyraConfirmationScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RichText_Description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryBox_Buttons_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_TapToCloseZone_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "Category", "LyraConfirmationScreen" },
		{ "ModuleRelativePath", "UI/Foundation/LyraConfirmationScreen.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryBox_Buttons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_TapToCloseZone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraConfirmationScreen_HandleTapToCloseZoneMouseButtonDown, "HandleTapToCloseZoneMouseButtonDown" }, // 3953298901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraConfirmationScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title = { "Text_Title", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraConfirmationScreen, Text_Title), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Title_MetaData), NewProp_Text_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description = { "RichText_Description", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraConfirmationScreen, RichText_Description), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RichText_Description_MetaData), NewProp_RichText_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons = { "EntryBox_Buttons", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraConfirmationScreen, EntryBox_Buttons), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryBox_Buttons_MetaData), NewProp_EntryBox_Buttons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone = { "Border_TapToCloseZone", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraConfirmationScreen, Border_TapToCloseZone), Z_Construct_UClass_UCommonBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_TapToCloseZone_MetaData), NewProp_Border_TapToCloseZone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraConfirmationScreen, CancelAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Text_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_RichText_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_EntryBox_Buttons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_Border_TapToCloseZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraConfirmationScreen_Statics::NewProp_CancelAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraConfirmationScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameDialog,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraConfirmationScreen_Statics::ClassParams = {
	&ULyraConfirmationScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraConfirmationScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraConfirmationScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraConfirmationScreen()
{
	if (!Z_Registration_Info_UClass_ULyraConfirmationScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraConfirmationScreen.OuterSingleton, Z_Construct_UClass_ULyraConfirmationScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraConfirmationScreen.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraConfirmationScreen>()
{
	return ULyraConfirmationScreen::StaticClass();
}
ULyraConfirmationScreen::ULyraConfirmationScreen() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraConfirmationScreen);
ULyraConfirmationScreen::~ULyraConfirmationScreen() {}
// End Class ULyraConfirmationScreen

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraConfirmationScreen, ULyraConfirmationScreen::StaticClass, TEXT("ULyraConfirmationScreen"), &Z_Registration_Info_UClass_ULyraConfirmationScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraConfirmationScreen), 121011946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_12266799(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
