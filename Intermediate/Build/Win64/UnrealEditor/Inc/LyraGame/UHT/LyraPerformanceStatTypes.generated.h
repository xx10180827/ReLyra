// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Performance/LyraPerformanceStatTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraPerformanceStatTypes_generated_h
#error "LyraPerformanceStatTypes.generated.h already included, missing '#pragma once' in LyraPerformanceStatTypes.h"
#endif
#define LYRAGAME_LyraPerformanceStatTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatTypes_h


#define FOREACH_ENUM_ELYRASTATDISPLAYMODE(op) \
	op(ELyraStatDisplayMode::Hidden) \
	op(ELyraStatDisplayMode::TextOnly) \
	op(ELyraStatDisplayMode::GraphOnly) \
	op(ELyraStatDisplayMode::TextAndGraph) 

enum class ELyraStatDisplayMode : uint8;
template<> struct TIsUEnumClass<ELyraStatDisplayMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraStatDisplayMode>();

#define FOREACH_ENUM_ELYRADISPLAYABLEPERFORMANCESTAT(op) \
	op(ELyraDisplayablePerformanceStat::ClientFPS) \
	op(ELyraDisplayablePerformanceStat::ServerFPS) \
	op(ELyraDisplayablePerformanceStat::IdleTime) \
	op(ELyraDisplayablePerformanceStat::FrameTime) \
	op(ELyraDisplayablePerformanceStat::FrameTime_GameThread) \
	op(ELyraDisplayablePerformanceStat::FrameTime_RenderThread) \
	op(ELyraDisplayablePerformanceStat::FrameTime_RHIThread) \
	op(ELyraDisplayablePerformanceStat::FrameTime_GPU) \
	op(ELyraDisplayablePerformanceStat::Ping) \
	op(ELyraDisplayablePerformanceStat::PacketLoss_Incoming) \
	op(ELyraDisplayablePerformanceStat::PacketLoss_Outgoing) \
	op(ELyraDisplayablePerformanceStat::PacketRate_Incoming) \
	op(ELyraDisplayablePerformanceStat::PacketRate_Outgoing) \
	op(ELyraDisplayablePerformanceStat::PacketSize_Incoming) \
	op(ELyraDisplayablePerformanceStat::PacketSize_Outgoing) \
	op(ELyraDisplayablePerformanceStat::Count) 

enum class ELyraDisplayablePerformanceStat : uint8;
template<> struct TIsUEnumClass<ELyraDisplayablePerformanceStat> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraDisplayablePerformanceStat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
