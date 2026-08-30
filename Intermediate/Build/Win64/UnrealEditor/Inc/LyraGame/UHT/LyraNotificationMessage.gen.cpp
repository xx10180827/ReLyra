// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Messages/LyraNotificationMessage.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraNotificationMessage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraNotificationMessage();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraNotificationMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraNotificationMessage;
class UScriptStruct* FLyraNotificationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraNotificationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraNotificationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraNotificationMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraNotificationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraNotificationMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraNotificationMessage>()
{
	return FLyraNotificationMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A message destined for a transient log (e.g., an elimination feed or inventory pickup stream)\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A message destined for a transient log (e.g., an elimination feed or inventory pickup stream)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChannel_MetaData[] = {
		{ "Category", "Notification" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The destination channel\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The destination channel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "Notification" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The target player (if none is set then it will display for all local players)\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target player (if none is set then it will display for all local players)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadMessage_MetaData[] = {
		{ "Category", "Notification" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The message to display\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The message to display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadTag_MetaData[] = {
		{ "Category", "Notification" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extra payload specific to the target channel (e.g., a style or definition asset)\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra payload specific to the target channel (e.g., a style or definition asset)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadObject_MetaData[] = {
		{ "Category", "Notification" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extra payload specific to the target channel (e.g., a style or definition asset)\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra payload specific to the target channel (e.g., a style or definition asset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PayloadMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PayloadObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraNotificationMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel = { "TargetChannel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraNotificationMessage, TargetChannel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChannel_MetaData), NewProp_TargetChannel_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraNotificationMessage, TargetPlayer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayer_MetaData), NewProp_TargetPlayer_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage = { "PayloadMessage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraNotificationMessage, PayloadMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadMessage_MetaData), NewProp_PayloadMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag = { "PayloadTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraNotificationMessage, PayloadTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadTag_MetaData), NewProp_PayloadTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject = { "PayloadObject", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraNotificationMessage, PayloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadObject_MetaData), NewProp_PayloadObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraNotificationMessage",
	Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers),
	sizeof(FLyraNotificationMessage),
	alignof(FLyraNotificationMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraNotificationMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraNotificationMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraNotificationMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraNotificationMessage.InnerSingleton;
}
// End ScriptStruct FLyraNotificationMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraNotificationMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewStructOps, TEXT("LyraNotificationMessage"), &Z_Registration_Info_UScriptStruct_LyraNotificationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraNotificationMessage), 3955234826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_2969197401(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
