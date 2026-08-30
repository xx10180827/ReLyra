// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraWeaponInstance.h"
#include "LyraGame/Cosmetics/LyraCosmeticAnimationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/InputDevicePropertyHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraWeaponInstance Function GetOwningUserId
struct Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct LyraWeaponInstance_eventGetOwningUserId_Parms
	{
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the owning Pawn's Platform User ID */" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning Pawn's Platform User ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponInstance_eventGetOwningUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "GetOwningUserId", nullptr, nullptr, Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::LyraWeaponInstance_eventGetOwningUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::LyraWeaponInstance_eventGetOwningUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWeaponInstance::execGetOwningUserId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=P_THIS->GetOwningUserId();
	P_NATIVE_END;
}
// End Class ULyraWeaponInstance Function GetOwningUserId

// Begin Class ULyraWeaponInstance Function GetTimeSinceLastInteractedWith
struct Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics
{
	struct LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns how long it's been since the weapon was interacted with (fired or equipped)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns how long it's been since the weapon was interacted with (fired or equipped)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "GetTimeSinceLastInteractedWith", nullptr, nullptr, Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::LyraWeaponInstance_eventGetTimeSinceLastInteractedWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWeaponInstance::execGetTimeSinceLastInteractedWith)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeSinceLastInteractedWith();
	P_NATIVE_END;
}
// End Class ULyraWeaponInstance Function GetTimeSinceLastInteractedWith

// Begin Class ULyraWeaponInstance Function OnDeathStarted
struct Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics
{
	struct LyraWeaponInstance_eventOnDeathStarted_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback for when the owning pawn of this weapon dies. Removes all spawned device properties. */" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback for when the owning pawn of this weapon dies. Removes all spawned device properties." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponInstance_eventOnDeathStarted_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "OnDeathStarted", nullptr, nullptr, Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::LyraWeaponInstance_eventOnDeathStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::LyraWeaponInstance_eventOnDeathStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWeaponInstance::execOnDeathStarted)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeathStarted(Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class ULyraWeaponInstance Function OnDeathStarted

// Begin Class ULyraWeaponInstance Function PickBestAnimLayer
struct Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics
{
	struct LyraWeaponInstance_eventPickBestAnimLayer_Parms
	{
		bool bEquipped;
		FGameplayTagContainer CosmeticTags;
		TSubclassOf<UAnimInstance> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Choose the best layer from EquippedAnimSet or UneuippedAnimSet based on the specified gameplay tags\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Choose the best layer from EquippedAnimSet or UneuippedAnimSet based on the specified gameplay tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CosmeticTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped_SetBit(void* Obj)
{
	((LyraWeaponInstance_eventPickBestAnimLayer_Parms*)Obj)->bEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped = { "bEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraWeaponInstance_eventPickBestAnimLayer_Parms), &Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags = { "CosmeticTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponInstance_eventPickBestAnimLayer_Parms, CosmeticTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosmeticTags_MetaData), NewProp_CosmeticTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponInstance_eventPickBestAnimLayer_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "PickBestAnimLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::LyraWeaponInstance_eventPickBestAnimLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::LyraWeaponInstance_eventPickBestAnimLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWeaponInstance::execPickBestAnimLayer)
{
	P_GET_UBOOL(Z_Param_bEquipped);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CosmeticTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UAnimInstance>*)Z_Param__Result=P_THIS->PickBestAnimLayer(Z_Param_bEquipped,Z_Param_Out_CosmeticTags);
	P_NATIVE_END;
}
// End Class ULyraWeaponInstance Function PickBestAnimLayer

// Begin Class ULyraWeaponInstance Function UpdateFiringTime
struct Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of ULyraEquipmentInstance interface\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponInstance, nullptr, "UpdateFiringTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWeaponInstance::execUpdateFiringTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFiringTime();
	P_NATIVE_END;
}
// End Class ULyraWeaponInstance Function UpdateFiringTime

// Begin Class ULyraWeaponInstance
void ULyraWeaponInstance::StaticRegisterNativesULyraWeaponInstance()
{
	UClass* Class = ULyraWeaponInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningUserId", &ULyraWeaponInstance::execGetOwningUserId },
		{ "GetTimeSinceLastInteractedWith", &ULyraWeaponInstance::execGetTimeSinceLastInteractedWith },
		{ "OnDeathStarted", &ULyraWeaponInstance::execOnDeathStarted },
		{ "PickBestAnimLayer", &ULyraWeaponInstance::execPickBestAnimLayer },
		{ "UpdateFiringTime", &ULyraWeaponInstance::execUpdateFiringTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponInstance);
UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister()
{
	return ULyraWeaponInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraWeaponInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraWeaponInstance\n *\n * A piece of equipment representing a weapon spawned and applied to a pawn\n */" },
#endif
		{ "IncludePath", "Weapons/LyraWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraWeaponInstance\n\nA piece of equipment representing a weapon spawned and applied to a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAnimSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UneuippedAnimSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicableDeviceProperties_Inner_MetaData[] = {
		{ "Category", "Input Devices" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Device properties that should be applied while this weapon is equipped.\n\x09 * These properties will be played in with the \"Looping\" flag enabled, so they will\n\x09 * play continuously until this weapon is unequipped! \n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device properties that should be applied while this weapon is equipped.\nThese properties will be played in with the \"Looping\" flag enabled, so they will\nplay continuously until this weapon is unequipped!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicableDeviceProperties_MetaData[] = {
		{ "Category", "Input Devices" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Device properties that should be applied while this weapon is equipped.\n\x09 * These properties will be played in with the \"Looping\" flag enabled, so they will\n\x09 * play continuously until this weapon is unequipped! \n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device properties that should be applied while this weapon is equipped.\nThese properties will be played in with the \"Looping\" flag enabled, so they will\nplay continuously until this weapon is unequipped!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DevicePropertyHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set of device properties activated by this weapon. Populated by ApplyDeviceProperties */" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set of device properties activated by this weapon. Populated by ApplyDeviceProperties" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedAnimSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UneuippedAnimSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplicableDeviceProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicableDeviceProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DevicePropertyHandles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DevicePropertyHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWeaponInstance_GetOwningUserId, "GetOwningUserId" }, // 2862764855
		{ &Z_Construct_UFunction_ULyraWeaponInstance_GetTimeSinceLastInteractedWith, "GetTimeSinceLastInteractedWith" }, // 125533642
		{ &Z_Construct_UFunction_ULyraWeaponInstance_OnDeathStarted, "OnDeathStarted" }, // 742946087
		{ &Z_Construct_UFunction_ULyraWeaponInstance_PickBestAnimLayer, "PickBestAnimLayer" }, // 2168549608
		{ &Z_Construct_UFunction_ULyraWeaponInstance_UpdateFiringTime, "UpdateFiringTime" }, // 2303443168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet = { "EquippedAnimSet", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponInstance, EquippedAnimSet), Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedAnimSet_MetaData), NewProp_EquippedAnimSet_MetaData) }; // 3591606580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet = { "UneuippedAnimSet", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponInstance, UneuippedAnimSet), Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UneuippedAnimSet_MetaData), NewProp_UneuippedAnimSet_MetaData) }; // 3591606580
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_ApplicableDeviceProperties_Inner = { "ApplicableDeviceProperties", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicableDeviceProperties_Inner_MetaData), NewProp_ApplicableDeviceProperties_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_ApplicableDeviceProperties = { "ApplicableDeviceProperties", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponInstance, ApplicableDeviceProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicableDeviceProperties_MetaData), NewProp_ApplicableDeviceProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_DevicePropertyHandles_ElementProp = { "DevicePropertyHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(0, nullptr) }; // 158936348
static_assert(TModels_V<CGetTypeHashable, FInputDevicePropertyHandle>, "The structure 'FInputDevicePropertyHandle' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_DevicePropertyHandles = { "DevicePropertyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponInstance, DevicePropertyHandles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DevicePropertyHandles_MetaData), NewProp_DevicePropertyHandles_MetaData) }; // 158936348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_EquippedAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_UneuippedAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_ApplicableDeviceProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_ApplicableDeviceProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_DevicePropertyHandles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponInstance_Statics::NewProp_DevicePropertyHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraWeaponInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraEquipmentInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponInstance_Statics::ClassParams = {
	&ULyraWeaponInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWeaponInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWeaponInstance()
{
	if (!Z_Registration_Info_UClass_ULyraWeaponInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponInstance.OuterSingleton, Z_Construct_UClass_ULyraWeaponInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWeaponInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponInstance>()
{
	return ULyraWeaponInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponInstance);
ULyraWeaponInstance::~ULyraWeaponInstance() {}
// End Class ULyraWeaponInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponInstance, ULyraWeaponInstance::StaticClass, TEXT("ULyraWeaponInstance"), &Z_Registration_Info_UClass_ULyraWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponInstance), 2288586626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_1444651965(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
