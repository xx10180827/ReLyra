// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraGameplayAbility_Reset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Reset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraPlayerResetMessage();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameplayAbility_Reset
void ULyraGameplayAbility_Reset::StaticRegisterNativesULyraGameplayAbility_Reset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Reset);
UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset_NoRegister()
{
	return ULyraGameplayAbility_Reset::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_Reset\n *\n *\x09Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n *\x09""Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only).\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_Reset\n\n    Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n    Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only)." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Reset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::ClassParams = {
	&ULyraGameplayAbility_Reset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Reset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Reset.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_Reset.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Reset>()
{
	return ULyraGameplayAbility_Reset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Reset);
ULyraGameplayAbility_Reset::~ULyraGameplayAbility_Reset() {}
// End Class ULyraGameplayAbility_Reset

// Begin ScriptStruct FLyraPlayerResetMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage;
class UScriptStruct* FLyraPlayerResetMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraPlayerResetMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraPlayerResetMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraPlayerResetMessage>()
{
	return FLyraPlayerResetMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerState_MetaData[] = {
		{ "Category", "LyraPlayerResetMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraPlayerResetMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState = { "OwnerPlayerState", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraPlayerResetMessage, OwnerPlayerState), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPlayerState_MetaData), NewProp_OwnerPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraPlayerResetMessage",
	Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers),
	sizeof(FLyraPlayerResetMessage),
	alignof(FLyraPlayerResetMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraPlayerResetMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.InnerSingleton;
}
// End ScriptStruct FLyraPlayerResetMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraPlayerResetMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewStructOps, TEXT("LyraPlayerResetMessage"), &Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraPlayerResetMessage), 2171040134U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Reset, ULyraGameplayAbility_Reset::StaticClass, TEXT("ULyraGameplayAbility_Reset"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Reset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Reset), 1886452990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_1317414862(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
