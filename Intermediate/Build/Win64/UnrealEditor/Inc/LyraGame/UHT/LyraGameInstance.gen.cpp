// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameInstance() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameInstance
void ULyraGameInstance::StaticRegisterNativesULyraGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameInstance);
UClass* Z_Construct_UClass_ULyraGameInstance_NoRegister()
{
	return ULyraGameInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraGameInstance.h" },
		{ "ModuleRelativePath", "System/LyraGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameInstance_Statics::ClassParams = {
	&ULyraGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameInstance()
{
	if (!Z_Registration_Info_UClass_ULyraGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameInstance.OuterSingleton, Z_Construct_UClass_ULyraGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameInstance>()
{
	return ULyraGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameInstance);
ULyraGameInstance::~ULyraGameInstance() {}
// End Class ULyraGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameInstance, ULyraGameInstance::StaticClass, TEXT("ULyraGameInstance"), &Z_Registration_Info_UClass_ULyraGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameInstance), 3731891058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_2251477346(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
