// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/ContextEffects/LyraContextEffectsSubsystem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectsSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsSet();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsSet_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsSettings();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsSettings_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsSubsystem_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraContextEffectsSettings
void ULyraContextEffectsSettings::StaticRegisterNativesULyraContextEffectsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsSettings);
UClass* Z_Construct_UClass_ULyraContextEffectsSettings_NoRegister()
{
	return ULyraContextEffectsSettings::StaticClass();
}
struct Z_Construct_UClass_ULyraContextEffectsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "LyraContextEffects" },
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTypeToContextMap_MetaData[] = {
		{ "Category", "LyraContextEffectsSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceTypeToContextMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceTypeToContextMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceTypeToContextMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraContextEffectsSettings_Statics::NewProp_SurfaceTypeToContextMap_ValueProp = { "SurfaceTypeToContextMap", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraContextEffectsSettings_Statics::NewProp_SurfaceTypeToContextMap_Key_KeyProp = { "SurfaceTypeToContextMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraContextEffectsSettings_Statics::NewProp_SurfaceTypeToContextMap = { "SurfaceTypeToContextMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectsSettings, SurfaceTypeToContextMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceTypeToContextMap_MetaData), NewProp_SurfaceTypeToContextMap_MetaData) }; // 161619406 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraContextEffectsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSettings_Statics::NewProp_SurfaceTypeToContextMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSettings_Statics::NewProp_SurfaceTypeToContextMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSettings_Statics::NewProp_SurfaceTypeToContextMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraContextEffectsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsSettings_Statics::ClassParams = {
	&ULyraContextEffectsSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraContextEffectsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraContextEffectsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraContextEffectsSettings()
{
	if (!Z_Registration_Info_UClass_ULyraContextEffectsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsSettings.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraContextEffectsSettings.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectsSettings>()
{
	return ULyraContextEffectsSettings::StaticClass();
}
ULyraContextEffectsSettings::ULyraContextEffectsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsSettings);
ULyraContextEffectsSettings::~ULyraContextEffectsSettings() {}
// End Class ULyraContextEffectsSettings

// Begin Class ULyraContextEffectsSet
void ULyraContextEffectsSet::StaticRegisterNativesULyraContextEffectsSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsSet);
UClass* Z_Construct_UClass_ULyraContextEffectsSet_NoRegister()
{
	return ULyraContextEffectsSet::StaticClass();
}
struct Z_Construct_UClass_ULyraContextEffectsSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LyraContextEffectsLibraries_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LyraContextEffectsLibraries_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LyraContextEffectsLibraries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectsSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraContextEffectsSet_Statics::NewProp_LyraContextEffectsLibraries_ElementProp = { "LyraContextEffectsLibraries", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraContextEffectsSet_Statics::NewProp_LyraContextEffectsLibraries = { "LyraContextEffectsLibraries", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectsSet, LyraContextEffectsLibraries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LyraContextEffectsLibraries_MetaData), NewProp_LyraContextEffectsLibraries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraContextEffectsSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSet_Statics::NewProp_LyraContextEffectsLibraries_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSet_Statics::NewProp_LyraContextEffectsLibraries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraContextEffectsSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsSet_Statics::ClassParams = {
	&ULyraContextEffectsSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraContextEffectsSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraContextEffectsSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraContextEffectsSet()
{
	if (!Z_Registration_Info_UClass_ULyraContextEffectsSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsSet.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraContextEffectsSet.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectsSet>()
{
	return ULyraContextEffectsSet::StaticClass();
}
ULyraContextEffectsSet::ULyraContextEffectsSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsSet);
ULyraContextEffectsSet::~ULyraContextEffectsSet() {}
// End Class ULyraContextEffectsSet

// Begin Class ULyraContextEffectsSubsystem Function GetContextFromSurfaceType
struct Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics
{
	struct LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms
	{
		TEnumAsByte<EPhysicalSurface> PhysicalSurface;
		FGameplayTag Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ContextEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_PhysicalSurface = { "PhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms, PhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms, Context), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms), &Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_PhysicalSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsSubsystem, nullptr, "GetContextFromSurfaceType", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::LyraContextEffectsSubsystem_eventGetContextFromSurfaceType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectsSubsystem::execGetContextFromSurfaceType)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_PhysicalSurface);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetContextFromSurfaceType(EPhysicalSurface(Z_Param_PhysicalSurface),Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class ULyraContextEffectsSubsystem Function GetContextFromSurfaceType

// Begin Class ULyraContextEffectsSubsystem Function LoadAndAddContextEffectsLibraries
struct Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics
{
	struct LyraContextEffectsSubsystem_eventLoadAndAddContextEffectsLibraries_Parms
	{
		AActor* OwningActor;
		TSet<TSoftObjectPtr<ULyraContextEffectsLibrary> > ContextEffectsLibraries;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ContextEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ContextEffectsLibraries_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ContextEffectsLibraries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventLoadAndAddContextEffectsLibraries_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::NewProp_ContextEffectsLibraries_ElementProp = { "ContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::NewProp_ContextEffectsLibraries = { "ContextEffectsLibraries", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventLoadAndAddContextEffectsLibraries_Parms, ContextEffectsLibraries), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::NewProp_ContextEffectsLibraries_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::NewProp_ContextEffectsLibraries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsSubsystem, nullptr, "LoadAndAddContextEffectsLibraries", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::LyraContextEffectsSubsystem_eventLoadAndAddContextEffectsLibraries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::LyraContextEffectsSubsystem_eventLoadAndAddContextEffectsLibraries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectsSubsystem::execLoadAndAddContextEffectsLibraries)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_GET_TSET(TSoftObjectPtr<ULyraContextEffectsLibrary>,Z_Param_ContextEffectsLibraries);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadAndAddContextEffectsLibraries(Z_Param_OwningActor,Z_Param_ContextEffectsLibraries);
	P_NATIVE_END;
}
// End Class ULyraContextEffectsSubsystem Function LoadAndAddContextEffectsLibraries

// Begin Class ULyraContextEffectsSubsystem Function SpawnContextEffects
struct Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics
{
	struct LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms
	{
		const AActor* SpawningActor;
		USceneComponent* AttachToComponent;
		FName AttachPoint;
		FVector LocationOffset;
		FRotator RotationOffset;
		FGameplayTag Effect;
		FGameplayTagContainer Contexts;
		TArray<UAudioComponent*> AudioOut;
		TArray<UNiagaraComponent*> NiagaraOut;
		FVector VFXScale;
		float AudioVolume;
		float AudioPitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ContextEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "CPP_Default_AudioPitch", "1.000000" },
		{ "CPP_Default_AudioVolume", "1.000000" },
		{ "CPP_Default_VFXScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioOut_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraOut_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VFXScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_SpawningActor = { "SpawningActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, SpawningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningActor_MetaData), NewProp_SpawningActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, AttachPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPoint_MetaData), NewProp_AttachPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, Effect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, Contexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioOut_Inner = { "AudioOut", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioOut = { "AudioOut", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, AudioOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioOut_MetaData), NewProp_AudioOut_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_NiagaraOut_Inner = { "NiagaraOut", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_NiagaraOut = { "NiagaraOut", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, NiagaraOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraOut_MetaData), NewProp_NiagaraOut_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_VFXScale = { "VFXScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, VFXScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, AudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioPitch = { "AudioPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms, AudioPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_SpawningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AttachPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_Contexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_NiagaraOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_NiagaraOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_VFXScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::NewProp_AudioPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsSubsystem, nullptr, "SpawnContextEffects", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::LyraContextEffectsSubsystem_eventSpawnContextEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectsSubsystem::execSpawnContextEffects)
{
	P_GET_OBJECT(AActor,Z_Param_SpawningActor);
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_AttachPoint);
	P_GET_STRUCT(FVector,Z_Param_LocationOffset);
	P_GET_STRUCT(FRotator,Z_Param_RotationOffset);
	P_GET_STRUCT(FGameplayTag,Z_Param_Effect);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_Contexts);
	P_GET_TARRAY_REF(UAudioComponent*,Z_Param_Out_AudioOut);
	P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_NiagaraOut);
	P_GET_STRUCT(FVector,Z_Param_VFXScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AudioVolume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AudioPitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnContextEffects(Z_Param_SpawningActor,Z_Param_AttachToComponent,Z_Param_AttachPoint,Z_Param_LocationOffset,Z_Param_RotationOffset,Z_Param_Effect,Z_Param_Contexts,Z_Param_Out_AudioOut,Z_Param_Out_NiagaraOut,Z_Param_VFXScale,Z_Param_AudioVolume,Z_Param_AudioPitch);
	P_NATIVE_END;
}
// End Class ULyraContextEffectsSubsystem Function SpawnContextEffects

// Begin Class ULyraContextEffectsSubsystem Function UnloadAndRemoveContextEffectsLibraries
struct Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics
{
	struct LyraContextEffectsSubsystem_eventUnloadAndRemoveContextEffectsLibraries_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ContextEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraContextEffectsSubsystem_eventUnloadAndRemoveContextEffectsLibraries_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsSubsystem, nullptr, "UnloadAndRemoveContextEffectsLibraries", nullptr, nullptr, Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::LyraContextEffectsSubsystem_eventUnloadAndRemoveContextEffectsLibraries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::LyraContextEffectsSubsystem_eventUnloadAndRemoveContextEffectsLibraries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraContextEffectsSubsystem::execUnloadAndRemoveContextEffectsLibraries)
{
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadAndRemoveContextEffectsLibraries(Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class ULyraContextEffectsSubsystem Function UnloadAndRemoveContextEffectsLibraries

// Begin Class ULyraContextEffectsSubsystem
void ULyraContextEffectsSubsystem::StaticRegisterNativesULyraContextEffectsSubsystem()
{
	UClass* Class = ULyraContextEffectsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContextFromSurfaceType", &ULyraContextEffectsSubsystem::execGetContextFromSurfaceType },
		{ "LoadAndAddContextEffectsLibraries", &ULyraContextEffectsSubsystem::execLoadAndAddContextEffectsLibraries },
		{ "SpawnContextEffects", &ULyraContextEffectsSubsystem::execSpawnContextEffects },
		{ "UnloadAndRemoveContextEffectsLibraries", &ULyraContextEffectsSubsystem::execUnloadAndRemoveContextEffectsLibraries },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsSubsystem);
UClass* Z_Construct_UClass_ULyraContextEffectsSubsystem_NoRegister()
{
	return ULyraContextEffectsSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveActorEffectsMap_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveActorEffectsMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveActorEffectsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveActorEffectsMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraContextEffectsSubsystem_GetContextFromSurfaceType, "GetContextFromSurfaceType" }, // 3029357560
		{ &Z_Construct_UFunction_ULyraContextEffectsSubsystem_LoadAndAddContextEffectsLibraries, "LoadAndAddContextEffectsLibraries" }, // 4094137175
		{ &Z_Construct_UFunction_ULyraContextEffectsSubsystem_SpawnContextEffects, "SpawnContextEffects" }, // 3493466618
		{ &Z_Construct_UFunction_ULyraContextEffectsSubsystem_UnloadAndRemoveContextEffectsLibraries, "UnloadAndRemoveContextEffectsLibraries" }, // 1854305089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::NewProp_ActiveActorEffectsMap_ValueProp = { "ActiveActorEffectsMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULyraContextEffectsSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::NewProp_ActiveActorEffectsMap_Key_KeyProp = { "ActiveActorEffectsMap_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::NewProp_ActiveActorEffectsMap = { "ActiveActorEffectsMap", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraContextEffectsSubsystem, ActiveActorEffectsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveActorEffectsMap_MetaData), NewProp_ActiveActorEffectsMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::NewProp_ActiveActorEffectsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::NewProp_ActiveActorEffectsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::NewProp_ActiveActorEffectsMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::ClassParams = {
	&ULyraContextEffectsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraContextEffectsSubsystem()
{
	if (!Z_Registration_Info_UClass_ULyraContextEffectsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsSubsystem.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraContextEffectsSubsystem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectsSubsystem>()
{
	return ULyraContextEffectsSubsystem::StaticClass();
}
ULyraContextEffectsSubsystem::ULyraContextEffectsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsSubsystem);
ULyraContextEffectsSubsystem::~ULyraContextEffectsSubsystem() {}
// End Class ULyraContextEffectsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectsSettings, ULyraContextEffectsSettings::StaticClass, TEXT("ULyraContextEffectsSettings"), &Z_Registration_Info_UClass_ULyraContextEffectsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsSettings), 1164594413U) },
		{ Z_Construct_UClass_ULyraContextEffectsSet, ULyraContextEffectsSet::StaticClass, TEXT("ULyraContextEffectsSet"), &Z_Registration_Info_UClass_ULyraContextEffectsSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsSet), 3972588694U) },
		{ Z_Construct_UClass_ULyraContextEffectsSubsystem, ULyraContextEffectsSubsystem::StaticClass, TEXT("ULyraContextEffectsSubsystem"), &Z_Registration_Info_UClass_ULyraContextEffectsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsSubsystem), 3090893694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_1911929540(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
