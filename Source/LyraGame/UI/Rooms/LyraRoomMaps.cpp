// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomMaps.h"
#include "Misc/PackageName.h"

const TArray<FLyraRoomMap>& LyraRoomMaps::All()
{
 static const TArray<FLyraRoomMap> Maps = {
  {TEXT("Expanse"), TEXT("/ShooterMaps/Maps/L_Expanse"), TEXT("B_ShooterGame_Elimination"), NSLOCTEXT("RoomMaps", "Expanse", "Expanse · 射击淘汰赛")},
  {TEXT("ControlPoints"), TEXT("/ShooterMaps/Maps/L_Convolution_Blockout"), TEXT("B_LyraShooterGame_ControlPoints"), NSLOCTEXT("RoomMaps", "Control", "Convolution · ABC 据点")},
  {TEXT("TopDownArena"), TEXT("/TopDownArena/Maps/L_TopDownArenaGym"), TEXT("B_TopDownArenaExperience"), NSLOCTEXT("RoomMaps", "Arena", "TopDownArena · 俯视角竞技场")},
  {TEXT("TopDownLocal"), TEXT("/TopDownArena/Maps/L_TopDown_LocalMultiplayer"), TEXT("B_TopDownArena_Multiplayer_Experience"), NSLOCTEXT("RoomMaps", "Local", "TopDown Local Multiplayer · 俯视角本地多人")},
  {TEXT("Inventory"), TEXT("/Game/InventorySystem/Maps/L_InventoryMultiplayer"), TEXT("B_InventoryMultiplayer"), NSLOCTEXT("RoomMaps", "Inventory", "背包双人试验场")}
 };
 return Maps;
}
const FLyraRoomMap* LyraRoomMaps::Find(const FString& Id)
{
 return All().FindByPredicate([&Id](const FLyraRoomMap& Map) { return Map.Id == Id; });
}
const FLyraRoomMap* LyraRoomMaps::FindPackage(const FString& Package)
{
 return All().FindByPredicate([&Package](const FLyraRoomMap& Map)
 { return Package == Map.Package || FPackageName::GetShortName(Package) == FPackageName::GetShortName(Map.Package); });
}
