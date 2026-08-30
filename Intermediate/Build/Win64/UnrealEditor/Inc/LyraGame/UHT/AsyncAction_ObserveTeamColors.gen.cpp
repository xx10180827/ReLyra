// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/AsyncAction_ObserveTeamColors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_ObserveTeamColors() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors();
LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Delegate FTeamColorObservedAsyncDelegate
struct Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms
	{
		bool bTeamSet;
		int32 TeamId;
		const ULyraTeamDisplayAsset* DisplayAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bTeamSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet_SetBit(void* Obj)
{
	((_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms*)Obj)->bTeamSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet = { "bTeamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayAsset_MetaData), NewProp_DisplayAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "TeamColorObservedAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTeamColorObservedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamColorObservedAsyncDelegate, bool bTeamSet, int32 TeamId, const ULyraTeamDisplayAsset* DisplayAsset)
{
	struct _Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms
	{
		bool bTeamSet;
		int32 TeamId;
		const ULyraTeamDisplayAsset* DisplayAsset;
	};
	_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms Parms;
	Parms.bTeamSet=bTeamSet ? true : false;
	Parms.TeamId=TeamId;
	Parms.DisplayAsset=DisplayAsset;
	TeamColorObservedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTeamColorObservedAsyncDelegate

// Begin Class UAsyncAction_ObserveTeamColors Function ObserveTeamColors
struct Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics
{
	struct AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms
	{
		UObject* TeamAgent;
		UAsyncAction_ObserveTeamColors* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Watches for team changes on the specified team agent\n//  - It will will fire once immediately to give the current team assignment\n//  - For anything that can ever belong to a team (implements ILyraTeamAgentInterface),\n//    it will also listen for team assignment changes in the future\n" },
#endif
		{ "Keywords", "Watch" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ObserveTeamColors_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeamColors, nullptr, "ObserveTeamColors", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_ObserveTeamColors::execObserveTeamColors)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_ObserveTeamColors**)Z_Param__Result=UAsyncAction_ObserveTeamColors::ObserveTeamColors(Z_Param_TeamAgent);
	P_NATIVE_END;
}
// End Class UAsyncAction_ObserveTeamColors Function ObserveTeamColors

// Begin Class UAsyncAction_ObserveTeamColors Function OnDisplayAssetChanged
struct Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics
{
	struct AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms
	{
		const ULyraTeamDisplayAsset* DisplayAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayAsset_MetaData), NewProp_DisplayAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeamColors, nullptr, "OnDisplayAssetChanged", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_ObserveTeamColors::execOnDisplayAssetChanged)
{
	P_GET_OBJECT(ULyraTeamDisplayAsset,Z_Param_DisplayAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplayAssetChanged(Z_Param_DisplayAsset);
	P_NATIVE_END;
}
// End Class UAsyncAction_ObserveTeamColors Function OnDisplayAssetChanged

// Begin Class UAsyncAction_ObserveTeamColors Function OnWatchedAgentChangedTeam
struct Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics
{
	struct AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeamColors, nullptr, "OnWatchedAgentChangedTeam", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_ObserveTeamColors::execOnWatchedAgentChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWatchedAgentChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class UAsyncAction_ObserveTeamColors Function OnWatchedAgentChangedTeam

// Begin Class UAsyncAction_ObserveTeamColors
void UAsyncAction_ObserveTeamColors::StaticRegisterNativesUAsyncAction_ObserveTeamColors()
{
	UClass* Class = UAsyncAction_ObserveTeamColors::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ObserveTeamColors", &UAsyncAction_ObserveTeamColors::execObserveTeamColors },
		{ "OnDisplayAssetChanged", &UAsyncAction_ObserveTeamColors::execOnDisplayAssetChanged },
		{ "OnWatchedAgentChangedTeam", &UAsyncAction_ObserveTeamColors::execOnWatchedAgentChangedTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_ObserveTeamColors);
UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors_NoRegister()
{
	return UAsyncAction_ObserveTeamColors::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Watches for team color changes in the specified object\n */" },
#endif
		{ "IncludePath", "Teams/AsyncAction_ObserveTeamColors.h" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Watches for team color changes in the specified object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the team is set or changed\n" },
#endif
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the team is set or changed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors, "ObserveTeamColors" }, // 2199349967
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged, "OnDisplayAssetChanged" }, // 2635215523
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam, "OnWatchedAgentChangedTeam" }, // 995044120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_ObserveTeamColors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_ObserveTeamColors, OnTeamChanged), Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChanged_MetaData), NewProp_OnTeamChanged_MetaData) }; // 715123841
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::ClassParams = {
	&UAsyncAction_ObserveTeamColors::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors.OuterSingleton, Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UAsyncAction_ObserveTeamColors>()
{
	return UAsyncAction_ObserveTeamColors::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_ObserveTeamColors);
UAsyncAction_ObserveTeamColors::~UAsyncAction_ObserveTeamColors() {}
// End Class UAsyncAction_ObserveTeamColors

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_ObserveTeamColors, UAsyncAction_ObserveTeamColors::StaticClass, TEXT("UAsyncAction_ObserveTeamColors"), &Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_ObserveTeamColors), 487872272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_2295996095(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
