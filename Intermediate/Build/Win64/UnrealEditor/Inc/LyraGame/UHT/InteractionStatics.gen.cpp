// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/InteractionStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UInteractionStatics();
LYRAGAME_API UClass* Z_Construct_UClass_UInteractionStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UInteractionStatics Function GetActorFromInteractableTarget
struct Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics
{
	struct InteractionStatics_eventGetActorFromInteractableTarget_Parms
	{
		TScriptInterface<IInteractableTarget> InteractableTarget;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractionStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InteractableTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_InteractableTarget = { "InteractableTarget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionStatics_eventGetActorFromInteractableTarget_Parms, InteractableTarget), Z_Construct_UClass_UInteractableTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionStatics_eventGetActorFromInteractableTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_InteractableTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionStatics, nullptr, "GetActorFromInteractableTarget", nullptr, nullptr, Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::InteractionStatics_eventGetActorFromInteractableTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::InteractionStatics_eventGetActorFromInteractableTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionStatics::execGetActorFromInteractableTarget)
{
	P_GET_TINTERFACE(IInteractableTarget,Z_Param_InteractableTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UInteractionStatics::GetActorFromInteractableTarget(Z_Param_InteractableTarget);
	P_NATIVE_END;
}
// End Class UInteractionStatics Function GetActorFromInteractableTarget

// Begin Class UInteractionStatics Function GetInteractableTargetsFromActor
struct Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics
{
	struct InteractionStatics_eventGetInteractableTargetsFromActor_Parms
	{
		AActor* Actor;
		TArray<TScriptInterface<IInteractableTarget> > OutInteractableTargets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractionStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutInteractableTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInteractableTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionStatics_eventGetInteractableTargetsFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets_Inner = { "OutInteractableTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractableTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets = { "OutInteractableTargets", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionStatics_eventGetInteractableTargetsFromActor_Parms, OutInteractableTargets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionStatics, nullptr, "GetInteractableTargetsFromActor", nullptr, nullptr, Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::InteractionStatics_eventGetInteractableTargetsFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::InteractionStatics_eventGetInteractableTargetsFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionStatics::execGetInteractableTargetsFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_TARRAY_REF(TScriptInterface<IInteractableTarget>,Z_Param_Out_OutInteractableTargets);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInteractionStatics::GetInteractableTargetsFromActor(Z_Param_Actor,Z_Param_Out_OutInteractableTargets);
	P_NATIVE_END;
}
// End Class UInteractionStatics Function GetInteractableTargetsFromActor

// Begin Class UInteractionStatics
void UInteractionStatics::StaticRegisterNativesUInteractionStatics()
{
	UClass* Class = UInteractionStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorFromInteractableTarget", &UInteractionStatics::execGetActorFromInteractableTarget },
		{ "GetInteractableTargetsFromActor", &UInteractionStatics::execGetInteractableTargetsFromActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionStatics);
UClass* Z_Construct_UClass_UInteractionStatics_NoRegister()
{
	return UInteractionStatics::StaticClass();
}
struct Z_Construct_UClass_UInteractionStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "IncludePath", "Interaction/InteractionStatics.h" },
		{ "ModuleRelativePath", "Interaction/InteractionStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget, "GetActorFromInteractableTarget" }, // 4167680917
		{ &Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor, "GetInteractableTargetsFromActor" }, // 2032744671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionStatics_Statics::ClassParams = {
	&UInteractionStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionStatics()
{
	if (!Z_Registration_Info_UClass_UInteractionStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionStatics.OuterSingleton, Z_Construct_UClass_UInteractionStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionStatics.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UInteractionStatics>()
{
	return UInteractionStatics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionStatics);
UInteractionStatics::~UInteractionStatics() {}
// End Class UInteractionStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionStatics, UInteractionStatics::StaticClass, TEXT("UInteractionStatics"), &Z_Registration_Info_UClass_UInteractionStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionStatics), 3701344633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_5150132(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
