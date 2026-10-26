// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomDiscovery.h"
#include "LyraRoomMaps.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"
#include "Sockets.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <winsock2.h>
#include <iphlpapi.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

DEFINE_LOG_CATEGORY_STATIC(LogLyraRoomDiscovery, Log, All);

namespace LyraRoomDiscovery
{
 constexpr uint32 Magic = 0x4C595244; // LYRD, network byte order
 constexpr uint8 Version = 1;
 constexpr int32 QuerySize = 22;
 constexpr int32 ResponseSize = 42;

 bool MakeInterface(uint32 Address, uint8 PrefixLength, FInterface& Out)
 {
  // /31 and /32 have no subnet broadcast; never emit 255.255.255.255 for a /0 route.
  const uint8 First = Address >> 24;
  if (PrefixLength == 0 || PrefixLength > 30 || First == 0 || First == 127 || First >= 224) { return false; }
  const uint32 Mask = MAX_uint32 << (32 - PrefixLength);
  const uint32 Host = Address & ~Mask;
  if (Host == 0 || Host == ~Mask) { return false; }
  Out = {Address, Mask, Address | ~Mask};
  return true;
 }

 bool Enumerate(TArray<FInterface>& Out)
 {
  Out.Reset();
#if PLATFORM_WINDOWS
  TArray<uint8> Buffer;
  ULONG Size = 15 * 1024;
  ULONG Result = ERROR_BUFFER_OVERFLOW;
  for (int32 Try = 0; Try < 3 && Result == ERROR_BUFFER_OVERFLOW; ++Try)
  {
   Buffer.SetNumUninitialized(Size);
   Result = GetAdaptersAddresses(AF_INET, GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST | GAA_FLAG_SKIP_DNS_SERVER,
    nullptr, reinterpret_cast<IP_ADAPTER_ADDRESSES*>(Buffer.GetData()), &Size);
  }
  if (Result != NO_ERROR)
  {
   UE_LOG(LogLyraRoomDiscovery, Warning, TEXT("ROOM_DISCOVERY enumerate failed code=%lu"), Result);
   return false;
  }
  for (const auto* Adapter = reinterpret_cast<IP_ADAPTER_ADDRESSES*>(Buffer.GetData()); Adapter; Adapter = Adapter->Next)
  {
   if (Adapter->OperStatus != IfOperStatusUp || Adapter->IfType == IF_TYPE_SOFTWARE_LOOPBACK) { continue; }
   for (const auto* Unicast = Adapter->FirstUnicastAddress; Unicast; Unicast = Unicast->Next)
   {
    if (!Unicast->Address.lpSockaddr || Unicast->Address.lpSockaddr->sa_family != AF_INET
     || Unicast->DadState != IpDadStatePreferred) { continue; }
    const auto* Address = reinterpret_cast<const sockaddr_in*>(Unicast->Address.lpSockaddr);
    FInterface Interface;
    if (MakeInterface(ntohl(Address->sin_addr.s_addr), Unicast->OnLinkPrefixLength, Interface)
     && !Out.ContainsByPredicate([&](const FInterface& Existing) { return Existing.Address == Interface.Address; }))
    { Out.Add(Interface); }
   }
  }
#endif
  return !Out.IsEmpty();
 }

 TArray<uint8> Encode(const FPacket& Packet)
 {
  TArray<uint8> Data;
  FMemoryWriter Writer(Data);
  Writer.SetByteSwapping(PLATFORM_LITTLE_ENDIAN);
  uint32 Header = Magic;
  uint8 Protocol = Version, Type = Packet.bResponse ? 1 : 0;
  FPacket Copy = Packet;
  Writer << Header << Protocol << Type << Copy.Nonce;
  if (Packet.bResponse) { Writer << Copy.RoomId << Copy.GamePort << Copy.MapIndex << Copy.Players; }
  return Data;
 }

 bool Decode(const uint8* Data, int32 Size, FPacket& Out)
 {
  if (Size != QuerySize && Size != ResponseSize) { return false; }
  TArray<uint8> Bytes;
  Bytes.Append(Data, Size);
  FMemoryReader Reader(Bytes);
  Reader.SetByteSwapping(PLATFORM_LITTLE_ENDIAN);
  uint32 Header = 0;
  uint8 Protocol = 0, Type = 0;
  FPacket Packet;
  Reader << Header << Protocol << Type << Packet.Nonce;
  if (Header != Magic || Protocol != Version || Type > 1 || !Packet.Nonce.IsValid()
   || Size != (Type == 1 ? ResponseSize : QuerySize)) { return false; }
  Packet.bResponse = Type == 1;
  if (Packet.bResponse)
  {
   Reader << Packet.RoomId << Packet.GamePort << Packet.MapIndex << Packet.Players;
   if (!Packet.RoomId.IsValid() || Packet.GamePort == 0 || !LyraRoomMaps::All().IsValidIndex(Packet.MapIndex)
    || Packet.Players < 1 || Packet.Players > 2) { return false; }
  }
  if (Reader.IsError() || !Reader.AtEnd()) { return false; }
  Out = Packet;
  return true;
 }
}

FLyraRoomDiscovery::~FLyraRoomDiscovery() { Stop(); }

FSocket* FLyraRoomDiscovery::OpenSocket(uint32 Address, int32 Port)
{
 auto Bind = Subsystem->CreateInternetAddr(FNetworkProtocolTypes::IPv4);
 Bind->SetIp(Address); Bind->SetPort(Port);
 FSocket* Socket = Subsystem->CreateSocket(NAME_DGram, TEXT("Lyra room discovery"), FNetworkProtocolTypes::IPv4);
 // Exclusive host port: a second host in the same process/machine must not steal requests.
 if (Socket && Socket->SetNonBlocking(true) && Socket->SetBroadcast(true) && Socket->Bind(*Bind)) { return Socket; }
 if (Socket) { Subsystem->DestroySocket(Socket); }
 UE_LOG(LogLyraRoomDiscovery, Warning, TEXT("ROOM_DISCOVERY bind failed address=%s error=%d"), *Bind->ToString(true), int32(Subsystem->GetLastErrorCode()));
 return nullptr;
}

bool FLyraRoomDiscovery::OpenInterfaces()
{
 Subsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
 if (!Subsystem) { return false; }
 TArray<LyraRoomDiscovery::FInterface> Addresses;
 if (!LyraRoomDiscovery::Enumerate(Addresses)) { return false; }
 for (const auto& Address : Addresses)
 {
  if (FSocket* Socket = OpenSocket(Address.Address, 0))
  {
   Interfaces.Add({Address, Socket});
   auto Local = Subsystem->CreateInternetAddr(); Local->SetIp(Address.Address);
   auto Broadcast = Subsystem->CreateInternetAddr(); Broadcast->SetIp(Address.Broadcast);
   UE_LOG(LogLyraRoomDiscovery, Display, TEXT("ROOM_DISCOVERY interface=%s broadcast=%s port=%d"),
    *Local->ToString(false), *Broadcast->ToString(false), LyraRoomDiscovery::Port);
  }
 }
 return !Interfaces.IsEmpty();
}

void FLyraRoomDiscovery::Stop()
{
 if (Subsystem)
 {
  if (Listener) { Subsystem->DestroySocket(Listener); }
  for (const auto& Interface : Interfaces) { Subsystem->DestroySocket(Interface.Socket); }
 }
 Listener = nullptr; Interfaces.Reset(); Probes.Reset(); RoomId.Invalidate(); NextQuery = 0;
}

bool FLyraRoomDiscovery::StartSearch()
{
 Stop();
 if (!OpenInterfaces()) { Stop(); return false; }
 SendQueries();
 return true;
}

bool FLyraRoomDiscovery::StartHost()
{
 Stop();
 if (!OpenInterfaces()) { Stop(); return false; }
 Listener = OpenSocket(0, LyraRoomDiscovery::Port);
 if (!Listener) { Stop(); return false; }
 RoomId = FGuid::NewGuid();
 UE_LOG(LogLyraRoomDiscovery, Display, TEXT("ROOM_DISCOVERY hosting id=%s listen=0.0.0.0:%d"), *RoomId.ToString(), LyraRoomDiscovery::Port);
 return true;
}

void FLyraRoomDiscovery::SendQueries()
{
 LyraRoomDiscovery::FPacket Query;
 Query.Nonce = FGuid::NewGuid();
 const double Now = FPlatformTime::Seconds();
 Probes.Add(Query.Nonce, Now);
 const auto Data = LyraRoomDiscovery::Encode(Query);
 for (const auto& Interface : Interfaces)
 {
  auto Target = Subsystem->CreateInternetAddr(); Target->SetIp(Interface.Interface.Broadcast); Target->SetPort(LyraRoomDiscovery::Port);
  int32 Sent = 0;
  const bool bSent = Interface.Socket->SendTo(Data.GetData(), Data.Num(), Sent, *Target);
  UE_LOG(LogLyraRoomDiscovery, Display, TEXT("ROOM_DISCOVERY query target=%s sent=%d"), *Target->ToString(true), bSent ? Sent : 0);
 }
 NextQuery = Now + 0.75;
}

void FLyraRoomDiscovery::TickHost(uint16 RoomGamePort, uint8 MapIndex, uint8 Players)
{
 if (!Listener || RoomGamePort == 0 || Players < 1 || Players > 2) { return; }
 uint8 Buffer[512];
 auto Sender = Subsystem->CreateInternetAddr();
 // Bound work per tick, including malformed datagrams. Never let discovery stall gameplay.
 for (int32 I = 0; I < 64; ++I)
 {
  int32 Read = 0;
  if (!Listener->RecvFrom(Buffer, sizeof(Buffer), Read, *Sender)) { break; }
  LyraRoomDiscovery::FPacket Packet;
  if (!LyraRoomDiscovery::Decode(Buffer, Read, Packet) || Packet.bResponse || Sender->GetPort() == 0) { continue; }
  uint32 Source = 0; Sender->GetIp(Source);
  Packet.bResponse = true; Packet.RoomId = RoomId; Packet.GamePort = RoomGamePort; Packet.MapIndex = MapIndex; Packet.Players = Players;
  const auto Data = LyraRoomDiscovery::Encode(Packet);
  for (const auto& Interface : Interfaces)
  {
   const auto& Local = Interface.Interface;
   // Reply only on directly connected matching subnets, through that interface's bound socket.
   const uint32 Host = Source & ~Local.Mask;
   if ((Source & Local.Mask) != (Local.Address & Local.Mask) || Host == 0 || Host == ~Local.Mask) { continue; }
   int32 Sent = 0;
   if (Interface.Socket->SendTo(Data.GetData(), Data.Num(), Sent, *Sender))
   {
    auto From = Subsystem->CreateInternetAddr(); From->SetIp(Local.Address);
    UE_LOG(LogLyraRoomDiscovery, Verbose, TEXT("ROOM_DISCOVERY reply source=%s target=%s players=%d gamePort=%d"),
     *From->ToString(false), *Sender->ToString(true), Players, RoomGamePort);
   }
  }
 }
}

void FLyraRoomDiscovery::TickSearch(TArray<FLyraDiscoveredRoom>& Results)
{
 if (!Subsystem || Interfaces.IsEmpty()) { return; }
 const double Now = FPlatformTime::Seconds();
 if (Now >= NextQuery && Probes.Num() < 4) { SendQueries(); }
 uint8 Buffer[512];
 auto Sender = Subsystem->CreateInternetAddr();
 for (const auto& Interface : Interfaces)
 {
  for (int32 I = 0; I < 32; ++I)
  {
   int32 Read = 0;
   if (!Interface.Socket->RecvFrom(Buffer, sizeof(Buffer), Read, *Sender)) { break; }
   LyraRoomDiscovery::FPacket Packet;
   if (!LyraRoomDiscovery::Decode(Buffer, Read, Packet) || !Packet.bResponse) { continue; }
   const double* Sent = Probes.Find(Packet.Nonce);
   uint32 Source = 0; Sender->GetIp(Source);
   const auto& Local = Interface.Interface;
   if (!Sent || (Source & Local.Mask) != (Local.Address & Local.Mask) || (Source & ~Local.Mask) == 0
    || (Source & ~Local.Mask) == ~Local.Mask) { continue; }
   auto* Room = Results.FindByPredicate([&](const FLyraDiscoveredRoom& Entry) { return Entry.Id == Packet.RoomId; });
   if (!Room)
   {
    if (Results.Num() >= 128) { continue; }
    Room = &Results.AddDefaulted_GetRef(); Room->Id = Packet.RoomId;
   }
   const int32 Ping = FMath::Max(0, FMath::RoundToInt((Now - *Sent) * 1000));
   // Payload deliberately contains no host address. Only the actual reply source is used.
   if (Ping < Room->PingMs)
   { Room->Address = FString::Printf(TEXT("%s:%d"), *Sender->ToString(false), Packet.GamePort); Room->PingMs = Ping; }
   Room->MapIndex = Packet.MapIndex; Room->Players = Packet.Players;
   UE_LOG(LogLyraRoomDiscovery, Verbose, TEXT("ROOM_DISCOVERY found id=%s source=%s connect=%s players=%d"),
    *Room->Id.ToString(), *Sender->ToString(true), *Room->Address, Room->Players);
  }
 }
}
