// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraPawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPawnData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputConfig_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPawnData
void ULyraPawnData::StaticRegisterNativesULyraPawnData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPawnData);
UClass* Z_Construct_UClass_ULyraPawnData_NoRegister()
{
	return ULyraPawnData::StaticClass();
}
struct Z_Construct_UClass_ULyraPawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraPawnData\n *\n *\x09Non-mutable data asset that contains properties used to define a pawn.\n */" },
#endif
		{ "DisplayName", "Lyra Pawn Data" },
		{ "IncludePath", "Character/LyraPawnData.h" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a Pawn." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraPawnData\n\n    Non-mutable data asset that contains properties used to define a pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Lyra|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class to instantiate for this pawn (should usually derive from ALyraPawn or ALyraCharacter).\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to instantiate for this pawn (should usually derive from ALyraPawn or ALyraCharacter)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Lyra|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability sets to grant to this pawn's ability system.\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability sets to grant to this pawn's ability system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "Lyra|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What mapping of ability tags to use for actions taking by this pawn\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What mapping of ability tags to use for actions taking by this pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Lyra|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input configuration used by player controlled pawns to create input mappings and bind input actions.\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input configuration used by player controlled pawns to create input mappings and bind input actions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Lyra|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default camera mode used by player controlled pawns.\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default camera mode used by player controlled pawns." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySets_MetaData), NewProp_AbilitySets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnData, TagRelationshipMapping), Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnData, InputConfig), Z_Construct_UClass_ULyraInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnData, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPawnData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPawnData_Statics::ClassParams = {
	&ULyraPawnData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraPawnData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPawnData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPawnData()
{
	if (!Z_Registration_Info_UClass_ULyraPawnData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPawnData.OuterSingleton, Z_Construct_UClass_ULyraPawnData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPawnData.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPawnData>()
{
	return ULyraPawnData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPawnData);
ULyraPawnData::~ULyraPawnData() {}
// End Class ULyraPawnData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPawnData, ULyraPawnData::StaticClass, TEXT("ULyraPawnData"), &Z_Registration_Info_UClass_ULyraPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPawnData), 4054653562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_1703379645(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
