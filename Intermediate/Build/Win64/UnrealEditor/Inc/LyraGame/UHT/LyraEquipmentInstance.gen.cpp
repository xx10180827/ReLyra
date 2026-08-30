// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Equipment/LyraEquipmentInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEquipmentInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraEquipmentInstance Function GetInstigator
struct Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics
{
	struct LyraEquipmentInstance_eventGetInstigator_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of UObject interface\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentInstance_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::LyraEquipmentInstance_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::LyraEquipmentInstance_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentInstance::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class ULyraEquipmentInstance Function GetInstigator

// Begin Class ULyraEquipmentInstance Function GetPawn
struct Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics
{
	struct LyraEquipmentInstance_eventGetPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentInstance_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetPawn", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::LyraEquipmentInstance_eventGetPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::LyraEquipmentInstance_eventGetPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentInstance::execGetPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPawn();
	P_NATIVE_END;
}
// End Class ULyraEquipmentInstance Function GetPawn

// Begin Class ULyraEquipmentInstance Function GetSpawnedActors
struct Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics
{
	struct LyraEquipmentInstance_eventGetSpawnedActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentInstance_eventGetSpawnedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetSpawnedActors", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::LyraEquipmentInstance_eventGetSpawnedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::LyraEquipmentInstance_eventGetSpawnedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentInstance::execGetSpawnedActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedActors();
	P_NATIVE_END;
}
// End Class ULyraEquipmentInstance Function GetSpawnedActors

// Begin Class ULyraEquipmentInstance Function GetTypedPawn
struct Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics
{
	struct LyraEquipmentInstance_eventGetTypedPawn_Parms
	{
		TSubclassOf<APawn> PawnType;
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DeterminesOutputType", "PawnType" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_PawnType = { "PawnType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentInstance_eventGetTypedPawn_Parms, PawnType), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraEquipmentInstance_eventGetTypedPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_PawnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetTypedPawn", nullptr, nullptr, Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::LyraEquipmentInstance_eventGetTypedPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::LyraEquipmentInstance_eventGetTypedPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentInstance::execGetTypedPawn)
{
	P_GET_OBJECT(UClass,Z_Param_PawnType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetTypedPawn(Z_Param_PawnType);
	P_NATIVE_END;
}
// End Class ULyraEquipmentInstance Function GetTypedPawn

// Begin Class ULyraEquipmentInstance Function K2_OnEquipped
static FName NAME_ULyraEquipmentInstance_K2_OnEquipped = FName(TEXT("K2_OnEquipped"));
void ULyraEquipmentInstance::K2_OnEquipped()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraEquipmentInstance_K2_OnEquipped),NULL);
}
struct Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DisplayName", "OnEquipped" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "K2_OnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraEquipmentInstance Function K2_OnEquipped

// Begin Class ULyraEquipmentInstance Function K2_OnUnequipped
static FName NAME_ULyraEquipmentInstance_K2_OnUnequipped = FName(TEXT("K2_OnUnequipped"));
void ULyraEquipmentInstance::K2_OnUnequipped()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraEquipmentInstance_K2_OnUnequipped),NULL);
}
struct Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DisplayName", "OnUnequipped" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "K2_OnUnequipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraEquipmentInstance Function K2_OnUnequipped

// Begin Class ULyraEquipmentInstance Function OnRep_Instigator
struct Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "OnRep_Instigator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraEquipmentInstance::execOnRep_Instigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Instigator();
	P_NATIVE_END;
}
// End Class ULyraEquipmentInstance Function OnRep_Instigator

// Begin Class ULyraEquipmentInstance
void ULyraEquipmentInstance::StaticRegisterNativesULyraEquipmentInstance()
{
	UClass* Class = ULyraEquipmentInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstigator", &ULyraEquipmentInstance::execGetInstigator },
		{ "GetPawn", &ULyraEquipmentInstance::execGetPawn },
		{ "GetSpawnedActors", &ULyraEquipmentInstance::execGetSpawnedActors },
		{ "GetTypedPawn", &ULyraEquipmentInstance::execGetTypedPawn },
		{ "OnRep_Instigator", &ULyraEquipmentInstance::execOnRep_Instigator },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraEquipmentInstance);
UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister()
{
	return ULyraEquipmentInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraEquipmentInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraEquipmentInstance\n *\n * A piece of equipment spawned and applied to a pawn\n */" },
#endif
		{ "IncludePath", "Equipment/LyraEquipmentInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraEquipmentInstance\n\nA piece of equipment spawned and applied to a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator, "GetInstigator" }, // 2790713788
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn, "GetPawn" }, // 1192323272
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors, "GetSpawnedActors" }, // 1113875159
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn, "GetTypedPawn" }, // 3227741586
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped, "K2_OnEquipped" }, // 2486391177
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped, "K2_OnUnequipped" }, // 2112522029
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator, "OnRep_Instigator" }, // 1734193005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraEquipmentInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator = { "Instigator", "OnRep_Instigator", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraEquipmentInstance, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0144000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraEquipmentInstance, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActors_MetaData), NewProp_SpawnedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraEquipmentInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::ClassParams = {
	&ULyraEquipmentInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraEquipmentInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraEquipmentInstance()
{
	if (!Z_Registration_Info_UClass_ULyraEquipmentInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraEquipmentInstance.OuterSingleton, Z_Construct_UClass_ULyraEquipmentInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraEquipmentInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraEquipmentInstance>()
{
	return ULyraEquipmentInstance::StaticClass();
}
void ULyraEquipmentInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Instigator(TEXT("Instigator"));
	static const FName Name_SpawnedActors(TEXT("SpawnedActors"));
	const bool bIsValid = true
		&& Name_Instigator == ClassReps[(int32)ENetFields_Private::Instigator].Property->GetFName()
		&& Name_SpawnedActors == ClassReps[(int32)ENetFields_Private::SpawnedActors].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraEquipmentInstance"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraEquipmentInstance);
ULyraEquipmentInstance::~ULyraEquipmentInstance() {}
// End Class ULyraEquipmentInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraEquipmentInstance, ULyraEquipmentInstance::StaticClass, TEXT("ULyraEquipmentInstance"), &Z_Registration_Info_UClass_ULyraEquipmentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraEquipmentInstance), 3103249624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_4113626647(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
