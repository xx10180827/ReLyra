// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/PerformanceStats/LyraPerfStatWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPerfStatWidgetBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerformanceStatSubsystem_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPerfStatWidgetBase Function FetchStatValue
struct Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics
{
	struct LyraPerfStatWidgetBase_eventFetchStatValue_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Polls for the value of this stat (unscaled)\n" },
#endif
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Polls for the value of this stat (unscaled)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPerfStatWidgetBase_eventFetchStatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPerfStatWidgetBase, nullptr, "FetchStatValue", nullptr, nullptr, Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::LyraPerfStatWidgetBase_eventFetchStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::LyraPerfStatWidgetBase_eventFetchStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPerfStatWidgetBase::execFetchStatValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->FetchStatValue();
	P_NATIVE_END;
}
// End Class ULyraPerfStatWidgetBase Function FetchStatValue

// Begin Class ULyraPerfStatWidgetBase Function GetStatToDisplay
struct Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics
{
	struct LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms
	{
		ELyraDisplayablePerformanceStat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stat this widget is supposed to display\n" },
#endif
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stat this widget is supposed to display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(0, nullptr) }; // 3286822108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPerfStatWidgetBase, nullptr, "GetStatToDisplay", nullptr, nullptr, Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPerfStatWidgetBase::execGetStatToDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELyraDisplayablePerformanceStat*)Z_Param__Result=P_THIS->GetStatToDisplay();
	P_NATIVE_END;
}
// End Class ULyraPerfStatWidgetBase Function GetStatToDisplay

// Begin Class ULyraPerfStatWidgetBase
void ULyraPerfStatWidgetBase::StaticRegisterNativesULyraPerfStatWidgetBase()
{
	UClass* Class = ULyraPerfStatWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FetchStatValue", &ULyraPerfStatWidgetBase::execFetchStatValue },
		{ "GetStatToDisplay", &ULyraPerfStatWidgetBase::execGetStatToDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPerfStatWidgetBase);
UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase_NoRegister()
{
	return ULyraPerfStatWidgetBase::StaticClass();
}
struct Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraPerfStatWidgetBase\n *\n * Base class for a widget that displays a single stat, e.g., FPS, ping, etc...\n */" },
#endif
		{ "IncludePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraPerfStatWidgetBase\n\nBase class for a widget that displays a single stat, e.g., FPS, ping, etc..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStatSubsystem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached subsystem pointer\n" },
#endif
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached subsystem pointer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatToDisplay_MetaData[] = {
		{ "Category", "Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The stat to display\n" },
#endif
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The stat to display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStatSubsystem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StatToDisplay_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StatToDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue, "FetchStatValue" }, // 304981349
		{ &Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay, "GetStatToDisplay" }, // 3136888021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPerfStatWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem = { "CachedStatSubsystem", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPerfStatWidgetBase, CachedStatSubsystem), Z_Construct_UClass_ULyraPerformanceStatSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStatSubsystem_MetaData), NewProp_CachedStatSubsystem_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay = { "StatToDisplay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPerfStatWidgetBase, StatToDisplay), Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatToDisplay_MetaData), NewProp_StatToDisplay_MetaData) }; // 3286822108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::ClassParams = {
	&ULyraPerfStatWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase()
{
	if (!Z_Registration_Info_UClass_ULyraPerfStatWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPerfStatWidgetBase.OuterSingleton, Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPerfStatWidgetBase.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPerfStatWidgetBase>()
{
	return ULyraPerfStatWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPerfStatWidgetBase);
ULyraPerfStatWidgetBase::~ULyraPerfStatWidgetBase() {}
// End Class ULyraPerfStatWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPerfStatWidgetBase, ULyraPerfStatWidgetBase::StaticClass, TEXT("ULyraPerfStatWidgetBase"), &Z_Registration_Info_UClass_ULyraPerfStatWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPerfStatWidgetBase), 3080678128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_151908310(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
