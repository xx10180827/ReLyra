// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraGlobalAbilitySystem.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGlobalAbilitySystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGlobalAbilitySystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGlobalAbilitySystem_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FGlobalAppliedAbilityList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList;
class UScriptStruct* FGlobalAppliedAbilityList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("GlobalAppliedAbilityList"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FGlobalAppliedAbilityList>()
{
	return FGlobalAppliedAbilityList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAppliedAbilityList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAppliedAbilityList, Handles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handles_MetaData), NewProp_Handles_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"GlobalAppliedAbilityList",
	Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers),
	sizeof(FGlobalAppliedAbilityList),
	alignof(FGlobalAppliedAbilityList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.InnerSingleton;
}
// End ScriptStruct FGlobalAppliedAbilityList

// Begin ScriptStruct FGlobalAppliedEffectList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList;
class UScriptStruct* FGlobalAppliedEffectList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAppliedEffectList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("GlobalAppliedEffectList"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FGlobalAppliedEffectList>()
{
	return FGlobalAppliedEffectList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAppliedEffectList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAppliedEffectList, Handles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handles_MetaData), NewProp_Handles_MetaData) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"GlobalAppliedEffectList",
	Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers),
	sizeof(FGlobalAppliedEffectList),
	alignof(FGlobalAppliedEffectList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.InnerSingleton;
}
// End ScriptStruct FGlobalAppliedEffectList

// Begin Class ULyraGlobalAbilitySystem Function ApplyAbilityToAll
struct Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics
{
	struct LyraGlobalAbilitySystem_eventApplyAbilityToAll_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGlobalAbilitySystem_eventApplyAbilityToAll_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGlobalAbilitySystem, nullptr, "ApplyAbilityToAll", nullptr, nullptr, Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::LyraGlobalAbilitySystem_eventApplyAbilityToAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::LyraGlobalAbilitySystem_eventApplyAbilityToAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGlobalAbilitySystem::execApplyAbilityToAll)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAbilityToAll(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class ULyraGlobalAbilitySystem Function ApplyAbilityToAll

// Begin Class ULyraGlobalAbilitySystem Function ApplyEffectToAll
struct Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics
{
	struct LyraGlobalAbilitySystem_eventApplyEffectToAll_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGlobalAbilitySystem_eventApplyEffectToAll_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::NewProp_Effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGlobalAbilitySystem, nullptr, "ApplyEffectToAll", nullptr, nullptr, Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::LyraGlobalAbilitySystem_eventApplyEffectToAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::LyraGlobalAbilitySystem_eventApplyEffectToAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGlobalAbilitySystem::execApplyEffectToAll)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToAll(Z_Param_Effect);
	P_NATIVE_END;
}
// End Class ULyraGlobalAbilitySystem Function ApplyEffectToAll

// Begin Class ULyraGlobalAbilitySystem Function RemoveAbilityFromAll
struct Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics
{
	struct LyraGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGlobalAbilitySystem, nullptr, "RemoveAbilityFromAll", nullptr, nullptr, Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::LyraGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::LyraGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGlobalAbilitySystem::execRemoveAbilityFromAll)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityFromAll(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class ULyraGlobalAbilitySystem Function RemoveAbilityFromAll

// Begin Class ULyraGlobalAbilitySystem Function RemoveEffectFromAll
struct Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics
{
	struct LyraGlobalAbilitySystem_eventRemoveEffectFromAll_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGlobalAbilitySystem_eventRemoveEffectFromAll_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::NewProp_Effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGlobalAbilitySystem, nullptr, "RemoveEffectFromAll", nullptr, nullptr, Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::LyraGlobalAbilitySystem_eventRemoveEffectFromAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::LyraGlobalAbilitySystem_eventRemoveEffectFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGlobalAbilitySystem::execRemoveEffectFromAll)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEffectFromAll(Z_Param_Effect);
	P_NATIVE_END;
}
// End Class ULyraGlobalAbilitySystem Function RemoveEffectFromAll

// Begin Class ULyraGlobalAbilitySystem
void ULyraGlobalAbilitySystem::StaticRegisterNativesULyraGlobalAbilitySystem()
{
	UClass* Class = ULyraGlobalAbilitySystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAbilityToAll", &ULyraGlobalAbilitySystem::execApplyAbilityToAll },
		{ "ApplyEffectToAll", &ULyraGlobalAbilitySystem::execApplyEffectToAll },
		{ "RemoveAbilityFromAll", &ULyraGlobalAbilitySystem::execRemoveAbilityFromAll },
		{ "RemoveEffectFromAll", &ULyraGlobalAbilitySystem::execRemoveEffectFromAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGlobalAbilitySystem);
UClass* Z_Construct_UClass_ULyraGlobalAbilitySystem_NoRegister()
{
	return ULyraGlobalAbilitySystem::StaticClass();
}
struct Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedAbilities_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedEffects_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredASCs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGlobalAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedAbilities_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AppliedAbilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedEffects_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AppliedEffects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredASCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredASCs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyAbilityToAll, "ApplyAbilityToAll" }, // 1499766359
		{ &Z_Construct_UFunction_ULyraGlobalAbilitySystem_ApplyEffectToAll, "ApplyEffectToAll" }, // 1211284620
		{ &Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveAbilityFromAll, "RemoveAbilityFromAll" }, // 728643378
		{ &Z_Construct_UFunction_ULyraGlobalAbilitySystem_RemoveEffectFromAll, "RemoveEffectFromAll" }, // 3779592866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGlobalAbilitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_ValueProp = { "AppliedAbilities", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList, METADATA_PARAMS(0, nullptr) }; // 3548407565
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_Key_KeyProp = { "AppliedAbilities_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedAbilities = { "AppliedAbilities", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGlobalAbilitySystem, AppliedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedAbilities_MetaData), NewProp_AppliedAbilities_MetaData) }; // 3548407565
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedEffects_ValueProp = { "AppliedEffects", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGlobalAppliedEffectList, METADATA_PARAMS(0, nullptr) }; // 467594997
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedEffects_Key_KeyProp = { "AppliedEffects_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedEffects = { "AppliedEffects", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGlobalAbilitySystem, AppliedEffects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedEffects_MetaData), NewProp_AppliedEffects_MetaData) }; // 467594997
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_Inner = { "RegisteredASCs", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_RegisteredASCs = { "RegisteredASCs", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGlobalAbilitySystem, RegisteredASCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredASCs_MetaData), NewProp_RegisteredASCs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedEffects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedEffects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_AppliedEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::NewProp_RegisteredASCs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::ClassParams = {
	&ULyraGlobalAbilitySystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGlobalAbilitySystem()
{
	if (!Z_Registration_Info_UClass_ULyraGlobalAbilitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGlobalAbilitySystem.OuterSingleton, Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGlobalAbilitySystem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGlobalAbilitySystem>()
{
	return ULyraGlobalAbilitySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGlobalAbilitySystem);
ULyraGlobalAbilitySystem::~ULyraGlobalAbilitySystem() {}
// End Class ULyraGlobalAbilitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGlobalAppliedAbilityList::StaticStruct, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewStructOps, TEXT("GlobalAppliedAbilityList"), &Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAppliedAbilityList), 3548407565U) },
		{ FGlobalAppliedEffectList::StaticStruct, Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewStructOps, TEXT("GlobalAppliedEffectList"), &Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAppliedEffectList), 467594997U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGlobalAbilitySystem, ULyraGlobalAbilitySystem::StaticClass, TEXT("ULyraGlobalAbilitySystem"), &Z_Registration_Info_UClass_ULyraGlobalAbilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGlobalAbilitySystem), 2558192301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_3509633250(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
