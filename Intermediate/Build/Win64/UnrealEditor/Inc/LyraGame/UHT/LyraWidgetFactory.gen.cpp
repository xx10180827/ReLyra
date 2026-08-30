// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Common/LyraWidgetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWidgetFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraWidgetFactory Function FindWidgetClassForData
struct LyraWidgetFactory_eventFindWidgetClassForData_Parms
{
	const UObject* Data;
	TSubclassOf<UUserWidget> ReturnValue;

	/** Constructor, initializes return property only **/
	LyraWidgetFactory_eventFindWidgetClassForData_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ULyraWidgetFactory_FindWidgetClassForData = FName(TEXT("FindWidgetClassForData"));
TSubclassOf<UUserWidget> ULyraWidgetFactory::FindWidgetClassForData(const UObject* Data) const
{
	LyraWidgetFactory_eventFindWidgetClassForData_Parms Parms;
	Parms.Data=Data;
	const_cast<ULyraWidgetFactory*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULyraWidgetFactory_FindWidgetClassForData),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Common/LyraWidgetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWidgetFactory_eventFindWidgetClassForData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWidgetFactory_eventFindWidgetClassForData_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWidgetFactory, nullptr, "FindWidgetClassForData", nullptr, nullptr, Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers), sizeof(LyraWidgetFactory_eventFindWidgetClassForData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraWidgetFactory_eventFindWidgetClassForData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWidgetFactory::execFindWidgetClassForData)
{
	P_GET_OBJECT(UObject,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=P_THIS->FindWidgetClassForData_Implementation(Z_Param_Data);
	P_NATIVE_END;
}
// End Class ULyraWidgetFactory Function FindWidgetClassForData

// Begin Class ULyraWidgetFactory
void ULyraWidgetFactory::StaticRegisterNativesULyraWidgetFactory()
{
	UClass* Class = ULyraWidgetFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindWidgetClassForData", &ULyraWidgetFactory::execFindWidgetClassForData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWidgetFactory);
UClass* Z_Construct_UClass_ULyraWidgetFactory_NoRegister()
{
	return ULyraWidgetFactory::StaticClass();
}
struct Z_Construct_UClass_ULyraWidgetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Common/LyraWidgetFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraWidgetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData, "FindWidgetClassForData" }, // 1197078718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWidgetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraWidgetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWidgetFactory_Statics::ClassParams = {
	&ULyraWidgetFactory::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWidgetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWidgetFactory()
{
	if (!Z_Registration_Info_UClass_ULyraWidgetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWidgetFactory.OuterSingleton, Z_Construct_UClass_ULyraWidgetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWidgetFactory.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWidgetFactory>()
{
	return ULyraWidgetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWidgetFactory);
ULyraWidgetFactory::~ULyraWidgetFactory() {}
// End Class ULyraWidgetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWidgetFactory, ULyraWidgetFactory::StaticClass, TEXT("ULyraWidgetFactory"), &Z_Registration_Info_UClass_ULyraWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWidgetFactory), 1537051138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_2625560229(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
