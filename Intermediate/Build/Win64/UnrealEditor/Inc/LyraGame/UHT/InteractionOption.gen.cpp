// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Interaction/InteractionOption.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionOption() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FInteractionOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionOption;
class UScriptStruct* FInteractionOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionOption, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("InteractionOption"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionOption.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FInteractionOption>()
{
	return FInteractionOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableTarget_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The interactable target */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The interactable target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple text the interaction might return */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple text the interaction might return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubText_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple sub-text the interaction might return */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple sub-text the interaction might return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAbilityToGrant_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability to grant the avatar when they get near interactable objects. */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability to grant the avatar when they get near interactable objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystem_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability system on the target that can be used for the TargetInteractionHandle and sending the event, if needed. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system on the target that can be used for the TargetInteractionHandle and sending the event, if needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractionAbilityHandle_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability spec to activate on the object for this option. */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability spec to activate on the object for this option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "InteractionOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The widget to show for this kind of interaction. */" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget to show for this kind of interaction." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InteractableTarget;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SubText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionAbilityToGrant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInteractionAbilityHandle;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InteractionWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget = { "InteractableTarget", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, InteractableTarget), Z_Construct_UClass_UInteractableTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableTarget_MetaData), NewProp_InteractableTarget_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText = { "SubText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, SubText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubText_MetaData), NewProp_SubText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant = { "InteractionAbilityToGrant", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, InteractionAbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAbilityToGrant_MetaData), NewProp_InteractionAbilityToGrant_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem = { "TargetAbilitySystem", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, TargetAbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAbilitySystem_MetaData), NewProp_TargetAbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle = { "TargetInteractionAbilityHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, TargetInteractionAbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInteractionAbilityHandle_MetaData), NewProp_TargetInteractionAbilityHandle_MetaData) }; // 3490030742
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionOption, InteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidgetClass_MetaData), NewProp_InteractionWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"InteractionOption",
	Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers),
	sizeof(FInteractionOption),
	alignof(FInteractionOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionOption.InnerSingleton, Z_Construct_UScriptStruct_FInteractionOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionOption.InnerSingleton;
}
// End ScriptStruct FInteractionOption

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionOption::StaticStruct, Z_Construct_UScriptStruct_FInteractionOption_Statics::NewStructOps, TEXT("InteractionOption"), &Z_Registration_Info_UScriptStruct_InteractionOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionOption), 4256573821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_3492746877(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
