// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/GameModes/LyraGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameMode() {}

// Begin Cross Module References
COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameMode();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameMode_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraGameMode Function GetPawnDataForController
struct Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics
{
	struct LyraGameMode_eventGetPawnDataForController_Parms
	{
		const AController* InController;
		const ULyraPawnData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventGetPawnDataForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InController_MetaData), NewProp_InController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventGetPawnDataForController_Parms, ReturnValue), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameMode, nullptr, "GetPawnDataForController", nullptr, nullptr, Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::LyraGameMode_eventGetPawnDataForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::LyraGameMode_eventGetPawnDataForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameMode::execGetPawnDataForController)
{
	P_GET_OBJECT(AController,Z_Param_InController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ULyraPawnData**)Z_Param__Result=P_THIS->GetPawnDataForController(Z_Param_InController);
	P_NATIVE_END;
}
// End Class ALyraGameMode Function GetPawnDataForController

// Begin Class ALyraGameMode Function OnUserInitializedForDedicatedServer
struct Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics
{
	struct LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms
	{
		const UCommonUserInfo* UserInfo;
		bool bSuccess;
		FText Error;
		ECommonUserPrivilege RequestedPrivilege;
		ECommonUserOnlineContext OnlineContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInfo_MetaData), NewProp_UserInfo_MetaData) };
void Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms), &Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(0, nullptr) }; // 3165184135
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(0, nullptr) }; // 3178011620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameMode, nullptr, "OnUserInitializedForDedicatedServer", nullptr, nullptr, Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameMode::execOnUserInitializedForDedicatedServer)
{
	P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FTextProperty,Z_Param_Error);
	P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
	P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUserInitializedForDedicatedServer(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
	P_NATIVE_END;
}
// End Class ALyraGameMode Function OnUserInitializedForDedicatedServer

// Begin Class ALyraGameMode Function RequestPlayerRestartNextFrame
struct Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics
{
	struct LyraGameMode_eventRequestPlayerRestartNextFrame_Parms
	{
		AController* Controller;
		bool bForceReset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Restart (respawn) the specified player or bot next frame\n// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)\n" },
#endif
		{ "CPP_Default_bForceReset", "false" },
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restart (respawn) the specified player or bot next frame\n- If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_bForceReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameMode_eventRequestPlayerRestartNextFrame_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit(void* Obj)
{
	((LyraGameMode_eventRequestPlayerRestartNextFrame_Parms*)Obj)->bForceReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraGameMode_eventRequestPlayerRestartNextFrame_Parms), &Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameMode, nullptr, "RequestPlayerRestartNextFrame", nullptr, nullptr, Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::LyraGameMode_eventRequestPlayerRestartNextFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::LyraGameMode_eventRequestPlayerRestartNextFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraGameMode::execRequestPlayerRestartNextFrame)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_UBOOL(Z_Param_bForceReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPlayerRestartNextFrame(Z_Param_Controller,Z_Param_bForceReset);
	P_NATIVE_END;
}
// End Class ALyraGameMode Function RequestPlayerRestartNextFrame

// Begin Class ALyraGameMode
void ALyraGameMode::StaticRegisterNativesALyraGameMode()
{
	UClass* Class = ALyraGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPawnDataForController", &ALyraGameMode::execGetPawnDataForController },
		{ "OnUserInitializedForDedicatedServer", &ALyraGameMode::execOnUserInitializedForDedicatedServer },
		{ "RequestPlayerRestartNextFrame", &ALyraGameMode::execRequestPlayerRestartNextFrame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraGameMode);
UClass* Z_Construct_UClass_ALyraGameMode_NoRegister()
{
	return ALyraGameMode::StaticClass();
}
struct Z_Construct_UClass_ALyraGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraGameMode\n *\n *\x09The base game mode class used by this project.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/LyraGameMode.h" },
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base game mode class used by this project." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraGameMode\n\n    The base game mode class used by this project." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController, "GetPawnDataForController" }, // 1357452646
		{ &Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer, "OnUserInitializedForDedicatedServer" }, // 3591449817
		{ &Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame, "RequestPlayerRestartNextFrame" }, // 380837510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALyraGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraGameMode_Statics::ClassParams = {
	&ALyraGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraGameMode()
{
	if (!Z_Registration_Info_UClass_ALyraGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraGameMode.OuterSingleton, Z_Construct_UClass_ALyraGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraGameMode.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraGameMode>()
{
	return ALyraGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraGameMode);
ALyraGameMode::~ALyraGameMode() {}
// End Class ALyraGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraGameMode, ALyraGameMode::StaticClass, TEXT("ALyraGameMode"), &Z_Registration_Info_UClass_ALyraGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraGameMode), 188458210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_2411909428(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
