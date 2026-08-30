// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/IndicatorSystem/IndicatorLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicatorLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLibrary_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UIndicatorLibrary Function GetIndicatorManagerComponent
struct Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics
{
	struct IndicatorLibrary_eventGetIndicatorManagerComponent_Parms
	{
		AController* Controller;
		ULyraIndicatorManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorLibrary_eventGetIndicatorManagerComponent_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorLibrary_eventGetIndicatorManagerComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorLibrary, nullptr, "GetIndicatorManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::IndicatorLibrary_eventGetIndicatorManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::IndicatorLibrary_eventGetIndicatorManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorLibrary::execGetIndicatorManagerComponent)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraIndicatorManagerComponent**)Z_Param__Result=UIndicatorLibrary::GetIndicatorManagerComponent(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class UIndicatorLibrary Function GetIndicatorManagerComponent

// Begin Class UIndicatorLibrary
void UIndicatorLibrary::StaticRegisterNativesUIndicatorLibrary()
{
	UClass* Class = UIndicatorLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIndicatorManagerComponent", &UIndicatorLibrary::execGetIndicatorManagerComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorLibrary);
UClass* Z_Construct_UClass_UIndicatorLibrary_NoRegister()
{
	return UIndicatorLibrary::StaticClass();
}
struct Z_Construct_UClass_UIndicatorLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/IndicatorSystem/IndicatorLibrary.h" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent, "GetIndicatorManagerComponent" }, // 1462875548
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicatorLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIndicatorLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorLibrary_Statics::ClassParams = {
	&UIndicatorLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UIndicatorLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIndicatorLibrary()
{
	if (!Z_Registration_Info_UClass_UIndicatorLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorLibrary.OuterSingleton, Z_Construct_UClass_UIndicatorLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIndicatorLibrary.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UIndicatorLibrary>()
{
	return UIndicatorLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorLibrary);
UIndicatorLibrary::~UIndicatorLibrary() {}
// End Class UIndicatorLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorLibrary, UIndicatorLibrary::StaticClass, TEXT("UIndicatorLibrary"), &Z_Registration_Info_UClass_UIndicatorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorLibrary), 3126916581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_2897106164(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
