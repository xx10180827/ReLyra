// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraReplicationGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplicationGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraph();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraph_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister();
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection();
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraReplicationGraph
void ULyraReplicationGraph::StaticRegisterNativesULyraReplicationGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraph);
UClass* Z_Construct_UClass_ULyraReplicationGraph_NoRegister()
{
	return ULyraReplicationGraph::StaticClass();
}
struct Z_Construct_UClass_ULyraReplicationGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lyra Replication Graph implementation. See additional notes in LyraReplicationGraph.cpp! */" },
#endif
		{ "IncludePath", "System/LyraReplicationGraph.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lyra Replication Graph implementation. See additional notes in LyraReplicationGraph.cpp!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantClasses_MetaData[] = {
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridNode_MetaData[] = {
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AlwaysRelevantClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlwaysRelevantClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlwaysRelevantNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_Inner = { "AlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses = { "AlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraph, AlwaysRelevantClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysRelevantClasses_MetaData), NewProp_AlwaysRelevantClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode = { "GridNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraph, GridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridNode_MetaData), NewProp_GridNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { "AlwaysRelevantNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysRelevantNode_MetaData), NewProp_AlwaysRelevantNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraReplicationGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraph_Statics::ClassParams = {
	&ULyraReplicationGraph::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplicationGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplicationGraph()
{
	if (!Z_Registration_Info_UClass_ULyraReplicationGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraph.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplicationGraph.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraph>()
{
	return ULyraReplicationGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraph);
ULyraReplicationGraph::~ULyraReplicationGraph() {}
// End Class ULyraReplicationGraph

// Begin Class ULyraReplicationGraphNode_AlwaysRelevant_ForConnection
void ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesULyraReplicationGraphNode_AlwaysRelevant_ForConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraphNode_AlwaysRelevant_ForConnection);
UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
{
	return ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
}
struct Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraReplicationGraph.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
	&ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection()
{
	if (!Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraphNode_AlwaysRelevant_ForConnection>()
{
	return ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
}
ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::ULyraReplicationGraphNode_AlwaysRelevant_ForConnection() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraphNode_AlwaysRelevant_ForConnection);
ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::~ULyraReplicationGraphNode_AlwaysRelevant_ForConnection() {}
// End Class ULyraReplicationGraphNode_AlwaysRelevant_ForConnection

// Begin Class ULyraReplicationGraphNode_PlayerStateFrequencyLimiter
void ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticRegisterNativesULyraReplicationGraphNode_PlayerStateFrequencyLimiter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraphNode_PlayerStateFrequencyLimiter);
UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister()
{
	return ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
}
struct Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame. \n\x09This is an optimization for large player connection counts, and not a requirement.\n*/" },
#endif
		{ "IncludePath", "System/LyraReplicationGraph.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame.\nThis is an optimization for large player connection counts, and not a requirement." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraphNode_PlayerStateFrequencyLimiter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams = {
	&ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter()
{
	if (!Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraphNode_PlayerStateFrequencyLimiter>()
{
	return ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraphNode_PlayerStateFrequencyLimiter);
ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::~ULyraReplicationGraphNode_PlayerStateFrequencyLimiter() {}
// End Class ULyraReplicationGraphNode_PlayerStateFrequencyLimiter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReplicationGraph, ULyraReplicationGraph::StaticClass, TEXT("ULyraReplicationGraph"), &Z_Registration_Info_UClass_ULyraReplicationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraph), 2776913996U) },
		{ Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection, ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("ULyraReplicationGraphNode_AlwaysRelevant_ForConnection"), &Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraphNode_AlwaysRelevant_ForConnection), 2444637209U) },
		{ Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter, ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass, TEXT("ULyraReplicationGraphNode_PlayerStateFrequencyLimiter"), &Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraphNode_PlayerStateFrequencyLimiter), 1888665931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_1778732864(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
