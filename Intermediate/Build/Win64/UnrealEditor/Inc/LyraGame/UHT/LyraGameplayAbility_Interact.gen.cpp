// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/Abilities/LyraGameplayAbility_Interact.h"
#include "LyraGame/Interaction/InteractionOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Interact() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameplayAbility_Interact Function TriggerInteraction
struct Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Interact, nullptr, "TriggerInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Interact::execTriggerInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerInteraction();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Interact Function TriggerInteraction

// Begin Class ULyraGameplayAbility_Interact Function UpdateInteractions
struct Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics
{
	struct LyraGameplayAbility_Interact_eventUpdateInteractions_Parms
	{
		TArray<FInteractionOption> InteractiveOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractiveOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractiveOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractiveOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_Inner = { "InteractiveOptions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(0, nullptr) }; // 4256573821
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions = { "InteractiveOptions", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_Interact_eventUpdateInteractions_Parms, InteractiveOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractiveOptions_MetaData), NewProp_InteractiveOptions_MetaData) }; // 4256573821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Interact, nullptr, "UpdateInteractions", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::LyraGameplayAbility_Interact_eventUpdateInteractions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::LyraGameplayAbility_Interact_eventUpdateInteractions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Interact::execUpdateInteractions)
{
	P_GET_TARRAY_REF(FInteractionOption,Z_Param_Out_InteractiveOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInteractions(Z_Param_Out_InteractiveOptions);
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Interact Function UpdateInteractions

// Begin Class ULyraGameplayAbility_Interact
void ULyraGameplayAbility_Interact::StaticRegisterNativesULyraGameplayAbility_Interact()
{
	UClass* Class = ULyraGameplayAbility_Interact::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TriggerInteraction", &ULyraGameplayAbility_Interact::execTriggerInteraction },
		{ "UpdateInteractions", &ULyraGameplayAbility_Interact::execUpdateInteractions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Interact);
UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact_NoRegister()
{
	return ULyraGameplayAbility_Interact::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_Interact\n *\n * Gameplay ability used for character interacting\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_Interact\n\nGameplay ability used for character interacting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOptions_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indicators_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScanRate_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScanRange_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractionWidgetClass_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Indicators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indicators;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRange;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultInteractionWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction, "TriggerInteraction" }, // 913604556
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions, "UpdateInteractions" }, // 2832937983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Interact>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_Inner = { "CurrentOptions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(0, nullptr) }; // 4256573821
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions = { "CurrentOptions", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_Interact, CurrentOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOptions_MetaData), NewProp_CurrentOptions_MetaData) }; // 4256573821
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_Inner = { "Indicators", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators = { "Indicators", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_Interact, Indicators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indicators_MetaData), NewProp_Indicators_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate = { "InteractionScanRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_Interact, InteractionScanRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionScanRate_MetaData), NewProp_InteractionScanRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange = { "InteractionScanRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_Interact, InteractionScanRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionScanRange_MetaData), NewProp_InteractionScanRange_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass = { "DefaultInteractionWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_Interact, DefaultInteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInteractionWidgetClass_MetaData), NewProp_DefaultInteractionWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::ClassParams = {
	&ULyraGameplayAbility_Interact::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers),
	0,
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Interact.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Interact.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_Interact.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Interact>()
{
	return ULyraGameplayAbility_Interact::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Interact);
ULyraGameplayAbility_Interact::~ULyraGameplayAbility_Interact() {}
// End Class ULyraGameplayAbility_Interact

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Interact, ULyraGameplayAbility_Interact::StaticClass, TEXT("ULyraGameplayAbility_Interact"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Interact), 1257723622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_688323708(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
