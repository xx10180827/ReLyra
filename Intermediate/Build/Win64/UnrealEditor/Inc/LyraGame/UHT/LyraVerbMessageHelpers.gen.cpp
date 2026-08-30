// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Messages/LyraVerbMessageHelpers.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "LyraGame/Messages/LyraVerbMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraVerbMessageHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraVerbMessageHelpers();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraVerbMessageHelpers_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraVerbMessageHelpers Function CueParametersToVerbMessage
struct Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics
{
	struct LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms
	{
		FGameplayCueParameters Params;
		FLyraVerbMessage ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms, Params), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 98506619
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(0, nullptr) }; // 172997159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "CueParametersToVerbMessage", nullptr, nullptr, Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraVerbMessageHelpers::execCueParametersToVerbMessage)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLyraVerbMessage*)Z_Param__Result=ULyraVerbMessageHelpers::CueParametersToVerbMessage(Z_Param_Out_Params);
	P_NATIVE_END;
}
// End Class ULyraVerbMessageHelpers Function CueParametersToVerbMessage

// Begin Class ULyraVerbMessageHelpers Function GetPlayerControllerFromObject
struct Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics
{
	struct LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms
	{
		UObject* Object;
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "GetPlayerControllerFromObject", nullptr, nullptr, Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraVerbMessageHelpers::execGetPlayerControllerFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=ULyraVerbMessageHelpers::GetPlayerControllerFromObject(Z_Param_Object);
	P_NATIVE_END;
}
// End Class ULyraVerbMessageHelpers Function GetPlayerControllerFromObject

// Begin Class ULyraVerbMessageHelpers Function GetPlayerStateFromObject
struct Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics
{
	struct LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms
	{
		UObject* Object;
		APlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms, ReturnValue), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "GetPlayerStateFromObject", nullptr, nullptr, Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraVerbMessageHelpers::execGetPlayerStateFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerState**)Z_Param__Result=ULyraVerbMessageHelpers::GetPlayerStateFromObject(Z_Param_Object);
	P_NATIVE_END;
}
// End Class ULyraVerbMessageHelpers Function GetPlayerStateFromObject

// Begin Class ULyraVerbMessageHelpers Function VerbMessageToCueParameters
struct Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics
{
	struct LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms
	{
		FLyraVerbMessage Message;
		FGameplayCueParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 172997159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(0, nullptr) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "VerbMessageToCueParameters", nullptr, nullptr, Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraVerbMessageHelpers::execVerbMessageToCueParameters)
{
	P_GET_STRUCT_REF(FLyraVerbMessage,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayCueParameters*)Z_Param__Result=ULyraVerbMessageHelpers::VerbMessageToCueParameters(Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Class ULyraVerbMessageHelpers Function VerbMessageToCueParameters

// Begin Class ULyraVerbMessageHelpers
void ULyraVerbMessageHelpers::StaticRegisterNativesULyraVerbMessageHelpers()
{
	UClass* Class = ULyraVerbMessageHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CueParametersToVerbMessage", &ULyraVerbMessageHelpers::execCueParametersToVerbMessage },
		{ "GetPlayerControllerFromObject", &ULyraVerbMessageHelpers::execGetPlayerControllerFromObject },
		{ "GetPlayerStateFromObject", &ULyraVerbMessageHelpers::execGetPlayerStateFromObject },
		{ "VerbMessageToCueParameters", &ULyraVerbMessageHelpers::execVerbMessageToCueParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraVerbMessageHelpers);
UClass* Z_Construct_UClass_ULyraVerbMessageHelpers_NoRegister()
{
	return ULyraVerbMessageHelpers::StaticClass();
}
struct Z_Construct_UClass_ULyraVerbMessageHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Messages/LyraVerbMessageHelpers.h" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage, "CueParametersToVerbMessage" }, // 1260056895
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject, "GetPlayerControllerFromObject" }, // 3911725184
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject, "GetPlayerStateFromObject" }, // 1673013030
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters, "VerbMessageToCueParameters" }, // 639287762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraVerbMessageHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::ClassParams = {
	&ULyraVerbMessageHelpers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraVerbMessageHelpers()
{
	if (!Z_Registration_Info_UClass_ULyraVerbMessageHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraVerbMessageHelpers.OuterSingleton, Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraVerbMessageHelpers.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraVerbMessageHelpers>()
{
	return ULyraVerbMessageHelpers::StaticClass();
}
ULyraVerbMessageHelpers::ULyraVerbMessageHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraVerbMessageHelpers);
ULyraVerbMessageHelpers::~ULyraVerbMessageHelpers() {}
// End Class ULyraVerbMessageHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraVerbMessageHelpers, ULyraVerbMessageHelpers::StaticClass, TEXT("ULyraVerbMessageHelpers"), &Z_Registration_Info_UClass_ULyraVerbMessageHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraVerbMessageHelpers), 2522009314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_3722705989(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
