// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Replays/LyraReplaySubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplaySubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayList();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayList_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayListEntry();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayListEntry_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplaySubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplaySubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraReplayListEntry Function GetDuration
struct Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics
{
	struct LyraReplayListEntry_eventGetDuration_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The duration of the stream in MS */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration of the stream in MS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayListEntry_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::LyraReplayListEntry_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::LyraReplayListEntry_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplayListEntry::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// End Class ULyraReplayListEntry Function GetDuration

// Begin Class ULyraReplayListEntry Function GetFriendlyName
struct Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics
{
	struct LyraReplayListEntry_eventGetFriendlyName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The UI friendly name of the stream */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI friendly name of the stream" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayListEntry_eventGetFriendlyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetFriendlyName", nullptr, nullptr, Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::LyraReplayListEntry_eventGetFriendlyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::LyraReplayListEntry_eventGetFriendlyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplayListEntry::execGetFriendlyName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFriendlyName();
	P_NATIVE_END;
}
// End Class ULyraReplayListEntry Function GetFriendlyName

// Begin Class ULyraReplayListEntry Function GetIsLive
struct Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics
{
	struct LyraReplayListEntry_eventGetIsLive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the stream is live and the game hasn't completed yet */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the stream is live and the game hasn't completed yet" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraReplayListEntry_eventGetIsLive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraReplayListEntry_eventGetIsLive_Parms), &Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetIsLive", nullptr, nullptr, Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::LyraReplayListEntry_eventGetIsLive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::LyraReplayListEntry_eventGetIsLive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplayListEntry::execGetIsLive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsLive();
	P_NATIVE_END;
}
// End Class ULyraReplayListEntry Function GetIsLive

// Begin Class ULyraReplayListEntry Function GetNumViewers
struct Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics
{
	struct LyraReplayListEntry_eventGetNumViewers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of viewers viewing this stream */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of viewers viewing this stream" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayListEntry_eventGetNumViewers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetNumViewers", nullptr, nullptr, Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::LyraReplayListEntry_eventGetNumViewers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::LyraReplayListEntry_eventGetNumViewers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplayListEntry::execGetNumViewers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumViewers();
	P_NATIVE_END;
}
// End Class ULyraReplayListEntry Function GetNumViewers

// Begin Class ULyraReplayListEntry Function GetTimestamp
struct Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics
{
	struct LyraReplayListEntry_eventGetTimestamp_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The date and time the stream was recorded */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The date and time the stream was recorded" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplayListEntry_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetTimestamp", nullptr, nullptr, Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::LyraReplayListEntry_eventGetTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::LyraReplayListEntry_eventGetTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplayListEntry::execGetTimestamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp();
	P_NATIVE_END;
}
// End Class ULyraReplayListEntry Function GetTimestamp

// Begin Class ULyraReplayListEntry
void ULyraReplayListEntry::StaticRegisterNativesULyraReplayListEntry()
{
	UClass* Class = ULyraReplayListEntry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDuration", &ULyraReplayListEntry::execGetDuration },
		{ "GetFriendlyName", &ULyraReplayListEntry::execGetFriendlyName },
		{ "GetIsLive", &ULyraReplayListEntry::execGetIsLive },
		{ "GetNumViewers", &ULyraReplayListEntry::execGetNumViewers },
		{ "GetTimestamp", &ULyraReplayListEntry::execGetTimestamp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplayListEntry);
UClass* Z_Construct_UClass_ULyraReplayListEntry_NoRegister()
{
	return ULyraReplayListEntry::StaticClass();
}
struct Z_Construct_UClass_ULyraReplayListEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An available replay for display in the UI */" },
#endif
		{ "IncludePath", "Replays/LyraReplaySubsystem.h" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An available replay for display in the UI" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetDuration, "GetDuration" }, // 608032547
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName, "GetFriendlyName" }, // 832824500
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive, "GetIsLive" }, // 2900708778
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers, "GetNumViewers" }, // 4273820164
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp, "GetTimestamp" }, // 2348328336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplayListEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraReplayListEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayListEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplayListEntry_Statics::ClassParams = {
	&ULyraReplayListEntry::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayListEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplayListEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplayListEntry()
{
	if (!Z_Registration_Info_UClass_ULyraReplayListEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplayListEntry.OuterSingleton, Z_Construct_UClass_ULyraReplayListEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplayListEntry.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplayListEntry>()
{
	return ULyraReplayListEntry::StaticClass();
}
ULyraReplayListEntry::ULyraReplayListEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplayListEntry);
ULyraReplayListEntry::~ULyraReplayListEntry() {}
// End Class ULyraReplayListEntry

// Begin Class ULyraReplayList
void ULyraReplayList::StaticRegisterNativesULyraReplayList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplayList);
UClass* Z_Construct_UClass_ULyraReplayList_NoRegister()
{
	return ULyraReplayList::StaticClass();
}
struct Z_Construct_UClass_ULyraReplayList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Results of querying for replays list of results for the UI */" },
#endif
		{ "IncludePath", "Replays/LyraReplaySubsystem.h" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Results of querying for replays list of results for the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplayList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraReplayListEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplayList, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplayList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraReplayList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplayList_Statics::ClassParams = {
	&ULyraReplayList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraReplayList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplayList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplayList()
{
	if (!Z_Registration_Info_UClass_ULyraReplayList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplayList.OuterSingleton, Z_Construct_UClass_ULyraReplayList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplayList.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplayList>()
{
	return ULyraReplayList::StaticClass();
}
ULyraReplayList::ULyraReplayList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplayList);
ULyraReplayList::~ULyraReplayList() {}
// End Class ULyraReplayList

// Begin Class ULyraReplaySubsystem Function CleanupLocalReplays
struct Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics
{
	struct LyraReplaySubsystem_eventCleanupLocalReplays_Parms
	{
		ULocalPlayer* LocalPlayer;
		int32 NumReplaysToKeep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts deleting local replays starting with the oldest until there are NumReplaysToKeep or fewer */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts deleting local replays starting with the oldest until there are NumReplaysToKeep or fewer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumReplaysToKeep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventCleanupLocalReplays_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::NewProp_NumReplaysToKeep = { "NumReplaysToKeep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventCleanupLocalReplays_Parms, NumReplaysToKeep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::NewProp_LocalPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::NewProp_NumReplaysToKeep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "CleanupLocalReplays", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::LyraReplaySubsystem_eventCleanupLocalReplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::LyraReplaySubsystem_eventCleanupLocalReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execCleanupLocalReplays)
{
	P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumReplaysToKeep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupLocalReplays(Z_Param_LocalPlayer,Z_Param_NumReplaysToKeep);
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function CleanupLocalReplays

// Begin Class ULyraReplaySubsystem Function DoesPlatformSupportReplays
struct Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics
{
	struct LyraReplaySubsystem_eventDoesPlatformSupportReplays_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this platform supports replays at all */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this platform supports replays at all" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraReplaySubsystem_eventDoesPlatformSupportReplays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraReplaySubsystem_eventDoesPlatformSupportReplays_Parms), &Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "DoesPlatformSupportReplays", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::LyraReplaySubsystem_eventDoesPlatformSupportReplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::LyraReplaySubsystem_eventDoesPlatformSupportReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execDoesPlatformSupportReplays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULyraReplaySubsystem::DoesPlatformSupportReplays();
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function DoesPlatformSupportReplays

// Begin Class ULyraReplaySubsystem Function GetReplayCurrentTime
struct Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics
{
	struct LyraReplaySubsystem_eventGetReplayCurrentTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current playback time */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current playback time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventGetReplayCurrentTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "GetReplayCurrentTime", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::LyraReplaySubsystem_eventGetReplayCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::LyraReplaySubsystem_eventGetReplayCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execGetReplayCurrentTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReplayCurrentTime();
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function GetReplayCurrentTime

// Begin Class ULyraReplaySubsystem Function GetReplayLengthInSeconds
struct Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics
{
	struct LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets length of current replay */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets length of current replay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "GetReplayLengthInSeconds", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execGetReplayLengthInSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReplayLengthInSeconds();
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function GetReplayLengthInSeconds

// Begin Class ULyraReplaySubsystem Function PlayReplay
struct Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics
{
	struct LyraReplaySubsystem_eventPlayReplay_Parms
	{
		ULyraReplayListEntry* Replay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loads the appropriate map and plays a replay */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the appropriate map and plays a replay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Replay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::NewProp_Replay = { "Replay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventPlayReplay_Parms, Replay), Z_Construct_UClass_ULyraReplayListEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::NewProp_Replay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "PlayReplay", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::LyraReplaySubsystem_eventPlayReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::LyraReplaySubsystem_eventPlayReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execPlayReplay)
{
	P_GET_OBJECT(ULyraReplayListEntry,Z_Param_Replay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayReplay(Z_Param_Replay);
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function PlayReplay

// Begin Class ULyraReplaySubsystem Function RecordClientReplay
struct Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics
{
	struct LyraReplaySubsystem_eventRecordClientReplay_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts recording a client replay, and handles any file cleanup needed */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts recording a client replay, and handles any file cleanup needed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventRecordClientReplay_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "RecordClientReplay", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::LyraReplaySubsystem_eventRecordClientReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::LyraReplaySubsystem_eventRecordClientReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execRecordClientReplay)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordClientReplay(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function RecordClientReplay

// Begin Class ULyraReplaySubsystem Function SeekInActiveReplay
struct Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics
{
	struct LyraReplaySubsystem_eventSeekInActiveReplay_Parms
	{
		float TimeInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move forward or back in currently playing replay */" },
#endif
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move forward or back in currently playing replay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReplaySubsystem_eventSeekInActiveReplay_Parms, TimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::NewProp_TimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "SeekInActiveReplay", nullptr, nullptr, Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::LyraReplaySubsystem_eventSeekInActiveReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::LyraReplaySubsystem_eventSeekInActiveReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReplaySubsystem::execSeekInActiveReplay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SeekInActiveReplay(Z_Param_TimeInSeconds);
	P_NATIVE_END;
}
// End Class ULyraReplaySubsystem Function SeekInActiveReplay

// Begin Class ULyraReplaySubsystem
void ULyraReplaySubsystem::StaticRegisterNativesULyraReplaySubsystem()
{
	UClass* Class = ULyraReplaySubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanupLocalReplays", &ULyraReplaySubsystem::execCleanupLocalReplays },
		{ "DoesPlatformSupportReplays", &ULyraReplaySubsystem::execDoesPlatformSupportReplays },
		{ "GetReplayCurrentTime", &ULyraReplaySubsystem::execGetReplayCurrentTime },
		{ "GetReplayLengthInSeconds", &ULyraReplaySubsystem::execGetReplayLengthInSeconds },
		{ "PlayReplay", &ULyraReplaySubsystem::execPlayReplay },
		{ "RecordClientReplay", &ULyraReplaySubsystem::execRecordClientReplay },
		{ "SeekInActiveReplay", &ULyraReplaySubsystem::execSeekInActiveReplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplaySubsystem);
UClass* Z_Construct_UClass_ULyraReplaySubsystem_NoRegister()
{
	return ULyraReplaySubsystem::StaticClass();
}
struct Z_Construct_UClass_ULyraReplaySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subsystem to handle recording/loading replays */" },
#endif
		{ "IncludePath", "Replays/LyraReplaySubsystem.h" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem to handle recording/loading replays" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerDeletingReplays_MetaData[] = {
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayerDeletingReplays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_CleanupLocalReplays, "CleanupLocalReplays" }, // 2654932538
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_DoesPlatformSupportReplays, "DoesPlatformSupportReplays" }, // 1922645153
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime, "GetReplayCurrentTime" }, // 113256180
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds, "GetReplayLengthInSeconds" }, // 3314333117
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay, "PlayReplay" }, // 264471819
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_RecordClientReplay, "RecordClientReplay" }, // 3619830068
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay, "SeekInActiveReplay" }, // 138942325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplaySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraReplaySubsystem_Statics::NewProp_LocalPlayerDeletingReplays = { "LocalPlayerDeletingReplays", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplaySubsystem, LocalPlayerDeletingReplays), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayerDeletingReplays_MetaData), NewProp_LocalPlayerDeletingReplays_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplaySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplaySubsystem_Statics::NewProp_LocalPlayerDeletingReplays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplaySubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraReplaySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplaySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplaySubsystem_Statics::ClassParams = {
	&ULyraReplaySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraReplaySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplaySubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplaySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplaySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplaySubsystem()
{
	if (!Z_Registration_Info_UClass_ULyraReplaySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplaySubsystem.OuterSingleton, Z_Construct_UClass_ULyraReplaySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplaySubsystem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplaySubsystem>()
{
	return ULyraReplaySubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplaySubsystem);
ULyraReplaySubsystem::~ULyraReplaySubsystem() {}
// End Class ULyraReplaySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReplayListEntry, ULyraReplayListEntry::StaticClass, TEXT("ULyraReplayListEntry"), &Z_Registration_Info_UClass_ULyraReplayListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplayListEntry), 666646215U) },
		{ Z_Construct_UClass_ULyraReplayList, ULyraReplayList::StaticClass, TEXT("ULyraReplayList"), &Z_Registration_Info_UClass_ULyraReplayList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplayList), 1431111374U) },
		{ Z_Construct_UClass_ULyraReplaySubsystem, ULyraReplaySubsystem::StaticClass, TEXT("ULyraReplaySubsystem"), &Z_Registration_Info_UClass_ULyraReplaySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplaySubsystem), 4122727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_1445331390(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
