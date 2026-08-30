// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Input/LyraAimSensitivityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAimSensitivityData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAimSensitivityData();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAimSensitivityData_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAimSensitivityData
void ULyraAimSensitivityData::StaticRegisterNativesULyraAimSensitivityData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAimSensitivityData);
UClass* Z_Construct_UClass_ULyraAimSensitivityData_NoRegister()
{
	return ULyraAimSensitivityData::StaticClass();
}
struct Z_Construct_UClass_ULyraAimSensitivityData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines a set of gamepad sensitivity to a float value. */" },
#endif
		{ "DisplayName", "Lyra Aim Sensitivity Data" },
		{ "IncludePath", "Input/LyraAimSensitivityData.h" },
		{ "ModuleRelativePath", "Input/LyraAimSensitivityData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a map of Gamepad Sensitivty to a float value." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a set of gamepad sensitivity to a float value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensitivityMap_MetaData[] = {
		{ "Category", "LyraAimSensitivityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map of SensitivityMap settings to their corresponding float */" },
#endif
		{ "ModuleRelativePath", "Input/LyraAimSensitivityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of SensitivityMap settings to their corresponding float" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SensitivityMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SensitivityMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SensitivityMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SensitivityMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAimSensitivityData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_ValueProp = { "SensitivityMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp = { "SensitivityMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(0, nullptr) }; // 4214474486
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap = { "SensitivityMap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAimSensitivityData, SensitivityMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensitivityMap_MetaData), NewProp_SensitivityMap_MetaData) }; // 4214474486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAimSensitivityData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::ClassParams = {
	&ULyraAimSensitivityData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAimSensitivityData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAimSensitivityData()
{
	if (!Z_Registration_Info_UClass_ULyraAimSensitivityData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAimSensitivityData.OuterSingleton, Z_Construct_UClass_ULyraAimSensitivityData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAimSensitivityData.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAimSensitivityData>()
{
	return ULyraAimSensitivityData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAimSensitivityData);
ULyraAimSensitivityData::~ULyraAimSensitivityData() {}
// End Class ULyraAimSensitivityData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAimSensitivityData, ULyraAimSensitivityData::StaticClass, TEXT("ULyraAimSensitivityData"), &Z_Registration_Info_UClass_ULyraAimSensitivityData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAimSensitivityData), 1592872845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_3359076582(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
