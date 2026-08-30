// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Tests/LyraTestControllerBootTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTestControllerBootTest() {}

// Begin Cross Module References
GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerBootTest();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTestControllerBootTest();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTestControllerBootTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTestControllerBootTest
void ULyraTestControllerBootTest::StaticRegisterNativesULyraTestControllerBootTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTestControllerBootTest);
UClass* Z_Construct_UClass_ULyraTestControllerBootTest_NoRegister()
{
	return ULyraTestControllerBootTest::StaticClass();
}
struct Z_Construct_UClass_ULyraTestControllerBootTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/LyraTestControllerBootTest.h" },
		{ "ModuleRelativePath", "Tests/LyraTestControllerBootTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTestControllerBootTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraTestControllerBootTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGauntletTestControllerBootTest,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTestControllerBootTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTestControllerBootTest_Statics::ClassParams = {
	&ULyraTestControllerBootTest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTestControllerBootTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTestControllerBootTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTestControllerBootTest()
{
	if (!Z_Registration_Info_UClass_ULyraTestControllerBootTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTestControllerBootTest.OuterSingleton, Z_Construct_UClass_ULyraTestControllerBootTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTestControllerBootTest.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTestControllerBootTest>()
{
	return ULyraTestControllerBootTest::StaticClass();
}
ULyraTestControllerBootTest::ULyraTestControllerBootTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTestControllerBootTest);
ULyraTestControllerBootTest::~ULyraTestControllerBootTest() {}
// End Class ULyraTestControllerBootTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTestControllerBootTest, ULyraTestControllerBootTest::StaticClass, TEXT("ULyraTestControllerBootTest"), &Z_Registration_Info_UClass_ULyraTestControllerBootTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTestControllerBootTest), 1144228925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_2192472729(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
