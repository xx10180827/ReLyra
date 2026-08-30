// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Replays/AsyncAction_QueryReplays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_QueryReplays() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_QueryReplays();
LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_QueryReplays_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayList_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Delegate FQueryReplayAsyncDelegate
struct Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_LyraGame_eventQueryReplayAsyncDelegate_Parms
	{
		ULyraReplayList* Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms, Results), Z_Construct_UClass_ULyraReplayList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "QueryReplayAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FQueryReplayAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& QueryReplayAsyncDelegate, ULyraReplayList* Results)
{
	struct _Script_LyraGame_eventQueryReplayAsyncDelegate_Parms
	{
		ULyraReplayList* Results;
	};
	_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms Parms;
	Parms.Results=Results;
	QueryReplayAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FQueryReplayAsyncDelegate

// Begin Class UAsyncAction_QueryReplays Function QueryReplays
struct Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics
{
	struct AsyncAction_QueryReplays_eventQueryReplays_Parms
	{
		APlayerController* PlayerController;
		UAsyncAction_QueryReplays* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Watches for team changes in the specified player controller\n" },
#endif
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Watches for team changes in the specified player controller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_QueryReplays_eventQueryReplays_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_QueryReplays_eventQueryReplays_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_QueryReplays_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_QueryReplays, nullptr, "QueryReplays", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::AsyncAction_QueryReplays_eventQueryReplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::AsyncAction_QueryReplays_eventQueryReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_QueryReplays::execQueryReplays)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_QueryReplays**)Z_Param__Result=UAsyncAction_QueryReplays::QueryReplays(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UAsyncAction_QueryReplays Function QueryReplays

// Begin Class UAsyncAction_QueryReplays
void UAsyncAction_QueryReplays::StaticRegisterNativesUAsyncAction_QueryReplays()
{
	UClass* Class = UAsyncAction_QueryReplays::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "QueryReplays", &UAsyncAction_QueryReplays::execQueryReplays },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_QueryReplays);
UClass* Z_Construct_UClass_UAsyncAction_QueryReplays_NoRegister()
{
	return UAsyncAction_QueryReplays::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_QueryReplays_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Watches for team changes in the specified player controller\n */" },
#endif
		{ "IncludePath", "Replays/AsyncAction_QueryReplays.h" },
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Watches for team changes in the specified player controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the replay query completes\n" },
#endif
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the replay query completes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultList_MetaData[] = {
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QueryComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays, "QueryReplays" }, // 2349585692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_QueryReplays>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete = { "QueryComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_QueryReplays, QueryComplete), Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryComplete_MetaData), NewProp_QueryComplete_MetaData) }; // 1544130346
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_QueryReplays, ResultList), Z_Construct_UClass_ULyraReplayList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultList_MetaData), NewProp_ResultList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::ClassParams = {
	&UAsyncAction_QueryReplays::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_QueryReplays()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_QueryReplays.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_QueryReplays.OuterSingleton, Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_QueryReplays.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UAsyncAction_QueryReplays>()
{
	return UAsyncAction_QueryReplays::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_QueryReplays);
UAsyncAction_QueryReplays::~UAsyncAction_QueryReplays() {}
// End Class UAsyncAction_QueryReplays

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_QueryReplays, UAsyncAction_QueryReplays::StaticClass, TEXT("UAsyncAction_QueryReplays"), &Z_Registration_Info_UClass_UAsyncAction_QueryReplays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_QueryReplays), 58345850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_3227735304(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
