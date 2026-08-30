// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/LyraTouchRegion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTouchRegion() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTouchRegion();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTouchRegion_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTouchRegion Function ShouldSimulateInput
struct Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics
{
	struct LyraTouchRegion_eventShouldSimulateInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UUserWidget interface\n" },
#endif
		{ "ModuleRelativePath", "UI/LyraTouchRegion.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraTouchRegion_eventShouldSimulateInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraTouchRegion_eventShouldSimulateInput_Parms), &Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTouchRegion, nullptr, "ShouldSimulateInput", nullptr, nullptr, Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::LyraTouchRegion_eventShouldSimulateInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::LyraTouchRegion_eventShouldSimulateInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTouchRegion::execShouldSimulateInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSimulateInput();
	P_NATIVE_END;
}
// End Class ULyraTouchRegion Function ShouldSimulateInput

// Begin Class ULyraTouchRegion
void ULyraTouchRegion::StaticRegisterNativesULyraTouchRegion()
{
	UClass* Class = ULyraTouchRegion::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShouldSimulateInput", &ULyraTouchRegion::execShouldSimulateInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTouchRegion);
UClass* Z_Construct_UClass_ULyraTouchRegion_NoRegister()
{
	return ULyraTouchRegion::StaticClass();
}
struct Z_Construct_UClass_ULyraTouchRegion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A \"Touch Region\" is used to define an area on the screen that should trigger some\n * input when the user presses a finger on it\n */" },
#endif
		{ "DisplayName", "Lyra Touch Region" },
		{ "IncludePath", "UI/LyraTouchRegion.h" },
		{ "ModuleRelativePath", "UI/LyraTouchRegion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \"Touch Region\" is used to define an area on the screen that should trigger some\ninput when the user presses a finger on it" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTouchRegion_ShouldSimulateInput, "ShouldSimulateInput" }, // 3700276652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTouchRegion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraTouchRegion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraSimulatedInputWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTouchRegion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTouchRegion_Statics::ClassParams = {
	&ULyraTouchRegion::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTouchRegion_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTouchRegion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTouchRegion()
{
	if (!Z_Registration_Info_UClass_ULyraTouchRegion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTouchRegion.OuterSingleton, Z_Construct_UClass_ULyraTouchRegion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTouchRegion.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTouchRegion>()
{
	return ULyraTouchRegion::StaticClass();
}
ULyraTouchRegion::ULyraTouchRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTouchRegion);
ULyraTouchRegion::~ULyraTouchRegion() {}
// End Class ULyraTouchRegion

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTouchRegion, ULyraTouchRegion::StaticClass, TEXT("ULyraTouchRegion"), &Z_Registration_Info_UClass_ULyraTouchRegion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTouchRegion), 627469472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_587693995(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
