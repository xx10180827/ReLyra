// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/LyraAbilitySystemComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAbilitySystemComponent Function ClientNotifyAbilityFailed
struct LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms
{
	const UGameplayAbility* Ability;
	FGameplayTagContainer FailureReason;
};
static FName NAME_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed = FName(TEXT("ClientNotifyAbilityFailed"));
void ULyraAbilitySystemComponent::ClientNotifyAbilityFailed(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason)
{
	LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms Parms;
	Parms.Ability=Ability;
	Parms.FailureReason=FailureReason;
	ProcessEvent(FindFunctionChecked(NAME_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed),&Parms);
}
struct Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notify client that an ability failed to activate */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify client that an ability failed to activate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraAbilitySystemComponent, nullptr, "ClientNotifyAbilityFailed", nullptr, nullptr, Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers), sizeof(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraAbilitySystemComponent::execClientNotifyAbilityFailed)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_Ability);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientNotifyAbilityFailed_Implementation(Z_Param_Ability,Z_Param_FailureReason);
	P_NATIVE_END;
}
// End Class ULyraAbilitySystemComponent Function ClientNotifyAbilityFailed

// Begin Class ULyraAbilitySystemComponent
void ULyraAbilitySystemComponent::StaticRegisterNativesULyraAbilitySystemComponent()
{
	UClass* Class = ULyraAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientNotifyAbilityFailed", &ULyraAbilitySystemComponent::execClientNotifyAbilityFailed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySystemComponent);
UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister()
{
	return ULyraAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraAbilitySystemComponent\n *\n *\x09""Base ability system component class used by this project.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraAbilitySystemComponent\n\n    Base ability system component class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed, "ClientNotifyAbilityFailed" }, // 2220705093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::ClassParams = {
	&ULyraAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_ULyraAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAbilitySystemComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySystemComponent>()
{
	return ULyraAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySystemComponent);
ULyraAbilitySystemComponent::~ULyraAbilitySystemComponent() {}
// End Class ULyraAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySystemComponent, ULyraAbilitySystemComponent::StaticClass, TEXT("ULyraAbilitySystemComponent"), &Z_Registration_Info_UClass_ULyraAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySystemComponent), 4103169691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_3006098988(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
