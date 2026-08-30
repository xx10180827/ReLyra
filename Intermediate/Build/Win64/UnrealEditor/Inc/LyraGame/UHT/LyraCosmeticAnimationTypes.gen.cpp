// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Cosmetics/LyraCosmeticAnimationTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCosmeticAnimationTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraAnimLayerSelectionEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry;
class UScriptStruct* FLyraAnimLayerSelectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAnimLayerSelectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAnimLayerSelectionEntry>()
{
	return FLyraAnimLayerSelectionEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "LyraAnimLayerSelectionEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layer to apply if the tag matches\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layer to apply if the tag matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Categories", "Cosmetic" },
		{ "Category", "LyraAnimLayerSelectionEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cosmetic tags required (all of these must be present to be considered a match)\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic tags required (all of these must be present to be considered a match)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimLayerSelectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimLayerSelectionEntry, Layer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimLayerSelectionEntry, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewProp_RequiredTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAnimLayerSelectionEntry",
	Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::PropPointers),
	sizeof(FLyraAnimLayerSelectionEntry),
	alignof(FLyraAnimLayerSelectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry.InnerSingleton;
}
// End ScriptStruct FLyraAnimLayerSelectionEntry

// Begin ScriptStruct FLyraAnimLayerSelectionSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet;
class UScriptStruct* FLyraAnimLayerSelectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAnimLayerSelectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAnimLayerSelectionSet>()
{
	return FLyraAnimLayerSelectionSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerRules_MetaData[] = {
		{ "Category", "LyraAnimLayerSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of layer rules to apply, first one that matches will be used\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "TitleProperty", "Layer" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of layer rules to apply, first one that matches will be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayer_MetaData[] = {
		{ "Category", "LyraAnimLayerSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The layer to use if none of the LayerRules matches\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The layer to use if none of the LayerRules matches" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerRules;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimLayerSelectionSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_Inner = { "LayerRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry, METADATA_PARAMS(0, nullptr) }; // 3711411297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules = { "LayerRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimLayerSelectionSet, LayerRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerRules_MetaData), NewProp_LayerRules_MetaData) }; // 3711411297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer = { "DefaultLayer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimLayerSelectionSet, DefaultLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayer_MetaData), NewProp_DefaultLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_LayerRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewProp_DefaultLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAnimLayerSelectionSet",
	Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::PropPointers),
	sizeof(FLyraAnimLayerSelectionSet),
	alignof(FLyraAnimLayerSelectionSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet.InnerSingleton;
}
// End ScriptStruct FLyraAnimLayerSelectionSet

// Begin ScriptStruct FLyraAnimBodyStyleSelectionEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry;
class UScriptStruct* FLyraAnimBodyStyleSelectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAnimBodyStyleSelectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAnimBodyStyleSelectionEntry>()
{
	return FLyraAnimBodyStyleSelectionEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layer to apply if the tag matches\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layer to apply if the tag matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Categories", "Cosmetic" },
		{ "Category", "LyraAnimBodyStyleSelectionEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cosmetic tags required (all of these must be present to be considered a match)\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic tags required (all of these must be present to be considered a match)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimBodyStyleSelectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionEntry, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionEntry, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAnimBodyStyleSelectionEntry",
	Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::PropPointers),
	sizeof(FLyraAnimBodyStyleSelectionEntry),
	alignof(FLyraAnimBodyStyleSelectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry.InnerSingleton;
}
// End ScriptStruct FLyraAnimBodyStyleSelectionEntry

// Begin ScriptStruct FLyraAnimBodyStyleSelectionSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet;
class UScriptStruct* FLyraAnimBodyStyleSelectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAnimBodyStyleSelectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAnimBodyStyleSelectionSet>()
{
	return FLyraAnimBodyStyleSelectionSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshRules_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of layer rules to apply, first one that matches will be used\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
		{ "TitleProperty", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of layer rules to apply, first one that matches will be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The layer to use if none of the LayerRules matches\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The layer to use if none of the LayerRules matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedPhysicsAsset_MetaData[] = {
		{ "Category", "LyraAnimBodyStyleSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set, ensures this physics asset is always used\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, ensures this physics asset is always used" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshRules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForcedPhysicsAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAnimBodyStyleSelectionSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_Inner = { "MeshRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry, METADATA_PARAMS(0, nullptr) }; // 664770048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules = { "MeshRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionSet, MeshRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshRules_MetaData), NewProp_MeshRules_MetaData) }; // 664770048
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionSet, DefaultMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMesh_MetaData), NewProp_DefaultMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset = { "ForcedPhysicsAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAnimBodyStyleSelectionSet, ForcedPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedPhysicsAsset_MetaData), NewProp_ForcedPhysicsAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraAnimBodyStyleSelectionSet",
	Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::PropPointers),
	sizeof(FLyraAnimBodyStyleSelectionSet),
	alignof(FLyraAnimBodyStyleSelectionSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.InnerSingleton, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet.InnerSingleton;
}
// End ScriptStruct FLyraAnimBodyStyleSelectionSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAnimLayerSelectionEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionEntry_Statics::NewStructOps, TEXT("LyraAnimLayerSelectionEntry"), &Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimLayerSelectionEntry), 3711411297U) },
		{ FLyraAnimLayerSelectionSet::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimLayerSelectionSet_Statics::NewStructOps, TEXT("LyraAnimLayerSelectionSet"), &Z_Registration_Info_UScriptStruct_LyraAnimLayerSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimLayerSelectionSet), 3591606580U) },
		{ FLyraAnimBodyStyleSelectionEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionEntry_Statics::NewStructOps, TEXT("LyraAnimBodyStyleSelectionEntry"), &Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimBodyStyleSelectionEntry), 664770048U) },
		{ FLyraAnimBodyStyleSelectionSet::StaticStruct, Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet_Statics::NewStructOps, TEXT("LyraAnimBodyStyleSelectionSet"), &Z_Registration_Info_UScriptStruct_LyraAnimBodyStyleSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAnimBodyStyleSelectionSet), 181859200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticAnimationTypes_h_1590159237(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticAnimationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
