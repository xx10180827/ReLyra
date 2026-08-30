// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Settings/CustomSettings/LyraSettingKeyboardInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingKeyboardInput() {}

// Begin Cross Module References
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValue();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingKeyboardInput();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingKeyboardInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraSettingKeyboardInput
void ULyraSettingKeyboardInput::StaticRegisterNativesULyraSettingKeyboardInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingKeyboardInput);
UClass* Z_Construct_UClass_ULyraSettingKeyboardInput_NoRegister()
{
	return ULyraSettingKeyboardInput::StaticClass();
}
struct Z_Construct_UClass_ULyraSettingKeyboardInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------\n// ULyraSettingKeyboardInput\n//--------------------------------------\n" },
#endif
		{ "IncludePath", "Settings/CustomSettings/LyraSettingKeyboardInput.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingKeyboardInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraSettingKeyboardInput" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingKeyboardInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraSettingKeyboardInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValue,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingKeyboardInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingKeyboardInput_Statics::ClassParams = {
	&ULyraSettingKeyboardInput::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingKeyboardInput_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraSettingKeyboardInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraSettingKeyboardInput()
{
	if (!Z_Registration_Info_UClass_ULyraSettingKeyboardInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingKeyboardInput.OuterSingleton, Z_Construct_UClass_ULyraSettingKeyboardInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraSettingKeyboardInput.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraSettingKeyboardInput>()
{
	return ULyraSettingKeyboardInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingKeyboardInput);
ULyraSettingKeyboardInput::~ULyraSettingKeyboardInput() {}
// End Class ULyraSettingKeyboardInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingKeyboardInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingKeyboardInput, ULyraSettingKeyboardInput::StaticClass, TEXT("ULyraSettingKeyboardInput"), &Z_Registration_Info_UClass_ULyraSettingKeyboardInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingKeyboardInput), 84127215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingKeyboardInput_h_3552278565(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingKeyboardInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingKeyboardInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
