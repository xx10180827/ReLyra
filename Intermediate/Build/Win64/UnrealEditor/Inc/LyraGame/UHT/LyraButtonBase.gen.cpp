// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Foundation/LyraButtonBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraButtonBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraButtonBase Function SetButtonText
struct Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics
{
	struct LyraButtonBase_eventSetButtonText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_eventSetButtonText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase, nullptr, "SetButtonText", nullptr, nullptr, Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::LyraButtonBase_eventSetButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::LyraButtonBase_eventSetButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraButtonBase_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraButtonBase::execSetButtonText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText(Z_Param_Out_InText);
	P_NATIVE_END;
}
// End Class ULyraButtonBase Function SetButtonText

// Begin Class ULyraButtonBase Function UpdateButtonStyle
static FName NAME_ULyraButtonBase_UpdateButtonStyle = FName(TEXT("UpdateButtonStyle"));
void ULyraButtonBase::UpdateButtonStyle()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraButtonBase_UpdateButtonStyle),NULL);
}
struct Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase, nullptr, "UpdateButtonStyle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraButtonBase Function UpdateButtonStyle

// Begin Class ULyraButtonBase Function UpdateButtonText
struct LyraButtonBase_eventUpdateButtonText_Parms
{
	FText InText;
};
static FName NAME_ULyraButtonBase_UpdateButtonText = FName(TEXT("UpdateButtonText"));
void ULyraButtonBase::UpdateButtonText(FText const& InText)
{
	LyraButtonBase_eventUpdateButtonText_Parms Parms;
	Parms.InText=InText;
	ProcessEvent(FindFunctionChecked(NAME_ULyraButtonBase_UpdateButtonText),&Parms);
}
struct Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_eventUpdateButtonText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase, nullptr, "UpdateButtonText", nullptr, nullptr, Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers), sizeof(LyraButtonBase_eventUpdateButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraButtonBase_eventUpdateButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraButtonBase Function UpdateButtonText

// Begin Class ULyraButtonBase
void ULyraButtonBase::StaticRegisterNativesULyraButtonBase()
{
	UClass* Class = ULyraButtonBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetButtonText", &ULyraButtonBase::execSetButtonText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraButtonBase);
UClass* Z_Construct_UClass_ULyraButtonBase_NoRegister()
{
	return ULyraButtonBase::StaticClass();
}
struct Z_Construct_UClass_ULyraButtonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Foundation/LyraButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "editcondition", "bOverride_ButtonText" },
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ButtonText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraButtonBase_SetButtonText, "SetButtonText" }, // 2924947996
		{ &Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle, "UpdateButtonStyle" }, // 511124998
		{ &Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText, "UpdateButtonText" }, // 2455802817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraButtonBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_SetBit(void* Obj)
{
	((ULyraButtonBase*)Obj)->bOverride_ButtonText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText = { "bOverride_ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULyraButtonBase), &Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ButtonText_MetaData), NewProp_bOverride_ButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraButtonBase, ButtonText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraButtonBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraButtonBase_Statics::ClassParams = {
	&ULyraButtonBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraButtonBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraButtonBase()
{
	if (!Z_Registration_Info_UClass_ULyraButtonBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraButtonBase.OuterSingleton, Z_Construct_UClass_ULyraButtonBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraButtonBase.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraButtonBase>()
{
	return ULyraButtonBase::StaticClass();
}
ULyraButtonBase::ULyraButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraButtonBase);
ULyraButtonBase::~ULyraButtonBase() {}
// End Class ULyraButtonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraButtonBase, ULyraButtonBase::StaticClass, TEXT("ULyraButtonBase"), &Z_Registration_Info_UClass_ULyraButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraButtonBase), 2404583039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_2039407730(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
