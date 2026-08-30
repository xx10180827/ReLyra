// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraBotCreationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraBotCreationComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCreationComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCreationComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraBotCreationComponent Function RemoveOneBot
struct Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes the last created bot if possible */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes the last created bot if possible" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCreationComponent, nullptr, "RemoveOneBot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBotCreationComponent::execRemoveOneBot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveOneBot();
	P_NATIVE_END;
}
// End Class ULyraBotCreationComponent Function RemoveOneBot

// Begin Class ULyraBotCreationComponent Function ServerCreateBots
static FName NAME_ULyraBotCreationComponent_ServerCreateBots = FName(TEXT("ServerCreateBots"));
void ULyraBotCreationComponent::ServerCreateBots()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraBotCreationComponent_ServerCreateBots),NULL);
}
struct Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawns bots up to NumBotsToCreate */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns bots up to NumBotsToCreate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCreationComponent, nullptr, "ServerCreateBots", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBotCreationComponent::execServerCreateBots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCreateBots_Implementation();
	P_NATIVE_END;
}
// End Class ULyraBotCreationComponent Function ServerCreateBots

// Begin Class ULyraBotCreationComponent Function SpawnOneBot
struct Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Always creates a single bot */" },
#endif
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Always creates a single bot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCreationComponent, nullptr, "SpawnOneBot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBotCreationComponent::execSpawnOneBot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnOneBot();
	P_NATIVE_END;
}
// End Class ULyraBotCreationComponent Function SpawnOneBot

// Begin Class ULyraBotCreationComponent
void ULyraBotCreationComponent::StaticRegisterNativesULyraBotCreationComponent()
{
	UClass* Class = ULyraBotCreationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveOneBot", &ULyraBotCreationComponent::execRemoveOneBot },
		{ "ServerCreateBots", &ULyraBotCreationComponent::execServerCreateBots },
		{ "SpawnOneBot", &ULyraBotCreationComponent::execSpawnOneBot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraBotCreationComponent);
UClass* Z_Construct_UClass_ULyraBotCreationComponent_NoRegister()
{
	return ULyraBotCreationComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraBotCreationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/LyraBotCreationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBotsToCreate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BotControllerClass_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomBotNames_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedBotList_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBotsToCreate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BotControllerClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RandomBotNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomBotNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedBotList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedBotList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraBotCreationComponent_RemoveOneBot, "RemoveOneBot" }, // 1268094969
		{ &Z_Construct_UFunction_ULyraBotCreationComponent_ServerCreateBots, "ServerCreateBots" }, // 971890224
		{ &Z_Construct_UFunction_ULyraBotCreationComponent_SpawnOneBot, "SpawnOneBot" }, // 3856896300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraBotCreationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate = { "NumBotsToCreate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBotCreationComponent, NumBotsToCreate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBotsToCreate_MetaData), NewProp_NumBotsToCreate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass = { "BotControllerClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBotCreationComponent, BotControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BotControllerClass_MetaData), NewProp_BotControllerClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_Inner = { "RandomBotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames = { "RandomBotNames", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBotCreationComponent, RandomBotNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomBotNames_MetaData), NewProp_RandomBotNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_Inner = { "SpawnedBotList", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList = { "SpawnedBotList", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraBotCreationComponent, SpawnedBotList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedBotList_MetaData), NewProp_SpawnedBotList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraBotCreationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::ClassParams = {
	&ULyraBotCreationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers),
	0,
	0x00A000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraBotCreationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraBotCreationComponent()
{
	if (!Z_Registration_Info_UClass_ULyraBotCreationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraBotCreationComponent.OuterSingleton, Z_Construct_UClass_ULyraBotCreationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraBotCreationComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraBotCreationComponent>()
{
	return ULyraBotCreationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraBotCreationComponent);
ULyraBotCreationComponent::~ULyraBotCreationComponent() {}
// End Class ULyraBotCreationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraBotCreationComponent, ULyraBotCreationComponent::StaticClass, TEXT("ULyraBotCreationComponent"), &Z_Registration_Info_UClass_ULyraBotCreationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraBotCreationComponent), 1663100918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_3314829384(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
