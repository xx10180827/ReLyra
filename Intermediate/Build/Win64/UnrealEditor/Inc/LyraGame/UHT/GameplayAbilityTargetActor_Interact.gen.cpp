// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/Abilities/GameplayAbilityTargetActor_Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_Interact() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
LYRAGAME_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact();
LYRAGAME_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class AGameplayAbilityTargetActor_Interact
void AGameplayAbilityTargetActor_Interact::StaticRegisterNativesAGameplayAbilityTargetActor_Interact()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_Interact);
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_NoRegister()
{
	return AGameplayAbilityTargetActor_Interact::StaticClass();
}
struct Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Intermediate base class for all interaction target actors. */" },
#endif
		{ "IncludePath", "Interaction/Abilities/GameplayAbilityTargetActor_Interact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Interaction/Abilities/GameplayAbilityTargetActor_Interact.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intermediate base class for all interaction target actors." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_Interact>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_Trace,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::ClassParams = {
	&AGameplayAbilityTargetActor_Interact::StaticClass,
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
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact()
{
	if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<AGameplayAbilityTargetActor_Interact>()
{
	return AGameplayAbilityTargetActor_Interact::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_Interact);
AGameplayAbilityTargetActor_Interact::~AGameplayAbilityTargetActor_Interact() {}
// End Class AGameplayAbilityTargetActor_Interact

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_Interact, AGameplayAbilityTargetActor_Interact::StaticClass, TEXT("AGameplayAbilityTargetActor_Interact"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_Interact), 750028341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_1829882075(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
