// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraReplicationGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplicationGraphTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EClassRepNodeMapping();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRepGraphActorClassSettings();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum EClassRepNodeMapping
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClassRepNodeMapping;
static UEnum* EClassRepNodeMapping_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClassRepNodeMapping.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClassRepNodeMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EClassRepNodeMapping"));
	}
	return Z_Registration_Info_UEnum_EClassRepNodeMapping.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<EClassRepNodeMapping>()
{
	return EClassRepNodeMapping_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the main enum we use to route actors to the right replication node. Each class maps to one enum.\n" },
#endif
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "NotRouted.Name", "EClassRepNodeMapping::NotRouted" },
		{ "RelevantAllConnections.Comment", "// Doesn't map to any node. Used for special case actors that handled by special case nodes (ULyraReplicationGraphNode_PlayerStateFrequencyLimiter)\n" },
		{ "RelevantAllConnections.Name", "EClassRepNodeMapping::RelevantAllConnections" },
		{ "RelevantAllConnections.ToolTip", "Doesn't map to any node. Used for special case actors that handled by special case nodes (ULyraReplicationGraphNode_PlayerStateFrequencyLimiter)" },
		{ "Spatialize_Dormancy.Comment", "// Routes to GridNode: these actors mode frequently and are updated once per frame.\n" },
		{ "Spatialize_Dormancy.Name", "EClassRepNodeMapping::Spatialize_Dormancy" },
		{ "Spatialize_Dormancy.ToolTip", "Routes to GridNode: these actors mode frequently and are updated once per frame." },
		{ "Spatialize_Dynamic.Comment", "// Routes to GridNode: these actors don't move and don't need to be updated every frame.\n" },
		{ "Spatialize_Dynamic.Name", "EClassRepNodeMapping::Spatialize_Dynamic" },
		{ "Spatialize_Dynamic.ToolTip", "Routes to GridNode: these actors don't move and don't need to be updated every frame." },
		{ "Spatialize_Static.Comment", "// ONLY SPATIALIZED Enums below here! See ULyraReplicationGraph::IsSpatialized\n" },
		{ "Spatialize_Static.Name", "EClassRepNodeMapping::Spatialize_Static" },
		{ "Spatialize_Static.ToolTip", "ONLY SPATIALIZED Enums below here! See ULyraReplicationGraph::IsSpatialized" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the main enum we use to route actors to the right replication node. Each class maps to one enum." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClassRepNodeMapping::NotRouted", (int64)EClassRepNodeMapping::NotRouted },
		{ "EClassRepNodeMapping::RelevantAllConnections", (int64)EClassRepNodeMapping::RelevantAllConnections },
		{ "EClassRepNodeMapping::Spatialize_Static", (int64)EClassRepNodeMapping::Spatialize_Static },
		{ "EClassRepNodeMapping::Spatialize_Dynamic", (int64)EClassRepNodeMapping::Spatialize_Dynamic },
		{ "EClassRepNodeMapping::Spatialize_Dormancy", (int64)EClassRepNodeMapping::Spatialize_Dormancy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"EClassRepNodeMapping",
	"EClassRepNodeMapping",
	Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_EClassRepNodeMapping()
{
	if (!Z_Registration_Info_UEnum_EClassRepNodeMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClassRepNodeMapping.InnerSingleton, Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClassRepNodeMapping.InnerSingleton;
}
// End Enum EClassRepNodeMapping

// Begin ScriptStruct FRepGraphActorClassSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings;
class UScriptStruct* FRepGraphActorClassSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepGraphActorClassSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("RepGraphActorClassSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FRepGraphActorClassSettings>()
{
	return FRepGraphActorClassSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor Class Settings that can be assigned directly to a Class.  Can also be mapped to a FRepGraphActorTemplateSettings \n" },
#endif
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor Class Settings that can be assigned directly to a Class.  Can also be mapped to a FRepGraphActorTemplateSettings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Class the settings will be applied to\n" },
#endif
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Class the settings will be applied to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddClassRepInfoToMap_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we should add this Class' RepInfo to the ClassRepNodePolicies Map\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should add this Class' RepInfo to the ClassRepNodePolicies Map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassNodeMapping_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What ClassNodeMapping we should use when adding Class to ClassRepNodePolicies Map\n" },
#endif
		{ "EditCondition", "bAddClassRepInfoToMap" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What ClassNodeMapping we should use when adding Class to ClassRepNodePolicies Map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we add this to the RPC_Multicast_OpenChannelForClass map\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we add this to the RPC_Multicast_OpenChannelForClass map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRPC_Multicast_OpenChannelForClass_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this is added to RPC_Multicast_OpenChannelForClass map then should we actually open a channel or not\n" },
#endif
		{ "EditCondition", "bAddToRPC_Multicast_OpenChannelForClassMap" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is added to RPC_Multicast_OpenChannelForClass map then should we actually open a channel or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorClass;
	static void NewProp_bAddClassRepInfoToMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddClassRepInfoToMap;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClassNodeMapping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClassNodeMapping;
	static void NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToRPC_Multicast_OpenChannelForClassMap;
	static void NewProp_bRPC_Multicast_OpenChannelForClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRPC_Multicast_OpenChannelForClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepGraphActorClassSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepGraphActorClassSettings, ActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
void Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_SetBit(void* Obj)
{
	((FRepGraphActorClassSettings*)Obj)->bAddClassRepInfoToMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap = { "bAddClassRepInfoToMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepGraphActorClassSettings), &Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddClassRepInfoToMap_MetaData), NewProp_bAddClassRepInfoToMap_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping = { "ClassNodeMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepGraphActorClassSettings, ClassNodeMapping), Z_Construct_UEnum_LyraGame_EClassRepNodeMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassNodeMapping_MetaData), NewProp_ClassNodeMapping_MetaData) }; // 4078962432
void Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_SetBit(void* Obj)
{
	((FRepGraphActorClassSettings*)Obj)->bAddToRPC_Multicast_OpenChannelForClassMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap = { "bAddToRPC_Multicast_OpenChannelForClassMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepGraphActorClassSettings), &Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData), NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData) };
void Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_SetBit(void* Obj)
{
	((FRepGraphActorClassSettings*)Obj)->bRPC_Multicast_OpenChannelForClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass = { "bRPC_Multicast_OpenChannelForClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepGraphActorClassSettings), &Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRPC_Multicast_OpenChannelForClass_MetaData), NewProp_bRPC_Multicast_OpenChannelForClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"RepGraphActorClassSettings",
	Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers),
	sizeof(FRepGraphActorClassSettings),
	alignof(FRepGraphActorClassSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepGraphActorClassSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.InnerSingleton, Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.InnerSingleton;
}
// End ScriptStruct FRepGraphActorClassSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClassRepNodeMapping_StaticEnum, TEXT("EClassRepNodeMapping"), &Z_Registration_Info_UEnum_EClassRepNodeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4078962432U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepGraphActorClassSettings::StaticStruct, Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewStructOps, TEXT("RepGraphActorClassSettings"), &Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepGraphActorClassSettings), 3119884048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_2473974175(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
