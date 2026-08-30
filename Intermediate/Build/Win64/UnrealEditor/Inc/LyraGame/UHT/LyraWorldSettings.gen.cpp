// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraWorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWorldSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraWorldSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraWorldSettings_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraWorldSettings
void ALyraWorldSettings::StaticRegisterNativesALyraWorldSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraWorldSettings);
UClass* Z_Construct_UClass_ALyraWorldSettings_NoRegister()
{
	return ALyraWorldSettings::StaticClass();
}
struct Z_Construct_UClass_ALyraWorldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The default world settings object, used primarily to set the default gameplay experience to use when playing on this map\n */" },
#endif
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication LevelInstance Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "GameModes/LyraWorldSettings.h" },
		{ "ModuleRelativePath", "GameModes/LyraWorldSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default world settings object, used primarily to set the default gameplay experience to use when playing on this map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayExperience_MetaData[] = {
		{ "Category", "GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default experience to use when a server opens this map if it is not overridden by the user-facing experience\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default experience to use when a server opens this map if it is not overridden by the user-facing experience" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceStandaloneNetMode_MetaData[] = {
		{ "Category", "PIE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this level part of a front-end or other standalone experience?\n// When set, the net mode will be forced to Standalone when you hit Play in the editor\n" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this level part of a front-end or other standalone experience?\nWhen set, the net mode will be forced to Standalone when you hit Play in the editor" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultGameplayExperience;
#if WITH_EDITORONLY_DATA
	static void NewProp_ForceStandaloneNetMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceStandaloneNetMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraWorldSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience = { "DefaultGameplayExperience", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraWorldSettings, DefaultGameplayExperience), Z_Construct_UClass_ULyraExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayExperience_MetaData), NewProp_DefaultGameplayExperience_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_SetBit(void* Obj)
{
	((ALyraWorldSettings*)Obj)->ForceStandaloneNetMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode = { "ForceStandaloneNetMode", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALyraWorldSettings), &Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceStandaloneNetMode_MetaData), NewProp_ForceStandaloneNetMode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraWorldSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWorldSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraWorldSettings_Statics::ClassParams = {
	&ALyraWorldSettings::StaticClass,
	"game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraWorldSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraWorldSettings()
{
	if (!Z_Registration_Info_UClass_ALyraWorldSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraWorldSettings.OuterSingleton, Z_Construct_UClass_ALyraWorldSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraWorldSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraWorldSettings>()
{
	return ALyraWorldSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraWorldSettings);
ALyraWorldSettings::~ALyraWorldSettings() {}
// End Class ALyraWorldSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraWorldSettings, ALyraWorldSettings::StaticClass, TEXT("ALyraWorldSettings"), &Z_Registration_Info_UClass_ALyraWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraWorldSettings), 2377240848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_2520973381(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
