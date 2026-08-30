// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h"
#include "Runtime/AudioMixer/Public/AudioMixerBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscreteDynamic_AudioOutputDevice() {}

// Begin Cross Module References
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FAudioOutputDeviceInfo();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscreteDynamic();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function DefaultDeviceChanged
struct Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics
{
	struct LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDefaultDeviceChanged_Parms
	{
		EAudioDeviceChangedRole InRole;
		FString DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InRole_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InRole;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::NewProp_InRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::NewProp_InRole = { "InRole", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDefaultDeviceChanged_Parms, InRole), Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole, METADATA_PARAMS(0, nullptr) }; // 2393683699
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDefaultDeviceChanged_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::NewProp_InRole_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::NewProp_InRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice, nullptr, "DefaultDeviceChanged", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDefaultDeviceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDefaultDeviceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execDefaultDeviceChanged)
{
	P_GET_ENUM(EAudioDeviceChangedRole,Z_Param_InRole);
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultDeviceChanged(EAudioDeviceChangedRole(Z_Param_InRole),Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function DefaultDeviceChanged

// Begin Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function DeviceAddedOrRemoved
struct Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics
{
	struct LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDeviceAddedOrRemoved_Parms
	{
		FString DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDeviceAddedOrRemoved_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice, nullptr, "DeviceAddedOrRemoved", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDeviceAddedOrRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventDeviceAddedOrRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execDeviceAddedOrRemoved)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeviceAddedOrRemoved(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function DeviceAddedOrRemoved

// Begin Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function OnAudioOutputDevicesObtained
struct Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics
{
	struct LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnAudioOutputDevicesObtained_Parms
	{
		TArray<FAudioOutputDeviceInfo> AvailableDevices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDevices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDevices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::NewProp_AvailableDevices_Inner = { "AvailableDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioOutputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3924648275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::NewProp_AvailableDevices = { "AvailableDevices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnAudioOutputDevicesObtained_Parms, AvailableDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDevices_MetaData), NewProp_AvailableDevices_MetaData) }; // 3924648275
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::NewProp_AvailableDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::NewProp_AvailableDevices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice, nullptr, "OnAudioOutputDevicesObtained", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnAudioOutputDevicesObtained_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnAudioOutputDevicesObtained_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execOnAudioOutputDevicesObtained)
{
	P_GET_TARRAY_REF(FAudioOutputDeviceInfo,Z_Param_Out_AvailableDevices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAudioOutputDevicesObtained(Z_Param_Out_AvailableDevices);
	P_NATIVE_END;
}
// End Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function OnAudioOutputDevicesObtained

// Begin Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function OnCompletedDeviceSwap
struct Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics
{
	struct LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnCompletedDeviceSwap_Parms
	{
		FSwapAudioOutputResult SwapResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::NewProp_SwapResult = { "SwapResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnCompletedDeviceSwap_Parms, SwapResult), Z_Construct_UScriptStruct_FSwapAudioOutputResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapResult_MetaData), NewProp_SwapResult_MetaData) }; // 556524030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::NewProp_SwapResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice, nullptr, "OnCompletedDeviceSwap", nullptr, nullptr, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnCompletedDeviceSwap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::LyraSettingValueDiscreteDynamic_AudioOutputDevice_eventOnCompletedDeviceSwap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execOnCompletedDeviceSwap)
{
	P_GET_STRUCT_REF(FSwapAudioOutputResult,Z_Param_Out_SwapResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompletedDeviceSwap(Z_Param_Out_SwapResult);
	P_NATIVE_END;
}
// End Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice Function OnCompletedDeviceSwap

// Begin Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice
void ULyraSettingValueDiscreteDynamic_AudioOutputDevice::StaticRegisterNativesULyraSettingValueDiscreteDynamic_AudioOutputDevice()
{
	UClass* Class = ULyraSettingValueDiscreteDynamic_AudioOutputDevice::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultDeviceChanged", &ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execDefaultDeviceChanged },
		{ "DeviceAddedOrRemoved", &ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execDeviceAddedOrRemoved },
		{ "OnAudioOutputDevicesObtained", &ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execOnAudioOutputDevicesObtained },
		{ "OnCompletedDeviceSwap", &ULyraSettingValueDiscreteDynamic_AudioOutputDevice::execOnCompletedDeviceSwap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscreteDynamic_AudioOutputDevice);
UClass* Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_NoRegister()
{
	return ULyraSettingValueDiscreteDynamic_AudioOutputDevice::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DefaultDeviceChanged, "DefaultDeviceChanged" }, // 1187932135
		{ &Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_DeviceAddedOrRemoved, "DeviceAddedOrRemoved" }, // 1809746616
		{ &Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnAudioOutputDevicesObtained, "OnAudioOutputDevicesObtained" }, // 3060293154
		{ &Z_Construct_UFunction_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_OnCompletedDeviceSwap, "OnCompletedDeviceSwap" }, // 357884786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscreteDynamic_AudioOutputDevice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscreteDynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics::ClassParams = {
	&ULyraSettingValueDiscreteDynamic_AudioOutputDevice::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice()
{
	if (!Z_Registration_Info_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscreteDynamic_AudioOutputDevice>()
{
	return ULyraSettingValueDiscreteDynamic_AudioOutputDevice::StaticClass();
}
ULyraSettingValueDiscreteDynamic_AudioOutputDevice::ULyraSettingValueDiscreteDynamic_AudioOutputDevice() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscreteDynamic_AudioOutputDevice);
// End Class ULyraSettingValueDiscreteDynamic_AudioOutputDevice

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice, ULyraSettingValueDiscreteDynamic_AudioOutputDevice::StaticClass, TEXT("ULyraSettingValueDiscreteDynamic_AudioOutputDevice"), &Z_Registration_Info_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscreteDynamic_AudioOutputDevice), 368472306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_2486483873(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
