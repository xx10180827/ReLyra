// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Attributes/LyraCombatSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCombatSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCombatSet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCombatSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraCombatSet Function OnRep_BaseDamage
struct Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics
{
	struct LyraCombatSet_eventOnRep_BaseDamage_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LyraCombatSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCombatSet_eventOnRep_BaseDamage_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCombatSet, nullptr, "OnRep_BaseDamage", nullptr, nullptr, Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::LyraCombatSet_eventOnRep_BaseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::LyraCombatSet_eventOnRep_BaseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCombatSet::execOnRep_BaseDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BaseDamage(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class ULyraCombatSet Function OnRep_BaseDamage

// Begin Class ULyraCombatSet Function OnRep_BaseHeal
struct Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics
{
	struct LyraCombatSet_eventOnRep_BaseHeal_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LyraCombatSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCombatSet_eventOnRep_BaseHeal_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCombatSet, nullptr, "OnRep_BaseHeal", nullptr, nullptr, Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::LyraCombatSet_eventOnRep_BaseHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::LyraCombatSet_eventOnRep_BaseHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCombatSet::execOnRep_BaseHeal)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BaseHeal(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class ULyraCombatSet Function OnRep_BaseHeal

// Begin Class ULyraCombatSet
void ULyraCombatSet::StaticRegisterNativesULyraCombatSet()
{
	UClass* Class = ULyraCombatSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_BaseDamage", &ULyraCombatSet::execOnRep_BaseDamage },
		{ "OnRep_BaseHeal", &ULyraCombatSet::execOnRep_BaseHeal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCombatSet);
UClass* Z_Construct_UClass_ULyraCombatSet_NoRegister()
{
	return ULyraCombatSet::StaticClass();
}
struct Z_Construct_UClass_ULyraCombatSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraCombatSet\n *\n *  Class that defines attributes that are necessary for applying damage or healing.\n *\x09""Attribute examples include: damage, healing, attack power, and shield penetrations.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/LyraCombatSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LyraCombatSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraCombatSet\n\n Class that defines attributes that are necessary for applying damage or healing.\n    Attribute examples include: damage, healing, attack power, and shield penetrations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lyra|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base amount of damage to apply in the damage execution.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LyraCombatSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base amount of damage to apply in the damage execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lyra|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base amount of healing to apply in the heal execution.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LyraCombatSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base amount of healing to apply in the heal execution." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseHeal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseDamage, "OnRep_BaseDamage" }, // 2641737249
		{ &Z_Construct_UFunction_ULyraCombatSet_OnRep_BaseHeal, "OnRep_BaseHeal" }, // 2423459888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCombatSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCombatSet_Statics::NewProp_BaseDamage = { "BaseDamage", "OnRep_BaseDamage", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCombatSet, BaseDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCombatSet_Statics::NewProp_BaseHeal = { "BaseHeal", "OnRep_BaseHeal", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCombatSet, BaseHeal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHeal_MetaData), NewProp_BaseHeal_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCombatSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCombatSet_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCombatSet_Statics::NewProp_BaseHeal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCombatSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraCombatSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCombatSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCombatSet_Statics::ClassParams = {
	&ULyraCombatSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraCombatSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCombatSet_Statics::PropPointers),
	0,
	0x002000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCombatSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCombatSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCombatSet()
{
	if (!Z_Registration_Info_UClass_ULyraCombatSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCombatSet.OuterSingleton, Z_Construct_UClass_ULyraCombatSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCombatSet.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCombatSet>()
{
	return ULyraCombatSet::StaticClass();
}
void ULyraCombatSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_BaseDamage(TEXT("BaseDamage"));
	static const FName Name_BaseHeal(TEXT("BaseHeal"));
	const bool bIsValid = true
		&& Name_BaseDamage == ClassReps[(int32)ENetFields_Private::BaseDamage].Property->GetFName()
		&& Name_BaseHeal == ClassReps[(int32)ENetFields_Private::BaseHeal].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraCombatSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCombatSet);
ULyraCombatSet::~ULyraCombatSet() {}
// End Class ULyraCombatSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCombatSet, ULyraCombatSet::StaticClass, TEXT("ULyraCombatSet"), &Z_Registration_Info_UClass_ULyraCombatSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCombatSet), 4058748171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_2852601233(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraCombatSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
