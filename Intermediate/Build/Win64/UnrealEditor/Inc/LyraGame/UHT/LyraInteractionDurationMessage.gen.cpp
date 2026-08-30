// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/LyraInteractionDurationMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInteractionDurationMessage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInteractionDurationMessage();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraInteractionDurationMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage;
class UScriptStruct* FLyraInteractionDurationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInteractionDurationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInteractionDurationMessage>()
{
	return FLyraInteractionDurationMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interaction/LyraInteractionDurationMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "LyraInteractionDurationMessage" },
		{ "ModuleRelativePath", "Interaction/LyraInteractionDurationMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "LyraInteractionDurationMessage" },
		{ "ModuleRelativePath", "Interaction/LyraInteractionDurationMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInteractionDurationMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInteractionDurationMessage, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraInteractionDurationMessage, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraInteractionDurationMessage",
	Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers),
	sizeof(FLyraInteractionDurationMessage),
	alignof(FLyraInteractionDurationMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraInteractionDurationMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.InnerSingleton;
}
// End ScriptStruct FLyraInteractionDurationMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraInteractionDurationMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewStructOps, TEXT("LyraInteractionDurationMessage"), &Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInteractionDurationMessage), 3510813716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_1764469930(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
