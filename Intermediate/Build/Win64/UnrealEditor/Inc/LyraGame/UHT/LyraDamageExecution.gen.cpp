// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Executions/LyraDamageExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDamageExecution() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamageExecution();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamageExecution_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraDamageExecution
void ULyraDamageExecution::StaticRegisterNativesULyraDamageExecution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDamageExecution);
UClass* Z_Construct_UClass_ULyraDamageExecution_NoRegister()
{
	return ULyraDamageExecution::StaticClass();
}
struct Z_Construct_UClass_ULyraDamageExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraDamageExecution\n *\n *\x09""Execution used by gameplay effects to apply damage to the health attributes.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Executions/LyraDamageExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/LyraDamageExecution.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraDamageExecution\n\n    Execution used by gameplay effects to apply damage to the health attributes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDamageExecution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraDamageExecution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageExecution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDamageExecution_Statics::ClassParams = {
	&ULyraDamageExecution::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraDamageExecution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraDamageExecution()
{
	if (!Z_Registration_Info_UClass_ULyraDamageExecution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDamageExecution.OuterSingleton, Z_Construct_UClass_ULyraDamageExecution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraDamageExecution.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraDamageExecution>()
{
	return ULyraDamageExecution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDamageExecution);
ULyraDamageExecution::~ULyraDamageExecution() {}
// End Class ULyraDamageExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDamageExecution, ULyraDamageExecution::StaticClass, TEXT("ULyraDamageExecution"), &Z_Registration_Info_UClass_ULyraDamageExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDamageExecution), 3993899526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_767069063(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
