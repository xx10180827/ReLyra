// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/InteractionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionQuery() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionQuery();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FInteractionQuery
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionQuery;
class UScriptStruct* FInteractionQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionQuery, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("InteractionQuery"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionQuery.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FInteractionQuery>()
{
	return FInteractionQuery::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestingAvatar_MetaData[] = {
		{ "Category", "InteractionQuery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The requesting pawn. */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The requesting pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestingController_MetaData[] = {
		{ "Category", "InteractionQuery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allow us to specify a controller - does not need to match the owner of the requesting avatar. */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow us to specify a controller - does not need to match the owner of the requesting avatar." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObjectData_MetaData[] = {
		{ "Category", "InteractionQuery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generic UObject to shove in extra data required for the interaction */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generic UObject to shove in extra data required for the interaction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RequestingAvatar;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RequestingController;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OptionalObjectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionQuery>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar = { "RequestingAvatar", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionQuery, RequestingAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestingAvatar_MetaData), NewProp_RequestingAvatar_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController = { "RequestingController", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionQuery, RequestingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestingController_MetaData), NewProp_RequestingController_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData = { "OptionalObjectData", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionQuery, OptionalObjectData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObjectData_MetaData), NewProp_OptionalObjectData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"InteractionQuery",
	Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers),
	sizeof(FInteractionQuery),
	alignof(FInteractionQuery),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionQuery_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionQuery()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionQuery.InnerSingleton, Z_Construct_UScriptStruct_FInteractionQuery_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionQuery.InnerSingleton;
}
// End ScriptStruct FInteractionQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionQuery::StaticStruct, Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewStructOps, TEXT("InteractionQuery"), &Z_Registration_Info_UScriptStruct_InteractionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionQuery), 2707672158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_833749486(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
