// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/IndicatorSystem/IndicatorDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicatorDescriptor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum EActorCanvasProjectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorCanvasProjectionMode;
static UEnum* EActorCanvasProjectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActorCanvasProjectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActorCanvasProjectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EActorCanvasProjectionMode"));
	}
	return Z_Registration_Info_UEnum_EActorCanvasProjectionMode.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<EActorCanvasProjectionMode>()
{
	return EActorCanvasProjectionMode_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorBoundingBox.Name", "EActorCanvasProjectionMode::ActorBoundingBox" },
		{ "ActorScreenBoundingBox.Name", "EActorCanvasProjectionMode::ActorScreenBoundingBox" },
		{ "BlueprintType", "true" },
		{ "ComponentBoundingBox.Name", "EActorCanvasProjectionMode::ComponentBoundingBox" },
		{ "ComponentPoint.Name", "EActorCanvasProjectionMode::ComponentPoint" },
		{ "ComponentScreenBoundingBox.Name", "EActorCanvasProjectionMode::ComponentScreenBoundingBox" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActorCanvasProjectionMode::ComponentPoint", (int64)EActorCanvasProjectionMode::ComponentPoint },
		{ "EActorCanvasProjectionMode::ComponentBoundingBox", (int64)EActorCanvasProjectionMode::ComponentBoundingBox },
		{ "EActorCanvasProjectionMode::ComponentScreenBoundingBox", (int64)EActorCanvasProjectionMode::ComponentScreenBoundingBox },
		{ "EActorCanvasProjectionMode::ActorBoundingBox", (int64)EActorCanvasProjectionMode::ActorBoundingBox },
		{ "EActorCanvasProjectionMode::ActorScreenBoundingBox", (int64)EActorCanvasProjectionMode::ActorScreenBoundingBox },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"EActorCanvasProjectionMode",
	"EActorCanvasProjectionMode",
	Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode()
{
	if (!Z_Registration_Info_UEnum_EActorCanvasProjectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorCanvasProjectionMode.InnerSingleton, Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActorCanvasProjectionMode.InnerSingleton;
}
// End Enum EActorCanvasProjectionMode

// Begin Class UIndicatorDescriptor Function GetAutoRemoveWhenIndicatorComponentIsNull
struct Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics
{
	struct IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetAutoRemoveWhenIndicatorComponentIsNull", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::IndicatorDescriptor_eventGetAutoRemoveWhenIndicatorComponentIsNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetAutoRemoveWhenIndicatorComponentIsNull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAutoRemoveWhenIndicatorComponentIsNull();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetAutoRemoveWhenIndicatorComponentIsNull

// Begin Class UIndicatorDescriptor Function GetBoundingBoxAnchor
struct Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics
{
	struct IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetBoundingBoxAnchor", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::IndicatorDescriptor_eventGetBoundingBoxAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetBoundingBoxAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundingBoxAnchor();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetBoundingBoxAnchor

// Begin Class UIndicatorDescriptor Function GetClampToScreen
struct Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics
{
	struct IndicatorDescriptor_eventGetClampToScreen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clamp the indicator to the edge of the screen?\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamp the indicator to the edge of the screen?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventGetClampToScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventGetClampToScreen_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetClampToScreen", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::IndicatorDescriptor_eventGetClampToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::IndicatorDescriptor_eventGetClampToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetClampToScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetClampToScreen();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetClampToScreen

// Begin Class UIndicatorDescriptor Function GetComponentSocketName
struct Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics
{
	struct IndicatorDescriptor_eventGetComponentSocketName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetComponentSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetComponentSocketName", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::IndicatorDescriptor_eventGetComponentSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::IndicatorDescriptor_eventGetComponentSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetComponentSocketName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetComponentSocketName();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetComponentSocketName

// Begin Class UIndicatorDescriptor Function GetDataObject
struct Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics
{
	struct IndicatorDescriptor_eventGetDataObject_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetDataObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetDataObject", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::IndicatorDescriptor_eventGetDataObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::IndicatorDescriptor_eventGetDataObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetDataObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetDataObject();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetDataObject

// Begin Class UIndicatorDescriptor Function GetHAlign
struct Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics
{
	struct IndicatorDescriptor_eventGetHAlign_Parms
	{
		TEnumAsByte<EHorizontalAlignment> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Horizontal alignment to the point in space to place the indicator at.\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal alignment to the point in space to place the indicator at." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetHAlign_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetHAlign", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::IndicatorDescriptor_eventGetHAlign_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::IndicatorDescriptor_eventGetHAlign_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetHAlign)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EHorizontalAlignment>*)Z_Param__Result=P_THIS->GetHAlign();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetHAlign

// Begin Class UIndicatorDescriptor Function GetIndicatorClass
struct Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics
{
	struct IndicatorDescriptor_eventGetIndicatorClass_Parms
	{
		TSoftClassPtr<UUserWidget>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetIndicatorClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetIndicatorClass", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::IndicatorDescriptor_eventGetIndicatorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::IndicatorDescriptor_eventGetIndicatorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetIndicatorClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<UUserWidget> *)Z_Param__Result=P_THIS->GetIndicatorClass();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetIndicatorClass

// Begin Class UIndicatorDescriptor Function GetIsVisible
struct Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics
{
	struct IndicatorDescriptor_eventGetIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layout Properties\n//=======================\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layout Properties" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventGetIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventGetIsVisible_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetIsVisible", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::IndicatorDescriptor_eventGetIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::IndicatorDescriptor_eventGetIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsVisible();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetIsVisible

// Begin Class UIndicatorDescriptor Function GetPriority
struct Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics
{
	struct IndicatorDescriptor_eventGetPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows sorting the indicators (after they are sorted by depth), to allow some group of indicators\n// to always be in front of others.\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows sorting the indicators (after they are sorted by depth), to allow some group of indicators\nto always be in front of others." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetPriority", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::IndicatorDescriptor_eventGetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::IndicatorDescriptor_eventGetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPriority();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetPriority

// Begin Class UIndicatorDescriptor Function GetProjectionMode
struct Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics
{
	struct IndicatorDescriptor_eventGetProjectionMode_Parms
	{
		EActorCanvasProjectionMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetProjectionMode_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, METADATA_PARAMS(0, nullptr) }; // 2516112598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::IndicatorDescriptor_eventGetProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::IndicatorDescriptor_eventGetProjectionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetProjectionMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EActorCanvasProjectionMode*)Z_Param__Result=P_THIS->GetProjectionMode();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetProjectionMode

// Begin Class UIndicatorDescriptor Function GetSceneComponent
struct Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics
{
	struct IndicatorDescriptor_eventGetSceneComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetSceneComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetSceneComponent", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::IndicatorDescriptor_eventGetSceneComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::IndicatorDescriptor_eventGetSceneComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetSceneComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetSceneComponent();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetSceneComponent

// Begin Class UIndicatorDescriptor Function GetScreenSpaceOffset
struct Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics
{
	struct IndicatorDescriptor_eventGetScreenSpaceOffset_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The position offset for the indicator in screen space.\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The position offset for the indicator in screen space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetScreenSpaceOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetScreenSpaceOffset", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::IndicatorDescriptor_eventGetScreenSpaceOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::IndicatorDescriptor_eventGetScreenSpaceOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetScreenSpaceOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetScreenSpaceOffset();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetScreenSpaceOffset

// Begin Class UIndicatorDescriptor Function GetShowClampToScreenArrow
struct Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics
{
	struct IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show the arrow if clamping to the edge of the screen?\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show the arrow if clamping to the edge of the screen?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetShowClampToScreenArrow", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::IndicatorDescriptor_eventGetShowClampToScreenArrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetShowClampToScreenArrow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetShowClampToScreenArrow();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetShowClampToScreenArrow

// Begin Class UIndicatorDescriptor Function GetVAlign
struct Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics
{
	struct IndicatorDescriptor_eventGetVAlign_Parms
	{
		TEnumAsByte<EVerticalAlignment> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertical alignment to the point in space to place the indicator at.\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical alignment to the point in space to place the indicator at." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetVAlign_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetVAlign", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::IndicatorDescriptor_eventGetVAlign_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::IndicatorDescriptor_eventGetVAlign_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetVAlign)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EVerticalAlignment>*)Z_Param__Result=P_THIS->GetVAlign();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetVAlign

// Begin Class UIndicatorDescriptor Function GetWorldPositionOffset
struct Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics
{
	struct IndicatorDescriptor_eventGetWorldPositionOffset_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The position offset for the indicator in world space.\n" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The position offset for the indicator in world space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventGetWorldPositionOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "GetWorldPositionOffset", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::IndicatorDescriptor_eventGetWorldPositionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::IndicatorDescriptor_eventGetWorldPositionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execGetWorldPositionOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWorldPositionOffset();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function GetWorldPositionOffset

// Begin Class UIndicatorDescriptor Function SetAutoRemoveWhenIndicatorComponentIsNull
struct Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics
{
	struct IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms
	{
		bool CanAutomaticallyRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanAutomaticallyRemove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAutomaticallyRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms*)Obj)->CanAutomaticallyRemove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove = { "CanAutomaticallyRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::NewProp_CanAutomaticallyRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetAutoRemoveWhenIndicatorComponentIsNull", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::IndicatorDescriptor_eventSetAutoRemoveWhenIndicatorComponentIsNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetAutoRemoveWhenIndicatorComponentIsNull)
{
	P_GET_UBOOL(Z_Param_CanAutomaticallyRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoRemoveWhenIndicatorComponentIsNull(Z_Param_CanAutomaticallyRemove);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetAutoRemoveWhenIndicatorComponentIsNull

// Begin Class UIndicatorDescriptor Function SetBoundingBoxAnchor
struct Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics
{
	struct IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms
	{
		FVector InBoundingBoxAnchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBoundingBoxAnchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::NewProp_InBoundingBoxAnchor = { "InBoundingBoxAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms, InBoundingBoxAnchor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::NewProp_InBoundingBoxAnchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetBoundingBoxAnchor", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::IndicatorDescriptor_eventSetBoundingBoxAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetBoundingBoxAnchor)
{
	P_GET_STRUCT(FVector,Z_Param_InBoundingBoxAnchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoundingBoxAnchor(Z_Param_InBoundingBoxAnchor);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetBoundingBoxAnchor

// Begin Class UIndicatorDescriptor Function SetClampToScreen
struct Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics
{
	struct IndicatorDescriptor_eventSetClampToScreen_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventSetClampToScreen_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventSetClampToScreen_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetClampToScreen", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::IndicatorDescriptor_eventSetClampToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::IndicatorDescriptor_eventSetClampToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetClampToScreen)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClampToScreen(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetClampToScreen

// Begin Class UIndicatorDescriptor Function SetComponentSocketName
struct Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics
{
	struct IndicatorDescriptor_eventSetComponentSocketName_Parms
	{
		FName SocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetComponentSocketName_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetComponentSocketName", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::IndicatorDescriptor_eventSetComponentSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::IndicatorDescriptor_eventSetComponentSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetComponentSocketName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetComponentSocketName(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetComponentSocketName

// Begin Class UIndicatorDescriptor Function SetDataObject
struct Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics
{
	struct IndicatorDescriptor_eventSetDataObject_Parms
	{
		UObject* InDataObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::NewProp_InDataObject = { "InDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetDataObject_Parms, InDataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::NewProp_InDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetDataObject", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::IndicatorDescriptor_eventSetDataObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::IndicatorDescriptor_eventSetDataObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetDataObject)
{
	P_GET_OBJECT(UObject,Z_Param_InDataObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataObject(Z_Param_InDataObject);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetDataObject

// Begin Class UIndicatorDescriptor Function SetDesiredVisibility
struct Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics
{
	struct IndicatorDescriptor_eventSetDesiredVisibility_Parms
	{
		bool InVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventSetDesiredVisibility_Parms*)Obj)->InVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventSetDesiredVisibility_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::NewProp_InVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetDesiredVisibility", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::IndicatorDescriptor_eventSetDesiredVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::IndicatorDescriptor_eventSetDesiredVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetDesiredVisibility)
{
	P_GET_UBOOL(Z_Param_InVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredVisibility(Z_Param_InVisible);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetDesiredVisibility

// Begin Class UIndicatorDescriptor Function SetHAlign
struct Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics
{
	struct IndicatorDescriptor_eventSetHAlign_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::NewProp_InHAlignment = { "InHAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetHAlign_Parms, InHAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::NewProp_InHAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetHAlign", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::IndicatorDescriptor_eventSetHAlign_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::IndicatorDescriptor_eventSetHAlign_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetHAlign)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHAlign(EHorizontalAlignment(Z_Param_InHAlignment));
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetHAlign

// Begin Class UIndicatorDescriptor Function SetIndicatorClass
struct Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics
{
	struct IndicatorDescriptor_eventSetIndicatorClass_Parms
	{
		TSoftClassPtr<UUserWidget>  InIndicatorWidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InIndicatorWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::NewProp_InIndicatorWidgetClass = { "InIndicatorWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetIndicatorClass_Parms, InIndicatorWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::NewProp_InIndicatorWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetIndicatorClass", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::IndicatorDescriptor_eventSetIndicatorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::IndicatorDescriptor_eventSetIndicatorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetIndicatorClass)
{
	P_GET_SOFTCLASS(TSoftClassPtr<UUserWidget> ,Z_Param_InIndicatorWidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIndicatorClass(Z_Param_InIndicatorWidgetClass);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetIndicatorClass

// Begin Class UIndicatorDescriptor Function SetPriority
struct Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics
{
	struct IndicatorDescriptor_eventSetPriority_Parms
	{
		int32 InPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetPriority_Parms, InPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::NewProp_InPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetPriority", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::IndicatorDescriptor_eventSetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::IndicatorDescriptor_eventSetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPriority(Z_Param_InPriority);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetPriority

// Begin Class UIndicatorDescriptor Function SetProjectionMode
struct Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics
{
	struct IndicatorDescriptor_eventSetProjectionMode_Parms
	{
		EActorCanvasProjectionMode InProjectionMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InProjectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InProjectionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode = { "InProjectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetProjectionMode_Parms, InProjectionMode), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, METADATA_PARAMS(0, nullptr) }; // 2516112598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::NewProp_InProjectionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::IndicatorDescriptor_eventSetProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::IndicatorDescriptor_eventSetProjectionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetProjectionMode)
{
	P_GET_ENUM(EActorCanvasProjectionMode,Z_Param_InProjectionMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProjectionMode(EActorCanvasProjectionMode(Z_Param_InProjectionMode));
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetProjectionMode

// Begin Class UIndicatorDescriptor Function SetSceneComponent
struct Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics
{
	struct IndicatorDescriptor_eventSetSceneComponent_Parms
	{
		USceneComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetSceneComponent_Parms, InComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetSceneComponent", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::IndicatorDescriptor_eventSetSceneComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::IndicatorDescriptor_eventSetSceneComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetSceneComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSceneComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetSceneComponent

// Begin Class UIndicatorDescriptor Function SetScreenSpaceOffset
struct Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics
{
	struct IndicatorDescriptor_eventSetScreenSpaceOffset_Parms
	{
		FVector2D Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetScreenSpaceOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetScreenSpaceOffset", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::IndicatorDescriptor_eventSetScreenSpaceOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::IndicatorDescriptor_eventSetScreenSpaceOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetScreenSpaceOffset)
{
	P_GET_STRUCT(FVector2D,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenSpaceOffset(Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetScreenSpaceOffset

// Begin Class UIndicatorDescriptor Function SetShowClampToScreenArrow
struct Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics
{
	struct IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms), &Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetShowClampToScreenArrow", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::IndicatorDescriptor_eventSetShowClampToScreenArrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetShowClampToScreenArrow)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowClampToScreenArrow(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetShowClampToScreenArrow

// Begin Class UIndicatorDescriptor Function SetVAlign
struct Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics
{
	struct IndicatorDescriptor_eventSetVAlign_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::NewProp_InVAlignment = { "InVAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetVAlign_Parms, InVAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::NewProp_InVAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetVAlign", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::IndicatorDescriptor_eventSetVAlign_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::IndicatorDescriptor_eventSetVAlign_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetVAlign)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVAlign(EVerticalAlignment(Z_Param_InVAlignment));
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetVAlign

// Begin Class UIndicatorDescriptor Function SetWorldPositionOffset
struct Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics
{
	struct IndicatorDescriptor_eventSetWorldPositionOffset_Parms
	{
		FVector Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IndicatorDescriptor_eventSetWorldPositionOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "SetWorldPositionOffset", nullptr, nullptr, Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::IndicatorDescriptor_eventSetWorldPositionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::IndicatorDescriptor_eventSetWorldPositionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execSetWorldPositionOffset)
{
	P_GET_STRUCT(FVector,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldPositionOffset(Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function SetWorldPositionOffset

// Begin Class UIndicatorDescriptor Function UnregisterIndicator
struct Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorDescriptor, nullptr, "UnregisterIndicator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIndicatorDescriptor::execUnregisterIndicator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterIndicator();
	P_NATIVE_END;
}
// End Class UIndicatorDescriptor Function UnregisterIndicator

// Begin Class UIndicatorDescriptor
void UIndicatorDescriptor::StaticRegisterNativesUIndicatorDescriptor()
{
	UClass* Class = UIndicatorDescriptor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAutoRemoveWhenIndicatorComponentIsNull", &UIndicatorDescriptor::execGetAutoRemoveWhenIndicatorComponentIsNull },
		{ "GetBoundingBoxAnchor", &UIndicatorDescriptor::execGetBoundingBoxAnchor },
		{ "GetClampToScreen", &UIndicatorDescriptor::execGetClampToScreen },
		{ "GetComponentSocketName", &UIndicatorDescriptor::execGetComponentSocketName },
		{ "GetDataObject", &UIndicatorDescriptor::execGetDataObject },
		{ "GetHAlign", &UIndicatorDescriptor::execGetHAlign },
		{ "GetIndicatorClass", &UIndicatorDescriptor::execGetIndicatorClass },
		{ "GetIsVisible", &UIndicatorDescriptor::execGetIsVisible },
		{ "GetPriority", &UIndicatorDescriptor::execGetPriority },
		{ "GetProjectionMode", &UIndicatorDescriptor::execGetProjectionMode },
		{ "GetSceneComponent", &UIndicatorDescriptor::execGetSceneComponent },
		{ "GetScreenSpaceOffset", &UIndicatorDescriptor::execGetScreenSpaceOffset },
		{ "GetShowClampToScreenArrow", &UIndicatorDescriptor::execGetShowClampToScreenArrow },
		{ "GetVAlign", &UIndicatorDescriptor::execGetVAlign },
		{ "GetWorldPositionOffset", &UIndicatorDescriptor::execGetWorldPositionOffset },
		{ "SetAutoRemoveWhenIndicatorComponentIsNull", &UIndicatorDescriptor::execSetAutoRemoveWhenIndicatorComponentIsNull },
		{ "SetBoundingBoxAnchor", &UIndicatorDescriptor::execSetBoundingBoxAnchor },
		{ "SetClampToScreen", &UIndicatorDescriptor::execSetClampToScreen },
		{ "SetComponentSocketName", &UIndicatorDescriptor::execSetComponentSocketName },
		{ "SetDataObject", &UIndicatorDescriptor::execSetDataObject },
		{ "SetDesiredVisibility", &UIndicatorDescriptor::execSetDesiredVisibility },
		{ "SetHAlign", &UIndicatorDescriptor::execSetHAlign },
		{ "SetIndicatorClass", &UIndicatorDescriptor::execSetIndicatorClass },
		{ "SetPriority", &UIndicatorDescriptor::execSetPriority },
		{ "SetProjectionMode", &UIndicatorDescriptor::execSetProjectionMode },
		{ "SetSceneComponent", &UIndicatorDescriptor::execSetSceneComponent },
		{ "SetScreenSpaceOffset", &UIndicatorDescriptor::execSetScreenSpaceOffset },
		{ "SetShowClampToScreenArrow", &UIndicatorDescriptor::execSetShowClampToScreenArrow },
		{ "SetVAlign", &UIndicatorDescriptor::execSetVAlign },
		{ "SetWorldPositionOffset", &UIndicatorDescriptor::execSetWorldPositionOffset },
		{ "UnregisterIndicator", &UIndicatorDescriptor::execUnregisterIndicator },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorDescriptor);
UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister()
{
	return UIndicatorDescriptor::StaticClass();
}
struct Z_Construct_UClass_UIndicatorDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Describes and controls an active indicator.  It is highly recommended that your widget implements\n * IActorIndicatorWidget so that it can 'bind' to the associated data.\n */" },
#endif
		{ "IncludePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes and controls an active indicator.  It is highly recommended that your widget implements\nIActorIndicatorWidget so that it can 'bind' to the associated data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampToScreen_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowClampToScreenArrow_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenPosition_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HAlignment_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VAlignment_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxAnchor_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceOffset_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataObject_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSocketName_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerPtr_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorDescriptor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bClampToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToScreen;
	static void NewProp_bShowClampToScreenArrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowClampToScreenArrow;
	static void NewProp_bOverrideScreenPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenPosition;
	static void NewProp_bAutoRemoveWhenIndicatorComponentIsNull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRemoveWhenIndicatorComponentIsNull;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VAlignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxAnchor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSpaceOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentSocketName;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_IndicatorWidgetClass;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ManagerPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetAutoRemoveWhenIndicatorComponentIsNull, "GetAutoRemoveWhenIndicatorComponentIsNull" }, // 586661031
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetBoundingBoxAnchor, "GetBoundingBoxAnchor" }, // 3612467272
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetClampToScreen, "GetClampToScreen" }, // 1240186353
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetComponentSocketName, "GetComponentSocketName" }, // 1507430976
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetDataObject, "GetDataObject" }, // 375881837
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetHAlign, "GetHAlign" }, // 4274260103
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetIndicatorClass, "GetIndicatorClass" }, // 402199051
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetIsVisible, "GetIsVisible" }, // 1119965446
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetPriority, "GetPriority" }, // 807588186
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetProjectionMode, "GetProjectionMode" }, // 469690149
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetSceneComponent, "GetSceneComponent" }, // 2937080312
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetScreenSpaceOffset, "GetScreenSpaceOffset" }, // 1966415760
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetShowClampToScreenArrow, "GetShowClampToScreenArrow" }, // 1091688510
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetVAlign, "GetVAlign" }, // 1541585313
		{ &Z_Construct_UFunction_UIndicatorDescriptor_GetWorldPositionOffset, "GetWorldPositionOffset" }, // 3229724626
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetAutoRemoveWhenIndicatorComponentIsNull, "SetAutoRemoveWhenIndicatorComponentIsNull" }, // 4227089716
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetBoundingBoxAnchor, "SetBoundingBoxAnchor" }, // 237700587
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetClampToScreen, "SetClampToScreen" }, // 3757377185
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetComponentSocketName, "SetComponentSocketName" }, // 2132015575
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetDataObject, "SetDataObject" }, // 1015785284
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetDesiredVisibility, "SetDesiredVisibility" }, // 3795572908
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetHAlign, "SetHAlign" }, // 949138408
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetIndicatorClass, "SetIndicatorClass" }, // 2491182527
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetPriority, "SetPriority" }, // 207615074
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetProjectionMode, "SetProjectionMode" }, // 3188167591
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetSceneComponent, "SetSceneComponent" }, // 3350924914
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetScreenSpaceOffset, "SetScreenSpaceOffset" }, // 3230735886
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetShowClampToScreenArrow, "SetShowClampToScreenArrow" }, // 2064956278
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetVAlign, "SetVAlign" }, // 2670287014
		{ &Z_Construct_UFunction_UIndicatorDescriptor_SetWorldPositionOffset, "SetWorldPositionOffset" }, // 184897898
		{ &Z_Construct_UFunction_UIndicatorDescriptor_UnregisterIndicator, "UnregisterIndicator" }, // 152098449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicatorDescriptor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((UIndicatorDescriptor*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_SetBit(void* Obj)
{
	((UIndicatorDescriptor*)Obj)->bClampToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen = { "bClampToScreen", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampToScreen_MetaData), NewProp_bClampToScreen_MetaData) };
void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_SetBit(void* Obj)
{
	((UIndicatorDescriptor*)Obj)->bShowClampToScreenArrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow = { "bShowClampToScreenArrow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowClampToScreenArrow_MetaData), NewProp_bShowClampToScreenArrow_MetaData) };
void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_SetBit(void* Obj)
{
	((UIndicatorDescriptor*)Obj)->bOverrideScreenPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition = { "bOverrideScreenPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideScreenPosition_MetaData), NewProp_bOverrideScreenPosition_MetaData) };
void Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_SetBit(void* Obj)
{
	((UIndicatorDescriptor*)Obj)->bAutoRemoveWhenIndicatorComponentIsNull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull = { "bAutoRemoveWhenIndicatorComponentIsNull", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIndicatorDescriptor), &Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData), NewProp_bAutoRemoveWhenIndicatorComponentIsNull_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, ProjectionMode), Z_Construct_UEnum_LyraGame_EActorCanvasProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 2516112598
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment = { "HAlignment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, HAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HAlignment_MetaData), NewProp_HAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment = { "VAlignment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, VAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VAlignment_MetaData), NewProp_VAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor = { "BoundingBoxAnchor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, BoundingBoxAnchor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxAnchor_MetaData), NewProp_BoundingBoxAnchor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset = { "ScreenSpaceOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, ScreenSpaceOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSpaceOffset_MetaData), NewProp_ScreenSpaceOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset = { "WorldPositionOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, WorldPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffset_MetaData), NewProp_WorldPositionOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject = { "DataObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, DataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataObject_MetaData), NewProp_DataObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName = { "ComponentSocketName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, ComponentSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentSocketName_MetaData), NewProp_ComponentSocketName_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass = { "IndicatorWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, IndicatorWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicatorWidgetClass_MetaData), NewProp_IndicatorWidgetClass_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr = { "ManagerPtr", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorDescriptor, ManagerPtr), Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerPtr_MetaData), NewProp_ManagerPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bClampToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bShowClampToScreenArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bOverrideScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_bAutoRemoveWhenIndicatorComponentIsNull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ProjectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_HAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_VAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_BoundingBoxAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ScreenSpaceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_WorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_DataObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ComponentSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_IndicatorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorDescriptor_Statics::NewProp_ManagerPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIndicatorDescriptor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorDescriptor_Statics::ClassParams = {
	&UIndicatorDescriptor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorDescriptor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIndicatorDescriptor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIndicatorDescriptor()
{
	if (!Z_Registration_Info_UClass_UIndicatorDescriptor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorDescriptor.OuterSingleton, Z_Construct_UClass_UIndicatorDescriptor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIndicatorDescriptor.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UIndicatorDescriptor>()
{
	return UIndicatorDescriptor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorDescriptor);
UIndicatorDescriptor::~UIndicatorDescriptor() {}
// End Class UIndicatorDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EActorCanvasProjectionMode_StaticEnum, TEXT("EActorCanvasProjectionMode"), &Z_Registration_Info_UEnum_EActorCanvasProjectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2516112598U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorDescriptor, UIndicatorDescriptor::StaticClass, TEXT("UIndicatorDescriptor"), &Z_Registration_Info_UClass_UIndicatorDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorDescriptor), 852713036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_3577030636(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
