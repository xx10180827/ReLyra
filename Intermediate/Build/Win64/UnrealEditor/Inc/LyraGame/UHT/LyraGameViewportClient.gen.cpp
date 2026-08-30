// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/LyraGameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameViewportClient() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonGameViewportClient();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameViewportClient();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameViewportClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameViewportClient
void ULyraGameViewportClient::StaticRegisterNativesULyraGameViewportClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameViewportClient);
UClass* Z_Construct_UClass_ULyraGameViewportClient_NoRegister()
{
	return ULyraGameViewportClient::StaticClass();
}
struct Z_Construct_UClass_ULyraGameViewportClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/LyraGameViewportClient.h" },
		{ "ModuleRelativePath", "UI/LyraGameViewportClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameViewportClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameViewportClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameViewportClient,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameViewportClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameViewportClient_Statics::ClassParams = {
	&ULyraGameViewportClient::StaticClass,
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
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameViewportClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameViewportClient()
{
	if (!Z_Registration_Info_UClass_ULyraGameViewportClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameViewportClient.OuterSingleton, Z_Construct_UClass_ULyraGameViewportClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameViewportClient.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameViewportClient>()
{
	return ULyraGameViewportClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameViewportClient);
ULyraGameViewportClient::~ULyraGameViewportClient() {}
// End Class ULyraGameViewportClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameViewportClient, ULyraGameViewportClient::StaticClass, TEXT("ULyraGameViewportClient"), &Z_Registration_Info_UClass_ULyraGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameViewportClient), 1471261696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_1035542228(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
