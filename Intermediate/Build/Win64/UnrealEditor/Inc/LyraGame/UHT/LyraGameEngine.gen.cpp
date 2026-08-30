// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraGameEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameEngine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameEngine();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameEngine_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameEngine
void ULyraGameEngine::StaticRegisterNativesULyraGameEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameEngine);
UClass* Z_Construct_UClass_ULyraGameEngine_NoRegister()
{
	return ULyraGameEngine::StaticClass();
}
struct Z_Construct_UClass_ULyraGameEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraGameEngine.h" },
		{ "ModuleRelativePath", "System/LyraGameEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameEngine,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameEngine_Statics::ClassParams = {
	&ULyraGameEngine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameEngine()
{
	if (!Z_Registration_Info_UClass_ULyraGameEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameEngine.OuterSingleton, Z_Construct_UClass_ULyraGameEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameEngine.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameEngine>()
{
	return ULyraGameEngine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameEngine);
ULyraGameEngine::~ULyraGameEngine() {}
// End Class ULyraGameEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameEngine, ULyraGameEngine::StaticClass, TEXT("ULyraGameEngine"), &Z_Registration_Info_UClass_ULyraGameEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameEngine), 3999954940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_288280718(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
