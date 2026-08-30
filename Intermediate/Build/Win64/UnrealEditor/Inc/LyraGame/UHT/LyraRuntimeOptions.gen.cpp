// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Hotfix/LyraRuntimeOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraRuntimeOptions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRuntimeOptions();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRuntimeOptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraRuntimeOptions Function GetRuntimeOptions
struct Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics
{
	struct LyraRuntimeOptions_eventGetRuntimeOptions_Parms
	{
		ULyraRuntimeOptions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Hotfix/LyraRuntimeOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraRuntimeOptions_eventGetRuntimeOptions_Parms, ReturnValue), Z_Construct_UClass_ULyraRuntimeOptions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraRuntimeOptions, nullptr, "GetRuntimeOptions", nullptr, nullptr, Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::LyraRuntimeOptions_eventGetRuntimeOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::LyraRuntimeOptions_eventGetRuntimeOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraRuntimeOptions::execGetRuntimeOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraRuntimeOptions**)Z_Param__Result=ULyraRuntimeOptions::GetRuntimeOptions();
	P_NATIVE_END;
}
// End Class ULyraRuntimeOptions Function GetRuntimeOptions

// Begin Class ULyraRuntimeOptions
void ULyraRuntimeOptions::StaticRegisterNativesULyraRuntimeOptions()
{
	UClass* Class = ULyraRuntimeOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRuntimeOptions", &ULyraRuntimeOptions::execGetRuntimeOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraRuntimeOptions);
UClass* Z_Construct_UClass_ULyraRuntimeOptions_NoRegister()
{
	return ULyraRuntimeOptions::StaticClass();
}
struct Z_Construct_UClass_ULyraRuntimeOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraRuntimeOptions: Supports checking at runtime whether features are enabled/disabled, changing\n * configuration parameters, console cheats, startup commands.\n *\n * Add a new Property that *defaults* (either naturally or in the constructor) to the desired\n * normal state. (e.g. bDisableSomething). If you ever need to suddenly disable that thing in the\n * live game, you'll be able to.\n *\n * For testing you can run with -ro.bDisableSomething=true to override the defaults. This is only\n * available in non-shipping builds.\n *\n * Variables are registered with the console under the 'ro' namespace. E.g. ro.bDisableSomething\n */" },
#endif
		{ "IncludePath", "Hotfix/LyraRuntimeOptions.h" },
		{ "ModuleRelativePath", "Hotfix/LyraRuntimeOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraRuntimeOptions: Supports checking at runtime whether features are enabled/disabled, changing\nconfiguration parameters, console cheats, startup commands.\n\nAdd a new Property that *defaults* (either naturally or in the constructor) to the desired\nnormal state. (e.g. bDisableSomething). If you ever need to suddenly disable that thing in the\nlive game, you'll be able to.\n\nFor testing you can run with -ro.bDisableSomething=true to override the defaults. This is only\navailable in non-shipping builds.\n\nVariables are registered with the console under the 'ro' namespace. E.g. ro.bDisableSomething" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraRuntimeOptions_GetRuntimeOptions, "GetRuntimeOptions" }, // 3649343604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraRuntimeOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraRuntimeOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeOptionsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRuntimeOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraRuntimeOptions_Statics::ClassParams = {
	&ULyraRuntimeOptions::StaticClass,
	"RuntimeOptions",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRuntimeOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraRuntimeOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraRuntimeOptions()
{
	if (!Z_Registration_Info_UClass_ULyraRuntimeOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraRuntimeOptions.OuterSingleton, Z_Construct_UClass_ULyraRuntimeOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraRuntimeOptions.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraRuntimeOptions>()
{
	return ULyraRuntimeOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraRuntimeOptions);
ULyraRuntimeOptions::~ULyraRuntimeOptions() {}
// End Class ULyraRuntimeOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraRuntimeOptions, ULyraRuntimeOptions::StaticClass, TEXT("ULyraRuntimeOptions"), &Z_Registration_Info_UClass_ULyraRuntimeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraRuntimeOptions), 1122341731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_892027315(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
