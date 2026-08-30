// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraUserFacingExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUserFacingExperienceDefinition() {}

// Begin Cross Module References
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraUserFacingExperienceDefinition Function CreateHostingRequest
struct Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics
{
	struct LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms
	{
		const UObject* WorldContextObject;
		UCommonSession_HostSessionRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a request object that is used to actually start a session with these settings */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a request object that is used to actually start a session with these settings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraUserFacingExperienceDefinition, nullptr, "CreateHostingRequest", nullptr, nullptr, Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraUserFacingExperienceDefinition::execCreateHostingRequest)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateHostingRequest(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class ULyraUserFacingExperienceDefinition Function CreateHostingRequest

// Begin Class ULyraUserFacingExperienceDefinition
void ULyraUserFacingExperienceDefinition::StaticRegisterNativesULyraUserFacingExperienceDefinition()
{
	UClass* Class = ULyraUserFacingExperienceDefinition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHostingRequest", &ULyraUserFacingExperienceDefinition::execCreateHostingRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUserFacingExperienceDefinition);
UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition_NoRegister()
{
	return ULyraUserFacingExperienceDefinition::StaticClass();
}
struct Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description of settings used to display experiences in the UI and start a new session */" },
#endif
		{ "IncludePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of settings used to display experiences in the UI and start a new session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The specific map to load */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific map to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceID_MetaData[] = {
		{ "AllowedTypes", "LyraExperienceDefinition" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The gameplay experience to load */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gameplay experience to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra arguments passed as URL options to the game */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra arguments passed as URL options to the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTitle_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Primary title in the UI */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary title in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSubTitle_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Secondary title */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secondary title" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileDescription_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full description */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIcon_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon used in the UI */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon used in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[] = {
		{ "Category", "LoadingScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The loading screen widget to show when loading into (or back out of) a given experience */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The loading screen widget to show when loading into (or back out of) a given experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultExperience_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this is a default experience that should be used for quick play and given priority in the UI */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this is a default experience that should be used for quick play and given priority in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInFrontEnd_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this will show up in the experiences list in the front-end */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this will show up in the experiences list in the front-end" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordReplay_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, a replay will be recorded of the game */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, a replay will be recorded of the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerCount_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max number of players for this session */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number of players for this session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TileTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TileSubTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TileDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileIcon;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LoadingScreenWidget;
	static void NewProp_bIsDefaultExperience_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultExperience;
	static void NewProp_bShowInFrontEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInFrontEnd;
	static void NewProp_bRecordReplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordReplay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest, "CreateHostingRequest" }, // 2531558413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUserFacingExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID = { "ExperienceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, ExperienceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceID_MetaData), NewProp_ExperienceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraArgs_MetaData), NewProp_ExtraArgs_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle = { "TileTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTitle_MetaData), NewProp_TileTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle = { "TileSubTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileSubTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSubTitle_MetaData), NewProp_TileSubTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription = { "TileDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileDescription_MetaData), NewProp_TileDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon = { "TileIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIcon_MetaData), NewProp_TileIcon_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, LoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenWidget_MetaData), NewProp_LoadingScreenWidget_MetaData) };
void Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit(void* Obj)
{
	((ULyraUserFacingExperienceDefinition*)Obj)->bIsDefaultExperience = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience = { "bIsDefaultExperience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraUserFacingExperienceDefinition), &Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefaultExperience_MetaData), NewProp_bIsDefaultExperience_MetaData) };
void Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit(void* Obj)
{
	((ULyraUserFacingExperienceDefinition*)Obj)->bShowInFrontEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd = { "bShowInFrontEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraUserFacingExperienceDefinition), &Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInFrontEnd_MetaData), NewProp_bShowInFrontEnd_MetaData) };
void Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit(void* Obj)
{
	((ULyraUserFacingExperienceDefinition*)Obj)->bRecordReplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay = { "bRecordReplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraUserFacingExperienceDefinition), &Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordReplay_MetaData), NewProp_bRecordReplay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount = { "MaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, MaxPlayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayerCount_MetaData), NewProp_MaxPlayerCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::ClassParams = {
	&ULyraUserFacingExperienceDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition()
{
	if (!Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition.OuterSingleton, Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraUserFacingExperienceDefinition>()
{
	return ULyraUserFacingExperienceDefinition::StaticClass();
}
ULyraUserFacingExperienceDefinition::ULyraUserFacingExperienceDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUserFacingExperienceDefinition);
ULyraUserFacingExperienceDefinition::~ULyraUserFacingExperienceDefinition() {}
// End Class ULyraUserFacingExperienceDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUserFacingExperienceDefinition, ULyraUserFacingExperienceDefinition::StaticClass, TEXT("ULyraUserFacingExperienceDefinition"), &Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUserFacingExperienceDefinition), 3553289749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_3757103411(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
