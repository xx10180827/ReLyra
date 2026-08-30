// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Subsystem/LyraUIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUIManagerSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUIManagerSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUIManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraUIManagerSubsystem
void ULyraUIManagerSubsystem::StaticRegisterNativesULyraUIManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUIManagerSubsystem);
UClass* Z_Construct_UClass_ULyraUIManagerSubsystem_NoRegister()
{
	return ULyraUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULyraUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Subsystem/LyraUIManagerSubsystem.h" },
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUIManagerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::ClassParams = {
	&ULyraUIManagerSubsystem::StaticClass,
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
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_ULyraUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_ULyraUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraUIManagerSubsystem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraUIManagerSubsystem>()
{
	return ULyraUIManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUIManagerSubsystem);
ULyraUIManagerSubsystem::~ULyraUIManagerSubsystem() {}
// End Class ULyraUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUIManagerSubsystem, ULyraUIManagerSubsystem::StaticClass, TEXT("ULyraUIManagerSubsystem"), &Z_Registration_Info_UClass_ULyraUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUIManagerSubsystem), 4251025026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIManagerSubsystem_h_3479094709(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
