// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h"
#include "LyraGame/Interaction/InteractionOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitForInteractableTargets() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets();
LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Delegate FInteractableObjectsChangedEvent
struct Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics
{
	struct _Script_LyraGame_eventInteractableObjectsChangedEvent_Parms
	{
		TArray<FInteractionOption> InteractableOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractableOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_Inner = { "InteractableOptions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(0, nullptr) }; // 4256573821
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions = { "InteractableOptions", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms, InteractableOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableOptions_MetaData), NewProp_InteractableOptions_MetaData) }; // 4256573821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "InteractableObjectsChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInteractableObjectsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& InteractableObjectsChangedEvent, TArray<FInteractionOption> const& InteractableOptions)
{
	struct _Script_LyraGame_eventInteractableObjectsChangedEvent_Parms
	{
		TArray<FInteractionOption> InteractableOptions;
	};
	_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms Parms;
	Parms.InteractableOptions=InteractableOptions;
	InteractableObjectsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInteractableObjectsChangedEvent

// Begin Class UAbilityTask_WaitForInteractableTargets
void UAbilityTask_WaitForInteractableTargets::StaticRegisterNativesUAbilityTask_WaitForInteractableTargets()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitForInteractableTargets);
UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_NoRegister()
{
	return UAbilityTask_WaitForInteractableTargets::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractableObjectsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitForInteractableTargets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged = { "InteractableObjectsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets, InteractableObjectsChanged), Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableObjectsChanged_MetaData), NewProp_InteractableObjectsChanged_MetaData) }; // 1804386273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::ClassParams = {
	&UAbilityTask_WaitForInteractableTargets::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UAbilityTask_WaitForInteractableTargets>()
{
	return UAbilityTask_WaitForInteractableTargets::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitForInteractableTargets);
UAbilityTask_WaitForInteractableTargets::~UAbilityTask_WaitForInteractableTargets() {}
// End Class UAbilityTask_WaitForInteractableTargets

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets, UAbilityTask_WaitForInteractableTargets::StaticClass, TEXT("UAbilityTask_WaitForInteractableTargets"), &Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitForInteractableTargets), 3643238578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_444856477(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
