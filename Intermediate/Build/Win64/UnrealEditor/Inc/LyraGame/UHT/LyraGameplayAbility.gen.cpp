// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ELyraAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy;
static UEnum* ELyraAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraAbilityActivationPolicy>()
{
	return ELyraAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ELyraAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "ELyraAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "ELyraAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ELyraAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
#endif
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "ELyraAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraAbilityActivationPolicy::OnInputTriggered", (int64)ELyraAbilityActivationPolicy::OnInputTriggered },
		{ "ELyraAbilityActivationPolicy::WhileInputActive", (int64)ELyraAbilityActivationPolicy::WhileInputActive },
		{ "ELyraAbilityActivationPolicy::OnSpawn", (int64)ELyraAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraAbilityActivationPolicy",
	"ELyraAbilityActivationPolicy",
	Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.InnerSingleton;
}
// End Enum ELyraAbilityActivationPolicy

// Begin Enum ELyraAbilityActivationGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraAbilityActivationGroup;
static UEnum* ELyraAbilityActivationGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraAbilityActivationGroup"));
	}
	return Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraAbilityActivationGroup>()
{
	return ELyraAbilityActivationGroup_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ELyraAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
#endif
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "ELyraAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "ELyraAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "ELyraAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ELyraAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ELyraAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraAbilityActivationGroup::Independent", (int64)ELyraAbilityActivationGroup::Independent },
		{ "ELyraAbilityActivationGroup::Exclusive_Replaceable", (int64)ELyraAbilityActivationGroup::Exclusive_Replaceable },
		{ "ELyraAbilityActivationGroup::Exclusive_Blocking", (int64)ELyraAbilityActivationGroup::Exclusive_Blocking },
		{ "ELyraAbilityActivationGroup::MAX", (int64)ELyraAbilityActivationGroup::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraAbilityActivationGroup",
	"ELyraAbilityActivationGroup",
	Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup()
{
	if (!Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.InnerSingleton;
}
// End Enum ELyraAbilityActivationGroup

// Begin ScriptStruct FLyraAbilityMontageFailureMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage;
class UScriptStruct* FLyraAbilityMontageFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilityMontageFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilityMontageFailureMessage>()
{
	return FLyraAbilityMontageFailureMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failure reason that can be used to play an animation montage when a failure occurs */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "LyraAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "LyraAbilityMontageFailureMessage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the reasons why this ability has failed\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the reasons why this ability has failed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[] = {
		{ "Category", "LyraAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilityMontageFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilityMontageFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilityMontageFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilityMontageFailureMessage, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureMontage_MetaData), NewProp_FailureMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAbilityMontageFailureMessage",
	Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers),
	sizeof(FLyraAbilityMontageFailureMessage),
	alignof(FLyraAbilityMontageFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.InnerSingleton;
}
// End ScriptStruct FLyraAbilityMontageFailureMessage

// Begin Class ULyraGameplayAbility Function CanChangeActivationGroup
struct Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics
{
	struct LyraGameplayAbility_eventCanChangeActivationGroup_Parms
	{
		ELyraAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the requested activation group is a valid transition.\n" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the requested activation group is a valid transition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventCanChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, METADATA_PARAMS(0, nullptr) }; // 4247120011
void Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraGameplayAbility_eventCanChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraGameplayAbility_eventCanChangeActivationGroup_Parms), &Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "CanChangeActivationGroup", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::LyraGameplayAbility_eventCanChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::LyraGameplayAbility_eventCanChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execCanChangeActivationGroup)
{
	P_GET_ENUM(ELyraAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangeActivationGroup(ELyraAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function CanChangeActivationGroup

// Begin Class ULyraGameplayAbility Function ChangeActivationGroup
struct Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics
{
	struct LyraGameplayAbility_eventChangeActivationGroup_Parms
	{
		ELyraAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tries to change the activation group.  Returns true if it successfully changed.\n" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to change the activation group.  Returns true if it successfully changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, METADATA_PARAMS(0, nullptr) }; // 4247120011
void Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraGameplayAbility_eventChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraGameplayAbility_eventChangeActivationGroup_Parms), &Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "ChangeActivationGroup", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::LyraGameplayAbility_eventChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::LyraGameplayAbility_eventChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execChangeActivationGroup)
{
	P_GET_ENUM(ELyraAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeActivationGroup(ELyraAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function ChangeActivationGroup

// Begin Class ULyraGameplayAbility Function ClearCameraMode
struct Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the ability's camera mode.  Automatically called if needed when the ability ends.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the ability's camera mode.  Automatically called if needed when the ability ends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "ClearCameraMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execClearCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCameraMode();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function ClearCameraMode

// Begin Class ULyraGameplayAbility Function GetControllerFromActorInfo
struct Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics
{
	struct LyraGameplayAbility_eventGetControllerFromActorInfo_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::LyraGameplayAbility_eventGetControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::LyraGameplayAbility_eventGetControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execGetControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function GetControllerFromActorInfo

// Begin Class ULyraGameplayAbility Function GetHeroComponentFromActorInfo
struct Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics
{
	struct LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms
	{
		ULyraHeroComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ULyraHeroComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetHeroComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execGetHeroComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraHeroComponent**)Z_Param__Result=P_THIS->GetHeroComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function GetHeroComponentFromActorInfo

// Begin Class ULyraGameplayAbility Function GetLyraAbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics
{
	struct LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms
	{
		ULyraAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetLyraAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execGetLyraAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function GetLyraAbilitySystemComponentFromActorInfo

// Begin Class ULyraGameplayAbility Function GetLyraCharacterFromActorInfo
struct Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics
{
	struct LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms
	{
		ALyraCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ALyraCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetLyraCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execGetLyraCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraCharacter**)Z_Param__Result=P_THIS->GetLyraCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function GetLyraCharacterFromActorInfo

// Begin Class ULyraGameplayAbility Function GetLyraPlayerControllerFromActorInfo
struct Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics
{
	struct LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms
	{
		ALyraPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetLyraPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execGetLyraPlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALyraPlayerController**)Z_Param__Result=P_THIS->GetLyraPlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function GetLyraPlayerControllerFromActorInfo

// Begin Class ULyraGameplayAbility Function K2_OnAbilityAdded
static FName NAME_ULyraGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
void ULyraGameplayAbility::K2_OnAbilityAdded()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_K2_OnAbilityAdded),NULL);
}
struct Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraGameplayAbility Function K2_OnAbilityAdded

// Begin Class ULyraGameplayAbility Function K2_OnAbilityRemoved
static FName NAME_ULyraGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
void ULyraGameplayAbility::K2_OnAbilityRemoved()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_K2_OnAbilityRemoved),NULL);
}
struct Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraGameplayAbility Function K2_OnAbilityRemoved

// Begin Class ULyraGameplayAbility Function K2_OnPawnAvatarSet
static FName NAME_ULyraGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
void ULyraGameplayAbility::K2_OnPawnAvatarSet()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_K2_OnPawnAvatarSet),NULL);
}
struct Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
#endif
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraGameplayAbility Function K2_OnPawnAvatarSet

// Begin Class ULyraGameplayAbility Function ScriptOnAbilityFailedToActivate
struct LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms
{
	FGameplayTagContainer FailedReason;
};
static FName NAME_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate = FName(TEXT("ScriptOnAbilityFailedToActivate"));
void ULyraGameplayAbility::ScriptOnAbilityFailedToActivate(FGameplayTagContainer const& FailedReason) const
{
	LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms Parms;
	Parms.FailedReason=FailedReason;
	const_cast<ULyraGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate),&Parms);
}
struct Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the ability fails to activate\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability fails to activate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms, FailedReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedReason_MetaData), NewProp_FailedReason_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "ScriptOnAbilityFailedToActivate", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers), sizeof(LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraGameplayAbility Function ScriptOnAbilityFailedToActivate

// Begin Class ULyraGameplayAbility Function SetCameraMode
struct Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics
{
	struct LyraGameplayAbility_eventSetCameraMode_Parms
	{
		TSubclassOf<ULyraCameraMode> CameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the ability's camera mode.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the ability's camera mode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::LyraGameplayAbility_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::LyraGameplayAbility_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility::execSetCameraMode)
{
	P_GET_OBJECT(UClass,Z_Param_CameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_CameraMode);
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility Function SetCameraMode

// Begin Class ULyraGameplayAbility
void ULyraGameplayAbility::StaticRegisterNativesULyraGameplayAbility()
{
	UClass* Class = ULyraGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChangeActivationGroup", &ULyraGameplayAbility::execCanChangeActivationGroup },
		{ "ChangeActivationGroup", &ULyraGameplayAbility::execChangeActivationGroup },
		{ "ClearCameraMode", &ULyraGameplayAbility::execClearCameraMode },
		{ "GetControllerFromActorInfo", &ULyraGameplayAbility::execGetControllerFromActorInfo },
		{ "GetHeroComponentFromActorInfo", &ULyraGameplayAbility::execGetHeroComponentFromActorInfo },
		{ "GetLyraAbilitySystemComponentFromActorInfo", &ULyraGameplayAbility::execGetLyraAbilitySystemComponentFromActorInfo },
		{ "GetLyraCharacterFromActorInfo", &ULyraGameplayAbility::execGetLyraCharacterFromActorInfo },
		{ "GetLyraPlayerControllerFromActorInfo", &ULyraGameplayAbility::execGetLyraPlayerControllerFromActorInfo },
		{ "SetCameraMode", &ULyraGameplayAbility::execSetCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility);
UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister()
{
	return ULyraGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility\n *\n *\x09The base gameplay ability class used by this project.\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base gameplay ability class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility\n\n    The base gameplay ability class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Lyra|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how this ability is meant to activate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "Lyra|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to simple error messages\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to simple error messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogCancelation_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
	static void NewProp_bLogCancelation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogCancelation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup, "CanChangeActivationGroup" }, // 2281971574
		{ &Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup, "ChangeActivationGroup" }, // 775962407
		{ &Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode, "ClearCameraMode" }, // 610189094
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 3169612665
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo, "GetHeroComponentFromActorInfo" }, // 3763579031
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo, "GetLyraAbilitySystemComponentFromActorInfo" }, // 2536779444
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo, "GetLyraCharacterFromActorInfo" }, // 2509278072
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo, "GetLyraPlayerControllerFromActorInfo" }, // 3171412522
		{ &Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 2928589694
		{ &Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 1723495760
		{ &Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 2453556630
		{ &Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate, "ScriptOnAbilityFailedToActivate" }, // 3900705727
		{ &Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode, "SetCameraMode" }, // 2229774396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility, ActivationPolicy), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 2395389423
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility, ActivationGroup), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationGroup_MetaData), NewProp_ActivationGroup_MetaData) }; // 4247120011
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToUserFacingMessages_MetaData), NewProp_FailureTagToUserFacingMessages_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToAnimMontage_MetaData), NewProp_FailureTagToAnimMontage_MetaData) }; // 1298103297
void Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_SetBit(void* Obj)
{
	((ULyraGameplayAbility*)Obj)->bLogCancelation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation = { "bLogCancelation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraGameplayAbility), &Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogCancelation_MetaData), NewProp_bLogCancelation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Statics::ClassParams = {
	&ULyraGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility>()
{
	return ULyraGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility);
ULyraGameplayAbility::~ULyraGameplayAbility() {}
// End Class ULyraGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELyraAbilityActivationPolicy_StaticEnum, TEXT("ELyraAbilityActivationPolicy"), &Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2395389423U) },
		{ ELyraAbilityActivationGroup_StaticEnum, TEXT("ELyraAbilityActivationGroup"), &Z_Registration_Info_UEnum_ELyraAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4247120011U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAbilityMontageFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewStructOps, TEXT("LyraAbilityMontageFailureMessage"), &Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilityMontageFailureMessage), 2016551629U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility, ULyraGameplayAbility::StaticClass, TEXT("ULyraGameplayAbility"), &Z_Registration_Info_UClass_ULyraGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility), 1646098608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_56619710(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
