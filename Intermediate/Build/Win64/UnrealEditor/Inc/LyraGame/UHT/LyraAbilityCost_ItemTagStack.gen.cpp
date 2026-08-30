// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityCost_ItemTagStack() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAbilityCost_ItemTagStack
void ULyraAbilityCost_ItemTagStack::StaticRegisterNativesULyraAbilityCost_ItemTagStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityCost_ItemTagStack);
UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_NoRegister()
{
	return ULyraAbilityCost_ItemTagStack::StaticClass();
}
struct Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of a tag stack\n * on the associated item instance\n */" },
#endif
		{ "DisplayName", "Item Tag Stack" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a cost that requires expending a quantity of a tag stack\non the associated item instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much of the tag to spend (keyed on ability level) */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much of the tag to spend (keyed on ability level)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Which tag to spend some of */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which tag to spend some of" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTag_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Which tag to send back as a response if this cost cannot be applied */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which tag to send back as a response if this cost cannot be applied" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityCost_ItemTagStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilityCost_ItemTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilityCost_ItemTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag = { "FailureTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilityCost_ItemTagStack, FailureTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTag_MetaData), NewProp_FailureTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraAbilityCost,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::ClassParams = {
	&ULyraAbilityCost_ItemTagStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack()
{
	if (!Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack.OuterSingleton, Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityCost_ItemTagStack>()
{
	return ULyraAbilityCost_ItemTagStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityCost_ItemTagStack);
ULyraAbilityCost_ItemTagStack::~ULyraAbilityCost_ItemTagStack() {}
// End Class ULyraAbilityCost_ItemTagStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityCost_ItemTagStack, ULyraAbilityCost_ItemTagStack::StaticClass, TEXT("ULyraAbilityCost_ItemTagStack"), &Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityCost_ItemTagStack), 871800849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_551251423(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
