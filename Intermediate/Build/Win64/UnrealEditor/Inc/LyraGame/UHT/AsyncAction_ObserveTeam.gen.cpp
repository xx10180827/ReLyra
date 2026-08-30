// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/AsyncAction_ObserveTeam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_ObserveTeam() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ObserveTeam();
LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ObserveTeam_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Delegate FTeamObservedAsyncDelegate
struct Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_LyraGame_eventTeamObservedAsyncDelegate_Parms
	{
		bool bTeamSet;
		int32 TeamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeam.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTeamSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet_SetBit(void* Obj)
{
	((_Script_LyraGame_eventTeamObservedAsyncDelegate_Parms*)Obj)->bTeamSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet = { "bTeamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LyraGame_eventTeamObservedAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LyraGame_eventTeamObservedAsyncDelegate_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::NewProp_TeamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "TeamObservedAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventTeamObservedAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventTeamObservedAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTeamObservedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamObservedAsyncDelegate, bool bTeamSet, int32 TeamId)
{
	struct _Script_LyraGame_eventTeamObservedAsyncDelegate_Parms
	{
		bool bTeamSet;
		int32 TeamId;
	};
	_Script_LyraGame_eventTeamObservedAsyncDelegate_Parms Parms;
	Parms.bTeamSet=bTeamSet ? true : false;
	Parms.TeamId=TeamId;
	TeamObservedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTeamObservedAsyncDelegate

// Begin Class UAsyncAction_ObserveTeam Function ObserveTeam
struct Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics
{
	struct AsyncAction_ObserveTeam_eventObserveTeam_Parms
	{
		UObject* TeamAgent;
		UAsyncAction_ObserveTeam* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Watches for team changes on the specified team agent\n//  - It will will fire once immediately to give the current team assignment\n//  - For anything that can ever belong to a team (implements ILyraTeamAgentInterface),\n//    it will also listen for team assignment changes in the future\n" },
#endif
		{ "Keywords", "Watch" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeam.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Watches for team changes on the specified team agent\n - It will will fire once immediately to give the current team assignment\n - For anything that can ever belong to a team (implements ILyraTeamAgentInterface),\n   it will also listen for team assignment changes in the future" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeam_eventObserveTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeam_eventObserveTeam_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ObserveTeam_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeam, nullptr, "ObserveTeam", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::AsyncAction_ObserveTeam_eventObserveTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::AsyncAction_ObserveTeam_eventObserveTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_ObserveTeam::execObserveTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_ObserveTeam**)Z_Param__Result=UAsyncAction_ObserveTeam::ObserveTeam(Z_Param_TeamAgent);
	P_NATIVE_END;
}
// End Class UAsyncAction_ObserveTeam Function ObserveTeam

// Begin Class UAsyncAction_ObserveTeam Function OnWatchedAgentChangedTeam
struct Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics
{
	struct AsyncAction_ObserveTeam_eventOnWatchedAgentChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeam_eventOnWatchedAgentChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeam_eventOnWatchedAgentChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeam_eventOnWatchedAgentChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeam, nullptr, "OnWatchedAgentChangedTeam", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::AsyncAction_ObserveTeam_eventOnWatchedAgentChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::AsyncAction_ObserveTeam_eventOnWatchedAgentChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_ObserveTeam::execOnWatchedAgentChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWatchedAgentChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class UAsyncAction_ObserveTeam Function OnWatchedAgentChangedTeam

// Begin Class UAsyncAction_ObserveTeam
void UAsyncAction_ObserveTeam::StaticRegisterNativesUAsyncAction_ObserveTeam()
{
	UClass* Class = UAsyncAction_ObserveTeam::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ObserveTeam", &UAsyncAction_ObserveTeam::execObserveTeam },
		{ "OnWatchedAgentChangedTeam", &UAsyncAction_ObserveTeam::execOnWatchedAgentChangedTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_ObserveTeam);
UClass* Z_Construct_UClass_UAsyncAction_ObserveTeam_NoRegister()
{
	return UAsyncAction_ObserveTeam::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Watches for team changes in the specified object\n */" },
#endif
		{ "IncludePath", "Teams/AsyncAction_ObserveTeam.h" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeam.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Watches for team changes in the specified object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the team is set or changed\n" },
#endif
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeam.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the team is set or changed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeam_ObserveTeam, "ObserveTeam" }, // 3434540837
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeam_OnWatchedAgentChangedTeam, "OnWatchedAgentChangedTeam" }, // 3319083712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_ObserveTeam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_ObserveTeam, OnTeamChanged), Z_Construct_UDelegateFunction_LyraGame_TeamObservedAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChanged_MetaData), NewProp_OnTeamChanged_MetaData) }; // 1906233519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::NewProp_OnTeamChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::ClassParams = {
	&UAsyncAction_ObserveTeam::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_ObserveTeam()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_ObserveTeam.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_ObserveTeam.OuterSingleton, Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_ObserveTeam.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UAsyncAction_ObserveTeam>()
{
	return UAsyncAction_ObserveTeam::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_ObserveTeam);
UAsyncAction_ObserveTeam::~UAsyncAction_ObserveTeam() {}
// End Class UAsyncAction_ObserveTeam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_ObserveTeam, UAsyncAction_ObserveTeam::StaticClass, TEXT("UAsyncAction_ObserveTeam"), &Z_Registration_Info_UClass_UAsyncAction_ObserveTeam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_ObserveTeam), 2466180019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_4079579659(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
