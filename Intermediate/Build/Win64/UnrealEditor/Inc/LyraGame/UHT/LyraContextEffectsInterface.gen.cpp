// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/ContextEffects/LyraContextEffectsInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectsInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsInterface();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EEffectsContextMatchType();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum EEffectsContextMatchType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectsContextMatchType;
static UEnum* EEffectsContextMatchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectsContextMatchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectsContextMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EEffectsContextMatchType"));
	}
	return Z_Registration_Info_UEnum_EEffectsContextMatchType.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<EEffectsContextMatchType>()
{
	return EEffectsContextMatchType_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BestMatch.Comment", "/**\n *\n */" },
		{ "BestMatch.Name", "BestMatch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ExactMatch.Comment", "/**\n *\n */" },
		{ "ExactMatch.Name", "ExactMatch" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsInterface.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ExactMatch", (int64)ExactMatch },
		{ "BestMatch", (int64)BestMatch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"EEffectsContextMatchType",
	"EEffectsContextMatchType",
	Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_EEffectsContextMatchType()
{
	if (!Z_Registration_Info_UEnum_EEffectsContextMatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectsContextMatchType.InnerSingleton, Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectsContextMatchType.InnerSingleton;
}
// End Enum EEffectsContextMatchType

// Begin Interface ULyraContextEffectsInterface Function AnimMotionEffect
struct LyraContextEffectsInterface_eventAnimMotionEffect_Parms
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
void ILyraContextEffectsInterface::AnimMotionEffect(const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AnimMotionEffect instead.");
}
static FName NAME_ULyraContextEffectsInterface_AnimMotionEffect = FName(TEXT("AnimMotionEffect"));
void ILyraContextEffectsInterface::Execute_AnimMotionEffect(UObject* O, const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULyraContextEffectsInterface::StaticClass()));
	LyraContextEffectsInterface_eventAnimMotionEffect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULyraContextEffectsInterface_AnimMotionEffect);
	if (Func)
	{
		Parms.Bone=Bone;
		Parms.MotionEffect=MotionEffect;
		Parms.StaticMeshComponent=StaticMeshComponent;
		Parms.LocationOffset=LocationOffset;
		Parms.RotationOffset=RotationOffset;
		Parms.AnimationSequence=AnimationSequence;
		Parms.bHitSuccess=bHitSuccess;
		Parms.HitResult=HitResult;
		Parms.Contexts=Contexts;
		Parms.VFXScale=VFXScale;
		Parms.AudioVolume=AudioVolume;
		Parms.AudioPitch=AudioPitch;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ILyraContextEffectsInterface*)(O->GetNativeInterfaceAddress(ULyraContextEffectsInterface::StaticClass())))
	{
		I->AnimMotionEffect_Implementation(Bone,MotionEffect,StaticMeshComponent,LocationOffset,RotationOffset,AnimationSequence,bHitSuccess,HitResult,Contexts,VFXScale,AudioVolume,AudioPitch);
	}
}
struct Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "CPP_Default_AudioPitch", "1.000000" },
		{ "CPP_Default_AudioVolume", "1.000000" },
		{ "CPP_Default_VFXScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsInterface.h" },
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect = { "MotionEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, MotionEffect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionEffect_MetaData), NewProp_MotionEffect_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, StaticMeshComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSequence_MetaData), NewProp_AnimationSequence_MetaData) };
void Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_SetBit(void* Obj)
{
	((LyraContextEffectsInterface_eventAnimMotionEffect_Parms*)Obj)->bHitSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess = { "bHitSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraContextEffectsInterface_eventAnimMotionEffect_Parms), &Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitSuccess_MetaData), NewProp_bHitSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, Contexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_VFXScale = { "VFXScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, VFXScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, AudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioPitch = { "AudioPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, AudioPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Contexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_VFXScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsInterface, nullptr, "AnimMotionEffect", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers), sizeof(LyraContextEffectsInterface_eventAnimMotionEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraContextEffectsInterface_eventAnimMotionEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILyraContextEffectsInterface::execAnimMotionEffect)
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
// End Interface ULyraContextEffectsInterface Function AnimMotionEffect

// Begin Interface ULyraContextEffectsInterface
void ULyraContextEffectsInterface::StaticRegisterNativesULyraContextEffectsInterface()
{
	UClass* Class = ULyraContextEffectsInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimMotionEffect", &ILyraContextEffectsInterface::execAnimMotionEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsInterface);
UClass* Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister()
{
	return ULyraContextEffectsInterface::StaticClass();
}
struct Z_Construct_UClass_ULyraContextEffectsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect, "AnimMotionEffect" }, // 1251480123
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraContextEffectsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraContextEffectsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsInterface_Statics::ClassParams = {
	&ULyraContextEffectsInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraContextEffectsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraContextEffectsInterface()
{
	if (!Z_Registration_Info_UClass_ULyraContextEffectsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsInterface.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraContextEffectsInterface.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectsInterface>()
{
	return ULyraContextEffectsInterface::StaticClass();
}
ULyraContextEffectsInterface::ULyraContextEffectsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsInterface);
ULyraContextEffectsInterface::~ULyraContextEffectsInterface() {}
// End Interface ULyraContextEffectsInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEffectsContextMatchType_StaticEnum, TEXT("EEffectsContextMatchType"), &Z_Registration_Info_UEnum_EEffectsContextMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3523732416U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectsInterface, ULyraContextEffectsInterface::StaticClass, TEXT("ULyraContextEffectsInterface"), &Z_Registration_Info_UClass_ULyraContextEffectsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsInterface), 1556334455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_1430013495(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
