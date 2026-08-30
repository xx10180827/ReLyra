// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraShotgunWeaponInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraShotgunWeaponInstance() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraShotgunWeaponInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraShotgunWeaponInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraShotgunWeaponInstance
void ULyraShotgunWeaponInstance::StaticRegisterNativesULyraShotgunWeaponInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraShotgunWeaponInstance);
UClass* Z_Construct_UClass_ULyraShotgunWeaponInstance_NoRegister()
{
	return ULyraShotgunWeaponInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraShotgunWeaponInstance\n *\n * A ranged weapon that fires multiple pellets per cartridge with a fixed spread angle.\n *\n * This class deliberately reuses the existing ranged-weapon firing ability (ULyraGameplayAbility_RangedWeapon)\n * rather than introducing a separate ability - Lyra's TraceBulletsInCartridge already loops over\n * BulletsPerCartridge, so a shotgun is expressed purely as data:\n *   - PelletCount is forwarded to BulletsPerCartridge (the firing ability loops that many times).\n *   - SpreadAngle is forwarded to a flat HeatToSpreadCurve, so designers can configure a fixed\n *     spread with a single number instead of authoring a curve.\n */" },
#endif
		{ "IncludePath", "Weapons/LyraShotgunWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/LyraShotgunWeaponInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraShotgunWeaponInstance\n\nA ranged weapon that fires multiple pellets per cartridge with a fixed spread angle.\n\nThis class deliberately reuses the existing ranged-weapon firing ability (ULyraGameplayAbility_RangedWeapon)\nrather than introducing a separate ability - Lyra's TraceBulletsInCartridge already loops over\nBulletsPerCartridge, so a shotgun is expressed purely as data:\n  - PelletCount is forwarded to BulletsPerCartridge (the firing ability loops that many times).\n  - SpreadAngle is forwarded to a flat HeatToSpreadCurve, so designers can configure a fixed\n    spread with a single number instead of authoring a curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelletCount_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of pellets fired per single cartridge (forwarded to BulletsPerCartridge on equip).\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraShotgunWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of pellets fired per single cartridge (forwarded to BulletsPerCartridge on equip)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fixed spread angle (in degrees, diametrical) applied to each pellet.\n" },
#endif
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraShotgunWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed spread angle (in degrees, diametrical) applied to each pellet." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PelletCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraShotgunWeaponInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::NewProp_PelletCount = { "PelletCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraShotgunWeaponInstance, PelletCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelletCount_MetaData), NewProp_PelletCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraShotgunWeaponInstance, SpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngle_MetaData), NewProp_SpreadAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::NewProp_PelletCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::NewProp_SpreadAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraRangedWeaponInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::ClassParams = {
	&ULyraShotgunWeaponInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraShotgunWeaponInstance()
{
	if (!Z_Registration_Info_UClass_ULyraShotgunWeaponInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraShotgunWeaponInstance.OuterSingleton, Z_Construct_UClass_ULyraShotgunWeaponInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraShotgunWeaponInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraShotgunWeaponInstance>()
{
	return ULyraShotgunWeaponInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraShotgunWeaponInstance);
ULyraShotgunWeaponInstance::~ULyraShotgunWeaponInstance() {}
// End Class ULyraShotgunWeaponInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraShotgunWeaponInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraShotgunWeaponInstance, ULyraShotgunWeaponInstance::StaticClass, TEXT("ULyraShotgunWeaponInstance"), &Z_Registration_Info_UClass_ULyraShotgunWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraShotgunWeaponInstance), 1505685524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraShotgunWeaponInstance_h_1664974157(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraShotgunWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraShotgunWeaponInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
