// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraCharacter.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Classes/Engine/ReplicatedState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacter() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraReplicatedAcceleration();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSharedRepMovement();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraReplicatedAcceleration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration;
class UScriptStruct* FLyraReplicatedAcceleration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraReplicatedAcceleration"));
	}
	return Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraReplicatedAcceleration>()
{
	return FLyraReplicatedAcceleration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraReplicatedAcceleration: Compressed representation of acceleration\n */" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraReplicatedAcceleration: Compressed representation of acceleration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYRadians_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYMagnitude_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction of XY accel component, quantized to represent [0, 2*pi]\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of XY accel component, quantized to represent [0, 2*pi]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelZ_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Accel rate of XY component, quantized to represent [0, MaxAcceleration]\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accel rate of XY component, quantized to represent [0, MaxAcceleration]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYRadians;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYMagnitude;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AccelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraReplicatedAcceleration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians = { "AccelXYRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraReplicatedAcceleration, AccelXYRadians), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelXYRadians_MetaData), NewProp_AccelXYRadians_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude = { "AccelXYMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraReplicatedAcceleration, AccelXYMagnitude), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelXYMagnitude_MetaData), NewProp_AccelXYMagnitude_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ = { "AccelZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraReplicatedAcceleration, AccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelZ_MetaData), NewProp_AccelZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewProp_AccelZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraReplicatedAcceleration",
	Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::PropPointers),
	sizeof(FLyraReplicatedAcceleration),
	alignof(FLyraReplicatedAcceleration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraReplicatedAcceleration()
{
	if (!Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.InnerSingleton, Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration.InnerSingleton;
}
// End ScriptStruct FLyraReplicatedAcceleration

// Begin ScriptStruct FSharedRepMovement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedRepMovement;
class UScriptStruct* FSharedRepMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedRepMovement, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("SharedRepMovement"));
	}
	return Z_Registration_Info_UScriptStruct_SharedRepMovement.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FSharedRepMovement>()
{
	return FSharedRepMovement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSharedRepMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type we use to send FastShared movement updates. */" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type we use to send FastShared movement updates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepMovement_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsJumpForceApplied_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepTimeStamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RepMovementMode;
	static void NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsJumpForceApplied;
	static void NewProp_bIsCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedRepMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement = { "RepMovement", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedRepMovement, RepMovement), Z_Construct_UScriptStruct_FRepMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepMovement_MetaData), NewProp_RepMovement_MetaData) }; // 1102704118
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp = { "RepTimeStamp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedRepMovement, RepTimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepTimeStamp_MetaData), NewProp_RepTimeStamp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode = { "RepMovementMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedRepMovement, RepMovementMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepMovementMode_MetaData), NewProp_RepMovementMode_MetaData) };
void Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj)
{
	((FSharedRepMovement*)Obj)->bProxyIsJumpForceApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied = { "bProxyIsJumpForceApplied", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSharedRepMovement), &Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProxyIsJumpForceApplied_MetaData), NewProp_bProxyIsJumpForceApplied_MetaData) };
void Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
{
	((FSharedRepMovement*)Obj)->bIsCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSharedRepMovement), &Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouched_MetaData), NewProp_bIsCrouched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepTimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_RepMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewProp_bIsCrouched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedRepMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"SharedRepMovement",
	Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::PropPointers),
	sizeof(FSharedRepMovement),
	alignof(FSharedRepMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedRepMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSharedRepMovement()
{
	if (!Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton, Z_Construct_UScriptStruct_FSharedRepMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SharedRepMovement.InnerSingleton;
}
// End ScriptStruct FSharedRepMovement

// Begin Class ALyraCharacter Function FastSharedReplication
struct LyraCharacter_eventFastSharedReplication_Parms
{
	FSharedRepMovement SharedRepMovement;
};
static FName NAME_ALyraCharacter_FastSharedReplication = FName(TEXT("FastSharedReplication"));
void ALyraCharacter::FastSharedReplication(FSharedRepMovement const& SharedRepMovement)
{
	LyraCharacter_eventFastSharedReplication_Parms Parms;
	Parms.SharedRepMovement=SharedRepMovement;
	ProcessEvent(FindFunctionChecked(NAME_ALyraCharacter_FastSharedReplication),&Parms);
}
struct Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone. */" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedRepMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SharedRepMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement = { "SharedRepMovement", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventFastSharedReplication_Parms, SharedRepMovement), Z_Construct_UScriptStruct_FSharedRepMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedRepMovement_MetaData), NewProp_SharedRepMovement_MetaData) }; // 1926525090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "FastSharedReplication", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::PropPointers), sizeof(LyraCharacter_eventFastSharedReplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraCharacter_eventFastSharedReplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_FastSharedReplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_FastSharedReplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execFastSharedReplication)
{
	P_GET_STRUCT(FSharedRepMovement,Z_Param_SharedRepMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FastSharedReplication_Implementation(Z_Param_SharedRepMovement);
	P_NATIVE_END;
}
// End Class ALyraCharacter Function FastSharedReplication

// Begin Class ALyraCharacter Function GetLyraAbilitySystemComponent
struct Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics
{
	struct LyraCharacter_eventGetLyraAbilitySystemComponent_Parms
	{
		ULyraAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::LyraCharacter_eventGetLyraAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::LyraCharacter_eventGetLyraAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execGetLyraAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ALyraCharacter Function GetLyraAbilitySystemComponent

// Begin Class ALyraCharacter Function GetLyraPlayerController
struct Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics
{
	struct LyraCharacter_eventGetLyraPlayerController_Parms
	{
		ALyraPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventGetLyraPlayerController_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "GetLyraPlayerController", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::LyraCharacter_eventGetLyraPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::LyraCharacter_eventGetLyraPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execGetLyraPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraPlayerController**)Z_Param__Result=P_THIS->GetLyraPlayerController();
	P_NATIVE_END;
}
// End Class ALyraCharacter Function GetLyraPlayerController

// Begin Class ALyraCharacter Function GetLyraPlayerState
struct Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics
{
	struct LyraCharacter_eventGetLyraPlayerState_Parms
	{
		ALyraPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventGetLyraPlayerState_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "GetLyraPlayerState", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::LyraCharacter_eventGetLyraPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::LyraCharacter_eventGetLyraPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execGetLyraPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraPlayerState**)Z_Param__Result=P_THIS->GetLyraPlayerState();
	P_NATIVE_END;
}
// End Class ALyraCharacter Function GetLyraPlayerState

// Begin Class ALyraCharacter Function K2_OnDeathFinished
static FName NAME_ALyraCharacter_K2_OnDeathFinished = FName(TEXT("K2_OnDeathFinished"));
void ALyraCharacter::K2_OnDeathFinished()
{
	ProcessEvent(FindFunctionChecked(NAME_ALyraCharacter_K2_OnDeathFinished),NULL);
}
struct Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the death sequence for the character has completed\n" },
#endif
		{ "DisplayName", "OnDeathFinished" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the death sequence for the character has completed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "K2_OnDeathFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALyraCharacter Function K2_OnDeathFinished

// Begin Class ALyraCharacter Function OnControllerChangedTeam
struct Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics
{
	struct LyraCharacter_eventOnControllerChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventOnControllerChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventOnControllerChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventOnControllerChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnControllerChangedTeam", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::LyraCharacter_eventOnControllerChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::LyraCharacter_eventOnControllerChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execOnControllerChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class ALyraCharacter Function OnControllerChangedTeam

// Begin Class ALyraCharacter Function OnDeathFinished
struct Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics
{
	struct LyraCharacter_eventOnDeathFinished_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ends the death sequence for the character (detaches controller, destroys pawn, etc...)\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the death sequence for the character (detaches controller, destroys pawn, etc...)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventOnDeathFinished_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnDeathFinished", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::LyraCharacter_eventOnDeathFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::LyraCharacter_eventOnDeathFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_OnDeathFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnDeathFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execOnDeathFinished)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeathFinished(Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class ALyraCharacter Function OnDeathFinished

// Begin Class ALyraCharacter Function OnDeathStarted
struct Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics
{
	struct LyraCharacter_eventOnDeathStarted_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begins the death sequence for the character (disables collision, disables movement, etc...)\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begins the death sequence for the character (disables collision, disables movement, etc...)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventOnDeathStarted_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnDeathStarted", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::LyraCharacter_eventOnDeathStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::LyraCharacter_eventOnDeathStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_OnDeathStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnDeathStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execOnDeathStarted)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeathStarted(Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class ALyraCharacter Function OnDeathStarted

// Begin Class ALyraCharacter Function OnRep_MyTeamID
struct Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics
{
	struct LyraCharacter_eventOnRep_MyTeamID_Parms
	{
		FGenericTeamId OldTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::NewProp_OldTeamID = { "OldTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacter_eventOnRep_MyTeamID_Parms, OldTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(0, nullptr) }; // 3379033268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::NewProp_OldTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnRep_MyTeamID", nullptr, nullptr, Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::LyraCharacter_eventOnRep_MyTeamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::LyraCharacter_eventOnRep_MyTeamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execOnRep_MyTeamID)
{
	P_GET_STRUCT(FGenericTeamId,Z_Param_OldTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MyTeamID(Z_Param_OldTeamID);
	P_NATIVE_END;
}
// End Class ALyraCharacter Function OnRep_MyTeamID

// Begin Class ALyraCharacter Function OnRep_ReplicatedAcceleration
struct Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraCharacter, nullptr, "OnRep_ReplicatedAcceleration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraCharacter::execOnRep_ReplicatedAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReplicatedAcceleration();
	P_NATIVE_END;
}
// End Class ALyraCharacter Function OnRep_ReplicatedAcceleration

// Begin Class ALyraCharacter
void ALyraCharacter::StaticRegisterNativesALyraCharacter()
{
	UClass* Class = ALyraCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FastSharedReplication", &ALyraCharacter::execFastSharedReplication },
		{ "GetLyraAbilitySystemComponent", &ALyraCharacter::execGetLyraAbilitySystemComponent },
		{ "GetLyraPlayerController", &ALyraCharacter::execGetLyraPlayerController },
		{ "GetLyraPlayerState", &ALyraCharacter::execGetLyraPlayerState },
		{ "OnControllerChangedTeam", &ALyraCharacter::execOnControllerChangedTeam },
		{ "OnDeathFinished", &ALyraCharacter::execOnDeathFinished },
		{ "OnDeathStarted", &ALyraCharacter::execOnDeathStarted },
		{ "OnRep_MyTeamID", &ALyraCharacter::execOnRep_MyTeamID },
		{ "OnRep_ReplicatedAcceleration", &ALyraCharacter::execOnRep_ReplicatedAcceleration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraCharacter);
UClass* Z_Construct_UClass_ALyraCharacter_NoRegister()
{
	return ALyraCharacter::StaticClass();
}
struct Z_Construct_UClass_ALyraCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraCharacter\n *\n *\x09The base character pawn class used by this project.\n *\x09Responsible for sending events to pawn components.\n *\x09New behavior should be added via pawn components when possible.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LyraCharacter.h" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base character pawn class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraCharacter\n\n    The base character pawn class used by this project.\n    Responsible for sending events to pawn components.\n    New behavior should be added via pawn components when possible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lyra|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lyra|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lyra|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTeamID_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyTeamID;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraCharacter_FastSharedReplication, "FastSharedReplication" }, // 4197161900
		{ &Z_Construct_UFunction_ALyraCharacter_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 1659054540
		{ &Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerController, "GetLyraPlayerController" }, // 2609980737
		{ &Z_Construct_UFunction_ALyraCharacter_GetLyraPlayerState, "GetLyraPlayerState" }, // 1893654844
		{ &Z_Construct_UFunction_ALyraCharacter_K2_OnDeathFinished, "K2_OnDeathFinished" }, // 4190250602
		{ &Z_Construct_UFunction_ALyraCharacter_OnControllerChangedTeam, "OnControllerChangedTeam" }, // 153103298
		{ &Z_Construct_UFunction_ALyraCharacter_OnDeathFinished, "OnDeathFinished" }, // 4213671362
		{ &Z_Construct_UFunction_ALyraCharacter_OnDeathStarted, "OnDeathStarted" }, // 3980990600
		{ &Z_Construct_UFunction_ALyraCharacter_OnRep_MyTeamID, "OnRep_MyTeamID" }, // 3207955130
		{ &Z_Construct_UFunction_ALyraCharacter_OnRep_ReplicatedAcceleration, "OnRep_ReplicatedAcceleration" }, // 2953740735
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacter, PawnExtComponent), Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnExtComponent_MetaData), NewProp_PawnExtComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacter, HealthComponent), Z_Construct_UClass_ULyraHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacter, CameraComponent), Z_Construct_UClass_ULyraCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", "OnRep_ReplicatedAcceleration", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacter, ReplicatedAcceleration), Z_Construct_UScriptStruct_FLyraReplicatedAcceleration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedAcceleration_MetaData), NewProp_ReplicatedAcceleration_MetaData) }; // 3643263984
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID = { "MyTeamID", "OnRep_MyTeamID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacter, MyTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTeamID_MetaData), NewProp_MyTeamID_MetaData) }; // 3379033268
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacter, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChangedDelegate_MetaData), NewProp_OnTeamChangedDelegate_MetaData) }; // 1518443978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_PawnExtComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_ReplicatedAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_MyTeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacter_Statics::NewProp_OnTeamChangedDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, IGameplayCueInterface), false },  // 881046121
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, IGameplayTagAssetInterface), false },  // 2863124436
	{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraCharacter, ILyraTeamAgentInterface), false },  // 361203859
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraCharacter_Statics::ClassParams = {
	&ALyraCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraCharacter()
{
	if (!Z_Registration_Info_UClass_ALyraCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraCharacter.OuterSingleton, Z_Construct_UClass_ALyraCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraCharacter.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraCharacter>()
{
	return ALyraCharacter::StaticClass();
}
void ALyraCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));
	static const FName Name_MyTeamID(TEXT("MyTeamID"));
	const bool bIsValid = true
		&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName()
		&& Name_MyTeamID == ClassReps[(int32)ENetFields_Private::MyTeamID].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraCharacter);
ALyraCharacter::~ALyraCharacter() {}
// End Class ALyraCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraReplicatedAcceleration::StaticStruct, Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics::NewStructOps, TEXT("LyraReplicatedAcceleration"), &Z_Registration_Info_UScriptStruct_LyraReplicatedAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraReplicatedAcceleration), 3643263984U) },
		{ FSharedRepMovement::StaticStruct, Z_Construct_UScriptStruct_FSharedRepMovement_Statics::NewStructOps, TEXT("SharedRepMovement"), &Z_Registration_Info_UScriptStruct_SharedRepMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedRepMovement), 1926525090U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraCharacter, ALyraCharacter::StaticClass, TEXT("ALyraCharacter"), &Z_Registration_Info_UClass_ALyraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraCharacter), 4271346250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_2811734094(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
