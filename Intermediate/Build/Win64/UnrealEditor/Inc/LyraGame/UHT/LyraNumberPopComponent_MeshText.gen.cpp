// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/NumberPops/LyraNumberPopComponent_MeshText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraNumberPopComponent_MeshText() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyle_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLiveNumberPopEntry();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPooledNumberPopComponentList();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FPooledNumberPopComponentList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList;
class UScriptStruct* FPooledNumberPopComponentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledNumberPopComponentList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("PooledNumberPopComponentList"));
	}
	return Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FPooledNumberPopComponentList>()
{
	return FPooledNumberPopComponentList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledNumberPopComponentList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0114008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPooledNumberPopComponentList, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"PooledNumberPopComponentList",
	Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers),
	sizeof(FPooledNumberPopComponentList),
	alignof(FPooledNumberPopComponentList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPooledNumberPopComponentList()
{
	if (!Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.InnerSingleton, Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.InnerSingleton;
}
// End ScriptStruct FPooledNumberPopComponentList

// Begin ScriptStruct FLiveNumberPopEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveNumberPopEntry;
class UScriptStruct* FLiveNumberPopEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveNumberPopEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LiveNumberPopEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLiveNumberPopEntry>()
{
	return FLiveNumberPopEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The component that is currently live */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component that is currently live" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveNumberPopEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveNumberPopEntry, Component), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LiveNumberPopEntry",
	Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers),
	sizeof(FLiveNumberPopEntry),
	alignof(FLiveNumberPopEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveNumberPopEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.InnerSingleton, Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.InnerSingleton;
}
// End ScriptStruct FLiveNumberPopEntry

// Begin Class ULyraNumberPopComponent_MeshText
void ULyraNumberPopComponent_MeshText::StaticRegisterNativesULyraNumberPopComponent_MeshText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraNumberPopComponent_MeshText);
UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText_NoRegister()
{
	return ULyraNumberPopComponent_MeshText::StaticClass();
}
struct Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[] = {
		{ "Category", "Number Pop|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Style patterns to attempt to apply to the incoming number pops */" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Style patterns to attempt to apply to the incoming number pops" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLifespan_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCameraBeforeDoublingSize_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitSizeMultiplier_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontXSize_MetaData[] = {
		{ "Category", "Number Pop|Font" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontYSize_MetaData[] = {
		{ "Category", "Number Pop|Font" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingPercentageForOnes_MetaData[] = {
		{ "Category", "Number Pop|Font" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfNumberRotations_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignDigitParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationLifespanParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCriticalHitParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveToCameraParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage numbers by default are given a depth close to the camera in the material to make sure they are never occluded. This can be toggled off here, should only be 0/1. */" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage numbers by default are given a depth close to the camera in the material to make sure they are never occluded. This can be toggled off here, should only be 0/1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionParameterNames_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRotationAngleParameterNames_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationParameterNames_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledComponentMap_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveComponents_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Styles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Styles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComponentLifespan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromCameraBeforeDoublingSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalHitSizeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontXSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontYSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingPercentageForOnes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberOfNumberRotations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SignDigitParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColorParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationLifespanParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsCriticalHitParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MoveToCameraParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PositionParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionParameterNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScaleRotationAngleParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleRotationAngleParameterNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DurationParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DurationParameterNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PooledComponentMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledComponentMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PooledComponentMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiveComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LiveComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraNumberPopComponent_MeshText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraDamagePopStyle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Styles_MetaData), NewProp_Styles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan = { "ComponentLifespan", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, ComponentLifespan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentLifespan_MetaData), NewProp_ComponentLifespan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize = { "DistanceFromCameraBeforeDoublingSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, DistanceFromCameraBeforeDoublingSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromCameraBeforeDoublingSize_MetaData), NewProp_DistanceFromCameraBeforeDoublingSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier = { "CriticalHitSizeMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, CriticalHitSizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitSizeMultiplier_MetaData), NewProp_CriticalHitSizeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize = { "FontXSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, FontXSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontXSize_MetaData), NewProp_FontXSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize = { "FontYSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, FontYSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontYSize_MetaData), NewProp_FontYSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes = { "SpacingPercentageForOnes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, SpacingPercentageForOnes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingPercentageForOnes_MetaData), NewProp_SpacingPercentageForOnes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations = { "NumberOfNumberRotations", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, NumberOfNumberRotations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfNumberRotations_MetaData), NewProp_NumberOfNumberRotations_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName = { "SignDigitParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, SignDigitParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignDigitParameterName_MetaData), NewProp_SignDigitParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName = { "ColorParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, ColorParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorParameterName_MetaData), NewProp_ColorParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName = { "AnimationLifespanParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, AnimationLifespanParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationLifespanParameterName_MetaData), NewProp_AnimationLifespanParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName = { "IsCriticalHitParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, IsCriticalHitParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCriticalHitParameterName_MetaData), NewProp_IsCriticalHitParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName = { "MoveToCameraParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, MoveToCameraParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveToCameraParameterName_MetaData), NewProp_MoveToCameraParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_Inner = { "PositionParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames = { "PositionParameterNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, PositionParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionParameterNames_MetaData), NewProp_PositionParameterNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_Inner = { "ScaleRotationAngleParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames = { "ScaleRotationAngleParameterNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, ScaleRotationAngleParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRotationAngleParameterNames_MetaData), NewProp_ScaleRotationAngleParameterNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_Inner = { "DurationParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames = { "DurationParameterNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, DurationParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationParameterNames_MetaData), NewProp_DurationParameterNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_ValueProp = { "PooledComponentMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPooledNumberPopComponentList, METADATA_PARAMS(0, nullptr) }; // 1625704582
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_Key_KeyProp = { "PooledComponentMap_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap = { "PooledComponentMap", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, PooledComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledComponentMap_MetaData), NewProp_PooledComponentMap_MetaData) }; // 1625704582
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_Inner = { "LiveComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveNumberPopEntry, METADATA_PARAMS(0, nullptr) }; // 1937162421
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents = { "LiveComponents", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, LiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveComponents_MetaData), NewProp_LiveComponents_MetaData) }; // 1937162421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraNumberPopComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::ClassParams = {
	&ULyraNumberPopComponent_MeshText::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText()
{
	if (!Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText.OuterSingleton, Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraNumberPopComponent_MeshText>()
{
	return ULyraNumberPopComponent_MeshText::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraNumberPopComponent_MeshText);
ULyraNumberPopComponent_MeshText::~ULyraNumberPopComponent_MeshText() {}
// End Class ULyraNumberPopComponent_MeshText

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPooledNumberPopComponentList::StaticStruct, Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewStructOps, TEXT("PooledNumberPopComponentList"), &Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPooledNumberPopComponentList), 1625704582U) },
		{ FLiveNumberPopEntry::StaticStruct, Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewStructOps, TEXT("LiveNumberPopEntry"), &Z_Registration_Info_UScriptStruct_LiveNumberPopEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveNumberPopEntry), 1937162421U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraNumberPopComponent_MeshText, ULyraNumberPopComponent_MeshText::StaticClass, TEXT("ULyraNumberPopComponent_MeshText"), &Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraNumberPopComponent_MeshText), 469462504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_4255662648(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
