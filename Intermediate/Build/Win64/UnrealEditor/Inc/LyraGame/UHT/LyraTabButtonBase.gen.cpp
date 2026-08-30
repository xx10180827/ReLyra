// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Common/LyraTabButtonBase.h"
#include "LyraGame/UI/Common/LyraTabListWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTabButtonBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonBase_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabButtonInterface_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraTabDescriptor();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTabButtonBase Function SetTabLabelInfo_Implementation
struct Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics
{
	struct LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms
	{
		FLyraTabDescriptor TabLabelInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Common/LyraTabButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabLabelInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabLabelInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo = { "TabLabelInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms, TabLabelInfo), Z_Construct_UScriptStruct_FLyraTabDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabLabelInfo_MetaData), NewProp_TabLabelInfo_MetaData) }; // 3191048312
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::NewProp_TabLabelInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTabButtonBase, nullptr, "SetTabLabelInfo_Implementation", nullptr, nullptr, Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::LyraTabButtonBase_eventSetTabLabelInfo_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTabButtonBase::execSetTabLabelInfo_Implementation)
{
	P_GET_STRUCT_REF(FLyraTabDescriptor,Z_Param_Out_TabLabelInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTabLabelInfo_Implementation(Z_Param_Out_TabLabelInfo);
	P_NATIVE_END;
}
// End Class ULyraTabButtonBase Function SetTabLabelInfo_Implementation

// Begin Class ULyraTabButtonBase
void ULyraTabButtonBase::StaticRegisterNativesULyraTabButtonBase()
{
	UClass* Class = ULyraTabButtonBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTabLabelInfo_Implementation", &ULyraTabButtonBase::execSetTabLabelInfo_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTabButtonBase);
UClass* Z_Construct_UClass_ULyraTabButtonBase_NoRegister()
{
	return ULyraTabButtonBase::StaticClass();
}
struct Z_Construct_UClass_ULyraTabButtonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/LyraTabButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyImage_Icon_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraTabButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LazyImage_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTabButtonBase_SetTabLabelInfo_Implementation, "SetTabLabelInfo_Implementation" }, // 1268175926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTabButtonBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon = { "LazyImage_Icon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTabButtonBase, LazyImage_Icon), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyImage_Icon_MetaData), NewProp_LazyImage_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTabButtonBase_Statics::NewProp_LazyImage_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraTabButtonBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraTabButtonBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraTabButtonInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraTabButtonBase, ILyraTabButtonInterface), false },  // 2512920438
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTabButtonBase_Statics::ClassParams = {
	&ULyraTabButtonBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTabButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTabButtonBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTabButtonBase()
{
	if (!Z_Registration_Info_UClass_ULyraTabButtonBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTabButtonBase.OuterSingleton, Z_Construct_UClass_ULyraTabButtonBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTabButtonBase.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTabButtonBase>()
{
	return ULyraTabButtonBase::StaticClass();
}
ULyraTabButtonBase::ULyraTabButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTabButtonBase);
ULyraTabButtonBase::~ULyraTabButtonBase() {}
// End Class ULyraTabButtonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTabButtonBase, ULyraTabButtonBase::StaticClass, TEXT("ULyraTabButtonBase"), &Z_Registration_Info_UClass_ULyraTabButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTabButtonBase), 1290093496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_3962638494(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
