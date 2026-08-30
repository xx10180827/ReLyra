// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraGameState.h"
#include "LyraGame/Messages/LyraVerbMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameState();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameState_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceManagerComponent_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraGameState Function GetLyraAbilitySystemComponent
struct Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics
{
	struct LyraGameState_eventGetLyraAbilitySystemComponent_Parms
	{
		ULyraAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the ability system component used for game wide things\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ability system component used for game wide things" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameState_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::LyraGameState_eventGetLyraAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::LyraGameState_eventGetLyraAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameState::execGetLyraAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ALyraGameState Function GetLyraAbilitySystemComponent

// Begin Class ALyraGameState Function MulticastMessageToClients
struct LyraGameState_eventMulticastMessageToClients_Parms
{
	FLyraVerbMessage Message;
};
static FName NAME_ALyraGameState_MulticastMessageToClients = FName(TEXT("MulticastMessageToClients"));
void ALyraGameState::MulticastMessageToClients(const FLyraVerbMessage Message)
{
	LyraGameState_eventMulticastMessageToClients_Parms Parms;
	Parms.Message=Message;
	ProcessEvent(FindFunctionChecked(NAME_ALyraGameState_MulticastMessageToClients),&Parms);
}
struct Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send a message that all clients will (probably) get\n// (use only for client notifications like eliminations, server join messages, etc... that can handle being lost)\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message that all clients will (probably) get\n(use only for client notifications like eliminations, server join messages, etc... that can handle being lost)" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameState_eventMulticastMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 172997159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "MulticastMessageToClients", nullptr, nullptr, Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers), sizeof(LyraGameState_eventMulticastMessageToClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraGameState_eventMulticastMessageToClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameState::execMulticastMessageToClients)
{
	P_GET_STRUCT(FLyraVerbMessage,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastMessageToClients_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ALyraGameState Function MulticastMessageToClients

// Begin Class ALyraGameState Function MulticastReliableMessageToClients
struct LyraGameState_eventMulticastReliableMessageToClients_Parms
{
	FLyraVerbMessage Message;
};
static FName NAME_ALyraGameState_MulticastReliableMessageToClients = FName(TEXT("MulticastReliableMessageToClients"));
void ALyraGameState::MulticastReliableMessageToClients(const FLyraVerbMessage Message)
{
	LyraGameState_eventMulticastReliableMessageToClients_Parms Parms;
	Parms.Message=Message;
	ProcessEvent(FindFunctionChecked(NAME_ALyraGameState_MulticastReliableMessageToClients),&Parms);
}
struct Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send a message that all clients will be guaranteed to get\n// (use only for client notifications that cannot handle being lost)\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message that all clients will be guaranteed to get\n(use only for client notifications that cannot handle being lost)" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameState_eventMulticastReliableMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 172997159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "MulticastReliableMessageToClients", nullptr, nullptr, Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers), sizeof(LyraGameState_eventMulticastReliableMessageToClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraGameState_eventMulticastReliableMessageToClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameState::execMulticastReliableMessageToClients)
{
	P_GET_STRUCT(FLyraVerbMessage,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReliableMessageToClients_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ALyraGameState Function MulticastReliableMessageToClients

// Begin Class ALyraGameState Function OnRep_RecorderPlayerState
struct Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "OnRep_RecorderPlayerState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameState::execOnRep_RecorderPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RecorderPlayerState();
	P_NATIVE_END;
}
// End Class ALyraGameState Function OnRep_RecorderPlayerState

// Begin Class ALyraGameState
void ALyraGameState::StaticRegisterNativesALyraGameState()
{
	UClass* Class = ALyraGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLyraAbilitySystemComponent", &ALyraGameState::execGetLyraAbilitySystemComponent },
		{ "MulticastMessageToClients", &ALyraGameState::execMulticastMessageToClients },
		{ "MulticastReliableMessageToClients", &ALyraGameState::execMulticastReliableMessageToClients },
		{ "OnRep_RecorderPlayerState", &ALyraGameState::execOnRep_RecorderPlayerState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraGameState);
UClass* Z_Construct_UClass_ALyraGameState_NoRegister()
{
	return ALyraGameState::StaticClass();
}
struct Z_Construct_UClass_ALyraGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraGameState\n *\n *\x09The base game state class used by this project.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/LyraGameState.h" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraGameState\n\n    The base game state class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles loading and managing the current gameplay experience\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles loading and managing the current gameplay experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Lyra|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFPS_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecorderPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player state that recorded a replay, it is used to select the right pawn to follow\n// This is only set in replay streams and is not replicated normally\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player state that recorded a replay, it is used to select the right pawn to follow\nThis is only set in replay streams and is not replicated normally" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceManagerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFPS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecorderPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 3064388432
		{ &Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients, "MulticastMessageToClients" }, // 4065021098
		{ &Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients, "MulticastReliableMessageToClients" }, // 120084616
		{ &Z_Construct_UFunction_ALyraGameState_OnRep_RecorderPlayerState, "OnRep_RecorderPlayerState" }, // 1609352783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraGameState, ExperienceManagerComponent), Z_Construct_UClass_ULyraExperienceManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceManagerComponent_MetaData), NewProp_ExperienceManagerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraGameState, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS = { "ServerFPS", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraGameState, ServerFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFPS_MetaData), NewProp_ServerFPS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_RecorderPlayerState = { "RecorderPlayerState", "OnRep_RecorderPlayerState", (EPropertyFlags)0x0124080100002020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraGameState, RecorderPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecorderPlayerState_MetaData), NewProp_RecorderPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_RecorderPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraGameState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraGameState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraGameState_Statics::ClassParams = {
	&ALyraGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraGameState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraGameState()
{
	if (!Z_Registration_Info_UClass_ALyraGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraGameState.OuterSingleton, Z_Construct_UClass_ALyraGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraGameState.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraGameState>()
{
	return ALyraGameState::StaticClass();
}
void ALyraGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ServerFPS(TEXT("ServerFPS"));
	static const FName Name_RecorderPlayerState(TEXT("RecorderPlayerState"));
	const bool bIsValid = true
		&& Name_ServerFPS == ClassReps[(int32)ENetFields_Private::ServerFPS].Property->GetFName()
		&& Name_RecorderPlayerState == ClassReps[(int32)ENetFields_Private::RecorderPlayerState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraGameState);
ALyraGameState::~ALyraGameState() {}
// End Class ALyraGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraGameState, ALyraGameState::StaticClass, TEXT("ALyraGameState"), &Z_Registration_Info_UClass_ALyraGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraGameState), 4283905870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_2975943179(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
