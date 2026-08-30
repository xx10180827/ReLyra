// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/IndicatorSystem/IActorIndicatorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIActorIndicatorWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorWidgetInterface();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Interface UIndicatorWidgetInterface Function BindIndicator
struct IndicatorWidgetInterface_eventBindIndicator_Parms
{
	UIndicatorDescriptor* Indicator;
};
void IIndicatorWidgetInterface::BindIndicator(UIndicatorDescriptor* Indicator)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindIndicator instead.");
}
static FName NAME_UIndicatorWidgetInterface_BindIndicator = FName(TEXT("BindIndicator"));
void IIndicatorWidgetInterface::Execute_BindIndicator(UObject* O, UIndicatorDescriptor* Indicator)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIndicatorWidgetInterface::StaticClass()));
	IndicatorWidgetInterface_eventBindIndicator_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIndicatorWidgetInterface_BindIndicator);
	if (Func)
	{
		Parms.Indicator=Indicator;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIndicatorWidgetInterface*)(O->GetNativeInterfaceAddress(UIndicatorWidgetInterface::StaticClass())))
	{
		I->BindIndicator_Implementation(Indicator);
	}
}
struct Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IActorIndicatorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Indicator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::NewProp_Indicator = { "Indicator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorWidgetInterface_eventBindIndicator_Parms, Indicator), Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::NewProp_Indicator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorWidgetInterface, nullptr, "BindIndicator", nullptr, nullptr, Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers), sizeof(IndicatorWidgetInterface_eventBindIndicator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::Function_MetaDataParams) };
static_assert(sizeof(IndicatorWidgetInterface_eventBindIndicator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIndicatorWidgetInterface::execBindIndicator)
{
	P_GET_OBJECT(UIndicatorDescriptor,Z_Param_Indicator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindIndicator_Implementation(Z_Param_Indicator);
	P_NATIVE_END;
}
// End Interface UIndicatorWidgetInterface Function BindIndicator

// Begin Interface UIndicatorWidgetInterface Function UnbindIndicator
struct IndicatorWidgetInterface_eventUnbindIndicator_Parms
{
	const UIndicatorDescriptor* Indicator;
};
void IIndicatorWidgetInterface::UnbindIndicator(const UIndicatorDescriptor* Indicator)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindIndicator instead.");
}
static FName NAME_UIndicatorWidgetInterface_UnbindIndicator = FName(TEXT("UnbindIndicator"));
void IIndicatorWidgetInterface::Execute_UnbindIndicator(UObject* O, const UIndicatorDescriptor* Indicator)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIndicatorWidgetInterface::StaticClass()));
	IndicatorWidgetInterface_eventUnbindIndicator_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIndicatorWidgetInterface_UnbindIndicator);
	if (Func)
	{
		Parms.Indicator=Indicator;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIndicatorWidgetInterface*)(O->GetNativeInterfaceAddress(UIndicatorWidgetInterface::StaticClass())))
	{
		I->UnbindIndicator_Implementation(Indicator);
	}
}
struct Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IActorIndicatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Indicator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator = { "Indicator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorWidgetInterface_eventUnbindIndicator_Parms, Indicator), Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indicator_MetaData), NewProp_Indicator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorWidgetInterface, nullptr, "UnbindIndicator", nullptr, nullptr, Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers), sizeof(IndicatorWidgetInterface_eventUnbindIndicator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::Function_MetaDataParams) };
static_assert(sizeof(IndicatorWidgetInterface_eventUnbindIndicator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIndicatorWidgetInterface::execUnbindIndicator)
{
	P_GET_OBJECT(UIndicatorDescriptor,Z_Param_Indicator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindIndicator_Implementation(Z_Param_Indicator);
	P_NATIVE_END;
}
// End Interface UIndicatorWidgetInterface Function UnbindIndicator

// Begin Interface UIndicatorWidgetInterface
void UIndicatorWidgetInterface::StaticRegisterNativesUIndicatorWidgetInterface()
{
	UClass* Class = UIndicatorWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindIndicator", &IIndicatorWidgetInterface::execBindIndicator },
		{ "UnbindIndicator", &IIndicatorWidgetInterface::execUnbindIndicator },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorWidgetInterface);
UClass* Z_Construct_UClass_UIndicatorWidgetInterface_NoRegister()
{
	return UIndicatorWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UIndicatorWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IActorIndicatorWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator, "BindIndicator" }, // 3185953401
		{ &Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator, "UnbindIndicator" }, // 3179714369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIndicatorWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIndicatorWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorWidgetInterface_Statics::ClassParams = {
	&UIndicatorWidgetInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIndicatorWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIndicatorWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UIndicatorWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorWidgetInterface.OuterSingleton, Z_Construct_UClass_UIndicatorWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIndicatorWidgetInterface.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UIndicatorWidgetInterface>()
{
	return UIndicatorWidgetInterface::StaticClass();
}
UIndicatorWidgetInterface::UIndicatorWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorWidgetInterface);
UIndicatorWidgetInterface::~UIndicatorWidgetInterface() {}
// End Interface UIndicatorWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorWidgetInterface, UIndicatorWidgetInterface::StaticClass, TEXT("UIndicatorWidgetInterface"), &Z_Registration_Info_UClass_UIndicatorWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorWidgetInterface), 1655659806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_3058068677(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
