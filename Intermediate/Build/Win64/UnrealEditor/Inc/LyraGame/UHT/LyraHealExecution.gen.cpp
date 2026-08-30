// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Executions/LyraHealExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHealExecution() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealExecution();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealExecution_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraHealExecution
void ULyraHealExecution::StaticRegisterNativesULyraHealExecution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHealExecution);
UClass* Z_Construct_UClass_ULyraHealExecution_NoRegister()
{
	return ULyraHealExecution::StaticClass();
}
struct Z_Construct_UClass_ULyraHealExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraHealExecution\n *\n *\x09""Execution used by gameplay effects to apply healing to the health attributes.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Executions/LyraHealExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/LyraHealExecution.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraHealExecution\n\n    Execution used by gameplay effects to apply healing to the health attributes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHealExecution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraHealExecution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealExecution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHealExecution_Statics::ClassParams = {
	&ULyraHealExecution::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraHealExecution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraHealExecution()
{
	if (!Z_Registration_Info_UClass_ULyraHealExecution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHealExecution.OuterSingleton, Z_Construct_UClass_ULyraHealExecution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraHealExecution.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraHealExecution>()
{
	return ULyraHealExecution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHealExecution);
ULyraHealExecution::~ULyraHealExecution() {}
// End Class ULyraHealExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHealExecution, ULyraHealExecution::StaticClass, TEXT("ULyraHealExecution"), &Z_Registration_Info_UClass_ULyraHealExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHealExecution), 3114820946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_1744636064(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
