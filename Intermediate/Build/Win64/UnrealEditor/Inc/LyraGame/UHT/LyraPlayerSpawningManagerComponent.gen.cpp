// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraPlayerSpawningManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerSpawningManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerStart_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlayerSpawningManagerComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPlayerSpawningManagerComponent Function K2_OnFinishRestartPlayer
struct LyraPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms
{
	AController* Player;
	FRotator StartRotation;
};
static FName NAME_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer = FName(TEXT("K2_OnFinishRestartPlayer"));
void ULyraPlayerSpawningManagerComponent::K2_OnFinishRestartPlayer(AController* Player, FRotator const& StartRotation)
{
	LyraPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms Parms;
	Parms.Player=Player;
	Parms.StartRotation=StartRotation;
	ProcessEvent(FindFunctionChecked(NAME_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer),&Parms);
}
struct Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnFinishRestartPlayer" },
		{ "ModuleRelativePath", "Player/LyraPlayerSpawningManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPlayerSpawningManagerComponent, nullptr, "K2_OnFinishRestartPlayer", nullptr, nullptr, Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers), sizeof(LyraPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraPlayerSpawningManagerComponent Function K2_OnFinishRestartPlayer

// Begin Class ULyraPlayerSpawningManagerComponent
void ULyraPlayerSpawningManagerComponent::StaticRegisterNativesULyraPlayerSpawningManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPlayerSpawningManagerComponent);
UClass* Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_NoRegister()
{
	return ULyraPlayerSpawningManagerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class ULyraPlayerSpawningManagerComponent\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Player/LyraPlayerSpawningManagerComponent.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerSpawningManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class ULyraPlayerSpawningManagerComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerStarts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ~ALyraGameMode */" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerSpawningManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~ALyraGameMode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPlayerStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPlayerStarts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer, "K2_OnFinishRestartPlayer" }, // 488054649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPlayerSpawningManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_Inner = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALyraPlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraPlayerSpawningManagerComponent, CachedPlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerStarts_MetaData), NewProp_CachedPlayerStarts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::ClassParams = {
	&ULyraPlayerSpawningManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPlayerSpawningManagerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraPlayerSpawningManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPlayerSpawningManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraPlayerSpawningManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPlayerSpawningManagerComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPlayerSpawningManagerComponent>()
{
	return ULyraPlayerSpawningManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPlayerSpawningManagerComponent);
ULyraPlayerSpawningManagerComponent::~ULyraPlayerSpawningManagerComponent() {}
// End Class ULyraPlayerSpawningManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerSpawningManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPlayerSpawningManagerComponent, ULyraPlayerSpawningManagerComponent::StaticClass, TEXT("ULyraPlayerSpawningManagerComponent"), &Z_Registration_Info_UClass_ULyraPlayerSpawningManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPlayerSpawningManagerComponent), 83959197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerSpawningManagerComponent_h_2675890202(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerSpawningManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerSpawningManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
