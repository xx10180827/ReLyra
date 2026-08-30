// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Physics/PhysicalMaterialWithTags.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialWithTags() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_UPhysicalMaterialWithTags();
LYRAGAME_API UClass* Z_Construct_UClass_UPhysicalMaterialWithTags_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UPhysicalMaterialWithTags
void UPhysicalMaterialWithTags::StaticRegisterNativesUPhysicalMaterialWithTags()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialWithTags);
UClass* Z_Construct_UClass_UPhysicalMaterialWithTags_NoRegister()
{
	return UPhysicalMaterialWithTags::StaticClass();
}
struct Z_Construct_UClass_UPhysicalMaterialWithTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraWeaponInstance\n *\n * A piece of equipment representing a weapon spawned and applied to a pawn\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Physics/PhysicalMaterialWithTags.h" },
		{ "ModuleRelativePath", "Physics/PhysicalMaterialWithTags.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraWeaponInstance\n\nA piece of equipment representing a weapon spawned and applied to a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "PhysicalProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A container of gameplay tags that game code can use to reason about this physical material\n" },
#endif
		{ "ModuleRelativePath", "Physics/PhysicalMaterialWithTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A container of gameplay tags that game code can use to reason about this physical material" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialWithTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterialWithTags, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::ClassParams = {
	&UPhysicalMaterialWithTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers),
	0,
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicalMaterialWithTags()
{
	if (!Z_Registration_Info_UClass_UPhysicalMaterialWithTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialWithTags.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicalMaterialWithTags.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UPhysicalMaterialWithTags>()
{
	return UPhysicalMaterialWithTags::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialWithTags);
UPhysicalMaterialWithTags::~UPhysicalMaterialWithTags() {}
// End Class UPhysicalMaterialWithTags

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialWithTags, UPhysicalMaterialWithTags::StaticClass, TEXT("UPhysicalMaterialWithTags"), &Z_Registration_Info_UClass_UPhysicalMaterialWithTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialWithTags), 2613712870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_3324888955(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
