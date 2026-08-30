// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/ContextEffects/LyraContextEffectComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraContextEffectComponent Function AnimMotionEffect_Implementation
struct Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics
{
	struct LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms
	{
		FName Bone;
		FGameplayTag MotionEffect;
		USceneComponent* StaticMeshComponent;
		FVector LocationOffset;
		FRotator RotationOffset;
		const UAnimSequenceBase* AnimationSequence;
		bool bHitSuccess;
		FHitResult HitResult;
		FGameplayTagContainer Contexts;
		FVector VFXScale;
		float AudioVolume;
		float AudioPitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AnimMotionEffect Implementation\n" },
#endif
		{ "CPP_Default_AudioPitch", "1.000000" },
		{ "CPP_Default_AudioVolume", "1.000000" },
		{ "CPP_Default_VFXScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimMotionEffect Implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MotionEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
	static void NewProp_bHitSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contexts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VFXScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect = { "MotionEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, MotionEffect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionEffect_MetaData), NewProp_MotionEffect_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, StaticMeshComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSequence_MetaData), NewProp_AnimationSequence_MetaData) };
void Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_SetBit(void* Obj)
{
	((LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms*)Obj)->bHitSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess = { "bHitSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms), &Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitSuccess_MetaData), NewProp_bHitSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, Contexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_VFXScale = { "VFXScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, VFXScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, AudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioPitch = { "AudioPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, AudioPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Contexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_VFXScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectComponent, nullptr, "AnimMotionEffect_Implementation", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectComponent::execAnimMotionEffect_Implementation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Bone);
	P_GET_STRUCT(FGameplayTag,Z_Param_MotionEffect);
	P_GET_OBJECT(USceneComponent,Z_Param_StaticMeshComponent);
	P_GET_STRUCT(FVector,Z_Param_LocationOffset);
	P_GET_STRUCT(FRotator,Z_Param_RotationOffset);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequence);
	P_GET_UBOOL(Z_Param_bHitSuccess);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_Contexts);
	P_GET_STRUCT(FVector,Z_Param_VFXScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AudioVolume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AudioPitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimMotionEffect_Implementation(Z_Param_Bone,Z_Param_MotionEffect,Z_Param_StaticMeshComponent,Z_Param_LocationOffset,Z_Param_RotationOffset,Z_Param_AnimationSequence,Z_Param_bHitSuccess,Z_Param_HitResult,Z_Param_Contexts,Z_Param_VFXScale,Z_Param_AudioVolume,Z_Param_AudioPitch);
	P_NATIVE_END;
}
// End Class ULyraContextEffectComponent Function AnimMotionEffect_Implementation

// Begin Class ULyraContextEffectComponent Function UpdateEffectContexts
struct Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics
{
	struct LyraContextEffectComponent_eventUpdateEffectContexts_Parms
	{
		FGameplayTagContainer NewEffectContexts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEffectContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::NewProp_NewEffectContexts = { "NewEffectContexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventUpdateEffectContexts_Parms, NewEffectContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::NewProp_NewEffectContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectComponent, nullptr, "UpdateEffectContexts", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::LyraContextEffectComponent_eventUpdateEffectContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::LyraContextEffectComponent_eventUpdateEffectContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectComponent::execUpdateEffectContexts)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_NewEffectContexts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateEffectContexts(Z_Param_NewEffectContexts);
	P_NATIVE_END;
}
// End Class ULyraContextEffectComponent Function UpdateEffectContexts

// Begin Class ULyraContextEffectComponent Function UpdateLibraries
struct Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics
{
	struct LyraContextEffectComponent_eventUpdateLibraries_Parms
	{
		TSet<TSoftObjectPtr<ULyraContextEffectsLibrary> > NewContextEffectsLibraries;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewContextEffectsLibraries_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_NewContextEffectsLibraries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries_ElementProp = { "NewContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries = { "NewContextEffectsLibraries", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectComponent_eventUpdateLibraries_Parms, NewContextEffectsLibraries), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectComponent, nullptr, "UpdateLibraries", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::LyraContextEffectComponent_eventUpdateLibraries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::LyraContextEffectComponent_eventUpdateLibraries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectComponent::execUpdateLibraries)
{
	P_GET_TSET(TSoftObjectPtr<ULyraContextEffectsLibrary>,Z_Param_NewContextEffectsLibraries);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLibraries(Z_Param_NewContextEffectsLibraries);
	P_NATIVE_END;
}
// End Class ULyraContextEffectComponent Function UpdateLibraries

// Begin Class ULyraContextEffectComponent
void ULyraContextEffectComponent::StaticRegisterNativesULyraContextEffectComponent()
{
	UClass* Class = ULyraContextEffectComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimMotionEffect_Implementation", &ULyraContextEffectComponent::execAnimMotionEffect_Implementation },
		{ "UpdateEffectContexts", &ULyraContextEffectComponent::execUpdateEffectContexts },
		{ "UpdateLibraries", &ULyraContextEffectComponent::execUpdateLibraries },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectComponent);
UClass* Z_Construct_UClass_ULyraContextEffectComponent_NoRegister()
{
	return ULyraContextEffectComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraContextEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Variable Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Collision" },
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertPhysicalSurfaceToContext_MetaData[] = {
		{ "Category", "LyraContextEffectComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-Convert Physical Surface from Trace Result to Context\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-Convert Physical Surface from Trace Result to Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectContexts_MetaData[] = {
		{ "Category", "LyraContextEffectComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default Contexts\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContextEffectsLibraries_MetaData[] = {
		{ "Category", "LyraContextEffectComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default Libraries for this Actor\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Libraries for this Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContexts_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContextEffectsLibraries_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAudioComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNiagaraComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bConvertPhysicalSurfaceToContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertPhysicalSurfaceToContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEffectContexts;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultContextEffectsLibraries_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DefaultContextEffectsLibraries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentContexts;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurrentContextEffectsLibraries_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CurrentContextEffectsLibraries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAudioComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAudioComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveNiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveNiagaraComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation, "AnimMotionEffect_Implementation" }, // 680837871
		{ &Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts, "UpdateEffectContexts" }, // 1798442767
		{ &Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries, "UpdateLibraries" }, // 832285938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_SetBit(void* Obj)
{
	((ULyraContextEffectComponent*)Obj)->bConvertPhysicalSurfaceToContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext = { "bConvertPhysicalSurfaceToContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraContextEffectComponent), &Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertPhysicalSurfaceToContext_MetaData), NewProp_bConvertPhysicalSurfaceToContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts = { "DefaultEffectContexts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectComponent, DefaultEffectContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEffectContexts_MetaData), NewProp_DefaultEffectContexts_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_ElementProp = { "DefaultContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries = { "DefaultContextEffectsLibraries", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectComponent, DefaultContextEffectsLibraries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContextEffectsLibraries_MetaData), NewProp_DefaultContextEffectsLibraries_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts = { "CurrentContexts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectComponent, CurrentContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentContexts_MetaData), NewProp_CurrentContexts_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_ElementProp = { "CurrentContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries = { "CurrentContextEffectsLibraries", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectComponent, CurrentContextEffectsLibraries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentContextEffectsLibraries_MetaData), NewProp_CurrentContextEffectsLibraries_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_Inner = { "ActiveAudioComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents = { "ActiveAudioComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectComponent, ActiveAudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAudioComponents_MetaData), NewProp_ActiveAudioComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_Inner = { "ActiveNiagaraComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents = { "ActiveNiagaraComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectComponent, ActiveNiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNiagaraComponents_MetaData), NewProp_ActiveNiagaraComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraContextEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraContextEffectComponent, ILyraContextEffectsInterface), false },  // 1556334455
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::ClassParams = {
	&ULyraContextEffectComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B020A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraContextEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraContextEffectComponent()
{
	if (!Z_Registration_Info_UClass_ULyraContextEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectComponent.OuterSingleton, Z_Construct_UClass_ULyraContextEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraContextEffectComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectComponent>()
{
	return ULyraContextEffectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectComponent);
ULyraContextEffectComponent::~ULyraContextEffectComponent() {}
// End Class ULyraContextEffectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectComponent, ULyraContextEffectComponent::StaticClass, TEXT("ULyraContextEffectComponent"), &Z_Registration_Info_UClass_ULyraContextEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectComponent), 3435818313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_125872761(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
