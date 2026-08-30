// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraLocalPlayer.h"
#include "Runtime/AudioMixer/Public/AudioMixerBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLocalPlayer() {}

// Begin Cross Module References
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraLocalPlayer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraLocalPlayer_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsLocal_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsShared_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraLocalPlayer Function GetLocalSettings
struct Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics
{
	struct LyraLocalPlayer_eventGetLocalSettings_Parms
	{
		ULyraSettingsLocal* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the local settings for this player, this is read from config files at process startup and is always valid */" },
#endif
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the local settings for this player, this is read from config files at process startup and is always valid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLocalPlayer_eventGetLocalSettings_Parms, ReturnValue), Z_Construct_UClass_ULyraSettingsLocal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "GetLocalSettings", nullptr, nullptr, Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::LyraLocalPlayer_eventGetLocalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::LyraLocalPlayer_eventGetLocalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLocalPlayer::execGetLocalSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraSettingsLocal**)Z_Param__Result=P_THIS->GetLocalSettings();
	P_NATIVE_END;
}
// End Class ULyraLocalPlayer Function GetLocalSettings

// Begin Class ULyraLocalPlayer Function GetSharedSettings
struct Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics
{
	struct LyraLocalPlayer_eventGetSharedSettings_Parms
	{
		ULyraSettingsShared* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the shared setting for this player, this is read using the save game system so may not be correct until after user login */" },
#endif
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the shared setting for this player, this is read using the save game system so may not be correct until after user login" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLocalPlayer_eventGetSharedSettings_Parms, ReturnValue), Z_Construct_UClass_ULyraSettingsShared_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "GetSharedSettings", nullptr, nullptr, Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::LyraLocalPlayer_eventGetSharedSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::LyraLocalPlayer_eventGetSharedSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLocalPlayer::execGetSharedSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraSettingsShared**)Z_Param__Result=P_THIS->GetSharedSettings();
	P_NATIVE_END;
}
// End Class ULyraLocalPlayer Function GetSharedSettings

// Begin Class ULyraLocalPlayer Function OnCompletedAudioDeviceSwap
struct Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics
{
	struct LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms
	{
		FSwapAudioOutputResult SwapResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult = { "SwapResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms, SwapResult), Z_Construct_UScriptStruct_FSwapAudioOutputResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapResult_MetaData), NewProp_SwapResult_MetaData) }; // 556524030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "OnCompletedAudioDeviceSwap", nullptr, nullptr, Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLocalPlayer::execOnCompletedAudioDeviceSwap)
{
	P_GET_STRUCT_REF(FSwapAudioOutputResult,Z_Param_Out_SwapResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompletedAudioDeviceSwap(Z_Param_Out_SwapResult);
	P_NATIVE_END;
}
// End Class ULyraLocalPlayer Function OnCompletedAudioDeviceSwap

// Begin Class ULyraLocalPlayer Function OnControllerChangedTeam
struct Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics
{
	struct LyraLocalPlayer_eventOnControllerChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLocalPlayer_eventOnControllerChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLocalPlayer_eventOnControllerChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLocalPlayer_eventOnControllerChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "OnControllerChangedTeam", nullptr, nullptr, Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::LyraLocalPlayer_eventOnControllerChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::LyraLocalPlayer_eventOnControllerChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLocalPlayer::execOnControllerChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class ULyraLocalPlayer Function OnControllerChangedTeam

// Begin Class ULyraLocalPlayer
void ULyraLocalPlayer::StaticRegisterNativesULyraLocalPlayer()
{
	UClass* Class = ULyraLocalPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalSettings", &ULyraLocalPlayer::execGetLocalSettings },
		{ "GetSharedSettings", &ULyraLocalPlayer::execGetSharedSettings },
		{ "OnCompletedAudioDeviceSwap", &ULyraLocalPlayer::execOnCompletedAudioDeviceSwap },
		{ "OnControllerChangedTeam", &ULyraLocalPlayer::execOnControllerChangedTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLocalPlayer);
UClass* Z_Construct_UClass_ULyraLocalPlayer_NoRegister()
{
	return ULyraLocalPlayer::StaticClass();
}
struct Z_Construct_UClass_ULyraLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraLocalPlayer\n */" },
#endif
		{ "IncludePath", "Player/LyraLocalPlayer.h" },
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraLocalPlayer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSettings_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastBoundPC_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastBoundPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings, "GetLocalSettings" }, // 4080809430
		{ &Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings, "GetSharedSettings" }, // 1141656685
		{ &Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap, "OnCompletedAudioDeviceSwap" }, // 3600377280
		{ &Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam, "OnControllerChangedTeam" }, // 204567769
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings = { "SharedSettings", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLocalPlayer, SharedSettings), Z_Construct_UClass_ULyraSettingsShared_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSettings_MetaData), NewProp_SharedSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLocalPlayer, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLocalPlayer, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChangedDelegate_MetaData), NewProp_OnTeamChangedDelegate_MetaData) }; // 1518443978
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC = { "LastBoundPC", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLocalPlayer, LastBoundPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastBoundPC_MetaData), NewProp_LastBoundPC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraLocalPlayer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraLocalPlayer, ILyraTeamAgentInterface), false },  // 361203859
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLocalPlayer_Statics::ClassParams = {
	&ULyraLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLocalPlayer()
{
	if (!Z_Registration_Info_UClass_ULyraLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLocalPlayer.OuterSingleton, Z_Construct_UClass_ULyraLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLocalPlayer.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraLocalPlayer>()
{
	return ULyraLocalPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLocalPlayer);
ULyraLocalPlayer::~ULyraLocalPlayer() {}
// End Class ULyraLocalPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLocalPlayer, ULyraLocalPlayer::StaticClass, TEXT("ULyraLocalPlayer"), &Z_Registration_Info_UClass_ULyraLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLocalPlayer), 2833856415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_2774431117(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
