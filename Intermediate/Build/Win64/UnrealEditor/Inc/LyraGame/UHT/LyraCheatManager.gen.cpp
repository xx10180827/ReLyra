// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraCheatManager.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCheatManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCheatManager();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCheatManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraCheatManager Function AddTagToSelf
struct Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics
{
	struct LyraCheatManager_eventAddTagToSelf_Parms
	{
		FString TagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds the dynamic tag to the owning player's ability system component.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds the dynamic tag to the owning player's ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventAddTagToSelf_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "AddTagToSelf", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::LyraCheatManager_eventAddTagToSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::LyraCheatManager_eventAddTagToSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execAddTagToSelf)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTagToSelf(Z_Param_TagName);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function AddTagToSelf

// Begin Class ULyraCheatManager Function CancelActivatedAbilities
struct Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forces input activated abilities to be canceled.  Useful for tracking down ability interruption bugs. \n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces input activated abilities to be canceled.  Useful for tracking down ability interruption bugs." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CancelActivatedAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execCancelActivatedAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelActivatedAbilities();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function CancelActivatedAbilities

// Begin Class ULyraCheatManager Function Cheat
struct Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics
{
	struct LyraCheatManager_eventCheat_Parms
	{
		FString Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runs a cheat on the server for the owning player.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs a cheat on the server for the owning player." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventCheat_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "Cheat", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::LyraCheatManager_eventCheat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::LyraCheatManager_eventCheat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_Cheat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_Cheat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execCheat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cheat(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function Cheat

// Begin Class ULyraCheatManager Function CheatAll
struct Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics
{
	struct LyraCheatManager_eventCheatAll_Parms
	{
		FString Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runs a cheat on the server for the all players.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs a cheat on the server for the all players." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventCheatAll_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CheatAll", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::LyraCheatManager_eventCheatAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::LyraCheatManager_eventCheatAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_CheatAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CheatAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execCheatAll)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheatAll(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function CheatAll

// Begin Class ULyraCheatManager Function CycleAbilitySystemDebug
struct Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CycleAbilitySystemDebug", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execCycleAbilitySystemDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleAbilitySystemDebug();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function CycleAbilitySystemDebug

// Begin Class ULyraCheatManager Function CycleDebugCameras
struct Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "CycleDebugCameras", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execCycleDebugCameras)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleDebugCameras();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function CycleDebugCameras

// Begin Class ULyraCheatManager Function DamageSelf
struct Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics
{
	struct LyraCheatManager_eventDamageSelf_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies the specified damage amount to the owning player.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the specified damage amount to the owning player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventDamageSelf_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "DamageSelf", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::LyraCheatManager_eventDamageSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::LyraCheatManager_eventDamageSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_DamageSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_DamageSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execDamageSelf)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageSelf(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function DamageSelf

// Begin Class ULyraCheatManager Function DamageSelfDestruct
struct Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies enough damage to kill the owning player.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies enough damage to kill the owning player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "DamageSelfDestruct", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execDamageSelfDestruct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageSelfDestruct();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function DamageSelfDestruct

// Begin Class ULyraCheatManager Function HealSelf
struct Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics
{
	struct LyraCheatManager_eventHealSelf_Parms
	{
		float HealAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies the specified amount of healing to the owning player.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the specified amount of healing to the owning player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventHealSelf_Parms, HealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::NewProp_HealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "HealSelf", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::LyraCheatManager_eventHealSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::LyraCheatManager_eventHealSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_HealSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_HealSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execHealSelf)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealSelf(Z_Param_HealAmount);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function HealSelf

// Begin Class ULyraCheatManager Function HealTarget
struct Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics
{
	struct LyraCheatManager_eventHealTarget_Parms
	{
		float HealAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies the specified amount of healing to the actor that the player is looking at.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the specified amount of healing to the actor that the player is looking at." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventHealTarget_Parms, HealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::NewProp_HealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "HealTarget", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::LyraCheatManager_eventHealTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::LyraCheatManager_eventHealTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_HealTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_HealTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execHealTarget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealTarget(Z_Param_HealAmount);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function HealTarget

// Begin Class ULyraCheatManager Function OnRecoilTestFireTick
struct Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once per FireInterval during the firing phase: invokes ApplyRecoil on the weapon and\n// then schedules the next fire until ShotsFired reaches ShotsRequested.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once per FireInterval during the firing phase: invokes ApplyRecoil on the weapon and\nthen schedules the next fire until ShotsFired reaches ShotsRequested." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "OnRecoilTestFireTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execOnRecoilTestFireTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecoilTestFireTick();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function OnRecoilTestFireTick

// Begin Class ULyraCheatManager Function OnRecoilTestSampleTick
struct Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once per SampleInterval throughout the entire test: samples the current ControlRotation\n// against InitialRotation, updates the observed maxima, and (in the recovery phase) checks completion.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once per SampleInterval throughout the entire test: samples the current ControlRotation\nagainst InitialRotation, updates the observed maxima, and (in the recovery phase) checks completion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "OnRecoilTestSampleTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execOnRecoilTestSampleTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecoilTestSampleTick();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function OnRecoilTestSampleTick

// Begin Class ULyraCheatManager Function PlayNextGame
struct Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Starts the next match\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the next match" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "PlayNextGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_PlayNextGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_PlayNextGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execPlayNextGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayNextGame();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function PlayNextGame

// Begin Class ULyraCheatManager Function RemoveTagFromSelf
struct Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics
{
	struct LyraCheatManager_eventRemoveTagFromSelf_Parms
	{
		FString TagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes the dynamic tag from the owning player's ability system component.\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the dynamic tag from the owning player's ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventRemoveTagFromSelf_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "RemoveTagFromSelf", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::LyraCheatManager_eventRemoveTagFromSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::LyraCheatManager_eventRemoveTagFromSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execRemoveTagFromSelf)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTagFromSelf(Z_Param_TagName);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function RemoveTagFromSelf

// Begin Class ULyraCheatManager Function TestRecoil
struct Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics
{
	struct LyraCheatManager_eventTestRecoil_Parms
	{
		int32 NumShots;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simulates a rapid-fire burst of the currently-equipped ranged weapon and samples ControlRotation\n// every frame to validate the recoil system (ApplyRecoil -> AddPitchInput/AddYawInput and Tick recovery).\n// Usage in PIE console:  TestRecoil [NumShots=10]\n" },
#endif
		{ "CPP_Default_NumShots", "10" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulates a rapid-fire burst of the currently-equipped ranged weapon and samples ControlRotation\nevery frame to validate the recoil system (ApplyRecoil -> AddPitchInput/AddYawInput and Tick recovery).\nUsage in PIE console:  TestRecoil [NumShots=10]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumShots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::NewProp_NumShots = { "NumShots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventTestRecoil_Parms, NumShots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::NewProp_NumShots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "TestRecoil", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::LyraCheatManager_eventTestRecoil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::LyraCheatManager_eventTestRecoil_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_TestRecoil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_TestRecoil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execTestRecoil)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumShots);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestRecoil(Z_Param_NumShots);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function TestRecoil

// Begin Class ULyraCheatManager Function ToggleFixedCamera
struct Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "ToggleFixedCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execToggleFixedCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleFixedCamera();
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function ToggleFixedCamera

// Begin Class ULyraCheatManager Function UnlimitedHealth
struct Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics
{
	struct LyraCheatManager_eventUnlimitedHealth_Parms
	{
		int32 Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prevents the owning player from dropping below 1 health.\n" },
#endif
		{ "CPP_Default_Enabled", "-1" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents the owning player from dropping below 1 health." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCheatManager_eventUnlimitedHealth_Parms, Enabled), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCheatManager, nullptr, "UnlimitedHealth", nullptr, nullptr, Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::LyraCheatManager_eventUnlimitedHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::LyraCheatManager_eventUnlimitedHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCheatManager::execUnlimitedHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlimitedHealth(Z_Param_Enabled);
	P_NATIVE_END;
}
// End Class ULyraCheatManager Function UnlimitedHealth

// Begin Class ULyraCheatManager
void ULyraCheatManager::StaticRegisterNativesULyraCheatManager()
{
	UClass* Class = ULyraCheatManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTagToSelf", &ULyraCheatManager::execAddTagToSelf },
		{ "CancelActivatedAbilities", &ULyraCheatManager::execCancelActivatedAbilities },
		{ "Cheat", &ULyraCheatManager::execCheat },
		{ "CheatAll", &ULyraCheatManager::execCheatAll },
		{ "CycleAbilitySystemDebug", &ULyraCheatManager::execCycleAbilitySystemDebug },
		{ "CycleDebugCameras", &ULyraCheatManager::execCycleDebugCameras },
		{ "DamageSelf", &ULyraCheatManager::execDamageSelf },
		{ "DamageSelfDestruct", &ULyraCheatManager::execDamageSelfDestruct },
		{ "HealSelf", &ULyraCheatManager::execHealSelf },
		{ "HealTarget", &ULyraCheatManager::execHealTarget },
		{ "OnRecoilTestFireTick", &ULyraCheatManager::execOnRecoilTestFireTick },
		{ "OnRecoilTestSampleTick", &ULyraCheatManager::execOnRecoilTestSampleTick },
		{ "PlayNextGame", &ULyraCheatManager::execPlayNextGame },
		{ "RemoveTagFromSelf", &ULyraCheatManager::execRemoveTagFromSelf },
		{ "TestRecoil", &ULyraCheatManager::execTestRecoil },
		{ "ToggleFixedCamera", &ULyraCheatManager::execToggleFixedCamera },
		{ "UnlimitedHealth", &ULyraCheatManager::execUnlimitedHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCheatManager);
UClass* Z_Construct_UClass_ULyraCheatManager_NoRegister()
{
	return ULyraCheatManager::StaticClass();
}
struct Z_Construct_UClass_ULyraCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraCheatManager\n *\n *\x09""Base cheat manager class used by this project.\n */" },
#endif
		{ "IncludePath", "Player/LyraCheatManager.h" },
		{ "ModuleRelativePath", "Player/LyraCheatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraCheatManager\n\n    Base cheat manager class used by this project." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCheatManager_AddTagToSelf, "AddTagToSelf" }, // 1330023533
		{ &Z_Construct_UFunction_ULyraCheatManager_CancelActivatedAbilities, "CancelActivatedAbilities" }, // 3423383744
		{ &Z_Construct_UFunction_ULyraCheatManager_Cheat, "Cheat" }, // 2647888070
		{ &Z_Construct_UFunction_ULyraCheatManager_CheatAll, "CheatAll" }, // 292118147
		{ &Z_Construct_UFunction_ULyraCheatManager_CycleAbilitySystemDebug, "CycleAbilitySystemDebug" }, // 523119135
		{ &Z_Construct_UFunction_ULyraCheatManager_CycleDebugCameras, "CycleDebugCameras" }, // 2167405522
		{ &Z_Construct_UFunction_ULyraCheatManager_DamageSelf, "DamageSelf" }, // 1704873789
		{ &Z_Construct_UFunction_ULyraCheatManager_DamageSelfDestruct, "DamageSelfDestruct" }, // 3975124878
		{ &Z_Construct_UFunction_ULyraCheatManager_HealSelf, "HealSelf" }, // 474619823
		{ &Z_Construct_UFunction_ULyraCheatManager_HealTarget, "HealTarget" }, // 391853583
		{ &Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestFireTick, "OnRecoilTestFireTick" }, // 2536757603
		{ &Z_Construct_UFunction_ULyraCheatManager_OnRecoilTestSampleTick, "OnRecoilTestSampleTick" }, // 2474133590
		{ &Z_Construct_UFunction_ULyraCheatManager_PlayNextGame, "PlayNextGame" }, // 3041194444
		{ &Z_Construct_UFunction_ULyraCheatManager_RemoveTagFromSelf, "RemoveTagFromSelf" }, // 3113163407
		{ &Z_Construct_UFunction_ULyraCheatManager_TestRecoil, "TestRecoil" }, // 3003094834
		{ &Z_Construct_UFunction_ULyraCheatManager_ToggleFixedCamera, "ToggleFixedCamera" }, // 2542674358
		{ &Z_Construct_UFunction_ULyraCheatManager_UnlimitedHealth, "UnlimitedHealth" }, // 3013466418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCheatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraCheatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManager,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCheatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCheatManager_Statics::ClassParams = {
	&ULyraCheatManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCheatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCheatManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCheatManager()
{
	if (!Z_Registration_Info_UClass_ULyraCheatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCheatManager.OuterSingleton, Z_Construct_UClass_ULyraCheatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCheatManager.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCheatManager>()
{
	return ULyraCheatManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCheatManager);
ULyraCheatManager::~ULyraCheatManager() {}
// End Class ULyraCheatManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCheatManager, ULyraCheatManager::StaticClass, TEXT("ULyraCheatManager"), &Z_Registration_Info_UClass_ULyraCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCheatManager), 3869395901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_4157924408(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
