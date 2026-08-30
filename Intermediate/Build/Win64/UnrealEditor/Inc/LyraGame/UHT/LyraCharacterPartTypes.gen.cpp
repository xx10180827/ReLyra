// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Cosmetics/LyraCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacterPartTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartHandle();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ECharacterCustomizationCollisionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode;
static UEnum* ECharacterCustomizationCollisionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ECharacterCustomizationCollisionMode"));
	}
	return Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ECharacterCustomizationCollisionMode>()
{
	return ECharacterCustomizationCollisionMode_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How should collision be configured on the spawned part actor\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "NoCollision.Comment", "// Disable collision on spawned character parts\n" },
		{ "NoCollision.Name", "ECharacterCustomizationCollisionMode::NoCollision" },
		{ "NoCollision.ToolTip", "Disable collision on spawned character parts" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How should collision be configured on the spawned part actor" },
#endif
		{ "UseCollisionFromCharacterPart.Comment", "// Leave the collision settings on character parts alone\n" },
		{ "UseCollisionFromCharacterPart.Name", "ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart" },
		{ "UseCollisionFromCharacterPart.ToolTip", "Leave the collision settings on character parts alone" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterCustomizationCollisionMode::NoCollision", (int64)ECharacterCustomizationCollisionMode::NoCollision },
		{ "ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart", (int64)ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ECharacterCustomizationCollisionMode",
	"ECharacterCustomizationCollisionMode",
	Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode()
{
	if (!Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.InnerSingleton;
}
// End Enum ECharacterCustomizationCollisionMode

// Begin ScriptStruct FLyraCharacterPartHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle;
class UScriptStruct* FLyraCharacterPartHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterPartHandle, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterPartHandle"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterPartHandle>()
{
	return FLyraCharacterPartHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A handle created by adding a character part entry, can be used to remove it later\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A handle created by adding a character part entry, can be used to remove it later" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHandle_MetaData[] = {
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterPartHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle = { "PartHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCharacterPartHandle, PartHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHandle_MetaData), NewProp_PartHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraCharacterPartHandle",
	Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers),
	sizeof(FLyraCharacterPartHandle),
	alignof(FLyraCharacterPartHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartHandle()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.InnerSingleton;
}
// End ScriptStruct FLyraCharacterPartHandle

// Begin ScriptStruct FLyraCharacterPart
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterPart;
class UScriptStruct* FLyraCharacterPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterPart, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterPart"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPart.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterPart>()
{
	return FLyraCharacterPart::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraCharacterPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n// A character part request\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n A character part request" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartClass_MetaData[] = {
		{ "Category", "LyraCharacterPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The part to spawn\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The part to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "LyraCharacterPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The socket to attach the part to (if any)\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The socket to attach the part to (if any)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[] = {
		{ "Category", "LyraCharacterPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle collision for the primitive components in the part\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle collision for the primitive components in the part" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass = { "PartClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCharacterPart, PartClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartClass_MetaData), NewProp_PartClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCharacterPart, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCharacterPart, CollisionMode), Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMode_MetaData), NewProp_CollisionMode_MetaData) }; // 1261648034
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraCharacterPart",
	Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers),
	sizeof(FLyraCharacterPart),
	alignof(FLyraCharacterPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterPart.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPart.InnerSingleton;
}
// End ScriptStruct FLyraCharacterPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterCustomizationCollisionMode_StaticEnum, TEXT("ECharacterCustomizationCollisionMode"), &Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1261648034U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraCharacterPartHandle::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewStructOps, TEXT("LyraCharacterPartHandle"), &Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterPartHandle), 1063436802U) },
		{ FLyraCharacterPart::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewStructOps, TEXT("LyraCharacterPart"), &Z_Registration_Info_UScriptStruct_LyraCharacterPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterPart), 2027995414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_1743221314(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
