// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Cosmetics/LyraCosmeticDeveloperSettings.h"
#include "LyraGame/Cosmetics/LyraCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCosmeticDeveloperSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ECosmeticCheatMode();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ECosmeticCheatMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECosmeticCheatMode;
static UEnum* ECosmeticCheatMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECosmeticCheatMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECosmeticCheatMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ECosmeticCheatMode"));
	}
	return Z_Registration_Info_UEnum_ECosmeticCheatMode.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ECosmeticCheatMode>()
{
	return ECosmeticCheatMode_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddParts.Name", "ECosmeticCheatMode::AddParts" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
		{ "ReplaceParts.Name", "ECosmeticCheatMode::ReplaceParts" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECosmeticCheatMode::ReplaceParts", (int64)ECosmeticCheatMode::ReplaceParts },
		{ "ECosmeticCheatMode::AddParts", (int64)ECosmeticCheatMode::AddParts },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ECosmeticCheatMode",
	"ECosmeticCheatMode",
	Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ECosmeticCheatMode()
{
	if (!Z_Registration_Info_UEnum_ECosmeticCheatMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECosmeticCheatMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECosmeticCheatMode.InnerSingleton;
}
// End Enum ECosmeticCheatMode

// Begin Class ULyraCosmeticDeveloperSettings
void ULyraCosmeticDeveloperSettings::StaticRegisterNativesULyraCosmeticDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCosmeticDeveloperSettings);
UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings_NoRegister()
{
	return ULyraCosmeticDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Cosmetic developer settings / editor cheats\n */" },
#endif
		{ "IncludePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic developer settings / editor cheats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatCosmeticCharacterParts_MetaData[] = {
		{ "Category", "LyraCosmeticDeveloperSettings" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatMode_MetaData[] = {
		{ "Category", "LyraCosmeticDeveloperSettings" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheatCosmeticCharacterParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatCosmeticCharacterParts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheatMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheatMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCosmeticDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_Inner = { "CheatCosmeticCharacterParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(0, nullptr) }; // 2027995414
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts = { "CheatCosmeticCharacterParts", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCosmeticDeveloperSettings, CheatCosmeticCharacterParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatCosmeticCharacterParts_MetaData), NewProp_CheatCosmeticCharacterParts_MetaData) }; // 2027995414
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode = { "CheatMode", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraCosmeticDeveloperSettings, CheatMode), Z_Construct_UEnum_LyraGame_ECosmeticCheatMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatMode_MetaData), NewProp_CheatMode_MetaData) }; // 3137659677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::ClassParams = {
	&ULyraCosmeticDeveloperSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings.OuterSingleton, Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCosmeticDeveloperSettings>()
{
	return ULyraCosmeticDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCosmeticDeveloperSettings);
ULyraCosmeticDeveloperSettings::~ULyraCosmeticDeveloperSettings() {}
// End Class ULyraCosmeticDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECosmeticCheatMode_StaticEnum, TEXT("ECosmeticCheatMode"), &Z_Registration_Info_UEnum_ECosmeticCheatMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3137659677U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCosmeticDeveloperSettings, ULyraCosmeticDeveloperSettings::StaticClass, TEXT("ULyraCosmeticDeveloperSettings"), &Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCosmeticDeveloperSettings), 472237876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_159793533(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
