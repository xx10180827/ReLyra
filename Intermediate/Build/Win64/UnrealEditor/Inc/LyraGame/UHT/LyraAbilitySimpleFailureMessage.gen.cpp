// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraAbilitySimpleFailureMessage.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySimpleFailureMessage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraAbilitySimpleFailureMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage;
class UScriptStruct* FLyraAbilitySimpleFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySimpleFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySimpleFailureMessage>()
{
	return FLyraAbilitySimpleFailureMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilitySimpleFailureMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "LyraAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilitySimpleFailureMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "LyraAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilitySimpleFailureMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingReason_MetaData[] = {
		{ "Category", "LyraAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilitySimpleFailureMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UserFacingReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySimpleFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySimpleFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySimpleFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 3352185621
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason = { "UserFacingReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAbilitySimpleFailureMessage, UserFacingReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserFacingReason_MetaData), NewProp_UserFacingReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAbilitySimpleFailureMessage",
	Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::PropPointers),
	sizeof(FLyraAbilitySimpleFailureMessage),
	alignof(FLyraAbilitySimpleFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage.InnerSingleton;
}
// End ScriptStruct FLyraAbilitySimpleFailureMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilitySimpleFailureMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAbilitySimpleFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySimpleFailureMessage_Statics::NewStructOps, TEXT("LyraAbilitySimpleFailureMessage"), &Z_Registration_Info_UScriptStruct_LyraAbilitySimpleFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySimpleFailureMessage), 2850206243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilitySimpleFailureMessage_h_2275757792(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
