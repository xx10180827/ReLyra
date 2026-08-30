// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Messages/LyraVerbMessageReplication.h"
#include "LyraGame/Messages/LyraVerbMessage.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraVerbMessageReplication() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplication();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraVerbMessageReplicationEntry
static_assert(std::is_polymorphic<FLyraVerbMessageReplicationEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraVerbMessageReplicationEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry;
class UScriptStruct* FLyraVerbMessageReplicationEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraVerbMessageReplicationEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraVerbMessageReplicationEntry>()
{
	return FLyraVerbMessageReplicationEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents one verb message\n */" },
#endif
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents one verb message" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraVerbMessageReplicationEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessageReplicationEntry, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 172997159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"LyraVerbMessageReplicationEntry",
	Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers),
	sizeof(FLyraVerbMessageReplicationEntry),
	alignof(FLyraVerbMessageReplicationEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.InnerSingleton;
}
// End ScriptStruct FLyraVerbMessageReplicationEntry

// Begin ScriptStruct FLyraVerbMessageReplication
static_assert(std::is_polymorphic<FLyraVerbMessageReplication>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraVerbMessageReplication cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication;
class UScriptStruct* FLyraVerbMessageReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraVerbMessageReplication, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraVerbMessageReplication"));
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraVerbMessageReplication>()
{
	return FLyraVerbMessageReplication::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FLyraVerbMessageReplication);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraVerbMessageReplication);
#endif
struct Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Container of verb messages to replicate */" },
#endif
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container of verb messages to replicate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMessages_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of gameplay tag stacks\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of gameplay tag stacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Owner (for a route to a world)\n" },
#endif
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owner (for a route to a world)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMessages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraVerbMessageReplication>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_Inner = { "CurrentMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry, METADATA_PARAMS(0, nullptr) }; // 3782107568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages = { "CurrentMessages", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessageReplication, CurrentMessages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMessages_MetaData), NewProp_CurrentMessages_MetaData) }; // 3782107568
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessageReplication, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"LyraVerbMessageReplication",
	Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers),
	sizeof(FLyraVerbMessageReplication),
	alignof(FLyraVerbMessageReplication),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplication()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.InnerSingleton, Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.InnerSingleton;
}
// End ScriptStruct FLyraVerbMessageReplication

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraVerbMessageReplicationEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewStructOps, TEXT("LyraVerbMessageReplicationEntry"), &Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraVerbMessageReplicationEntry), 3782107568U) },
		{ FLyraVerbMessageReplication::StaticStruct, Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewStructOps, TEXT("LyraVerbMessageReplication"), &Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraVerbMessageReplication), 3186912120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_3577634902(TEXT("/Script/LyraGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
