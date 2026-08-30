// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraPawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPawnExtensionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPawnExtensionComponent Function FindPawnExtensionComponent
struct Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics
{
	struct LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms
	{
		const AActor* Actor;
		ULyraPawnExtensionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the pawn extension component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the pawn extension component if one exists on the specified actor." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnExtensionComponent, nullptr, "FindPawnExtensionComponent", nullptr, nullptr, Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPawnExtensionComponent::execFindPawnExtensionComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraPawnExtensionComponent**)Z_Param__Result=ULyraPawnExtensionComponent::FindPawnExtensionComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ULyraPawnExtensionComponent Function FindPawnExtensionComponent

// Begin Class ULyraPawnExtensionComponent Function GetLyraAbilitySystemComponent
struct Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics
{
	struct LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms
	{
		ULyraAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current ability system component, which may be owned by a different actor */" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current ability system component, which may be owned by a different actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnExtensionComponent, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPawnExtensionComponent::execGetLyraAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ULyraPawnExtensionComponent Function GetLyraAbilitySystemComponent

// Begin Class ULyraPawnExtensionComponent Function OnRep_PawnData
struct Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnExtensionComponent, nullptr, "OnRep_PawnData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPawnExtensionComponent::execOnRep_PawnData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PawnData();
	P_NATIVE_END;
}
// End Class ULyraPawnExtensionComponent Function OnRep_PawnData

// Begin Class ULyraPawnExtensionComponent
void ULyraPawnExtensionComponent::StaticRegisterNativesULyraPawnExtensionComponent()
{
	UClass* Class = ULyraPawnExtensionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindPawnExtensionComponent", &ULyraPawnExtensionComponent::execFindPawnExtensionComponent },
		{ "GetLyraAbilitySystemComponent", &ULyraPawnExtensionComponent::execGetLyraAbilitySystemComponent },
		{ "OnRep_PawnData", &ULyraPawnExtensionComponent::execOnRep_PawnData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPawnExtensionComponent);
UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister()
{
	return ULyraPawnExtensionComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraPawnExtensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that adds functionality to all Pawn classes so it can be used for characters/vehicles/etc.\n * This coordinates the initialization of other components.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that adds functionality to all Pawn classes so it can be used for characters/vehicles/etc.\nThis coordinates the initialization of other components." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "Category", "Lyra|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */" },
#endif
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used to create the pawn. Specified from a spawn function or on a placed instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the ability system component that is cached for convenience. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the ability system component that is cached for convenience." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent, "FindPawnExtensionComponent" }, // 3080013759
		{ &Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 1953023408
		{ &Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData, "OnRep_PawnData" }, // 1628551529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPawnExtensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0124080100000821, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnExtensionComponent, PawnData), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPawnExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraPawnExtensionComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::ClassParams = {
	&ULyraPawnExtensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPawnExtensionComponent()
{
	if (!Z_Registration_Info_UClass_ULyraPawnExtensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPawnExtensionComponent.OuterSingleton, Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPawnExtensionComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPawnExtensionComponent>()
{
	return ULyraPawnExtensionComponent::StaticClass();
}
void ULyraPawnExtensionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PawnData(TEXT("PawnData"));
	const bool bIsValid = true
		&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraPawnExtensionComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPawnExtensionComponent);
ULyraPawnExtensionComponent::~ULyraPawnExtensionComponent() {}
// End Class ULyraPawnExtensionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPawnExtensionComponent, ULyraPawnExtensionComponent::StaticClass, TEXT("ULyraPawnExtensionComponent"), &Z_Registration_Info_UClass_ULyraPawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPawnExtensionComponent), 3185851217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_1046472736(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
