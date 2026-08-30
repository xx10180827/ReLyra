// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Attributes/LyraAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAttributeSet
void ULyraAttributeSet::StaticRegisterNativesULyraAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAttributeSet);
UClass* Z_Construct_UClass_ULyraAttributeSet_NoRegister()
{
	return ULyraAttributeSet::StaticClass();
}
struct Z_Construct_UClass_ULyraAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraAttributeSet\n *\n *\x09""Base attribute set class for the project.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/LyraAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LyraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraAttributeSet\n\n    Base attribute set class for the project." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAttributeSet_Statics::ClassParams = {
	&ULyraAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAttributeSet()
{
	if (!Z_Registration_Info_UClass_ULyraAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAttributeSet.OuterSingleton, Z_Construct_UClass_ULyraAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAttributeSet.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAttributeSet>()
{
	return ULyraAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAttributeSet);
ULyraAttributeSet::~ULyraAttributeSet() {}
// End Class ULyraAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAttributeSet, ULyraAttributeSet::StaticClass, TEXT("ULyraAttributeSet"), &Z_Registration_Info_UClass_ULyraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAttributeSet), 3812889591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraAttributeSet_h_457937553(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
