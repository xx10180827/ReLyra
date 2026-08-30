// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraGameplayAbilityTargetData_SingleTargetHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbilityTargetData_SingleTargetHit() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraGameplayAbilityTargetData_SingleTargetHit
static_assert(std::is_polymorphic<FLyraGameplayAbilityTargetData_SingleTargetHit>() == std::is_polymorphic<FGameplayAbilityTargetData_SingleTargetHit>(), "USTRUCT FLyraGameplayAbilityTargetData_SingleTargetHit cannot be polymorphic unless super FGameplayAbilityTargetData_SingleTargetHit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit;
class UScriptStruct* FLyraGameplayAbilityTargetData_SingleTargetHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraGameplayAbilityTargetData_SingleTargetHit"));
	}
	return Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraGameplayAbilityTargetData_SingleTargetHit>()
{
	return FLyraGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game-specific additions to SingleTargetHit tracking */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayAbilityTargetData_SingleTargetHit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game-specific additions to SingleTargetHit tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayAbilityTargetData_SingleTargetHit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraGameplayAbilityTargetData_SingleTargetHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraGameplayAbilityTargetData_SingleTargetHit, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit,
	&NewStructOps,
	"LyraGameplayAbilityTargetData_SingleTargetHit",
	Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers),
	sizeof(FLyraGameplayAbilityTargetData_SingleTargetHit),
	alignof(FLyraGameplayAbilityTargetData_SingleTargetHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit()
{
	if (!Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit.InnerSingleton, Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit.InnerSingleton;
}
// End ScriptStruct FLyraGameplayAbilityTargetData_SingleTargetHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayAbilityTargetData_SingleTargetHit_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraGameplayAbilityTargetData_SingleTargetHit::StaticStruct, Z_Construct_UScriptStruct_FLyraGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps, TEXT("LyraGameplayAbilityTargetData_SingleTargetHit"), &Z_Registration_Info_UScriptStruct_LyraGameplayAbilityTargetData_SingleTargetHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraGameplayAbilityTargetData_SingleTargetHit), 4165700736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayAbilityTargetData_SingleTargetHit_h_4169223465(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
