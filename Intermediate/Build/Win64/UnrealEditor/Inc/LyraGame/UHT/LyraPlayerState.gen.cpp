// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraPlayerState.h"
#include "LyraGame/Messages/LyraVerbMessage.h"
#include "LyraGame/System/GameplayTagStack.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerState() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCombatSet_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthSet_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ELyraPlayerConnectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraPlayerConnectionType;
static UEnum* ELyraPlayerConnectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraPlayerConnectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraPlayerConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraPlayerConnectionType"));
	}
	return Z_Registration_Info_UEnum_ELyraPlayerConnectionType.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraPlayerConnectionType>()
{
	return ELyraPlayerConnectionType_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the types of client connected */" },
#endif
		{ "InactivePlayer.Comment", "// A deactivated player (disconnected)\n" },
		{ "InactivePlayer.Name", "ELyraPlayerConnectionType::InactivePlayer" },
		{ "InactivePlayer.ToolTip", "A deactivated player (disconnected)" },
		{ "LiveSpectator.Comment", "// Spectator connected to a running game\n" },
		{ "LiveSpectator.Name", "ELyraPlayerConnectionType::LiveSpectator" },
		{ "LiveSpectator.ToolTip", "Spectator connected to a running game" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "Player.Comment", "// An active player\n" },
		{ "Player.Name", "ELyraPlayerConnectionType::Player" },
		{ "Player.ToolTip", "An active player" },
		{ "ReplaySpectator.Comment", "// Spectating a demo recording offline\n" },
		{ "ReplaySpectator.Name", "ELyraPlayerConnectionType::ReplaySpectator" },
		{ "ReplaySpectator.ToolTip", "Spectating a demo recording offline" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the types of client connected" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraPlayerConnectionType::Player", (int64)ELyraPlayerConnectionType::Player },
		{ "ELyraPlayerConnectionType::LiveSpectator", (int64)ELyraPlayerConnectionType::LiveSpectator },
		{ "ELyraPlayerConnectionType::ReplaySpectator", (int64)ELyraPlayerConnectionType::ReplaySpectator },
		{ "ELyraPlayerConnectionType::InactivePlayer", (int64)ELyraPlayerConnectionType::InactivePlayer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraPlayerConnectionType",
	"ELyraPlayerConnectionType",
	Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType()
{
	if (!Z_Registration_Info_UEnum_ELyraPlayerConnectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraPlayerConnectionType.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraPlayerConnectionType.InnerSingleton;
}
// End Enum ELyraPlayerConnectionType

// Begin Class ALyraPlayerState Function AddStatTagStack
struct Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics
{
	struct LyraPlayerState_eventAddStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "AddStatTagStack", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::LyraPlayerState_eventAddStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::LyraPlayerState_eventAddStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execAddStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function AddStatTagStack

// Begin Class ALyraPlayerState Function ClientBroadcastMessage
struct LyraPlayerState_eventClientBroadcastMessage_Parms
{
	FLyraVerbMessage Message;
};
static FName NAME_ALyraPlayerState_ClientBroadcastMessage = FName(TEXT("ClientBroadcastMessage"));
void ALyraPlayerState::ClientBroadcastMessage(const FLyraVerbMessage Message)
{
	LyraPlayerState_eventClientBroadcastMessage_Parms Parms;
	Parms.Message=Message;
	ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerState_ClientBroadcastMessage),&Parms);
}
struct Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send a message to just this player\n// (use only for client notifications like accolades, quest toasts, etc... that can handle being occasionally lost)\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message to just this player\n(use only for client notifications like accolades, quest toasts, etc... that can handle being occasionally lost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventClientBroadcastMessage_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 172997159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "ClientBroadcastMessage", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::PropPointers), sizeof(LyraPlayerState_eventClientBroadcastMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraPlayerState_eventClientBroadcastMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execClientBroadcastMessage)
{
	P_GET_STRUCT(FLyraVerbMessage,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientBroadcastMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function ClientBroadcastMessage

// Begin Class ALyraPlayerState Function GetLyraAbilitySystemComponent
struct Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics
{
	struct LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms
	{
		ULyraAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::LyraPlayerState_eventGetLyraAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execGetLyraAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function GetLyraAbilitySystemComponent

// Begin Class ALyraPlayerState Function GetLyraPlayerController
struct Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics
{
	struct LyraPlayerState_eventGetLyraPlayerController_Parms
	{
		ALyraPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventGetLyraPlayerController_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetLyraPlayerController", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::LyraPlayerState_eventGetLyraPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::LyraPlayerState_eventGetLyraPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execGetLyraPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraPlayerController**)Z_Param__Result=P_THIS->GetLyraPlayerController();
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function GetLyraPlayerController

// Begin Class ALyraPlayerState Function GetSquadId
struct Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics
{
	struct LyraPlayerState_eventGetSquadId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the Squad ID of the squad the player belongs to. */" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Squad ID of the squad the player belongs to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventGetSquadId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetSquadId", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::LyraPlayerState_eventGetSquadId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::LyraPlayerState_eventGetSquadId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_GetSquadId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetSquadId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execGetSquadId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSquadId();
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function GetSquadId

// Begin Class ALyraPlayerState Function GetStatTagStackCount
struct Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics
{
	struct LyraPlayerState_eventGetStatTagStackCount_Parms
	{
		FGameplayTag Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present)\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetStatTagStackCount", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::LyraPlayerState_eventGetStatTagStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::LyraPlayerState_eventGetStatTagStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execGetStatTagStackCount)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function GetStatTagStackCount

// Begin Class ALyraPlayerState Function GetTeamId
struct Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics
{
	struct LyraPlayerState_eventGetTeamId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the Team ID of the team the player belongs to. */" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Team ID of the team the player belongs to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventGetTeamId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "GetTeamId", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::LyraPlayerState_eventGetTeamId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::LyraPlayerState_eventGetTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_GetTeamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_GetTeamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execGetTeamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTeamId();
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function GetTeamId

// Begin Class ALyraPlayerState Function HasStatTag
struct Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics
{
	struct LyraPlayerState_eventHasStatTag_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if there is at least one stack of the specified tag\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventHasStatTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraPlayerState_eventHasStatTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraPlayerState_eventHasStatTag_Parms), &Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "HasStatTag", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::LyraPlayerState_eventHasStatTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::LyraPlayerState_eventHasStatTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_HasStatTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_HasStatTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execHasStatTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasStatTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function HasStatTag

// Begin Class ALyraPlayerState Function OnRep_MySquadID
struct Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "OnRep_MySquadID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execOnRep_MySquadID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MySquadID();
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function OnRep_MySquadID

// Begin Class ALyraPlayerState Function OnRep_MyTeamID
struct Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics
{
	struct LyraPlayerState_eventOnRep_MyTeamID_Parms
	{
		FGenericTeamId OldTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::NewProp_OldTeamID = { "OldTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventOnRep_MyTeamID_Parms, OldTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(0, nullptr) }; // 3379033268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::NewProp_OldTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "OnRep_MyTeamID", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::LyraPlayerState_eventOnRep_MyTeamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::LyraPlayerState_eventOnRep_MyTeamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execOnRep_MyTeamID)
{
	P_GET_STRUCT(FGenericTeamId,Z_Param_OldTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MyTeamID(Z_Param_OldTeamID);
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function OnRep_MyTeamID

// Begin Class ALyraPlayerState Function OnRep_PawnData
struct Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "OnRep_PawnData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execOnRep_PawnData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PawnData();
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function OnRep_PawnData

// Begin Class ALyraPlayerState Function RemoveStatTagStack
struct Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics
{
	struct LyraPlayerState_eventRemoveStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerState_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerState, nullptr, "RemoveStatTagStack", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::LyraPlayerState_eventRemoveStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::LyraPlayerState_eventRemoveStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerState::execRemoveStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ALyraPlayerState Function RemoveStatTagStack

// Begin Class ALyraPlayerState
void ALyraPlayerState::StaticRegisterNativesALyraPlayerState()
{
	UClass* Class = ALyraPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddStatTagStack", &ALyraPlayerState::execAddStatTagStack },
		{ "ClientBroadcastMessage", &ALyraPlayerState::execClientBroadcastMessage },
		{ "GetLyraAbilitySystemComponent", &ALyraPlayerState::execGetLyraAbilitySystemComponent },
		{ "GetLyraPlayerController", &ALyraPlayerState::execGetLyraPlayerController },
		{ "GetSquadId", &ALyraPlayerState::execGetSquadId },
		{ "GetStatTagStackCount", &ALyraPlayerState::execGetStatTagStackCount },
		{ "GetTeamId", &ALyraPlayerState::execGetTeamId },
		{ "HasStatTag", &ALyraPlayerState::execHasStatTag },
		{ "OnRep_MySquadID", &ALyraPlayerState::execOnRep_MySquadID },
		{ "OnRep_MyTeamID", &ALyraPlayerState::execOnRep_MyTeamID },
		{ "OnRep_PawnData", &ALyraPlayerState::execOnRep_PawnData },
		{ "RemoveStatTagStack", &ALyraPlayerState::execRemoveStatTagStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerState);
UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister()
{
	return ALyraPlayerState::StaticClass();
}
struct Z_Construct_UClass_ALyraPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraPlayerState\n *\n *\x09""Base player state class used by this project.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/LyraPlayerState.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraPlayerState\n\n    Base player state class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Lyra|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component sub-object used by player characters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health attribute set used by this actor.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health attribute set used by this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat attribute set used by this actor.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat attribute set used by this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayerConnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTeamID_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MySquadID_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedViewRotation_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyPlayerConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MyPlayerConnectionType;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyTeamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MySquadID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedViewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPlayerState_AddStatTagStack, "AddStatTagStack" }, // 2640783317
		{ &Z_Construct_UFunction_ALyraPlayerState_ClientBroadcastMessage, "ClientBroadcastMessage" }, // 279005051
		{ &Z_Construct_UFunction_ALyraPlayerState_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 1921172123
		{ &Z_Construct_UFunction_ALyraPlayerState_GetLyraPlayerController, "GetLyraPlayerController" }, // 2986415204
		{ &Z_Construct_UFunction_ALyraPlayerState_GetSquadId, "GetSquadId" }, // 3939414160
		{ &Z_Construct_UFunction_ALyraPlayerState_GetStatTagStackCount, "GetStatTagStackCount" }, // 966768117
		{ &Z_Construct_UFunction_ALyraPlayerState_GetTeamId, "GetTeamId" }, // 3923204237
		{ &Z_Construct_UFunction_ALyraPlayerState_HasStatTag, "HasStatTag" }, // 1855966748
		{ &Z_Construct_UFunction_ALyraPlayerState_OnRep_MySquadID, "OnRep_MySquadID" }, // 2685631945
		{ &Z_Construct_UFunction_ALyraPlayerState_OnRep_MyTeamID, "OnRep_MyTeamID" }, // 1268254998
		{ &Z_Construct_UFunction_ALyraPlayerState_OnRep_PawnData, "OnRep_PawnData" }, // 724973030
		{ &Z_Construct_UFunction_ALyraPlayerState_RemoveStatTagStack, "RemoveStatTagStack" }, // 1559879148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0124080100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, PawnData), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_HealthSet = { "HealthSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, HealthSet), Z_Construct_UClass_ULyraHealthSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSet_MetaData), NewProp_HealthSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_CombatSet = { "CombatSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, CombatSet), Z_Construct_UClass_ULyraCombatSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatSet_MetaData), NewProp_CombatSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType = { "MyPlayerConnectionType", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, MyPlayerConnectionType), Z_Construct_UEnum_LyraGame_ELyraPlayerConnectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPlayerConnectionType_MetaData), NewProp_MyPlayerConnectionType_MetaData) }; // 1972617869
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChangedDelegate_MetaData), NewProp_OnTeamChangedDelegate_MetaData) }; // 1518443978
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID = { "MyTeamID", "OnRep_MyTeamID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, MyTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTeamID_MetaData), NewProp_MyTeamID_MetaData) }; // 3379033268
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID = { "MySquadID", "OnRep_MySquadID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, MySquadID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MySquadID_MetaData), NewProp_MySquadID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTags_MetaData), NewProp_StatTags_MetaData) }; // 3610867483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_ReplicatedViewRotation = { "ReplicatedViewRotation", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerState, ReplicatedViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedViewRotation_MetaData), NewProp_ReplicatedViewRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_HealthSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_CombatSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyPlayerConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_OnTeamChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MyTeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_MySquadID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_StatTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerState_Statics::NewProp_ReplicatedViewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerState, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerState, ILyraTeamAgentInterface), false },  // 361203859
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerState_Statics::ClassParams = {
	&ALyraPlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraPlayerState()
{
	if (!Z_Registration_Info_UClass_ALyraPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerState.OuterSingleton, Z_Construct_UClass_ALyraPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraPlayerState.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerState>()
{
	return ALyraPlayerState::StaticClass();
}
void ALyraPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PawnData(TEXT("PawnData"));
	static const FName Name_MyPlayerConnectionType(TEXT("MyPlayerConnectionType"));
	static const FName Name_MyTeamID(TEXT("MyTeamID"));
	static const FName Name_MySquadID(TEXT("MySquadID"));
	static const FName Name_StatTags(TEXT("StatTags"));
	static const FName Name_ReplicatedViewRotation(TEXT("ReplicatedViewRotation"));
	const bool bIsValid = true
		&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName()
		&& Name_MyPlayerConnectionType == ClassReps[(int32)ENetFields_Private::MyPlayerConnectionType].Property->GetFName()
		&& Name_MyTeamID == ClassReps[(int32)ENetFields_Private::MyTeamID].Property->GetFName()
		&& Name_MySquadID == ClassReps[(int32)ENetFields_Private::MySquadID].Property->GetFName()
		&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName()
		&& Name_ReplicatedViewRotation == ClassReps[(int32)ENetFields_Private::ReplicatedViewRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerState);
ALyraPlayerState::~ALyraPlayerState() {}
// End Class ALyraPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELyraPlayerConnectionType_StaticEnum, TEXT("ELyraPlayerConnectionType"), &Z_Registration_Info_UEnum_ELyraPlayerConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1972617869U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerState, ALyraPlayerState::StaticClass, TEXT("ALyraPlayerState"), &Z_Registration_Info_UClass_ALyraPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerState), 936895598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_960553148(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
