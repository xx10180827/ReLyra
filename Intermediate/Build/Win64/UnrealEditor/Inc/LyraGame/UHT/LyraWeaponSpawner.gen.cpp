// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraWeaponSpawner.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraWeaponSpawner();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraWeaponSpawner_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraWeaponSpawner Function AttemptPickUpWeapon
struct LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms
{
	APawn* Pawn;
};
static FName NAME_ALyraWeaponSpawner_AttemptPickUpWeapon = FName(TEXT("AttemptPickUpWeapon"));
void ALyraWeaponSpawner::AttemptPickUpWeapon(APawn* Pawn)
{
	LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms Parms;
	Parms.Pawn=Pawn;
	ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_AttemptPickUpWeapon),&Parms);
}
struct Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "AttemptPickUpWeapon", nullptr, nullptr, Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::PropPointers), sizeof(LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraWeaponSpawner_eventAttemptPickUpWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execAttemptPickUpWeapon)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttemptPickUpWeapon_Implementation(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function AttemptPickUpWeapon

// Begin Class ALyraWeaponSpawner Function GetDefaultStatFromItemDef
struct Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics
{
	struct LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms
	{
		const TSubclassOf<ULyraInventoryItemDefinition> WeaponItemClass;
		FGameplayTag StatTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Searches an item definition type for a matching stat and returns the value, or 0 if not found */" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches an item definition type for a matching stat and returns the value, or 0 if not found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponItemClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponItemClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass = { "WeaponItemClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms, WeaponItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponItemClass_MetaData), NewProp_WeaponItemClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_WeaponItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "GetDefaultStatFromItemDef", nullptr, nullptr, Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::LyraWeaponSpawner_eventGetDefaultStatFromItemDef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execGetDefaultStatFromItemDef)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponItemClass);
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ALyraWeaponSpawner::GetDefaultStatFromItemDef(Z_Param_WeaponItemClass,Z_Param_StatTag);
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function GetDefaultStatFromItemDef

// Begin Class ALyraWeaponSpawner Function GiveWeapon
struct LyraWeaponSpawner_eventGiveWeapon_Parms
{
	TSubclassOf<ULyraInventoryItemDefinition> WeaponItemClass;
	APawn* ReceivingPawn;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	LyraWeaponSpawner_eventGiveWeapon_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ALyraWeaponSpawner_GiveWeapon = FName(TEXT("GiveWeapon"));
bool ALyraWeaponSpawner::GiveWeapon(TSubclassOf<ULyraInventoryItemDefinition> WeaponItemClass, APawn* ReceivingPawn)
{
	LyraWeaponSpawner_eventGiveWeapon_Parms Parms;
	Parms.WeaponItemClass=WeaponItemClass;
	Parms.ReceivingPawn=ReceivingPawn;
	ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_GiveWeapon),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceivingPawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_WeaponItemClass = { "WeaponItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventGiveWeapon_Parms, WeaponItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReceivingPawn = { "ReceivingPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventGiveWeapon_Parms, ReceivingPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraWeaponSpawner_eventGiveWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraWeaponSpawner_eventGiveWeapon_Parms), &Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_WeaponItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReceivingPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "GiveWeapon", nullptr, nullptr, Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::PropPointers), sizeof(LyraWeaponSpawner_eventGiveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraWeaponSpawner_eventGiveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALyraWeaponSpawner Function GiveWeapon

// Begin Class ALyraWeaponSpawner Function OnCoolDownTimerComplete
struct Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "OnCoolDownTimerComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execOnCoolDownTimerComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCoolDownTimerComplete();
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function OnCoolDownTimerComplete

// Begin Class ALyraWeaponSpawner Function OnOverlapBegin
struct Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics
{
	struct LyraWeaponSpawner_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepHitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((LyraWeaponSpawner_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraWeaponSpawner_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponSpawner_eventOnOverlapBegin_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepHitResult_MetaData), NewProp_SweepHitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::NewProp_SweepHitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::LyraWeaponSpawner_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::LyraWeaponSpawner_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHitResult);
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function OnOverlapBegin

// Begin Class ALyraWeaponSpawner Function OnRep_WeaponAvailability
struct Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "OnRep_WeaponAvailability", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execOnRep_WeaponAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeaponAvailability();
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function OnRep_WeaponAvailability

// Begin Class ALyraWeaponSpawner Function PlayPickupEffects
static FName NAME_ALyraWeaponSpawner_PlayPickupEffects = FName(TEXT("PlayPickupEffects"));
void ALyraWeaponSpawner::PlayPickupEffects()
{
	ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_PlayPickupEffects),NULL);
}
struct Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "PlayPickupEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execPlayPickupEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayPickupEffects_Implementation();
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function PlayPickupEffects

// Begin Class ALyraWeaponSpawner Function PlayRespawnEffects
static FName NAME_ALyraWeaponSpawner_PlayRespawnEffects = FName(TEXT("PlayRespawnEffects"));
void ALyraWeaponSpawner::PlayRespawnEffects()
{
	ProcessEvent(FindFunctionChecked(NAME_ALyraWeaponSpawner_PlayRespawnEffects),NULL);
}
struct Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "PlayRespawnEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execPlayRespawnEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayRespawnEffects_Implementation();
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function PlayRespawnEffects

// Begin Class ALyraWeaponSpawner Function ResetCoolDown
struct Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraWeaponSpawner, nullptr, "ResetCoolDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraWeaponSpawner::execResetCoolDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCoolDown();
	P_NATIVE_END;
}
// End Class ALyraWeaponSpawner Function ResetCoolDown

// Begin Class ALyraWeaponSpawner
void ALyraWeaponSpawner::StaticRegisterNativesALyraWeaponSpawner()
{
	UClass* Class = ALyraWeaponSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttemptPickUpWeapon", &ALyraWeaponSpawner::execAttemptPickUpWeapon },
		{ "GetDefaultStatFromItemDef", &ALyraWeaponSpawner::execGetDefaultStatFromItemDef },
		{ "OnCoolDownTimerComplete", &ALyraWeaponSpawner::execOnCoolDownTimerComplete },
		{ "OnOverlapBegin", &ALyraWeaponSpawner::execOnOverlapBegin },
		{ "OnRep_WeaponAvailability", &ALyraWeaponSpawner::execOnRep_WeaponAvailability },
		{ "PlayPickupEffects", &ALyraWeaponSpawner::execPlayPickupEffects },
		{ "PlayRespawnEffects", &ALyraWeaponSpawner::execPlayRespawnEffects },
		{ "ResetCoolDown", &ALyraWeaponSpawner::execResetCoolDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraWeaponSpawner);
UClass* Z_Construct_UClass_ALyraWeaponSpawner_NoRegister()
{
	return ALyraWeaponSpawner::StaticClass();
}
struct Z_Construct_UClass_ALyraWeaponSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/LyraWeaponSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDefinition_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Data asset used to configure a Weapon Spawner\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset used to configure a Weapon Spawner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponAvailable_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The amount of time between weapon pickup and weapon spawning in seconds\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time between weapon pickup and weapon spawning in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckExistingOverlapDelay_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delay between when the weapon is made available and when we check for a pawn standing in the spawner. Used to give the bIsWeaponAvailable OnRep time to fire and play FX. \n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay between when the weapon is made available and when we check for a pawn standing in the spawner. Used to give the bIsWeaponAvailable OnRep time to fire and play FX." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownPercentage_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used to drive weapon respawn time indicators 0-1\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to drive weapon respawn time indicators 0-1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVolume_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadMesh_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshRotationSpeed_MetaData[] = {
		{ "Category", "Lyra|WeaponPickup" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponDefinition;
	static void NewProp_bIsWeaponAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponAvailable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckExistingOverlapDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownPercentage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PadMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponMeshRotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_AttemptPickUpWeapon, "AttemptPickUpWeapon" }, // 2359446182
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_GetDefaultStatFromItemDef, "GetDefaultStatFromItemDef" }, // 518185808
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_GiveWeapon, "GiveWeapon" }, // 2559832093
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_OnCoolDownTimerComplete, "OnCoolDownTimerComplete" }, // 4206705392
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_OnOverlapBegin, "OnOverlapBegin" }, // 2620689077
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_OnRep_WeaponAvailability, "OnRep_WeaponAvailability" }, // 3677606627
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_PlayPickupEffects, "PlayPickupEffects" }, // 1878133186
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_PlayRespawnEffects, "PlayRespawnEffects" }, // 3373422927
		{ &Z_Construct_UFunction_ALyraWeaponSpawner_ResetCoolDown, "ResetCoolDown" }, // 3899216340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraWeaponSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition = { "WeaponDefinition", nullptr, (EPropertyFlags)0x0124080000000815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, WeaponDefinition), Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDefinition_MetaData), NewProp_WeaponDefinition_MetaData) };
void Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_SetBit(void* Obj)
{
	((ALyraWeaponSpawner*)Obj)->bIsWeaponAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable = { "bIsWeaponAvailable", "OnRep_WeaponAvailability", (EPropertyFlags)0x0020080100010025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALyraWeaponSpawner), &Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWeaponAvailable_MetaData), NewProp_bIsWeaponAvailable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, CoolDownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDownTime_MetaData), NewProp_CoolDownTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay = { "CheckExistingOverlapDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, CheckExistingOverlapDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckExistingOverlapDelay_MetaData), NewProp_CheckExistingOverlapDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage = { "CoolDownPercentage", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, CoolDownPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDownPercentage_MetaData), NewProp_CoolDownPercentage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume = { "CollisionVolume", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, CollisionVolume), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionVolume_MetaData), NewProp_CollisionVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh = { "PadMesh", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, PadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadMesh_MetaData), NewProp_PadMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed = { "WeaponMeshRotationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWeaponSpawner, WeaponMeshRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeshRotationSpeed_MetaData), NewProp_WeaponMeshRotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_bIsWeaponAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CheckExistingOverlapDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CoolDownPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_CollisionVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_PadMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWeaponSpawner_Statics::NewProp_WeaponMeshRotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraWeaponSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraWeaponSpawner_Statics::ClassParams = {
	&ALyraWeaponSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWeaponSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraWeaponSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraWeaponSpawner()
{
	if (!Z_Registration_Info_UClass_ALyraWeaponSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraWeaponSpawner.OuterSingleton, Z_Construct_UClass_ALyraWeaponSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraWeaponSpawner.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraWeaponSpawner>()
{
	return ALyraWeaponSpawner::StaticClass();
}
void ALyraWeaponSpawner::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsWeaponAvailable(TEXT("bIsWeaponAvailable"));
	const bool bIsValid = true
		&& Name_bIsWeaponAvailable == ClassReps[(int32)ENetFields_Private::bIsWeaponAvailable].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraWeaponSpawner"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraWeaponSpawner);
ALyraWeaponSpawner::~ALyraWeaponSpawner() {}
// End Class ALyraWeaponSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraWeaponSpawner, ALyraWeaponSpawner::StaticClass, TEXT("ALyraWeaponSpawner"), &Z_Registration_Info_UClass_ALyraWeaponSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraWeaponSpawner), 2244809259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_3581406877(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
