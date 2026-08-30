// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Messages/GameplayMessageProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayMessageProcessor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LYRAGAME_API UClass* Z_Construct_UClass_UGameplayMessageProcessor();
LYRAGAME_API UClass* Z_Construct_UClass_UGameplayMessageProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UGameplayMessageProcessor
void UGameplayMessageProcessor::StaticRegisterNativesUGameplayMessageProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayMessageProcessor);
UClass* Z_Construct_UClass_UGameplayMessageProcessor_NoRegister()
{
	return UGameplayMessageProcessor::StaticClass();
}
struct Z_Construct_UClass_UGameplayMessageProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGameplayMessageProcessor\n * \n * Base class for any message processor which observes other gameplay messages\n * and potentially re-emits updates (e.g., when a chain or combo is detected)\n * \n * Note that these processors are spawned on the server once (not per player)\n * and should do their own internal filtering if only relevant for some players.\n */" },
#endif
		{ "IncludePath", "Messages/GameplayMessageProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Messages/GameplayMessageProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameplayMessageProcessor\n\nBase class for any message processor which observes other gameplay messages\nand potentially re-emits updates (e.g., when a chain or combo is detected)\n\nNote that these processors are spawned on the server once (not per player)\nand should do their own internal filtering if only relevant for some players." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayMessageProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayMessageProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayMessageProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayMessageProcessor_Statics::ClassParams = {
	&UGameplayMessageProcessor::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayMessageProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayMessageProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayMessageProcessor()
{
	if (!Z_Registration_Info_UClass_UGameplayMessageProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayMessageProcessor.OuterSingleton, Z_Construct_UClass_UGameplayMessageProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayMessageProcessor.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UGameplayMessageProcessor>()
{
	return UGameplayMessageProcessor::StaticClass();
}
UGameplayMessageProcessor::UGameplayMessageProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayMessageProcessor);
UGameplayMessageProcessor::~UGameplayMessageProcessor() {}
// End Class UGameplayMessageProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayMessageProcessor, UGameplayMessageProcessor::StaticClass, TEXT("UGameplayMessageProcessor"), &Z_Registration_Info_UClass_UGameplayMessageProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayMessageProcessor), 960492463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_3993301078(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
