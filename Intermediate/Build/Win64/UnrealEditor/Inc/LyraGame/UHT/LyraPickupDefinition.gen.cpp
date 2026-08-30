// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Equipment/LyraPickupDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPickupDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPickupDefinition();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPickupDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPickupDefinition
void ULyraPickupDefinition::StaticRegisterNativesULyraPickupDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPickupDefinition);
UClass* Z_Construct_UClass_ULyraPickupDefinition_NoRegister()
{
	return ULyraPickupDefinition::StaticClass();
}
struct Z_Construct_UClass_ULyraPickupDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Lyra Pickup Data" },
		{ "IncludePath", "Equipment/LyraPickupDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ShortTooltip", "Data asset used to configure a pickup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItemDefinition_MetaData[] = {
		{ "Category", "Lyra|Pickup|Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Defines the pickup's actors to spawn, abilities to grant, and tags to add\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the pickup's actors to spawn, abilities to grant, and tags to add" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMesh_MetaData[] = {
		{ "Category", "Lyra|Pickup|Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Visual representation of the pickup\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual representation of the pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoolDownSeconds_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Cool down time between pickups in seconds\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cool down time between pickups in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpSound_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound to play when picked up\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play when picked up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnedSound_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound to play when pickup is respawned\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play when pickup is respawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpEffect_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Particle FX to play when picked up\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle FX to play when picked up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnedEffect_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Particle FX to play when pickup is respawned\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle FX to play when pickup is respawned" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryItemDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCoolDownSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickedUpSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnedSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickedUpEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnedEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPickupDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition = { "InventoryItemDefinition", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, InventoryItemDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItemDefinition_MetaData), NewProp_InventoryItemDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, DisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayMesh_MetaData), NewProp_DisplayMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds = { "SpawnCoolDownSeconds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, SpawnCoolDownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCoolDownSeconds_MetaData), NewProp_SpawnCoolDownSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound = { "PickedUpSound", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, PickedUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickedUpSound_MetaData), NewProp_PickedUpSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound = { "RespawnedSound", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, RespawnedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnedSound_MetaData), NewProp_RespawnedSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect = { "PickedUpEffect", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, PickedUpEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickedUpEffect_MetaData), NewProp_PickedUpEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect = { "RespawnedEffect", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPickupDefinition, RespawnedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnedEffect_MetaData), NewProp_RespawnedEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPickupDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPickupDefinition_Statics::ClassParams = {
	&ULyraPickupDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPickupDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPickupDefinition()
{
	if (!Z_Registration_Info_UClass_ULyraPickupDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPickupDefinition.OuterSingleton, Z_Construct_UClass_ULyraPickupDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPickupDefinition.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPickupDefinition>()
{
	return ULyraPickupDefinition::StaticClass();
}
ULyraPickupDefinition::ULyraPickupDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPickupDefinition);
ULyraPickupDefinition::~ULyraPickupDefinition() {}
// End Class ULyraPickupDefinition

// Begin Class ULyraWeaponPickupDefinition
void ULyraWeaponPickupDefinition::StaticRegisterNativesULyraWeaponPickupDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponPickupDefinition);
UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister()
{
	return ULyraWeaponPickupDefinition::StaticClass();
}
struct Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Lyra Weapon Pickup Data" },
		{ "IncludePath", "Equipment/LyraPickupDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ShortTooltip", "Data asset used to configure a weapon pickup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshOffset_MetaData[] = {
		{ "Category", "Lyra|Pickup|Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the height of the display mesh above the Weapon spawner\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the height of the display mesh above the Weapon spawner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshScale_MetaData[] = {
		{ "Category", "Lyra|Pickup|Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the height of the display mesh above the Weapon spawner\n" },
#endif
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the height of the display mesh above the Weapon spawner" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMeshOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMeshScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponPickupDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset = { "WeaponMeshOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponPickupDefinition, WeaponMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeshOffset_MetaData), NewProp_WeaponMeshOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale = { "WeaponMeshScale", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponPickupDefinition, WeaponMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeshScale_MetaData), NewProp_WeaponMeshScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraPickupDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::ClassParams = {
	&ULyraWeaponPickupDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition()
{
	if (!Z_Registration_Info_UClass_ULyraWeaponPickupDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponPickupDefinition.OuterSingleton, Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWeaponPickupDefinition.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponPickupDefinition>()
{
	return ULyraWeaponPickupDefinition::StaticClass();
}
ULyraWeaponPickupDefinition::ULyraWeaponPickupDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponPickupDefinition);
ULyraWeaponPickupDefinition::~ULyraWeaponPickupDefinition() {}
// End Class ULyraWeaponPickupDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPickupDefinition, ULyraPickupDefinition::StaticClass, TEXT("ULyraPickupDefinition"), &Z_Registration_Info_UClass_ULyraPickupDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPickupDefinition), 3945233359U) },
		{ Z_Construct_UClass_ULyraWeaponPickupDefinition, ULyraWeaponPickupDefinition::StaticClass, TEXT("ULyraWeaponPickupDefinition"), &Z_Registration_Info_UClass_ULyraWeaponPickupDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponPickupDefinition), 3890692470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_3611235018(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
