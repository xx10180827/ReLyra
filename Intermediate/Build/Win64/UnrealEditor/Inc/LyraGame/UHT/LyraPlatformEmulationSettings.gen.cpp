// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Development/LyraPlatformEmulationSettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlatformEmulationSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPlatformEmulationSettings Function GetKnownDeviceProfiles
struct Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics
{
	struct LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPlatformEmulationSettings, nullptr, "GetKnownDeviceProfiles", nullptr, nullptr, Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPlatformEmulationSettings::execGetKnownDeviceProfiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetKnownDeviceProfiles();
	P_NATIVE_END;
}
// End Class ULyraPlatformEmulationSettings Function GetKnownDeviceProfiles

// Begin Class ULyraPlatformEmulationSettings Function GetKnownPlatformIds
struct Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics
{
	struct LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPlatformEmulationSettings, nullptr, "GetKnownPlatformIds", nullptr, nullptr, Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPlatformEmulationSettings::execGetKnownPlatformIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetKnownPlatformIds();
	P_NATIVE_END;
}
// End Class ULyraPlatformEmulationSettings Function GetKnownPlatformIds

// Begin Class ULyraPlatformEmulationSettings
void ULyraPlatformEmulationSettings::StaticRegisterNativesULyraPlatformEmulationSettings()
{
	UClass* Class = ULyraPlatformEmulationSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetKnownDeviceProfiles", &ULyraPlatformEmulationSettings::execGetKnownDeviceProfiles },
		{ "GetKnownPlatformIds", &ULyraPlatformEmulationSettings::execGetKnownPlatformIds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPlatformEmulationSettings);
UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings_NoRegister()
{
	return ULyraPlatformEmulationSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Platform emulation settings\n */" },
#endif
		{ "IncludePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform emulation settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlatformTraitsToEnable_MetaData[] = {
		{ "Categories", "Input,Platform.Trait" },
		{ "Category", "PlatformEmulation" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlatformTraitsToSuppress_MetaData[] = {
		{ "Categories", "Input,Platform.Trait" },
		{ "Category", "PlatformEmulation" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PretendPlatform_MetaData[] = {
		{ "Category", "PlatformEmulation" },
		{ "GetOptions", "GetKnownPlatformIds" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PretendBaseDeviceProfile_MetaData[] = {
		{ "Category", "PlatformEmulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base device profile to pretend we are using when emulating device-specific device profiles applied from ULyraSettingsLocal\n" },
#endif
		{ "EditCondition", "bApplyDeviceProfilesInPIE" },
		{ "GetOptions", "GetKnownDeviceProfiles" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base device profile to pretend we are using when emulating device-specific device profiles applied from ULyraSettingsLocal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFrameRateSettingsInPIE_MetaData[] = {
		{ "Category", "PlatformEmulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Do we apply desktop-style frame rate settings in PIE?\n// (frame rate limits are an engine-wide setting so it's not always desirable to have enabled in the editor)\n// You may also want to disable the editor preference \"Use Less CPU when in Background\" if testing background frame rate limits\n" },
#endif
		{ "ConsoleVariable", "Lyra.Settings.ApplyFrameRateSettingsInPIE" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Do we apply desktop-style frame rate settings in PIE?\n(frame rate limits are an engine-wide setting so it's not always desirable to have enabled in the editor)\nYou may also want to disable the editor preference \"Use Less CPU when in Background\" if testing background frame rate limits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData[] = {
		{ "Category", "PlatformEmulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Do we apply front-end specific performance options in PIE?\n// Most engine performance/scalability settings they drive are global, so if one PIE window\n// is in the front-end and the other is in-game one will win and the other gets stuck with those settings\n" },
#endif
		{ "ConsoleVariable", "Lyra.Settings.ApplyFrontEndPerformanceOptionsInPIE" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Do we apply front-end specific performance options in PIE?\nMost engine performance/scalability settings they drive are global, so if one PIE window\nis in the front-end and the other is in-game one will win and the other gets stuck with those settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDeviceProfilesInPIE_MetaData[] = {
		{ "Category", "PlatformEmulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we apply experience/platform emulated device profiles in PIE?\n" },
#endif
		{ "ConsoleVariable", "Lyra.Settings.ApplyDeviceProfilesInPIE" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we apply experience/platform emulated device profiles in PIE?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPlatformTraitsToEnable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPlatformTraitsToSuppress;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PretendPlatform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PretendBaseDeviceProfile;
	static void NewProp_bApplyFrameRateSettingsInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFrameRateSettingsInPIE;
	static void NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFrontEndPerformanceOptionsInPIE;
	static void NewProp_bApplyDeviceProfilesInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDeviceProfilesInPIE;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles, "GetKnownDeviceProfiles" }, // 4002859016
		{ &Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds, "GetKnownPlatformIds" }, // 1561589300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPlatformEmulationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable = { "AdditionalPlatformTraitsToEnable", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPlatformEmulationSettings, AdditionalPlatformTraitsToEnable), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPlatformTraitsToEnable_MetaData), NewProp_AdditionalPlatformTraitsToEnable_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress = { "AdditionalPlatformTraitsToSuppress", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPlatformEmulationSettings, AdditionalPlatformTraitsToSuppress), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPlatformTraitsToSuppress_MetaData), NewProp_AdditionalPlatformTraitsToSuppress_MetaData) }; // 3352185621
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform = { "PretendPlatform", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPlatformEmulationSettings, PretendPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PretendPlatform_MetaData), NewProp_PretendPlatform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile = { "PretendBaseDeviceProfile", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPlatformEmulationSettings, PretendBaseDeviceProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PretendBaseDeviceProfile_MetaData), NewProp_PretendBaseDeviceProfile_MetaData) };
void Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_SetBit(void* Obj)
{
	((ULyraPlatformEmulationSettings*)Obj)->bApplyFrameRateSettingsInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE = { "bApplyFrameRateSettingsInPIE", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraPlatformEmulationSettings), &Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyFrameRateSettingsInPIE_MetaData), NewProp_bApplyFrameRateSettingsInPIE_MetaData) };
void Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit(void* Obj)
{
	((ULyraPlatformEmulationSettings*)Obj)->bApplyFrontEndPerformanceOptionsInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE = { "bApplyFrontEndPerformanceOptionsInPIE", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraPlatformEmulationSettings), &Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData), NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData) };
void Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_SetBit(void* Obj)
{
	((ULyraPlatformEmulationSettings*)Obj)->bApplyDeviceProfilesInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE = { "bApplyDeviceProfilesInPIE", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraPlatformEmulationSettings), &Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyDeviceProfilesInPIE_MetaData), NewProp_bApplyDeviceProfilesInPIE_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::ClassParams = {
	&ULyraPlatformEmulationSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings()
{
	if (!Z_Registration_Info_UClass_ULyraPlatformEmulationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPlatformEmulationSettings.OuterSingleton, Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPlatformEmulationSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPlatformEmulationSettings>()
{
	return ULyraPlatformEmulationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPlatformEmulationSettings);
ULyraPlatformEmulationSettings::~ULyraPlatformEmulationSettings() {}
// End Class ULyraPlatformEmulationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPlatformEmulationSettings, ULyraPlatformEmulationSettings::StaticClass, TEXT("ULyraPlatformEmulationSettings"), &Z_Registration_Info_UClass_ULyraPlatformEmulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPlatformEmulationSettings), 1106005283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_1497237824(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
