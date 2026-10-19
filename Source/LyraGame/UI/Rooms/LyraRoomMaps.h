// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"

/** Explicit room allowlist; each entry retains its original gameplay experience. */
struct FLyraRoomMap
{
 FString Id;
 FString Package;
 FString Experience;
 FText Label;
 int32 RedTeam = 1;
 int32 BlueTeam = 2;
};

namespace LyraRoomMaps
{
 const TArray<FLyraRoomMap>& All();
 const FLyraRoomMap* Find(const FString& Id);
 const FLyraRoomMap* FindPackage(const FString& Package);
}
