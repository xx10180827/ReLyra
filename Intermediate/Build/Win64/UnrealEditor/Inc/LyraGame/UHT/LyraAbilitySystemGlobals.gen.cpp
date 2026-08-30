// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySystemGlobals() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAbilitySystemGlobals
void ULyraAbilitySystemGlobals::StaticRegisterNativesULyraAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySystemGlobals);
UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals_NoRegister()
{
	return ULyraAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/LyraAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::ClassParams = {
	&ULyraAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_ULyraAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAbilitySystemGlobals.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySystemGlobals>()
{
	return ULyraAbilitySystemGlobals::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySystemGlobals);
ULyraAbilitySystemGlobals::~ULyraAbilitySystemGlobals() {}
// End Class ULyraAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySystemGlobals, ULyraAbilitySystemGlobals::StaticClass, TEXT("ULyraAbilitySystemGlobals"), &Z_Registration_Info_UClass_ULyraAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySystemGlobals), 940472412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_3799694081(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
