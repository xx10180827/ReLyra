// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/LyraTeamStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamStatics();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTeamStatics Function FindTeamFromObject
struct Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics
{
	struct LyraTeamStatics_eventFindTeamFromObject_Parms
	{
		const UObject* Agent;
		bool bIsPartOfTeam;
		int32 TeamId;
		ULyraTeamDisplayAsset* DisplayAsset;
		bool bLogIfNotSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLogIfNotSet" },
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the team this object belongs to, or INDEX_NONE if it is not part of a team\n" },
#endif
		{ "CPP_Default_bLogIfNotSet", "false" },
		{ "DefaultToSelf", "Agent" },
		{ "Keywords", "GetTeamFromObject" },
		{ "ModuleRelativePath", "Teams/LyraTeamStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the team this object belongs to, or INDEX_NONE if it is not part of a team" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
	static void NewProp_bIsPartOfTeam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPartOfTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
	static void NewProp_bLogIfNotSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogIfNotSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventFindTeamFromObject_Parms, Agent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agent_MetaData), NewProp_Agent_MetaData) };
void Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bIsPartOfTeam_SetBit(void* Obj)
{
	((LyraTeamStatics_eventFindTeamFromObject_Parms*)Obj)->bIsPartOfTeam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bIsPartOfTeam = { "bIsPartOfTeam", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraTeamStatics_eventFindTeamFromObject_Parms), &Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bIsPartOfTeam_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventFindTeamFromObject_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventFindTeamFromObject_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bLogIfNotSet_SetBit(void* Obj)
{
	((LyraTeamStatics_eventFindTeamFromObject_Parms*)Obj)->bLogIfNotSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bLogIfNotSet = { "bLogIfNotSet", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraTeamStatics_eventFindTeamFromObject_Parms), &Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bLogIfNotSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_Agent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bIsPartOfTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_DisplayAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::NewProp_bLogIfNotSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamStatics, nullptr, "FindTeamFromObject", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::LyraTeamStatics_eventFindTeamFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::LyraTeamStatics_eventFindTeamFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamStatics::execFindTeamFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Agent);
	P_GET_UBOOL_REF(Z_Param_Out_bIsPartOfTeam);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TeamId);
	P_GET_OBJECT_REF(ULyraTeamDisplayAsset,Z_Param_Out_DisplayAsset);
	P_GET_UBOOL(Z_Param_bLogIfNotSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULyraTeamStatics::FindTeamFromObject(Z_Param_Agent,Z_Param_Out_bIsPartOfTeam,Z_Param_Out_TeamId,P_ARG_GC_BARRIER(Z_Param_Out_DisplayAsset),Z_Param_bLogIfNotSet);
	P_NATIVE_END;
}
// End Class ULyraTeamStatics Function FindTeamFromObject

// Begin Class ULyraTeamStatics Function GetTeamColorWithFallback
struct Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics
{
	struct LyraTeamStatics_eventGetTeamColorWithFallback_Parms
	{
		ULyraTeamDisplayAsset* DisplayAsset;
		FName ParameterName;
		FLinearColor DefaultValue;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamColorWithFallback_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamColorWithFallback_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamColorWithFallback_Parms, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamColorWithFallback_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_DisplayAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamStatics, nullptr, "GetTeamColorWithFallback", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::LyraTeamStatics_eventGetTeamColorWithFallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::LyraTeamStatics_eventGetTeamColorWithFallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamStatics::execGetTeamColorWithFallback)
{
	P_GET_OBJECT(ULyraTeamDisplayAsset,Z_Param_DisplayAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FLinearColor,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=ULyraTeamStatics::GetTeamColorWithFallback(Z_Param_DisplayAsset,Z_Param_ParameterName,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class ULyraTeamStatics Function GetTeamColorWithFallback

// Begin Class ULyraTeamStatics Function GetTeamDisplayAsset
struct Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics
{
	struct LyraTeamStatics_eventGetTeamDisplayAsset_Parms
	{
		const UObject* WorldContextObject;
		int32 TeamId;
		ULyraTeamDisplayAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamDisplayAsset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamDisplayAsset_Parms, TeamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamDisplayAsset_Parms, ReturnValue), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamStatics, nullptr, "GetTeamDisplayAsset", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::LyraTeamStatics_eventGetTeamDisplayAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::LyraTeamStatics_eventGetTeamDisplayAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamStatics::execGetTeamDisplayAsset)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraTeamDisplayAsset**)Z_Param__Result=ULyraTeamStatics::GetTeamDisplayAsset(Z_Param_WorldContextObject,Z_Param_TeamId);
	P_NATIVE_END;
}
// End Class ULyraTeamStatics Function GetTeamDisplayAsset

// Begin Class ULyraTeamStatics Function GetTeamScalarWithFallback
struct Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics
{
	struct LyraTeamStatics_eventGetTeamScalarWithFallback_Parms
	{
		ULyraTeamDisplayAsset* DisplayAsset;
		FName ParameterName;
		float DefaultValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamScalarWithFallback_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamScalarWithFallback_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamScalarWithFallback_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamScalarWithFallback_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_DisplayAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamStatics, nullptr, "GetTeamScalarWithFallback", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::LyraTeamStatics_eventGetTeamScalarWithFallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::LyraTeamStatics_eventGetTeamScalarWithFallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamStatics::execGetTeamScalarWithFallback)
{
	P_GET_OBJECT(ULyraTeamDisplayAsset,Z_Param_DisplayAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ULyraTeamStatics::GetTeamScalarWithFallback(Z_Param_DisplayAsset,Z_Param_ParameterName,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class ULyraTeamStatics Function GetTeamScalarWithFallback

// Begin Class ULyraTeamStatics Function GetTeamTextureWithFallback
struct Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics
{
	struct LyraTeamStatics_eventGetTeamTextureWithFallback_Parms
	{
		ULyraTeamDisplayAsset* DisplayAsset;
		FName ParameterName;
		UTexture* DefaultValue;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamTextureWithFallback_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamTextureWithFallback_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamTextureWithFallback_Parms, DefaultValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamStatics_eventGetTeamTextureWithFallback_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_DisplayAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamStatics, nullptr, "GetTeamTextureWithFallback", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::LyraTeamStatics_eventGetTeamTextureWithFallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::LyraTeamStatics_eventGetTeamTextureWithFallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamStatics::execGetTeamTextureWithFallback)
{
	P_GET_OBJECT(ULyraTeamDisplayAsset,Z_Param_DisplayAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UTexture,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=ULyraTeamStatics::GetTeamTextureWithFallback(Z_Param_DisplayAsset,Z_Param_ParameterName,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class ULyraTeamStatics Function GetTeamTextureWithFallback

// Begin Class ULyraTeamStatics
void ULyraTeamStatics::StaticRegisterNativesULyraTeamStatics()
{
	UClass* Class = ULyraTeamStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindTeamFromObject", &ULyraTeamStatics::execFindTeamFromObject },
		{ "GetTeamColorWithFallback", &ULyraTeamStatics::execGetTeamColorWithFallback },
		{ "GetTeamDisplayAsset", &ULyraTeamStatics::execGetTeamDisplayAsset },
		{ "GetTeamScalarWithFallback", &ULyraTeamStatics::execGetTeamScalarWithFallback },
		{ "GetTeamTextureWithFallback", &ULyraTeamStatics::execGetTeamTextureWithFallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamStatics);
UClass* Z_Construct_UClass_ULyraTeamStatics_NoRegister()
{
	return ULyraTeamStatics::StaticClass();
}
struct Z_Construct_UClass_ULyraTeamStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A subsystem for easy access to team information for team-based actors (e.g., pawns or player states) */" },
#endif
		{ "IncludePath", "Teams/LyraTeamStatics.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTeamStatics_FindTeamFromObject, "FindTeamFromObject" }, // 373758693
		{ &Z_Construct_UFunction_ULyraTeamStatics_GetTeamColorWithFallback, "GetTeamColorWithFallback" }, // 1202593038
		{ &Z_Construct_UFunction_ULyraTeamStatics_GetTeamDisplayAsset, "GetTeamDisplayAsset" }, // 578242240
		{ &Z_Construct_UFunction_ULyraTeamStatics_GetTeamScalarWithFallback, "GetTeamScalarWithFallback" }, // 1829534683
		{ &Z_Construct_UFunction_ULyraTeamStatics_GetTeamTextureWithFallback, "GetTeamTextureWithFallback" }, // 3979421538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraTeamStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamStatics_Statics::ClassParams = {
	&ULyraTeamStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTeamStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTeamStatics()
{
	if (!Z_Registration_Info_UClass_ULyraTeamStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamStatics.OuterSingleton, Z_Construct_UClass_ULyraTeamStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTeamStatics.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTeamStatics>()
{
	return ULyraTeamStatics::StaticClass();
}
ULyraTeamStatics::ULyraTeamStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamStatics);
ULyraTeamStatics::~ULyraTeamStatics() {}
// End Class ULyraTeamStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamStatics, ULyraTeamStatics::StaticClass, TEXT("ULyraTeamStatics"), &Z_Registration_Info_UClass_ULyraTeamStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamStatics), 255268015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_3140578065(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
