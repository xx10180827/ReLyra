// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Performance/LyraPerformanceStatTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPerformanceStatTypes() {}

// Begin Cross Module References
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ELyraStatDisplayMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraStatDisplayMode;
static UEnum* ELyraStatDisplayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraStatDisplayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraStatDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraStatDisplayMode"));
	}
	return Z_Registration_Info_UEnum_ELyraStatDisplayMode.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraStatDisplayMode>()
{
	return ELyraStatDisplayMode_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Way to display the stat\n" },
#endif
		{ "GraphOnly.Comment", "// Show this stat in graph form\n" },
		{ "GraphOnly.Name", "ELyraStatDisplayMode::GraphOnly" },
		{ "GraphOnly.ToolTip", "Show this stat in graph form" },
		{ "Hidden.Comment", "// Don't show this stat\n" },
		{ "Hidden.Name", "ELyraStatDisplayMode::Hidden" },
		{ "Hidden.ToolTip", "Don't show this stat" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceStatTypes.h" },
		{ "TextAndGraph.Comment", "// Show this stat as both text and graph\n" },
		{ "TextAndGraph.Name", "ELyraStatDisplayMode::TextAndGraph" },
		{ "TextAndGraph.ToolTip", "Show this stat as both text and graph" },
		{ "TextOnly.Comment", "// Show this stat in text form\n" },
		{ "TextOnly.Name", "ELyraStatDisplayMode::TextOnly" },
		{ "TextOnly.ToolTip", "Show this stat in text form" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Way to display the stat" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraStatDisplayMode::Hidden", (int64)ELyraStatDisplayMode::Hidden },
		{ "ELyraStatDisplayMode::TextOnly", (int64)ELyraStatDisplayMode::TextOnly },
		{ "ELyraStatDisplayMode::GraphOnly", (int64)ELyraStatDisplayMode::GraphOnly },
		{ "ELyraStatDisplayMode::TextAndGraph", (int64)ELyraStatDisplayMode::TextAndGraph },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraStatDisplayMode",
	"ELyraStatDisplayMode",
	Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode()
{
	if (!Z_Registration_Info_UEnum_ELyraStatDisplayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraStatDisplayMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraStatDisplayMode.InnerSingleton;
}
// End Enum ELyraStatDisplayMode

// Begin Enum ELyraDisplayablePerformanceStat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat;
static UEnum* ELyraDisplayablePerformanceStat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraDisplayablePerformanceStat"));
	}
	return Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraDisplayablePerformanceStat>()
{
	return ELyraDisplayablePerformanceStat_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientFPS.Comment", "// stat fps (in Hz)\n" },
		{ "ClientFPS.Name", "ELyraDisplayablePerformanceStat::ClientFPS" },
		{ "ClientFPS.ToolTip", "stat fps (in Hz)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Different kinds of stats that can be displayed on-screen\n" },
#endif
		{ "Count.Comment", "// New stats should go above here\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ELyraDisplayablePerformanceStat::Count" },
		{ "Count.ToolTip", "New stats should go above here" },
		{ "FrameTime.Comment", "// Stat unit overall (in seconds)\n" },
		{ "FrameTime.Name", "ELyraDisplayablePerformanceStat::FrameTime" },
		{ "FrameTime.ToolTip", "Stat unit overall (in seconds)" },
		{ "FrameTime_GameThread.Comment", "// Stat unit (game thread, in seconds)\n" },
		{ "FrameTime_GameThread.Name", "ELyraDisplayablePerformanceStat::FrameTime_GameThread" },
		{ "FrameTime_GameThread.ToolTip", "Stat unit (game thread, in seconds)" },
		{ "FrameTime_GPU.Comment", "// Stat unit (inferred GPU time, in seconds)\n" },
		{ "FrameTime_GPU.Name", "ELyraDisplayablePerformanceStat::FrameTime_GPU" },
		{ "FrameTime_GPU.ToolTip", "Stat unit (inferred GPU time, in seconds)" },
		{ "FrameTime_RenderThread.Comment", "// Stat unit (render thread, in seconds)\n" },
		{ "FrameTime_RenderThread.Name", "ELyraDisplayablePerformanceStat::FrameTime_RenderThread" },
		{ "FrameTime_RenderThread.ToolTip", "Stat unit (render thread, in seconds)" },
		{ "FrameTime_RHIThread.Comment", "// Stat unit (RHI thread, in seconds)\n" },
		{ "FrameTime_RHIThread.Name", "ELyraDisplayablePerformanceStat::FrameTime_RHIThread" },
		{ "FrameTime_RHIThread.ToolTip", "Stat unit (RHI thread, in seconds)" },
		{ "IdleTime.Comment", "// idle time spent waiting for vsync or frame rate limit (in seconds)\n" },
		{ "IdleTime.Name", "ELyraDisplayablePerformanceStat::IdleTime" },
		{ "IdleTime.ToolTip", "idle time spent waiting for vsync or frame rate limit (in seconds)" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceStatTypes.h" },
		{ "PacketLoss_Incoming.Comment", "// The incoming packet loss percentage (%)\n" },
		{ "PacketLoss_Incoming.Name", "ELyraDisplayablePerformanceStat::PacketLoss_Incoming" },
		{ "PacketLoss_Incoming.ToolTip", "The incoming packet loss percentage (%)" },
		{ "PacketLoss_Outgoing.Comment", "// The outgoing packet loss percentage (%)\n" },
		{ "PacketLoss_Outgoing.Name", "ELyraDisplayablePerformanceStat::PacketLoss_Outgoing" },
		{ "PacketLoss_Outgoing.ToolTip", "The outgoing packet loss percentage (%)" },
		{ "PacketRate_Incoming.Comment", "// The number of packets received in the last second\n" },
		{ "PacketRate_Incoming.Name", "ELyraDisplayablePerformanceStat::PacketRate_Incoming" },
		{ "PacketRate_Incoming.ToolTip", "The number of packets received in the last second" },
		{ "PacketRate_Outgoing.Comment", "// The number of packets sent in the past second\n" },
		{ "PacketRate_Outgoing.Name", "ELyraDisplayablePerformanceStat::PacketRate_Outgoing" },
		{ "PacketRate_Outgoing.ToolTip", "The number of packets sent in the past second" },
		{ "PacketSize_Incoming.Comment", "// The avg. size (in bytes) of packets received\n" },
		{ "PacketSize_Incoming.Name", "ELyraDisplayablePerformanceStat::PacketSize_Incoming" },
		{ "PacketSize_Incoming.ToolTip", "The avg. size (in bytes) of packets received" },
		{ "PacketSize_Outgoing.Comment", "// The avg. size (in bytes) of packets sent\n" },
		{ "PacketSize_Outgoing.Name", "ELyraDisplayablePerformanceStat::PacketSize_Outgoing" },
		{ "PacketSize_Outgoing.ToolTip", "The avg. size (in bytes) of packets sent" },
		{ "Ping.Comment", "// Network ping (in ms)\n" },
		{ "Ping.Name", "ELyraDisplayablePerformanceStat::Ping" },
		{ "Ping.ToolTip", "Network ping (in ms)" },
		{ "ServerFPS.Comment", "// server tick rate (in Hz)\n" },
		{ "ServerFPS.Name", "ELyraDisplayablePerformanceStat::ServerFPS" },
		{ "ServerFPS.ToolTip", "server tick rate (in Hz)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Different kinds of stats that can be displayed on-screen" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraDisplayablePerformanceStat::ClientFPS", (int64)ELyraDisplayablePerformanceStat::ClientFPS },
		{ "ELyraDisplayablePerformanceStat::ServerFPS", (int64)ELyraDisplayablePerformanceStat::ServerFPS },
		{ "ELyraDisplayablePerformanceStat::IdleTime", (int64)ELyraDisplayablePerformanceStat::IdleTime },
		{ "ELyraDisplayablePerformanceStat::FrameTime", (int64)ELyraDisplayablePerformanceStat::FrameTime },
		{ "ELyraDisplayablePerformanceStat::FrameTime_GameThread", (int64)ELyraDisplayablePerformanceStat::FrameTime_GameThread },
		{ "ELyraDisplayablePerformanceStat::FrameTime_RenderThread", (int64)ELyraDisplayablePerformanceStat::FrameTime_RenderThread },
		{ "ELyraDisplayablePerformanceStat::FrameTime_RHIThread", (int64)ELyraDisplayablePerformanceStat::FrameTime_RHIThread },
		{ "ELyraDisplayablePerformanceStat::FrameTime_GPU", (int64)ELyraDisplayablePerformanceStat::FrameTime_GPU },
		{ "ELyraDisplayablePerformanceStat::Ping", (int64)ELyraDisplayablePerformanceStat::Ping },
		{ "ELyraDisplayablePerformanceStat::PacketLoss_Incoming", (int64)ELyraDisplayablePerformanceStat::PacketLoss_Incoming },
		{ "ELyraDisplayablePerformanceStat::PacketLoss_Outgoing", (int64)ELyraDisplayablePerformanceStat::PacketLoss_Outgoing },
		{ "ELyraDisplayablePerformanceStat::PacketRate_Incoming", (int64)ELyraDisplayablePerformanceStat::PacketRate_Incoming },
		{ "ELyraDisplayablePerformanceStat::PacketRate_Outgoing", (int64)ELyraDisplayablePerformanceStat::PacketRate_Outgoing },
		{ "ELyraDisplayablePerformanceStat::PacketSize_Incoming", (int64)ELyraDisplayablePerformanceStat::PacketSize_Incoming },
		{ "ELyraDisplayablePerformanceStat::PacketSize_Outgoing", (int64)ELyraDisplayablePerformanceStat::PacketSize_Outgoing },
		{ "ELyraDisplayablePerformanceStat::Count", (int64)ELyraDisplayablePerformanceStat::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraDisplayablePerformanceStat",
	"ELyraDisplayablePerformanceStat",
	Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat()
{
	if (!Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat.InnerSingleton;
}
// End Enum ELyraDisplayablePerformanceStat

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELyraStatDisplayMode_StaticEnum, TEXT("ELyraStatDisplayMode"), &Z_Registration_Info_UEnum_ELyraStatDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127134116U) },
		{ ELyraDisplayablePerformanceStat_StaticEnum, TEXT("ELyraDisplayablePerformanceStat"), &Z_Registration_Info_UEnum_ELyraDisplayablePerformanceStat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3286822108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatTypes_h_725886397(TEXT("/Script/LyraGame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
