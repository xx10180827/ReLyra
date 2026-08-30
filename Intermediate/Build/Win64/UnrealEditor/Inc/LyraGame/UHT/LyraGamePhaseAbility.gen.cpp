// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Phases/LyraGamePhaseAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGamePhaseAbility() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGamePhaseAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGamePhaseAbility_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGamePhaseAbility
void ULyraGamePhaseAbility::StaticRegisterNativesULyraGamePhaseAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGamePhaseAbility);
UClass* Z_Construct_UClass_ULyraGamePhaseAbility_NoRegister()
{
	return ULyraGamePhaseAbility::StaticClass();
}
struct Z_Construct_UClass_ULyraGamePhaseAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGamePhaseAbility\n *\n * The base gameplay ability for any ability that is used to change the active game phase.\n */" },
#endif
		{ "HideCategories", "Input Input" },
		{ "IncludePath", "AbilitySystem/Phases/LyraGamePhaseAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGamePhaseAbility\n\nThe base gameplay ability for any ability that is used to change the active game phase." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePhaseTag_MetaData[] = {
		{ "Category", "Lyra|Game Phase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the game phase that this game phase ability is part of.  So for example,\n// if your game phase is GamePhase.RoundStart, then it will cancel all sibling phases.\n// So if you had a phase such as GamePhase.WaitingToStart that was active, starting\n// the ability part of RoundStart would end WaitingToStart.  However to get nested behaviors\n// you can also nest the phases.  So for example, GamePhase.Playing.NormalPlay, is a sub-phase\n// of the parent GamePhase.Playing, so changing the sub-phase to GamePhase.Playing.SuddenDeath,\n// would stop any ability tied to GamePhase.Playing.*, but wouldn't end any ability \n// tied to the GamePhase.Playing phase.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Phases/LyraGamePhaseAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the game phase that this game phase ability is part of.  So for example,\nif your game phase is GamePhase.RoundStart, then it will cancel all sibling phases.\nSo if you had a phase such as GamePhase.WaitingToStart that was active, starting\nthe ability part of RoundStart would end WaitingToStart.  However to get nested behaviors\nyou can also nest the phases.  So for example, GamePhase.Playing.NormalPlay, is a sub-phase\nof the parent GamePhase.Playing, so changing the sub-phase to GamePhase.Playing.SuddenDeath,\nwould stop any ability tied to GamePhase.Playing.*, but wouldn't end any ability\ntied to the GamePhase.Playing phase." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamePhaseTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGamePhaseAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGamePhaseAbility_Statics::NewProp_GamePhaseTag = { "GamePhaseTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGamePhaseAbility, GamePhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePhaseTag_MetaData), NewProp_GamePhaseTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGamePhaseAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGamePhaseAbility_Statics::NewProp_GamePhaseTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGamePhaseAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGamePhaseAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGamePhaseAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGamePhaseAbility_Statics::ClassParams = {
	&ULyraGamePhaseAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraGamePhaseAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGamePhaseAbility_Statics::PropPointers),
	0,
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGamePhaseAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGamePhaseAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGamePhaseAbility()
{
	if (!Z_Registration_Info_UClass_ULyraGamePhaseAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGamePhaseAbility.OuterSingleton, Z_Construct_UClass_ULyraGamePhaseAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGamePhaseAbility.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGamePhaseAbility>()
{
	return ULyraGamePhaseAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGamePhaseAbility);
ULyraGamePhaseAbility::~ULyraGamePhaseAbility() {}
// End Class ULyraGamePhaseAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGamePhaseAbility, ULyraGamePhaseAbility::StaticClass, TEXT("ULyraGamePhaseAbility"), &Z_Registration_Info_UClass_ULyraGamePhaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGamePhaseAbility), 729547891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseAbility_h_75078038(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
