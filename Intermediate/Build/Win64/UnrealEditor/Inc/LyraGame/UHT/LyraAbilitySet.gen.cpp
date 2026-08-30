// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraAbilitySet.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraAbilitySet_GameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility;
class UScriptStruct* FLyraAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_GameplayAbility>()
{
	return FLyraAbilitySet_GameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraAbilitySet_GameplayAbility\n *\n *\x09""Data used by the ability set to grant gameplay abilities.\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraAbilitySet_GameplayAbility\n\n    Data used by the ability set to grant gameplay abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay ability to grant.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay ability to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of ability to grant.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of ability to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "LyraAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag used to process input for the ability.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag used to process input for the ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAbilitySet_GameplayAbility",
	Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers),
	sizeof(FLyraAbilitySet_GameplayAbility),
	alignof(FLyraAbilitySet_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.InnerSingleton;
}
// End ScriptStruct FLyraAbilitySet_GameplayAbility

// Begin ScriptStruct FLyraAbilitySet_GameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect;
class UScriptStruct* FLyraAbilitySet_GameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_GameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_GameplayEffect>()
{
	return FLyraAbilitySet_GameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraAbilitySet_GameplayEffect\n *\n *\x09""Data used by the ability set to grant gameplay effects.\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraAbilitySet_GameplayEffect\n\n    Data used by the ability set to grant gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of gameplay effect to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_GameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GameplayEffect, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GameplayEffect, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAbilitySet_GameplayEffect",
	Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers),
	sizeof(FLyraAbilitySet_GameplayEffect),
	alignof(FLyraAbilitySet_GameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.InnerSingleton;
}
// End ScriptStruct FLyraAbilitySet_GameplayEffect

// Begin ScriptStruct FLyraAbilitySet_AttributeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet;
class UScriptStruct* FLyraAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_AttributeSet>()
{
	return FLyraAbilitySet_AttributeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraAbilitySet_AttributeSet\n *\n *\x09""Data used by the ability set to grant attribute sets.\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraAbilitySet_AttributeSet\n\n    Data used by the ability set to grant attribute sets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "LyraAbilitySet_AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_AttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAbilitySet_AttributeSet",
	Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers),
	sizeof(FLyraAbilitySet_AttributeSet),
	alignof(FLyraAbilitySet_AttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.InnerSingleton;
}
// End ScriptStruct FLyraAbilitySet_AttributeSet

// Begin ScriptStruct FLyraAbilitySet_GrantedHandles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles;
class UScriptStruct* FLyraAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_GrantedHandles>()
{
	return FLyraAbilitySet_GrantedHandles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraAbilitySet_GrantedHandles\n *\n *\x09""Data used to store handles to what has been granted by the ability set.\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraAbilitySet_GrantedHandles\n\n    Data used to store handles to what has been granted by the ability set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles to the granted abilities.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles to the granted gameplay effects.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointers to the granted attribute sets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointers to the granted attribute sets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_GrantedHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GrantedHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectHandles_MetaData), NewProp_GameplayEffectHandles_MetaData) }; // 290910411
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySet_GrantedHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributeSets_MetaData), NewProp_GrantedAttributeSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAbilitySet_GrantedHandles",
	Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers),
	sizeof(FLyraAbilitySet_GrantedHandles),
	alignof(FLyraAbilitySet_GrantedHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.InnerSingleton;
}
// End ScriptStruct FLyraAbilitySet_GrantedHandles

// Begin Class ULyraAbilitySet
void ULyraAbilitySet::StaticRegisterNativesULyraAbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySet);
UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister()
{
	return ULyraAbilitySet::StaticClass();
}
struct Z_Construct_UClass_ULyraAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraAbilitySet\n *\n *\x09Non-mutable data asset used to grant gameplay abilities and gameplay effects.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraAbilitySet\n\n    Non-mutable data asset used to grant gameplay abilities and gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay abilities to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "TitleProperty", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay abilities to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effects to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "TitleProperty", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effects to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attribute Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute sets to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute sets to grant when this ability set is granted." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 3706031477
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 3706031477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect, METADATA_PARAMS(0, nullptr) }; // 198845761
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilitySet, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayEffects_MetaData), NewProp_GrantedGameplayEffects_MetaData) }; // 198845761
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet, METADATA_PARAMS(0, nullptr) }; // 229780853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 229780853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySet_Statics::ClassParams = {
	&ULyraAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAbilitySet()
{
	if (!Z_Registration_Info_UClass_ULyraAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySet.OuterSingleton, Z_Construct_UClass_ULyraAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAbilitySet.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySet>()
{
	return ULyraAbilitySet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySet);
ULyraAbilitySet::~ULyraAbilitySet() {}
// End Class ULyraAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("LyraAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_GameplayAbility), 3706031477U) },
		{ FLyraAbilitySet_GameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewStructOps, TEXT("LyraAbilitySet_GameplayEffect"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_GameplayEffect), 198845761U) },
		{ FLyraAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("LyraAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_AttributeSet), 229780853U) },
		{ FLyraAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("LyraAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_GrantedHandles), 3322214549U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySet, ULyraAbilitySet::StaticClass, TEXT("ULyraAbilitySet"), &Z_Registration_Info_UClass_ULyraAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySet), 823694018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_2430856076(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
