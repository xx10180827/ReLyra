// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"

class FSocket;
class ISocketSubsystem;

struct FLyraDiscoveredRoom
{
 FGuid Id;
 FString Address;
 uint8 MapIndex = 0;
 uint8 Players = 0;
 int32 PingMs = MAX_int32;
};

namespace LyraRoomDiscovery
{
 // Separate from OnlineSubsystemNull's 14001 beacon: CommonSession still owns hosting.
 constexpr int32 Port = 14002;
 constexpr double SearchSeconds = 3.0;
 struct FInterface
 {
  uint32 Address = 0;
  uint32 Mask = 0;
  uint32 Broadcast = 0;
 };
 struct FPacket
 {
  bool bResponse = false;
  FGuid Nonce;
  FGuid RoomId;
  uint16 GamePort = 0;
  uint8 MapIndex = 0;
  uint8 Players = 0;
 };
 bool MakeInterface(uint32 Address, uint8 PrefixLength, FInterface& Out);
 bool Enumerate(TArray<FInterface>& Out);
 TArray<uint8> Encode(const FPacket& Packet);
 bool Decode(const uint8* Data, int32 Size, FPacket& Out);
}

/** Game-thread, nonblocking discovery. Every search/host creates fresh interface sockets.
 * Requests use directed broadcasts per interface; responses are unicast. No global route changes.
 */
class FLyraRoomDiscovery
{
public:
 ~FLyraRoomDiscovery();
 bool StartSearch();
 bool StartHost();
 void Stop();
 void TickSearch(TArray<FLyraDiscoveredRoom>& Results);
 void TickHost(uint16 RoomGamePort, uint8 MapIndex, uint8 Players);
 bool IsHosting() const { return Listener != nullptr; }
private:
 struct FInterfaceSocket
 {
  LyraRoomDiscovery::FInterface Interface;
  FSocket* Socket = nullptr;
 };
 bool OpenInterfaces();
 FSocket* OpenSocket(uint32 Address, int32 Port);
 void SendQueries();
 ISocketSubsystem* Subsystem = nullptr;
 TArray<FInterfaceSocket> Interfaces;
 FSocket* Listener = nullptr;
 TMap<FGuid, double> Probes;
 FGuid RoomId;
 double NextQuery = 0;
};
