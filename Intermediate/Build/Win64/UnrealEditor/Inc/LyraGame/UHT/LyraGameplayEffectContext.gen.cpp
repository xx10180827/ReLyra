// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayEffectContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraGameplayEffectContext
static_assert(std::is_polymorphic<FLyraGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FLyraGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext;
class UScriptStruct* FLyraGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraGameplayEffectContext>()
{
	return FLyraGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayEffectContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySourceObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability Source object (should implement ILyraAbilitySourceInterface). NOT replicated currently */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayEffectContext.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability Source object (should implement ILyraAbilitySourceInterface). NOT replicated currently" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraGameplayEffectContext, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject = { "AbilitySourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraGameplayEffectContext, AbilitySourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySourceObject_MetaData), NewProp_AbilitySourceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"LyraGameplayEffectContext",
	Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers),
	sizeof(FLyraGameplayEffectContext),
	alignof(FLyraGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FLyraGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewStructOps, TEXT("LyraGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraGameplayEffectContext), 108798499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_2065585915(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
