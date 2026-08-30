// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/LyraSettingsLocal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingsLocal() {}

// Begin Cross Module References
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsLocal();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsLocal_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraScalabilitySnapshot();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraScalabilitySnapshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot;
class UScriptStruct* FLyraScalabilitySnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraScalabilitySnapshot, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraScalabilitySnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraScalabilitySnapshot>()
{
	return FLyraScalabilitySnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraScalabilitySnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraScalabilitySnapshot",
	nullptr,
	0,
	sizeof(FLyraScalabilitySnapshot),
	alignof(FLyraScalabilitySnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraScalabilitySnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.InnerSingleton, Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot.InnerSingleton;
}
// End ScriptStruct FLyraScalabilitySnapshot

// Begin Class ULyraSettingsLocal Function CanModifyHeadphoneModeEnabled
struct Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics
{
	struct LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns if we can enable/disable headphone mode (i.e., if it's not forced on or off by the platform) */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we can enable/disable headphone mode (i.e., if it's not forced on or off by the platform)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "CanModifyHeadphoneModeEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventCanModifyHeadphoneModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execCanModifyHeadphoneModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanModifyHeadphoneModeEnabled();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function CanModifyHeadphoneModeEnabled

// Begin Class ULyraSettingsLocal Function CanRunAutoBenchmark
struct Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics
{
	struct LyraSettingsLocal_eventCanRunAutoBenchmark_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this platform can run the auto benchmark */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this platform can run the auto benchmark" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventCanRunAutoBenchmark_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventCanRunAutoBenchmark_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "CanRunAutoBenchmark", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::LyraSettingsLocal_eventCanRunAutoBenchmark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::LyraSettingsLocal_eventCanRunAutoBenchmark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execCanRunAutoBenchmark)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRunAutoBenchmark();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function CanRunAutoBenchmark

// Begin Class ULyraSettingsLocal Function GetAudioOutputDeviceId
struct Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics
{
	struct LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the user's audio device id */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the user's audio device id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetAudioOutputDeviceId", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::LyraSettingsLocal_eventGetAudioOutputDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetAudioOutputDeviceId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAudioOutputDeviceId();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetAudioOutputDeviceId

// Begin Class ULyraSettingsLocal Function GetControllerPlatform
struct Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics
{
	struct LyraSettingsLocal_eventGetControllerPlatform_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetControllerPlatform_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetControllerPlatform", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::LyraSettingsLocal_eventGetControllerPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::LyraSettingsLocal_eventGetControllerPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetControllerPlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetControllerPlatform();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetControllerPlatform

// Begin Class ULyraSettingsLocal Function GetDesiredDeviceProfileQualitySuffix
struct Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics
{
	struct LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetDesiredDeviceProfileQualitySuffix", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::LyraSettingsLocal_eventGetDesiredDeviceProfileQualitySuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetDesiredDeviceProfileQualitySuffix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDesiredDeviceProfileQualitySuffix();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetDesiredDeviceProfileQualitySuffix

// Begin Class ULyraSettingsLocal Function GetDialogueVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics
{
	struct LyraSettingsLocal_eventGetDialogueVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetDialogueVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::LyraSettingsLocal_eventGetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::LyraSettingsLocal_eventGetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetDialogueVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDialogueVolume();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetDialogueVolume

// Begin Class ULyraSettingsLocal Function GetDisplayGamma
struct Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics
{
	struct LyraSettingsLocal_eventGetDisplayGamma_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetDisplayGamma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetDisplayGamma", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::LyraSettingsLocal_eventGetDisplayGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::LyraSettingsLocal_eventGetDisplayGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetDisplayGamma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDisplayGamma();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetDisplayGamma

// Begin Class ULyraSettingsLocal Function GetFrameRateLimit_Always
struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics
{
	struct LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_Always", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::LyraSettingsLocal_eventGetFrameRateLimit_Always_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_Always)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_Always();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetFrameRateLimit_Always

// Begin Class ULyraSettingsLocal Function GetFrameRateLimit_InMenu
struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics
{
	struct LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_InMenu", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::LyraSettingsLocal_eventGetFrameRateLimit_InMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_InMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_InMenu();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetFrameRateLimit_InMenu

// Begin Class ULyraSettingsLocal Function GetFrameRateLimit_OnBattery
struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics
{
	struct LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_OnBattery", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::LyraSettingsLocal_eventGetFrameRateLimit_OnBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_OnBattery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_OnBattery();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetFrameRateLimit_OnBattery

// Begin Class ULyraSettingsLocal Function GetFrameRateLimit_WhenBackgrounded
struct Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics
{
	struct LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetFrameRateLimit_WhenBackgrounded", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::LyraSettingsLocal_eventGetFrameRateLimit_WhenBackgrounded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetFrameRateLimit_WhenBackgrounded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit_WhenBackgrounded();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetFrameRateLimit_WhenBackgrounded

// Begin Class ULyraSettingsLocal Function GetInputConfigByName
struct Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics
{
	struct LyraSettingsLocal_eventGetInputConfigByName_Parms
	{
		FName ConfigName;
		const UPlayerMappableInputConfig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get an input config with a certain name. If the config doesn't exist then nullptr will be returned. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an input config with a certain name. If the config doesn't exist then nullptr will be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetInputConfigByName_Parms, ConfigName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetInputConfigByName_Parms, ReturnValue), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ConfigName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetInputConfigByName", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::LyraSettingsLocal_eventGetInputConfigByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::LyraSettingsLocal_eventGetInputConfigByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetInputConfigByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ConfigName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UPlayerMappableInputConfig**)Z_Param__Result=P_THIS->GetInputConfigByName(Z_Param_ConfigName);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetInputConfigByName

// Begin Class ULyraSettingsLocal Function GetMusicVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics
{
	struct LyraSettingsLocal_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::LyraSettingsLocal_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::LyraSettingsLocal_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetMusicVolume

// Begin Class ULyraSettingsLocal Function GetNumberOfReplaysToKeep
struct Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics
{
	struct LyraSettingsLocal_eventGetNumberOfReplaysToKeep_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetNumberOfReplaysToKeep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetNumberOfReplaysToKeep", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::LyraSettingsLocal_eventGetNumberOfReplaysToKeep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::LyraSettingsLocal_eventGetNumberOfReplaysToKeep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetNumberOfReplaysToKeep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfReplaysToKeep();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetNumberOfReplaysToKeep

// Begin Class ULyraSettingsLocal Function GetOverallVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics
{
	struct LyraSettingsLocal_eventGetOverallVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetOverallVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetOverallVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::LyraSettingsLocal_eventGetOverallVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::LyraSettingsLocal_eventGetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetOverallVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverallVolume();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetOverallVolume

// Begin Class ULyraSettingsLocal Function GetSafeZone
struct Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics
{
	struct LyraSettingsLocal_eventGetSafeZone_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetSafeZone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetSafeZone", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::LyraSettingsLocal_eventGetSafeZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::LyraSettingsLocal_eventGetSafeZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetSafeZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSafeZone();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetSafeZone

// Begin Class ULyraSettingsLocal Function GetSoundFXVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics
{
	struct LyraSettingsLocal_eventGetSoundFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetSoundFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetSoundFXVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::LyraSettingsLocal_eventGetSoundFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::LyraSettingsLocal_eventGetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetSoundFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoundFXVolume();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetSoundFXVolume

// Begin Class ULyraSettingsLocal Function GetVoiceChatVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics
{
	struct LyraSettingsLocal_eventGetVoiceChatVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventGetVoiceChatVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "GetVoiceChatVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::LyraSettingsLocal_eventGetVoiceChatVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::LyraSettingsLocal_eventGetVoiceChatVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execGetVoiceChatVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVoiceChatVolume();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function GetVoiceChatVolume

// Begin Class ULyraSettingsLocal Function IsHDRAudioModeEnabled
struct Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics
{
	struct LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns if we're using High Dynamic Range Audio mode (HDR Audio) **/" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we're using High Dynamic Range Audio mode (HDR Audio) *" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "IsHDRAudioModeEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::LyraSettingsLocal_eventIsHDRAudioModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execIsHDRAudioModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHDRAudioModeEnabled();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function IsHDRAudioModeEnabled

// Begin Class ULyraSettingsLocal Function IsHeadphoneModeEnabled
struct Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics
{
	struct LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns if we're using headphone mode (HRTF) **/" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we're using headphone mode (HRTF) *" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "IsHeadphoneModeEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventIsHeadphoneModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execIsHeadphoneModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHeadphoneModeEnabled();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function IsHeadphoneModeEnabled

// Begin Class ULyraSettingsLocal Function IsSafeZoneSet
struct Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics
{
	struct LyraSettingsLocal_eventIsSafeZoneSet_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventIsSafeZoneSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventIsSafeZoneSet_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "IsSafeZoneSet", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::LyraSettingsLocal_eventIsSafeZoneSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::LyraSettingsLocal_eventIsSafeZoneSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execIsSafeZoneSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSafeZoneSet();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function IsSafeZoneSet

// Begin Class ULyraSettingsLocal Function RunAutoBenchmark
struct Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics
{
	struct LyraSettingsLocal_eventRunAutoBenchmark_Parms
	{
		bool bSaveImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run the auto benchmark, optionally saving right away */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run the auto benchmark, optionally saving right away" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSaveImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventRunAutoBenchmark_Parms*)Obj)->bSaveImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately = { "bSaveImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventRunAutoBenchmark_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::NewProp_bSaveImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "RunAutoBenchmark", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::LyraSettingsLocal_eventRunAutoBenchmark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::LyraSettingsLocal_eventRunAutoBenchmark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execRunAutoBenchmark)
{
	P_GET_UBOOL(Z_Param_bSaveImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunAutoBenchmark(Z_Param_bSaveImmediately);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function RunAutoBenchmark

// Begin Class ULyraSettingsLocal Function SetAudioOutputDeviceId
struct Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics
{
	struct LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms
	{
		FString InAudioOutputDeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the user's audio device by id */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the user's audio device by id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAudioOutputDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAudioOutputDeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId = { "InAudioOutputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms, InAudioOutputDeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAudioOutputDeviceId_MetaData), NewProp_InAudioOutputDeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetAudioOutputDeviceId", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::LyraSettingsLocal_eventSetAudioOutputDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetAudioOutputDeviceId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InAudioOutputDeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioOutputDeviceId(Z_Param_InAudioOutputDeviceId);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetAudioOutputDeviceId

// Begin Class ULyraSettingsLocal Function SetControllerPlatform
struct Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics
{
	struct LyraSettingsLocal_eventSetControllerPlatform_Parms
	{
		FName InControllerPlatform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the controller representation to use, a single platform might support multiple kinds of controllers.  For\n// example, Win64 games could be played with both an XBox or Playstation controller.\n" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the controller representation to use, a single platform might support multiple kinds of controllers.  For\nexample, Win64 games could be played with both an XBox or Playstation controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InControllerPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InControllerPlatform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform = { "InControllerPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetControllerPlatform_Parms, InControllerPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InControllerPlatform_MetaData), NewProp_InControllerPlatform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::NewProp_InControllerPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetControllerPlatform", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::LyraSettingsLocal_eventSetControllerPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::LyraSettingsLocal_eventSetControllerPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetControllerPlatform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InControllerPlatform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerPlatform(Z_Param_InControllerPlatform);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetControllerPlatform

// Begin Class ULyraSettingsLocal Function SetDesiredDeviceProfileQualitySuffix
struct Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics
{
	struct LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms
	{
		FString InDesiredSuffix;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDesiredSuffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredSuffix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix = { "InDesiredSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms, InDesiredSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDesiredSuffix_MetaData), NewProp_InDesiredSuffix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetDesiredDeviceProfileQualitySuffix", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::LyraSettingsLocal_eventSetDesiredDeviceProfileQualitySuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetDesiredDeviceProfileQualitySuffix)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredSuffix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredDeviceProfileQualitySuffix(Z_Param_InDesiredSuffix);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetDesiredDeviceProfileQualitySuffix

// Begin Class ULyraSettingsLocal Function SetDialogueVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics
{
	struct LyraSettingsLocal_eventSetDialogueVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetDialogueVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::LyraSettingsLocal_eventSetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::LyraSettingsLocal_eventSetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetDialogueVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetDialogueVolume

// Begin Class ULyraSettingsLocal Function SetDisplayGamma
struct Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics
{
	struct LyraSettingsLocal_eventSetDisplayGamma_Parms
	{
		float InGamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::NewProp_InGamma = { "InGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetDisplayGamma_Parms, InGamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::NewProp_InGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetDisplayGamma", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::LyraSettingsLocal_eventSetDisplayGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::LyraSettingsLocal_eventSetDisplayGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetDisplayGamma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayGamma(Z_Param_InGamma);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetDisplayGamma

// Begin Class ULyraSettingsLocal Function SetFrameRateLimit_Always
struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics
{
	struct LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms
	{
		float NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_Always", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::LyraSettingsLocal_eventSetFrameRateLimit_Always_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_Always)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_Always(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetFrameRateLimit_Always

// Begin Class ULyraSettingsLocal Function SetFrameRateLimit_InMenu
struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics
{
	struct LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms
	{
		float NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_InMenu", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::LyraSettingsLocal_eventSetFrameRateLimit_InMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_InMenu)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_InMenu(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetFrameRateLimit_InMenu

// Begin Class ULyraSettingsLocal Function SetFrameRateLimit_OnBattery
struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics
{
	struct LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms
	{
		float NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_OnBattery", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::LyraSettingsLocal_eventSetFrameRateLimit_OnBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_OnBattery)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_OnBattery(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetFrameRateLimit_OnBattery

// Begin Class ULyraSettingsLocal Function SetFrameRateLimit_WhenBackgrounded
struct Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics
{
	struct LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms
	{
		float NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetFrameRateLimit_WhenBackgrounded", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::LyraSettingsLocal_eventSetFrameRateLimit_WhenBackgrounded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetFrameRateLimit_WhenBackgrounded)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_WhenBackgrounded(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetFrameRateLimit_WhenBackgrounded

// Begin Class ULyraSettingsLocal Function SetHDRAudioModeEnabled
struct Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics
{
	struct LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables High Dynamic Range Audio mode (HDR Audio) */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables High Dynamic Range Audio mode (HDR Audio)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetHDRAudioModeEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::LyraSettingsLocal_eventSetHDRAudioModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetHDRAudioModeEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHDRAudioModeEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetHDRAudioModeEnabled

// Begin Class ULyraSettingsLocal Function SetHeadphoneModeEnabled
struct Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics
{
	struct LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables or disables headphone mode (HRTF) - NOTE this setting will be overruled if au.DisableBinauralSpatialization is set */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables headphone mode (HRTF) - NOTE this setting will be overruled if au.DisableBinauralSpatialization is set" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetHeadphoneModeEnabled", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::LyraSettingsLocal_eventSetHeadphoneModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetHeadphoneModeEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeadphoneModeEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetHeadphoneModeEnabled

// Begin Class ULyraSettingsLocal Function SetMusicVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics
{
	struct LyraSettingsLocal_eventSetMusicVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetMusicVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::LyraSettingsLocal_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::LyraSettingsLocal_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetMusicVolume

// Begin Class ULyraSettingsLocal Function SetNumberOfReplaysToKeep
struct Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics
{
	struct LyraSettingsLocal_eventSetNumberOfReplaysToKeep_Parms
	{
		int32 InNumberOfReplays;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumberOfReplays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::NewProp_InNumberOfReplays = { "InNumberOfReplays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetNumberOfReplaysToKeep_Parms, InNumberOfReplays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::NewProp_InNumberOfReplays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetNumberOfReplaysToKeep", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::LyraSettingsLocal_eventSetNumberOfReplaysToKeep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::LyraSettingsLocal_eventSetNumberOfReplaysToKeep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetNumberOfReplaysToKeep)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumberOfReplays);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberOfReplaysToKeep(Z_Param_InNumberOfReplays);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetNumberOfReplaysToKeep

// Begin Class ULyraSettingsLocal Function SetOverallVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics
{
	struct LyraSettingsLocal_eventSetOverallVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetOverallVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetOverallVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::LyraSettingsLocal_eventSetOverallVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::LyraSettingsLocal_eventSetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetOverallVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetOverallVolume

// Begin Class ULyraSettingsLocal Function SetSafeZone
struct Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics
{
	struct LyraSettingsLocal_eventSetSafeZone_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetSafeZone_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetSafeZone", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::LyraSettingsLocal_eventSetSafeZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::LyraSettingsLocal_eventSetSafeZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetSafeZone)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSafeZone(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetSafeZone

// Begin Class ULyraSettingsLocal Function SetShouldAutoRecordReplays
struct Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics
{
	struct LyraSettingsLocal_eventSetShouldAutoRecordReplays_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventSetShouldAutoRecordReplays_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventSetShouldAutoRecordReplays_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetShouldAutoRecordReplays", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::LyraSettingsLocal_eventSetShouldAutoRecordReplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::LyraSettingsLocal_eventSetShouldAutoRecordReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetShouldAutoRecordReplays)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldAutoRecordReplays(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetShouldAutoRecordReplays

// Begin Class ULyraSettingsLocal Function SetSoundFXVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics
{
	struct LyraSettingsLocal_eventSetSoundFXVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetSoundFXVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetSoundFXVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::LyraSettingsLocal_eventSetSoundFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::LyraSettingsLocal_eventSetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetSoundFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundFXVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetSoundFXVolume

// Begin Class ULyraSettingsLocal Function SetVoiceChatVolume
struct Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics
{
	struct LyraSettingsLocal_eventSetVoiceChatVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingsLocal_eventSetVoiceChatVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "SetVoiceChatVolume", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::LyraSettingsLocal_eventSetVoiceChatVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::LyraSettingsLocal_eventSetVoiceChatVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execSetVoiceChatVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVoiceChatVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function SetVoiceChatVolume

// Begin Class ULyraSettingsLocal Function ShouldAutoRecordReplays
struct Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics
{
	struct LyraSettingsLocal_eventShouldAutoRecordReplays_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventShouldAutoRecordReplays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventShouldAutoRecordReplays_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "ShouldAutoRecordReplays", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::LyraSettingsLocal_eventShouldAutoRecordReplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::LyraSettingsLocal_eventShouldAutoRecordReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execShouldAutoRecordReplays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldAutoRecordReplays();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function ShouldAutoRecordReplays

// Begin Class ULyraSettingsLocal Function ShouldRunAutoBenchmarkAtStartup
struct Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics
{
	struct LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this user should run the auto benchmark as it has never been run */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this user should run the auto benchmark as it has never been run" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms), &Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingsLocal, nullptr, "ShouldRunAutoBenchmarkAtStartup", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::LyraSettingsLocal_eventShouldRunAutoBenchmarkAtStartup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingsLocal::execShouldRunAutoBenchmarkAtStartup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldRunAutoBenchmarkAtStartup();
	P_NATIVE_END;
}
// End Class ULyraSettingsLocal Function ShouldRunAutoBenchmarkAtStartup

// Begin Class ULyraSettingsLocal
void ULyraSettingsLocal::StaticRegisterNativesULyraSettingsLocal()
{
	UClass* Class = ULyraSettingsLocal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanModifyHeadphoneModeEnabled", &ULyraSettingsLocal::execCanModifyHeadphoneModeEnabled },
		{ "CanRunAutoBenchmark", &ULyraSettingsLocal::execCanRunAutoBenchmark },
		{ "GetAudioOutputDeviceId", &ULyraSettingsLocal::execGetAudioOutputDeviceId },
		{ "GetControllerPlatform", &ULyraSettingsLocal::execGetControllerPlatform },
		{ "GetDesiredDeviceProfileQualitySuffix", &ULyraSettingsLocal::execGetDesiredDeviceProfileQualitySuffix },
		{ "GetDialogueVolume", &ULyraSettingsLocal::execGetDialogueVolume },
		{ "GetDisplayGamma", &ULyraSettingsLocal::execGetDisplayGamma },
		{ "GetFrameRateLimit_Always", &ULyraSettingsLocal::execGetFrameRateLimit_Always },
		{ "GetFrameRateLimit_InMenu", &ULyraSettingsLocal::execGetFrameRateLimit_InMenu },
		{ "GetFrameRateLimit_OnBattery", &ULyraSettingsLocal::execGetFrameRateLimit_OnBattery },
		{ "GetFrameRateLimit_WhenBackgrounded", &ULyraSettingsLocal::execGetFrameRateLimit_WhenBackgrounded },
		{ "GetInputConfigByName", &ULyraSettingsLocal::execGetInputConfigByName },
		{ "GetMusicVolume", &ULyraSettingsLocal::execGetMusicVolume },
		{ "GetNumberOfReplaysToKeep", &ULyraSettingsLocal::execGetNumberOfReplaysToKeep },
		{ "GetOverallVolume", &ULyraSettingsLocal::execGetOverallVolume },
		{ "GetSafeZone", &ULyraSettingsLocal::execGetSafeZone },
		{ "GetSoundFXVolume", &ULyraSettingsLocal::execGetSoundFXVolume },
		{ "GetVoiceChatVolume", &ULyraSettingsLocal::execGetVoiceChatVolume },
		{ "IsHDRAudioModeEnabled", &ULyraSettingsLocal::execIsHDRAudioModeEnabled },
		{ "IsHeadphoneModeEnabled", &ULyraSettingsLocal::execIsHeadphoneModeEnabled },
		{ "IsSafeZoneSet", &ULyraSettingsLocal::execIsSafeZoneSet },
		{ "RunAutoBenchmark", &ULyraSettingsLocal::execRunAutoBenchmark },
		{ "SetAudioOutputDeviceId", &ULyraSettingsLocal::execSetAudioOutputDeviceId },
		{ "SetControllerPlatform", &ULyraSettingsLocal::execSetControllerPlatform },
		{ "SetDesiredDeviceProfileQualitySuffix", &ULyraSettingsLocal::execSetDesiredDeviceProfileQualitySuffix },
		{ "SetDialogueVolume", &ULyraSettingsLocal::execSetDialogueVolume },
		{ "SetDisplayGamma", &ULyraSettingsLocal::execSetDisplayGamma },
		{ "SetFrameRateLimit_Always", &ULyraSettingsLocal::execSetFrameRateLimit_Always },
		{ "SetFrameRateLimit_InMenu", &ULyraSettingsLocal::execSetFrameRateLimit_InMenu },
		{ "SetFrameRateLimit_OnBattery", &ULyraSettingsLocal::execSetFrameRateLimit_OnBattery },
		{ "SetFrameRateLimit_WhenBackgrounded", &ULyraSettingsLocal::execSetFrameRateLimit_WhenBackgrounded },
		{ "SetHDRAudioModeEnabled", &ULyraSettingsLocal::execSetHDRAudioModeEnabled },
		{ "SetHeadphoneModeEnabled", &ULyraSettingsLocal::execSetHeadphoneModeEnabled },
		{ "SetMusicVolume", &ULyraSettingsLocal::execSetMusicVolume },
		{ "SetNumberOfReplaysToKeep", &ULyraSettingsLocal::execSetNumberOfReplaysToKeep },
		{ "SetOverallVolume", &ULyraSettingsLocal::execSetOverallVolume },
		{ "SetSafeZone", &ULyraSettingsLocal::execSetSafeZone },
		{ "SetShouldAutoRecordReplays", &ULyraSettingsLocal::execSetShouldAutoRecordReplays },
		{ "SetSoundFXVolume", &ULyraSettingsLocal::execSetSoundFXVolume },
		{ "SetVoiceChatVolume", &ULyraSettingsLocal::execSetVoiceChatVolume },
		{ "ShouldAutoRecordReplays", &ULyraSettingsLocal::execShouldAutoRecordReplays },
		{ "ShouldRunAutoBenchmarkAtStartup", &ULyraSettingsLocal::execShouldRunAutoBenchmarkAtStartup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingsLocal);
UClass* Z_Construct_UClass_ULyraSettingsLocal_NoRegister()
{
	return ULyraSettingsLocal::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingsLocal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraSettingsLocal\n */" },
#endif
		{ "IncludePath", "Settings/LyraSettingsLocal.h" },
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayStatList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of stats to display in the HUD\n" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of stats to display in the HUD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayGamma_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_OnBattery_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_InMenu_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_WhenBackgrounded_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileFrameRateLimit_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserChosenDeviceProfileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDesiredHeadphoneMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether we *want* to use headphone mode (HRTF); may or may not actually be applied **/" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether we *want* to use headphone mode (HRTF); may or may not actually be applied *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeadphoneMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use headphone mode (HRTF) **/" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use headphone mode (HRTF) *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHDRAudioMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use High Dynamic Range Audio mode (HDR Audio) **/" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use High Dynamic Range Audio mode (HDR Audio) *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioOutputDeviceId_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolume_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*SoundClassName*/" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SoundClassName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMix_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoundControlBusMixLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeZoneScale_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPlatform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The name of the controller the player is using.  This is maps to the name of a UCommonInputBaseControllerData\n\x09 * that is available on this current platform.  The gamepad data are registered per platform, you'll find them\n\x09 * in <Platform>Game.ini files listed under +ControllerData=...\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the controller the player is using.  This is maps to the name of a UCommonInputBaseControllerData\nthat is available on this current platform.  The gamepad data are registered per platform, you'll find them\nin <Platform>Game.ini files listed under +ControllerData=..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPreset_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the current input config that the user has selected. */" },
#endif
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the current input config that the user has selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoRecordReplays_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfReplaysToKeep_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraSettingsLocal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayStatList_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayStatList_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayStatList_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayStatList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayStatList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayGamma;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_OnBattery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_InMenu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_WhenBackgrounded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MobileFrameRateLimit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredUserChosenDeviceProfileSuffix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentAppliedDeviceProfileOverrideSuffix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserChosenDeviceProfileSuffix;
	static void NewProp_bDesiredHeadphoneMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesiredHeadphoneMode;
	static void NewProp_bUseHeadphoneMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeadphoneMode;
	static void NewProp_bUseHDRAudioMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHDRAudioMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioOutputDeviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundFXVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceChatVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlBusMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlBusMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMix;
	static void NewProp_bSoundControlBusMixLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoundControlBusMixLoaded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SafeZoneScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerPlatform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerPreset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputConfigName;
	static void NewProp_bShouldAutoRecordReplays_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoRecordReplays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfReplaysToKeep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSettingsLocal_CanModifyHeadphoneModeEnabled, "CanModifyHeadphoneModeEnabled" }, // 3420631359
		{ &Z_Construct_UFunction_ULyraSettingsLocal_CanRunAutoBenchmark, "CanRunAutoBenchmark" }, // 3732596120
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetAudioOutputDeviceId, "GetAudioOutputDeviceId" }, // 2053297354
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetControllerPlatform, "GetControllerPlatform" }, // 3192584156
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetDesiredDeviceProfileQualitySuffix, "GetDesiredDeviceProfileQualitySuffix" }, // 2119648104
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetDialogueVolume, "GetDialogueVolume" }, // 3318042902
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetDisplayGamma, "GetDisplayGamma" }, // 1117484790
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_Always, "GetFrameRateLimit_Always" }, // 2426701224
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_InMenu, "GetFrameRateLimit_InMenu" }, // 1644183296
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_OnBattery, "GetFrameRateLimit_OnBattery" }, // 3607677185
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetFrameRateLimit_WhenBackgrounded, "GetFrameRateLimit_WhenBackgrounded" }, // 1216475453
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetInputConfigByName, "GetInputConfigByName" }, // 3219666904
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetMusicVolume, "GetMusicVolume" }, // 1339901776
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetNumberOfReplaysToKeep, "GetNumberOfReplaysToKeep" }, // 1027580513
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetOverallVolume, "GetOverallVolume" }, // 573752904
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetSafeZone, "GetSafeZone" }, // 832394678
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetSoundFXVolume, "GetSoundFXVolume" }, // 1732289228
		{ &Z_Construct_UFunction_ULyraSettingsLocal_GetVoiceChatVolume, "GetVoiceChatVolume" }, // 2320558529
		{ &Z_Construct_UFunction_ULyraSettingsLocal_IsHDRAudioModeEnabled, "IsHDRAudioModeEnabled" }, // 925320332
		{ &Z_Construct_UFunction_ULyraSettingsLocal_IsHeadphoneModeEnabled, "IsHeadphoneModeEnabled" }, // 1802831161
		{ &Z_Construct_UFunction_ULyraSettingsLocal_IsSafeZoneSet, "IsSafeZoneSet" }, // 3174079049
		{ &Z_Construct_UFunction_ULyraSettingsLocal_RunAutoBenchmark, "RunAutoBenchmark" }, // 3038396397
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetAudioOutputDeviceId, "SetAudioOutputDeviceId" }, // 2254559159
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetControllerPlatform, "SetControllerPlatform" }, // 1002647973
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetDesiredDeviceProfileQualitySuffix, "SetDesiredDeviceProfileQualitySuffix" }, // 769604952
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetDialogueVolume, "SetDialogueVolume" }, // 278681766
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetDisplayGamma, "SetDisplayGamma" }, // 1945765286
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_Always, "SetFrameRateLimit_Always" }, // 1232068044
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_InMenu, "SetFrameRateLimit_InMenu" }, // 1369593880
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_OnBattery, "SetFrameRateLimit_OnBattery" }, // 1033284271
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetFrameRateLimit_WhenBackgrounded, "SetFrameRateLimit_WhenBackgrounded" }, // 4083522660
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetHDRAudioModeEnabled, "SetHDRAudioModeEnabled" }, // 1287462041
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetHeadphoneModeEnabled, "SetHeadphoneModeEnabled" }, // 1630952307
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetMusicVolume, "SetMusicVolume" }, // 4079358407
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetNumberOfReplaysToKeep, "SetNumberOfReplaysToKeep" }, // 2836504419
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetOverallVolume, "SetOverallVolume" }, // 3430338600
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetSafeZone, "SetSafeZone" }, // 2149410127
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetShouldAutoRecordReplays, "SetShouldAutoRecordReplays" }, // 2395177566
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetSoundFXVolume, "SetSoundFXVolume" }, // 820056846
		{ &Z_Construct_UFunction_ULyraSettingsLocal_SetVoiceChatVolume, "SetVoiceChatVolume" }, // 4282149416
		{ &Z_Construct_UFunction_ULyraSettingsLocal_ShouldAutoRecordReplays, "ShouldAutoRecordReplays" }, // 3853555275
		{ &Z_Construct_UFunction_ULyraSettingsLocal_ShouldRunAutoBenchmarkAtStartup, "ShouldRunAutoBenchmarkAtStartup" }, // 694773543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingsLocal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp = { "DisplayStatList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode, METADATA_PARAMS(0, nullptr) }; // 3127134116
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp = { "DisplayStatList_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(0, nullptr) }; // 3286822108
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList = { "DisplayStatList", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, DisplayStatList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayStatList_MetaData), NewProp_DisplayStatList_MetaData) }; // 3286822108 3127134116
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma = { "DisplayGamma", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, DisplayGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayGamma_MetaData), NewProp_DisplayGamma_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery = { "FrameRateLimit_OnBattery", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, FrameRateLimit_OnBattery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_OnBattery_MetaData), NewProp_FrameRateLimit_OnBattery_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu = { "FrameRateLimit_InMenu", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, FrameRateLimit_InMenu), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_InMenu_MetaData), NewProp_FrameRateLimit_InMenu_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded = { "FrameRateLimit_WhenBackgrounded", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, FrameRateLimit_WhenBackgrounded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_WhenBackgrounded_MetaData), NewProp_FrameRateLimit_WhenBackgrounded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit = { "MobileFrameRateLimit", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, MobileFrameRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileFrameRateLimit_MetaData), NewProp_MobileFrameRateLimit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix = { "DesiredUserChosenDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, DesiredUserChosenDeviceProfileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData), NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix = { "CurrentAppliedDeviceProfileOverrideSuffix", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, CurrentAppliedDeviceProfileOverrideSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData), NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix = { "UserChosenDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, UserChosenDeviceProfileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserChosenDeviceProfileSuffix_MetaData), NewProp_UserChosenDeviceProfileSuffix_MetaData) };
void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_SetBit(void* Obj)
{
	((ULyraSettingsLocal*)Obj)->bDesiredHeadphoneMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode = { "bDesiredHeadphoneMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDesiredHeadphoneMode_MetaData), NewProp_bDesiredHeadphoneMode_MetaData) };
void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_SetBit(void* Obj)
{
	((ULyraSettingsLocal*)Obj)->bUseHeadphoneMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode = { "bUseHeadphoneMode", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeadphoneMode_MetaData), NewProp_bUseHeadphoneMode_MetaData) };
void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_SetBit(void* Obj)
{
	((ULyraSettingsLocal*)Obj)->bUseHDRAudioMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode = { "bUseHDRAudioMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHDRAudioMode_MetaData), NewProp_bUseHDRAudioMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId = { "AudioOutputDeviceId", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, AudioOutputDeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioOutputDeviceId_MetaData), NewProp_AudioOutputDeviceId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume = { "OverallVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, OverallVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolume_MetaData), NewProp_OverallVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume = { "SoundFXVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, SoundFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolume_MetaData), NewProp_SoundFXVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume = { "DialogueVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, DialogueVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVolume_MetaData), NewProp_DialogueVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume = { "VoiceChatVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, VoiceChatVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatVolume_MetaData), NewProp_VoiceChatVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_ValueProp = { "ControlBusMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_Key_KeyProp = { "ControlBusMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap = { "ControlBusMap", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, ControlBusMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlBusMap_MetaData), NewProp_ControlBusMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix = { "ControlBusMix", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, ControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlBusMix_MetaData), NewProp_ControlBusMix_MetaData) };
void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_SetBit(void* Obj)
{
	((ULyraSettingsLocal*)Obj)->bSoundControlBusMixLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded = { "bSoundControlBusMixLoaded", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoundControlBusMixLoaded_MetaData), NewProp_bSoundControlBusMixLoaded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale = { "SafeZoneScale", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, SafeZoneScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeZoneScale_MetaData), NewProp_SafeZoneScale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform = { "ControllerPlatform", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, ControllerPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerPlatform_MetaData), NewProp_ControllerPlatform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset = { "ControllerPreset", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, ControllerPreset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerPreset_MetaData), NewProp_ControllerPreset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName = { "InputConfigName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, InputConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigName_MetaData), NewProp_InputConfigName_MetaData) };
void Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bShouldAutoRecordReplays_SetBit(void* Obj)
{
	((ULyraSettingsLocal*)Obj)->bShouldAutoRecordReplays = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bShouldAutoRecordReplays = { "bShouldAutoRecordReplays", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraSettingsLocal), &Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bShouldAutoRecordReplays_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAutoRecordReplays_MetaData), NewProp_bShouldAutoRecordReplays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_NumberOfReplaysToKeep = { "NumberOfReplaysToKeep", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraSettingsLocal, NumberOfReplaysToKeep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfReplaysToKeep_MetaData), NewProp_NumberOfReplaysToKeep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayStatList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DisplayGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_OnBattery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_InMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_FrameRateLimit_WhenBackgrounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MobileFrameRateLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_UserChosenDeviceProfileSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bDesiredHeadphoneMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHeadphoneMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bUseHDRAudioMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_AudioOutputDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_OverallVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SoundFXVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_DialogueVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_VoiceChatVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bSoundControlBusMixLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_SafeZoneScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_ControllerPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_InputConfigName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_bShouldAutoRecordReplays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingsLocal_Statics::NewProp_NumberOfReplaysToKeep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraSettingsLocal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingsLocal_Statics::ClassParams = {
	&ULyraSettingsLocal::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::PropPointers),
	0,
	0x408000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingsLocal_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingsLocal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingsLocal()
{
	if (!Z_Registration_Info_UClass_ULyraSettingsLocal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingsLocal.OuterSingleton, Z_Construct_UClass_ULyraSettingsLocal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingsLocal.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingsLocal>()
{
	return ULyraSettingsLocal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingsLocal);
ULyraSettingsLocal::~ULyraSettingsLocal() {}
// End Class ULyraSettingsLocal

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraScalabilitySnapshot::StaticStruct, Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics::NewStructOps, TEXT("LyraScalabilitySnapshot"), &Z_Registration_Info_UScriptStruct_LyraScalabilitySnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraScalabilitySnapshot), 2126010832U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingsLocal, ULyraSettingsLocal::StaticClass, TEXT("ULyraSettingsLocal"), &Z_Registration_Info_UClass_ULyraSettingsLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingsLocal), 2915074466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_3054920966(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
