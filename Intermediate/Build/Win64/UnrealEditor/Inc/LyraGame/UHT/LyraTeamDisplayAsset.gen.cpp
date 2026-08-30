// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/LyraTeamDisplayAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamDisplayAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTeamDisplayAsset Function ApplyToActor
struct Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics
{
	struct LyraTeamDisplayAsset_eventApplyToActor_Parms
	{
		AActor* TargetActor;
		bool bIncludeChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_bIncludeChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamDisplayAsset_eventApplyToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
{
	((LyraTeamDisplayAsset_eventApplyToActor_Parms*)Obj)->bIncludeChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraTeamDisplayAsset_eventApplyToActor_Parms), &Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::NewProp_bIncludeChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamDisplayAsset, nullptr, "ApplyToActor", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::LyraTeamDisplayAsset_eventApplyToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::LyraTeamDisplayAsset_eventApplyToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamDisplayAsset::execApplyToActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_UBOOL(Z_Param_bIncludeChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToActor(Z_Param_TargetActor,Z_Param_bIncludeChildActors);
	P_NATIVE_END;
}
// End Class ULyraTeamDisplayAsset Function ApplyToActor

// Begin Class ULyraTeamDisplayAsset Function ApplyToMaterial
struct Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics
{
	struct LyraTeamDisplayAsset_eventApplyToMaterial_Parms
	{
		UMaterialInstanceDynamic* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamDisplayAsset_eventApplyToMaterial_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamDisplayAsset, nullptr, "ApplyToMaterial", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::LyraTeamDisplayAsset_eventApplyToMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::LyraTeamDisplayAsset_eventApplyToMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamDisplayAsset::execApplyToMaterial)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// End Class ULyraTeamDisplayAsset Function ApplyToMaterial

// Begin Class ULyraTeamDisplayAsset Function ApplyToMeshComponent
struct Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics
{
	struct LyraTeamDisplayAsset_eventApplyToMeshComponent_Parms
	{
		UMeshComponent* MeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamDisplayAsset_eventApplyToMeshComponent_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamDisplayAsset, nullptr, "ApplyToMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::LyraTeamDisplayAsset_eventApplyToMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::LyraTeamDisplayAsset_eventApplyToMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamDisplayAsset::execApplyToMeshComponent)
{
	P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToMeshComponent(Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class ULyraTeamDisplayAsset Function ApplyToMeshComponent

// Begin Class ULyraTeamDisplayAsset Function ApplyToNiagaraComponent
struct Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics
{
	struct LyraTeamDisplayAsset_eventApplyToNiagaraComponent_Parms
	{
		UNiagaraComponent* NiagaraComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamDisplayAsset_eventApplyToNiagaraComponent_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::NewProp_NiagaraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamDisplayAsset, nullptr, "ApplyToNiagaraComponent", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::LyraTeamDisplayAsset_eventApplyToNiagaraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::LyraTeamDisplayAsset_eventApplyToNiagaraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamDisplayAsset::execApplyToNiagaraComponent)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToNiagaraComponent(Z_Param_NiagaraComponent);
	P_NATIVE_END;
}
// End Class ULyraTeamDisplayAsset Function ApplyToNiagaraComponent

// Begin Class ULyraTeamDisplayAsset
void ULyraTeamDisplayAsset::StaticRegisterNativesULyraTeamDisplayAsset()
{
	UClass* Class = ULyraTeamDisplayAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyToActor", &ULyraTeamDisplayAsset::execApplyToActor },
		{ "ApplyToMaterial", &ULyraTeamDisplayAsset::execApplyToMaterial },
		{ "ApplyToMeshComponent", &ULyraTeamDisplayAsset::execApplyToMeshComponent },
		{ "ApplyToNiagaraComponent", &ULyraTeamDisplayAsset::execApplyToNiagaraComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamDisplayAsset);
UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister()
{
	return ULyraTeamDisplayAsset::StaticClass();
}
struct Z_Construct_UClass_ULyraTeamDisplayAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents the display information for team definitions (e.g., colors, display names, textures, etc...)\n" },
#endif
		{ "IncludePath", "Teams/LyraTeamDisplayAsset.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the display information for team definitions (e.g., colors, display names, textures, etc...)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[] = {
		{ "Category", "LyraTeamDisplayAsset" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameters_MetaData[] = {
		{ "Category", "LyraTeamDisplayAsset" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameters_MetaData[] = {
		{ "Category", "LyraTeamDisplayAsset" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamShortName_MetaData[] = {
		{ "Category", "LyraTeamDisplayAsset" },
		{ "ModuleRelativePath", "Teams/LyraTeamDisplayAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarParameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScalarParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ScalarParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorParameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColorParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ColorParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureParameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TextureParameters;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TeamShortName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToActor, "ApplyToActor" }, // 4093605114
		{ &Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMaterial, "ApplyToMaterial" }, // 866330542
		{ &Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToMeshComponent, "ApplyToMeshComponent" }, // 1036481922
		{ &Z_Construct_UFunction_ULyraTeamDisplayAsset_ApplyToNiagaraComponent, "ApplyToNiagaraComponent" }, // 3936041491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamDisplayAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ScalarParameters_ValueProp = { "ScalarParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ScalarParameters_Key_KeyProp = { "ScalarParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ScalarParameters = { "ScalarParameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamDisplayAsset, ScalarParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameters_MetaData), NewProp_ScalarParameters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ColorParameters_ValueProp = { "ColorParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ColorParameters_Key_KeyProp = { "ColorParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ColorParameters = { "ColorParameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamDisplayAsset, ColorParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorParameters_MetaData), NewProp_ColorParameters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TextureParameters_ValueProp = { "TextureParameters", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TextureParameters_Key_KeyProp = { "TextureParameters_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TextureParameters = { "TextureParameters", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamDisplayAsset, TextureParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureParameters_MetaData), NewProp_TextureParameters_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TeamShortName = { "TeamShortName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamDisplayAsset, TeamShortName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamShortName_MetaData), NewProp_TeamShortName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ScalarParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ScalarParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ScalarParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ColorParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ColorParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_ColorParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TextureParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TextureParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TextureParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::NewProp_TeamShortName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::ClassParams = {
	&ULyraTeamDisplayAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTeamDisplayAsset()
{
	if (!Z_Registration_Info_UClass_ULyraTeamDisplayAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamDisplayAsset.OuterSingleton, Z_Construct_UClass_ULyraTeamDisplayAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTeamDisplayAsset.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTeamDisplayAsset>()
{
	return ULyraTeamDisplayAsset::StaticClass();
}
ULyraTeamDisplayAsset::ULyraTeamDisplayAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamDisplayAsset);
ULyraTeamDisplayAsset::~ULyraTeamDisplayAsset() {}
// End Class ULyraTeamDisplayAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamDisplayAsset, ULyraTeamDisplayAsset::StaticClass, TEXT("ULyraTeamDisplayAsset"), &Z_Registration_Info_UClass_ULyraTeamDisplayAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamDisplayAsset), 3647309666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_2747451805(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
