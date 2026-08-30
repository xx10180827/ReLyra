// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Weapons/LyraReticleWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReticleWidgetBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReticleWidgetBase();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraReticleWidgetBase Function ComputeMaxScreenspaceSpreadRadius
struct Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics
{
	struct LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current weapon's maximum spread radius in screenspace units (pixels) */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current weapon's maximum spread radius in screenspace units (pixels)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "ComputeMaxScreenspaceSpreadRadius", nullptr, nullptr, Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::LyraReticleWidgetBase_eventComputeMaxScreenspaceSpreadRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReticleWidgetBase::execComputeMaxScreenspaceSpreadRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ComputeMaxScreenspaceSpreadRadius();
	P_NATIVE_END;
}
// End Class ULyraReticleWidgetBase Function ComputeMaxScreenspaceSpreadRadius

// Begin Class ULyraReticleWidgetBase Function ComputeSpreadAngle
struct Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics
{
	struct LyraReticleWidgetBase_eventComputeSpreadAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current weapon's diametrical spread angle, in degrees */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current weapon's diametrical spread angle, in degrees" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReticleWidgetBase_eventComputeSpreadAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "ComputeSpreadAngle", nullptr, nullptr, Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::LyraReticleWidgetBase_eventComputeSpreadAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::LyraReticleWidgetBase_eventComputeSpreadAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReticleWidgetBase::execComputeSpreadAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ComputeSpreadAngle();
	P_NATIVE_END;
}
// End Class ULyraReticleWidgetBase Function ComputeSpreadAngle

// Begin Class ULyraReticleWidgetBase Function HasFirstShotAccuracy
struct Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics
{
	struct LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if the current weapon is at 'first shot accuracy'\n\x09 * (the weapon allows it and it is at min spread)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the current weapon is at 'first shot accuracy'\n(the weapon allows it and it is at min spread)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms), &Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "HasFirstShotAccuracy", nullptr, nullptr, Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::LyraReticleWidgetBase_eventHasFirstShotAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReticleWidgetBase::execHasFirstShotAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFirstShotAccuracy();
	P_NATIVE_END;
}
// End Class ULyraReticleWidgetBase Function HasFirstShotAccuracy

// Begin Class ULyraReticleWidgetBase Function InitializeFromWeapon
struct Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics
{
	struct LyraReticleWidgetBase_eventInitializeFromWeapon_Parms
	{
		ULyraWeaponInstance* InWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::NewProp_InWeapon = { "InWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraReticleWidgetBase_eventInitializeFromWeapon_Parms, InWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::NewProp_InWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "InitializeFromWeapon", nullptr, nullptr, Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::LyraReticleWidgetBase_eventInitializeFromWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::LyraReticleWidgetBase_eventInitializeFromWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraReticleWidgetBase::execInitializeFromWeapon)
{
	P_GET_OBJECT(ULyraWeaponInstance,Z_Param_InWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromWeapon(Z_Param_InWeapon);
	P_NATIVE_END;
}
// End Class ULyraReticleWidgetBase Function InitializeFromWeapon

// Begin Class ULyraReticleWidgetBase Function OnWeaponInitialized
static FName NAME_ULyraReticleWidgetBase_OnWeaponInitialized = FName(TEXT("OnWeaponInitialized"));
void ULyraReticleWidgetBase::OnWeaponInitialized()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraReticleWidgetBase_OnWeaponInitialized),NULL);
}
struct Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReticleWidgetBase, nullptr, "OnWeaponInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraReticleWidgetBase Function OnWeaponInitialized

// Begin Class ULyraReticleWidgetBase
void ULyraReticleWidgetBase::StaticRegisterNativesULyraReticleWidgetBase()
{
	UClass* Class = ULyraReticleWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeMaxScreenspaceSpreadRadius", &ULyraReticleWidgetBase::execComputeMaxScreenspaceSpreadRadius },
		{ "ComputeSpreadAngle", &ULyraReticleWidgetBase::execComputeSpreadAngle },
		{ "HasFirstShotAccuracy", &ULyraReticleWidgetBase::execHasFirstShotAccuracy },
		{ "InitializeFromWeapon", &ULyraReticleWidgetBase::execInitializeFromWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReticleWidgetBase);
UClass* Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister()
{
	return ULyraReticleWidgetBase::StaticClass();
}
struct Z_Construct_UClass_ULyraReticleWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInstance_MetaData[] = {
		{ "Category", "LyraReticleWidgetBase" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInstance_MetaData[] = {
		{ "Category", "LyraReticleWidgetBase" },
		{ "ModuleRelativePath", "UI/Weapons/LyraReticleWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeMaxScreenspaceSpreadRadius, "ComputeMaxScreenspaceSpreadRadius" }, // 3229409299
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_ComputeSpreadAngle, "ComputeSpreadAngle" }, // 2632606799
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_HasFirstShotAccuracy, "HasFirstShotAccuracy" }, // 3872100874
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_InitializeFromWeapon, "InitializeFromWeapon" }, // 2278522829
		{ &Z_Construct_UFunction_ULyraReticleWidgetBase_OnWeaponInitialized, "OnWeaponInitialized" }, // 3399722346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReticleWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReticleWidgetBase, WeaponInstance), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInstance_MetaData), NewProp_WeaponInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance = { "InventoryInstance", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReticleWidgetBase, InventoryInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryInstance_MetaData), NewProp_InventoryInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_WeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReticleWidgetBase_Statics::NewProp_InventoryInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraReticleWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReticleWidgetBase_Statics::ClassParams = {
	&ULyraReticleWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReticleWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReticleWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReticleWidgetBase()
{
	if (!Z_Registration_Info_UClass_ULyraReticleWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReticleWidgetBase.OuterSingleton, Z_Construct_UClass_ULyraReticleWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReticleWidgetBase.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReticleWidgetBase>()
{
	return ULyraReticleWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReticleWidgetBase);
ULyraReticleWidgetBase::~ULyraReticleWidgetBase() {}
// End Class ULyraReticleWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReticleWidgetBase, ULyraReticleWidgetBase::StaticClass, TEXT("ULyraReticleWidgetBase"), &Z_Registration_Info_UClass_ULyraReticleWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReticleWidgetBase), 2992873921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_1292019060(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraReticleWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
