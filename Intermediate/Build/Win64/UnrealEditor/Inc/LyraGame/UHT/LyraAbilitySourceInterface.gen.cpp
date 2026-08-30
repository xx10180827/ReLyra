// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraAbilitySourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySourceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySourceInterface();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySourceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Interface ULyraAbilitySourceInterface
void ULyraAbilitySourceInterface::StaticRegisterNativesULyraAbilitySourceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySourceInterface);
UClass* Z_Construct_UClass_ULyraAbilitySourceInterface_NoRegister()
{
	return ULyraAbilitySourceInterface::StaticClass();
}
struct Z_Construct_UClass_ULyraAbilitySourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraAbilitySourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraAbilitySourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySourceInterface_Statics::ClassParams = {
	&ULyraAbilitySourceInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAbilitySourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAbilitySourceInterface()
{
	if (!Z_Registration_Info_UClass_ULyraAbilitySourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySourceInterface.OuterSingleton, Z_Construct_UClass_ULyraAbilitySourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAbilitySourceInterface.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySourceInterface>()
{
	return ULyraAbilitySourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySourceInterface);
ULyraAbilitySourceInterface::~ULyraAbilitySourceInterface() {}
// End Interface ULyraAbilitySourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySourceInterface, ULyraAbilitySourceInterface::StaticClass, TEXT("ULyraAbilitySourceInterface"), &Z_Registration_Info_UClass_ULyraAbilitySourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySourceInterface), 3768332760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySourceInterface_h_2367543607(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
