// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraPlayerBotController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerBotController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerBotController();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerBotController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraPlayerBotController Function OnPlayerStateChangedTeam
struct Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics
{
	struct LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerBotController, nullptr, "OnPlayerStateChangedTeam", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerBotController::execOnPlayerStateChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerStateChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class ALyraPlayerBotController Function OnPlayerStateChangedTeam

// Begin Class ALyraPlayerBotController Function UpdateTeamAttitude
struct Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics
{
	struct LyraPlayerBotController_eventUpdateTeamAttitude_Parms
	{
		UAIPerceptionComponent* AIPerception;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra AI Player Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Team Attitude for the AI\n" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Team Attitude for the AI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPlayerBotController_eventUpdateTeamAttitude_Parms, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerception_MetaData), NewProp_AIPerception_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerBotController, nullptr, "UpdateTeamAttitude", nullptr, nullptr, Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::LyraPlayerBotController_eventUpdateTeamAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::LyraPlayerBotController_eventUpdateTeamAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPlayerBotController::execUpdateTeamAttitude)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerception);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTeamAttitude(Z_Param_AIPerception);
	P_NATIVE_END;
}
// End Class ALyraPlayerBotController Function UpdateTeamAttitude

// Begin Class ALyraPlayerBotController
void ALyraPlayerBotController::StaticRegisterNativesALyraPlayerBotController()
{
	UClass* Class = ALyraPlayerBotController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerStateChangedTeam", &ALyraPlayerBotController::execOnPlayerStateChangedTeam },
		{ "UpdateTeamAttitude", &ALyraPlayerBotController::execUpdateTeamAttitude },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerBotController);
UClass* Z_Construct_UClass_ALyraPlayerBotController_NoRegister()
{
	return ALyraPlayerBotController::StaticClass();
}
struct Z_Construct_UClass_ALyraPlayerBotController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraPlayerBotController\n *\n *\x09The controller class used by player bots in this project.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraPlayerBotController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraPlayerBotController\n\n    The controller class used by player bots in this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSeenPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam, "OnPlayerStateChangedTeam" }, // 119575124
		{ &Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude, "UpdateTeamAttitude" }, // 1094566476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerBotController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerBotController, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChangedDelegate_MetaData), NewProp_OnTeamChangedDelegate_MetaData) }; // 1518443978
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerBotController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenPlayerState_MetaData), NewProp_LastSeenPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraPlayerBotController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPlayerBotController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerBotController, ILyraTeamAgentInterface), false },  // 361203859
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerBotController_Statics::ClassParams = {
	&ALyraPlayerBotController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraPlayerBotController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraPlayerBotController()
{
	if (!Z_Registration_Info_UClass_ALyraPlayerBotController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerBotController.OuterSingleton, Z_Construct_UClass_ALyraPlayerBotController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraPlayerBotController.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerBotController>()
{
	return ALyraPlayerBotController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerBotController);
ALyraPlayerBotController::~ALyraPlayerBotController() {}
// End Class ALyraPlayerBotController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerBotController, ALyraPlayerBotController::StaticClass, TEXT("ALyraPlayerBotController"), &Z_Registration_Info_UClass_ALyraPlayerBotController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerBotController), 120945420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_2565660950(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
