// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Camera/LyraCameraAssistInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraAssistInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraAssistInterface();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Interface ULyraCameraAssistInterface
void ULyraCameraAssistInterface::StaticRegisterNativesULyraCameraAssistInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraAssistInterface);
UClass* Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister()
{
	return ULyraCameraAssistInterface::StaticClass();
}
struct Z_Construct_UClass_ULyraCameraAssistInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Camera/LyraCameraAssistInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraCameraAssistInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraCameraAssistInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraAssistInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraAssistInterface_Statics::ClassParams = {
	&ULyraCameraAssistInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraAssistInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCameraAssistInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCameraAssistInterface()
{
	if (!Z_Registration_Info_UClass_ULyraCameraAssistInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraAssistInterface.OuterSingleton, Z_Construct_UClass_ULyraCameraAssistInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCameraAssistInterface.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCameraAssistInterface>()
{
	return ULyraCameraAssistInterface::StaticClass();
}
ULyraCameraAssistInterface::ULyraCameraAssistInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraAssistInterface);
ULyraCameraAssistInterface::~ULyraCameraAssistInterface() {}
// End Interface ULyraCameraAssistInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraAssistInterface, ULyraCameraAssistInterface::StaticClass, TEXT("ULyraCameraAssistInterface"), &Z_Registration_Info_UClass_ULyraCameraAssistInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraAssistInterface), 1786343506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_2596330468(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
