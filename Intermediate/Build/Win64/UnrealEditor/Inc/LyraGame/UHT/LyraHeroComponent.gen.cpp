// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraHeroComponent.h"
#include "LyraGame/GameFeatures/GameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHeroComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraHeroComponent Function FindHeroComponent
struct Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics
{
	struct LyraHeroComponent_eventFindHeroComponent_Parms
	{
		const AActor* Actor;
		ULyraHeroComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Hero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the hero component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraHeroComponent_eventFindHeroComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraHeroComponent_eventFindHeroComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraHeroComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHeroComponent, nullptr, "FindHeroComponent", nullptr, nullptr, Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::LyraHeroComponent_eventFindHeroComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::LyraHeroComponent_eventFindHeroComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraHeroComponent::execFindHeroComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraHeroComponent**)Z_Param__Result=ULyraHeroComponent::FindHeroComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ULyraHeroComponent Function FindHeroComponent

// Begin Class ULyraHeroComponent
void ULyraHeroComponent::StaticRegisterNativesULyraHeroComponent()
{
	UClass* Class = ULyraHeroComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindHeroComponent", &ULyraHeroComponent::execFindHeroComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHeroComponent);
UClass* Z_Construct_UClass_ULyraHeroComponent_NoRegister()
{
	return ULyraHeroComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraHeroComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\n * This depends on a PawnExtensionComponent to coordinate initialization.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LyraHeroComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\nThis depends on a PawnExtensionComponent to coordinate initialization." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappings_MetaData[] = {
		{ "Category", "LyraHeroComponent" },
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode set by an ability. */" },
#endif
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode set by an ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputMappings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent, "FindHeroComponent" }, // 2285230326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHeroComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputMappings_Inner = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(0, nullptr) }; // 1299260669
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputMappings = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraHeroComponent, DefaultInputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappings_MetaData), NewProp_DefaultInputMappings_MetaData) }; // 1299260669
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraHeroComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraHeroComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraHeroComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraHeroComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHeroComponent_Statics::ClassParams = {
	&ULyraHeroComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraHeroComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraHeroComponent()
{
	if (!Z_Registration_Info_UClass_ULyraHeroComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHeroComponent.OuterSingleton, Z_Construct_UClass_ULyraHeroComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraHeroComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraHeroComponent>()
{
	return ULyraHeroComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHeroComponent);
ULyraHeroComponent::~ULyraHeroComponent() {}
// End Class ULyraHeroComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHeroComponent, ULyraHeroComponent::StaticClass, TEXT("ULyraHeroComponent"), &Z_Registration_Info_UClass_ULyraHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHeroComponent), 4045578168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_4197183927(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
