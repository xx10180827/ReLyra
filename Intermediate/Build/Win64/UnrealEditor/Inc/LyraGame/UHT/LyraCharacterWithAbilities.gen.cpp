// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraCharacterWithAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacterWithAbilities() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacterWithAbilities();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacterWithAbilities_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCombatSet_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealthSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraCharacterWithAbilities
void ALyraCharacterWithAbilities::StaticRegisterNativesALyraCharacterWithAbilities()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraCharacterWithAbilities);
UClass* Z_Construct_UClass_ALyraCharacterWithAbilities_NoRegister()
{
	return ALyraCharacterWithAbilities::StaticClass();
}
struct Z_Construct_UClass_ALyraCharacterWithAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ALyraCharacter typically gets the ability system component from the possessing player state\n// This represents a character with a self-contained ability system component.\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LyraCharacterWithAbilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacterWithAbilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraCharacter typically gets the ability system component from the possessing player state\nThis represents a character with a self-contained ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Lyra|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacterWithAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component sub-object used by player characters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health attribute set used by this actor.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacterWithAbilities.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health attribute set used by this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat attribute set used by this actor.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacterWithAbilities.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat attribute set used by this actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraCharacterWithAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacterWithAbilities, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_HealthSet = { "HealthSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacterWithAbilities, HealthSet), Z_Construct_UClass_ULyraHealthSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSet_MetaData), NewProp_HealthSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_CombatSet = { "CombatSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraCharacterWithAbilities, CombatSet), Z_Construct_UClass_ULyraCombatSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatSet_MetaData), NewProp_CombatSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_HealthSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_CombatSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALyraCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::ClassParams = {
	&ALyraCharacterWithAbilities::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraCharacterWithAbilities()
{
	if (!Z_Registration_Info_UClass_ALyraCharacterWithAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraCharacterWithAbilities.OuterSingleton, Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraCharacterWithAbilities.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraCharacterWithAbilities>()
{
	return ALyraCharacterWithAbilities::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraCharacterWithAbilities);
ALyraCharacterWithAbilities::~ALyraCharacterWithAbilities() {}
// End Class ALyraCharacterWithAbilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraCharacterWithAbilities, ALyraCharacterWithAbilities::StaticClass, TEXT("ALyraCharacterWithAbilities"), &Z_Registration_Info_UClass_ALyraCharacterWithAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraCharacterWithAbilities), 807848664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_170164537(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
