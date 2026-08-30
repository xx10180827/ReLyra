// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerController() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraHUD_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraReplayPlayerController();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraReplayPlayerController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraPlayerController Function GetIsAutoRunning
struct Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics
{
	struct LyraPlayerController_eventGetIsAutoRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraPlayerController_eventGetIsAutoRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraPlayerController_eventGetIsAutoRunning_Parms), &Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetIsAutoRunning", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::LyraPlayerController_eventGetIsAutoRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::LyraPlayerController_eventGetIsAutoRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execGetIsAutoRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAutoRunning();
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function GetIsAutoRunning

// Begin Class ALyraPlayerController Function GetLyraAbilitySystemComponent
struct Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics
{
	struct LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms
	{
		ULyraAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execGetLyraAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function GetLyraAbilitySystemComponent

// Begin Class ALyraPlayerController Function GetLyraHUD
struct Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics
{
	struct LyraPlayerController_eventGetLyraHUD_Parms
	{
		ALyraHUD* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventGetLyraHUD_Parms, ReturnValue), Z_Construct_UClass_ALyraHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetLyraHUD", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::LyraPlayerController_eventGetLyraHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::LyraPlayerController_eventGetLyraHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execGetLyraHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraHUD**)Z_Param__Result=P_THIS->GetLyraHUD();
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function GetLyraHUD

// Begin Class ALyraPlayerController Function GetLyraPlayerState
struct Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics
{
	struct LyraPlayerController_eventGetLyraPlayerState_Parms
	{
		ALyraPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventGetLyraPlayerState_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetLyraPlayerState", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::LyraPlayerController_eventGetLyraPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::LyraPlayerController_eventGetLyraPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execGetLyraPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraPlayerState**)Z_Param__Result=P_THIS->GetLyraPlayerState();
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function GetLyraPlayerState

// Begin Class ALyraPlayerController Function K2_OnEndAutoRun
static FName NAME_ALyraPlayerController_K2_OnEndAutoRun = FName(TEXT("K2_OnEndAutoRun"));
void ALyraPlayerController::K2_OnEndAutoRun()
{
	ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_K2_OnEndAutoRun),NULL);
}
struct Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnEndAutoRun" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "K2_OnEndAutoRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALyraPlayerController Function K2_OnEndAutoRun

// Begin Class ALyraPlayerController Function K2_OnStartAutoRun
static FName NAME_ALyraPlayerController_K2_OnStartAutoRun = FName(TEXT("K2_OnStartAutoRun"));
void ALyraPlayerController::K2_OnStartAutoRun()
{
	ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_K2_OnStartAutoRun),NULL);
}
struct Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnStartAutoRun" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "K2_OnStartAutoRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALyraPlayerController Function K2_OnStartAutoRun

// Begin Class ALyraPlayerController Function OnPlayerStateChangedTeam
struct Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics
{
	struct LyraPlayerController_eventOnPlayerStateChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventOnPlayerStateChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventOnPlayerStateChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventOnPlayerStateChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "OnPlayerStateChangedTeam", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::LyraPlayerController_eventOnPlayerStateChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::LyraPlayerController_eventOnPlayerStateChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execOnPlayerStateChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerStateChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function OnPlayerStateChangedTeam

// Begin Class ALyraPlayerController Function ServerCheat
struct LyraPlayerController_eventServerCheat_Parms
{
	FString Msg;
};
static FName NAME_ALyraPlayerController_ServerCheat = FName(TEXT("ServerCheat"));
void ALyraPlayerController::ServerCheat(const FString& Msg)
{
	LyraPlayerController_eventServerCheat_Parms Parms;
	Parms.Msg=Msg;
	ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_ServerCheat),&Parms);
}
struct Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Run a cheat command on the server.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a cheat command on the server." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventServerCheat_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "ServerCheat", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers), sizeof(LyraPlayerController_eventServerCheat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraPlayerController_eventServerCheat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_ServerCheat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execServerCheat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCheat_Validate(Z_Param_Msg))
	{
		RPC_ValidateFailed(TEXT("ServerCheat_Validate"));
		return;
	}
	P_THIS->ServerCheat_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function ServerCheat

// Begin Class ALyraPlayerController Function ServerCheatAll
struct LyraPlayerController_eventServerCheatAll_Parms
{
	FString Msg;
};
static FName NAME_ALyraPlayerController_ServerCheatAll = FName(TEXT("ServerCheatAll"));
void ALyraPlayerController::ServerCheatAll(const FString& Msg)
{
	LyraPlayerController_eventServerCheatAll_Parms Parms;
	Parms.Msg=Msg;
	ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_ServerCheatAll),&Parms);
}
struct Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Run a cheat command on the server for all players.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a cheat command on the server for all players." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerController_eventServerCheatAll_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "ServerCheatAll", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers), sizeof(LyraPlayerController_eventServerCheatAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraPlayerController_eventServerCheatAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execServerCheatAll)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCheatAll_Validate(Z_Param_Msg))
	{
		RPC_ValidateFailed(TEXT("ServerCheatAll_Validate"));
		return;
	}
	P_THIS->ServerCheatAll_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function ServerCheatAll

// Begin Class ALyraPlayerController Function SetIsAutoRunning
struct Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics
{
	struct LyraPlayerController_eventSetIsAutoRunning_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of ILyraTeamAgentInterface interface\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((LyraPlayerController_eventSetIsAutoRunning_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraPlayerController_eventSetIsAutoRunning_Parms), &Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "SetIsAutoRunning", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::LyraPlayerController_eventSetIsAutoRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::LyraPlayerController_eventSetIsAutoRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execSetIsAutoRunning)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAutoRunning(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function SetIsAutoRunning

// Begin Class ALyraPlayerController Function TryToRecordClientReplay
struct Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics
{
	struct LyraPlayerController_eventTryToRecordClientReplay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call from game state logic to start recording an automatic client replay if ShouldRecordClientReplay returns true\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call from game state logic to start recording an automatic client replay if ShouldRecordClientReplay returns true" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraPlayerController_eventTryToRecordClientReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraPlayerController_eventTryToRecordClientReplay_Parms), &Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "TryToRecordClientReplay", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::LyraPlayerController_eventTryToRecordClientReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::LyraPlayerController_eventTryToRecordClientReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerController::execTryToRecordClientReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToRecordClientReplay();
	P_NATIVE_END;
}
// End Class ALyraPlayerController Function TryToRecordClientReplay

// Begin Class ALyraPlayerController
void ALyraPlayerController::StaticRegisterNativesALyraPlayerController()
{
	UClass* Class = ALyraPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsAutoRunning", &ALyraPlayerController::execGetIsAutoRunning },
		{ "GetLyraAbilitySystemComponent", &ALyraPlayerController::execGetLyraAbilitySystemComponent },
		{ "GetLyraHUD", &ALyraPlayerController::execGetLyraHUD },
		{ "GetLyraPlayerState", &ALyraPlayerController::execGetLyraPlayerState },
		{ "OnPlayerStateChangedTeam", &ALyraPlayerController::execOnPlayerStateChangedTeam },
		{ "ServerCheat", &ALyraPlayerController::execServerCheat },
		{ "ServerCheatAll", &ALyraPlayerController::execServerCheatAll },
		{ "SetIsAutoRunning", &ALyraPlayerController::execSetIsAutoRunning },
		{ "TryToRecordClientReplay", &ALyraPlayerController::execTryToRecordClientReplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerController);
UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister()
{
	return ALyraPlayerController::StaticClass();
}
struct Z_Construct_UClass_ALyraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraPlayerController\n *\n *\x09The base player controller class used by this project.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraPlayerController.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base player controller class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraPlayerController\n\n    The base player controller class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSeenPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning, "GetIsAutoRunning" }, // 10190977
		{ &Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 3394155914
		{ &Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD, "GetLyraHUD" }, // 3482722933
		{ &Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState, "GetLyraPlayerState" }, // 1768294287
		{ &Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun, "K2_OnEndAutoRun" }, // 2856380040
		{ &Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun, "K2_OnStartAutoRun" }, // 2009592095
		{ &Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam, "OnPlayerStateChangedTeam" }, // 1100513108
		{ &Z_Construct_UFunction_ALyraPlayerController_ServerCheat, "ServerCheat" }, // 3532662300
		{ &Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll, "ServerCheatAll" }, // 3042442008
		{ &Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning, "SetIsAutoRunning" }, // 1749401899
		{ &Z_Construct_UFunction_ALyraPlayerController_TryToRecordClientReplay, "TryToRecordClientReplay" }, // 515405888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerController, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChangedDelegate_MetaData), NewProp_OnTeamChangedDelegate_MetaData) }; // 1518443978
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenPlayerState_MetaData), NewProp_LastSeenPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACommonPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerController, ILyraCameraAssistInterface), false },  // 1786343506
	{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerController, ILyraTeamAgentInterface), false },  // 361203859
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerController_Statics::ClassParams = {
	&ALyraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraPlayerController()
{
	if (!Z_Registration_Info_UClass_ALyraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerController.OuterSingleton, Z_Construct_UClass_ALyraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraPlayerController.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerController>()
{
	return ALyraPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerController);
ALyraPlayerController::~ALyraPlayerController() {}
// End Class ALyraPlayerController

// Begin Class ALyraReplayPlayerController Function OnPlayerStatePawnSet
struct Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics
{
	struct LyraReplayPlayerController_eventOnPlayerStatePawnSet_Parms
	{
		APlayerState* ChangedPlayerState;
		APawn* NewPlayerPawn;
		APawn* OldPlayerPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Callback for when the followed player state changes pawn\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback for when the followed player state changes pawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPlayerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::NewProp_ChangedPlayerState = { "ChangedPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayPlayerController_eventOnPlayerStatePawnSet_Parms, ChangedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::NewProp_NewPlayerPawn = { "NewPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayPlayerController_eventOnPlayerStatePawnSet_Parms, NewPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::NewProp_OldPlayerPawn = { "OldPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayPlayerController_eventOnPlayerStatePawnSet_Parms, OldPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::NewProp_ChangedPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::NewProp_NewPlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::NewProp_OldPlayerPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraReplayPlayerController, nullptr, "OnPlayerStatePawnSet", nullptr, nullptr, Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::LyraReplayPlayerController_eventOnPlayerStatePawnSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::LyraReplayPlayerController_eventOnPlayerStatePawnSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraReplayPlayerController::execOnPlayerStatePawnSet)
{
	P_GET_OBJECT(APlayerState,Z_Param_ChangedPlayerState);
	P_GET_OBJECT(APawn,Z_Param_NewPlayerPawn);
	P_GET_OBJECT(APawn,Z_Param_OldPlayerPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerStatePawnSet(Z_Param_ChangedPlayerState,Z_Param_NewPlayerPawn,Z_Param_OldPlayerPawn);
	P_NATIVE_END;
}
// End Class ALyraReplayPlayerController Function OnPlayerStatePawnSet

// Begin Class ALyraReplayPlayerController
void ALyraReplayPlayerController::StaticRegisterNativesALyraReplayPlayerController()
{
	UClass* Class = ALyraReplayPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerStatePawnSet", &ALyraReplayPlayerController::execOnPlayerStatePawnSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraReplayPlayerController);
UClass* Z_Construct_UClass_ALyraReplayPlayerController_NoRegister()
{
	return ALyraReplayPlayerController::StaticClass();
}
struct Z_Construct_UClass_ALyraReplayPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A player controller used for replay capture and playback\n" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraPlayerController.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A player controller used for replay capture and playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowedPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player state we are currently following */\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player state we are currently following */" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowedPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraReplayPlayerController_OnPlayerStatePawnSet, "OnPlayerStatePawnSet" }, // 2894763820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraReplayPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraReplayPlayerController_Statics::NewProp_FollowedPlayerState = { "FollowedPlayerState", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraReplayPlayerController, FollowedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowedPlayerState_MetaData), NewProp_FollowedPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraReplayPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraReplayPlayerController_Statics::NewProp_FollowedPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraReplayPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraReplayPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALyraPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraReplayPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraReplayPlayerController_Statics::ClassParams = {
	&ALyraReplayPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraReplayPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraReplayPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraReplayPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraReplayPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraReplayPlayerController()
{
	if (!Z_Registration_Info_UClass_ALyraReplayPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraReplayPlayerController.OuterSingleton, Z_Construct_UClass_ALyraReplayPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraReplayPlayerController.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraReplayPlayerController>()
{
	return ALyraReplayPlayerController::StaticClass();
}
ALyraReplayPlayerController::ALyraReplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraReplayPlayerController);
ALyraReplayPlayerController::~ALyraReplayPlayerController() {}
// End Class ALyraReplayPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerController, ALyraPlayerController::StaticClass, TEXT("ALyraPlayerController"), &Z_Registration_Info_UClass_ALyraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerController), 3317722250U) },
		{ Z_Construct_UClass_ALyraReplayPlayerController, ALyraReplayPlayerController::StaticClass, TEXT("ALyraReplayPlayerController"), &Z_Registration_Info_UClass_ALyraReplayPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraReplayPlayerController), 3856735950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_1874305215(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
