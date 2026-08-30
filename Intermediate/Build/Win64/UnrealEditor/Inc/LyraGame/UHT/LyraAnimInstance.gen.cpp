// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Animation/LyraAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAnimInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAnimInstance
void ULyraAnimInstance::StaticRegisterNativesULyraAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAnimInstance);
UClass* Z_Construct_UClass_ULyraAnimInstance_NoRegister()
{
	return ULyraAnimInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraAnimInstance\n *\n *\x09The base game animation instance class used by this project.\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/LyraAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/LyraAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraAnimInstance\n\n    The base game animation instance class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\n// These should be used instead of manually querying for the gameplay tags.\n" },
#endif
		{ "ModuleRelativePath", "Animation/LyraAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\nThese should be used instead of manually querying for the gameplay tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
		{ "ModuleRelativePath", "Animation/LyraAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAnimInstance, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAnimInstance_Statics::NewProp_GroundDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAnimInstance_Statics::ClassParams = {
	&ULyraAnimInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAnimInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAnimInstance()
{
	if (!Z_Registration_Info_UClass_ULyraAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAnimInstance.OuterSingleton, Z_Construct_UClass_ULyraAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAnimInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAnimInstance>()
{
	return ULyraAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAnimInstance);
ULyraAnimInstance::~ULyraAnimInstance() {}
// End Class ULyraAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAnimInstance, ULyraAnimInstance::StaticClass, TEXT("ULyraAnimInstance"), &Z_Registration_Info_UClass_ULyraAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAnimInstance), 1558493601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_1986390964(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
