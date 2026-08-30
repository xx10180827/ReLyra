// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_GrantNearbyInteraction() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction();
LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UAbilityTask_GrantNearbyInteraction Function GrantAbilitiesForNearbyInteractors
struct Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics
{
	struct AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms
	{
		UGameplayAbility* OwningAbility;
		float InteractionScanRange;
		float InteractionScanRate;
		UAbilityTask_GrantNearbyInteraction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until an overlap occurs. This will need to be better fleshed out so we can specify game specific collision requirements */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until an overlap occurs. This will need to be better fleshed out so we can specify game specific collision requirements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRange = { "InteractionScanRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, InteractionScanRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRate = { "InteractionScanRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, InteractionScanRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction, nullptr, "GrantAbilitiesForNearbyInteractors", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_GrantNearbyInteraction::execGrantAbilitiesForNearbyInteractors)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_GrantNearbyInteraction**)Z_Param__Result=UAbilityTask_GrantNearbyInteraction::GrantAbilitiesForNearbyInteractors(Z_Param_OwningAbility,Z_Param_InteractionScanRange,Z_Param_InteractionScanRate);
	P_NATIVE_END;
}
// End Class UAbilityTask_GrantNearbyInteraction Function GrantAbilitiesForNearbyInteractors

// Begin Class UAbilityTask_GrantNearbyInteraction
void UAbilityTask_GrantNearbyInteraction::StaticRegisterNativesUAbilityTask_GrantNearbyInteraction()
{
	UClass* Class = UAbilityTask_GrantNearbyInteraction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantAbilitiesForNearbyInteractors", &UAbilityTask_GrantNearbyInteraction::execGrantAbilitiesForNearbyInteractors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_GrantNearbyInteraction);
UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_NoRegister()
{
	return UAbilityTask_GrantNearbyInteraction::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors, "GrantAbilitiesForNearbyInteractors" }, // 3457003903
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_GrantNearbyInteraction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::ClassParams = {
	&UAbilityTask_GrantNearbyInteraction::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction.OuterSingleton, Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UAbilityTask_GrantNearbyInteraction>()
{
	return UAbilityTask_GrantNearbyInteraction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_GrantNearbyInteraction);
UAbilityTask_GrantNearbyInteraction::~UAbilityTask_GrantNearbyInteraction() {}
// End Class UAbilityTask_GrantNearbyInteraction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction, UAbilityTask_GrantNearbyInteraction::StaticClass, TEXT("UAbilityTask_GrantNearbyInteraction"), &Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_GrantNearbyInteraction), 3415391662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_2736015225(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
