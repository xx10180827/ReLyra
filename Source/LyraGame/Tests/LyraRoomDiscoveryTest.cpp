// Copyright Epic Games, Inc. All Rights Reserved.
#include "UI/Rooms/LyraRoomDiscovery.h"
#include "Misc/AutomationTest.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"
#include "Sockets.h"

#if WITH_DEV_AUTOMATION_TESTS
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraRoomDiscoveryProtocolTest, "Lyra.Rooms.Discovery.Protocol",
 EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraRoomDiscoveryProtocolTest::RunTest(const FString& Parameters)
{
 using namespace LyraRoomDiscovery;
 FInterface Interface;
 TestTrue(TEXT("/24 accepted"), MakeInterface(0xC0A88462, 24, Interface));
 TestEqual(TEXT("Hotspot broadcast"), Interface.Broadcast, 0xC0A884FFu);
 TestTrue(TEXT("/20 accepted"), MakeInterface(0x0A143721, 20, Interface));
 TestEqual(TEXT("Broadcast uses actual prefix, not last-octet replacement"), Interface.Broadcast, 0x0A143FFFu);
 TestFalse(TEXT("Loopback excluded"), MakeInterface(0x7F000001, 8, Interface));
 TestFalse(TEXT("No /31 broadcast"), MakeInterface(0x0A000001, 31, Interface));
 TestFalse(TEXT("No /0 global broadcast"), MakeInterface(0x0A000001, 0, Interface));
 TestFalse(TEXT("Multicast excluded"), MakeInterface(0xE0000001, 24, Interface));
 TestFalse(TEXT("Subnet address excluded"), MakeInterface(0xC0A88400, 24, Interface));
 FPacket Query, Decoded;
 Query.Nonce = FGuid::NewGuid();
 auto Bytes = Encode(Query);
 TestEqual(TEXT("Bounded query size"), Bytes.Num(), 22);
 TestTrue(TEXT("Query roundtrip"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 TestEqual(TEXT("Query nonce preserved"), Decoded.Nonce, Query.Nonce);
 Query.bResponse = true; Query.RoomId = FGuid::NewGuid(); Query.GamePort = 17777; Query.MapIndex = 4; Query.Players = 2;
 Bytes = Encode(Query);
 TestEqual(TEXT("Bounded response size"), Bytes.Num(), 42);
 TestTrue(TEXT("Full room response valid"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 TestEqual(TEXT("Game port preserved"), Decoded.GamePort, Query.GamePort);
 TestEqual(TEXT("Room identity preserved"), Decoded.RoomId, Query.RoomId);
 for (int32 Size = 0; Size < Bytes.Num(); ++Size)
 { TestFalse(TEXT("Every truncated response rejected"), Decode(Bytes.GetData(), Size, Decoded)); }
 Bytes.Add(0);
 TestFalse(TEXT("Trailing data rejected"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 Bytes = Encode(Query); Bytes[4] = 2;
 TestFalse(TEXT("Wrong protocol rejected"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 Query.GamePort = 0; Bytes = Encode(Query);
 TestFalse(TEXT("Zero port rejected"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 Query.GamePort = 7777; Query.MapIndex = 255; Bytes = Encode(Query);
 TestFalse(TEXT("Unknown map rejected"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 Query.MapIndex = 0; Query.Players = 3; Bytes = Encode(Query);
 TestFalse(TEXT("Invalid count rejected"), Decode(Bytes.GetData(), Bytes.Num(), Decoded));
 return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraRoomDiscoverySocketTest, "Lyra.Rooms.Discovery.MultiInterfaceSockets",
 EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraRoomDiscoverySocketTest::RunTest(const FString& Parameters)
{
 FLyraRoomDiscovery Host, Client;
 TArray<FLyraDiscoveredRoom> Rooms;
 TArray<LyraRoomDiscovery::FInterface> Interfaces;
 if (!TestTrue(TEXT("Enumerate live IPv4 adapters"), LyraRoomDiscovery::Enumerate(Interfaces))) { return false; }
 if (!TestTrue(TEXT("Bind host"), Host.StartHost())) { return false; }
 auto Search = [&](uint8 Players)
 {
  Rooms.Reset();
  if (!Client.StartSearch()) { AddError(TEXT("Unable to bind search sockets")); return; }
  const double Deadline = FPlatformTime::Seconds() + LyraRoomDiscovery::SearchSeconds;
  while (FPlatformTime::Seconds() < Deadline)
  { Host.TickHost(17777, 4, Players); Client.TickSearch(Rooms); FPlatformProcess::Sleep(0.01f); }
  Client.Stop();
 };
 Search(1);
 if (!TestEqual(TEXT("Multiple interfaces/retries deduplicated to one room"), Rooms.Num(), 1)) { return false; }
 const FGuid FirstId = Rooms[0].Id;
 TestTrue(TEXT("Advertised game port used"), Rooms[0].Address.EndsWith(TEXT(":17777")));
 bool bSourceIsLocal = false;
 auto* Sockets = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
 for (const auto& Interface : Interfaces)
 {
  auto Address = Sockets->CreateInternetAddr(); Address->SetIp(Interface.Address); Address->SetPort(17777);
  bSourceIsLocal |= Rooms[0].Address == Address->ToString(true);
 }
 TestTrue(TEXT("Connect address is an actual replying interface"), bSourceIsLocal);
 // Exercise each enumerated interface individually, not just whichever answers fastest.
 for (const auto& Interface : Interfaces)
 {
  auto Local = Sockets->CreateInternetAddr(); Local->SetIp(Interface.Address); Local->SetPort(0);
  auto Target = Sockets->CreateInternetAddr(); Target->SetIp(Interface.Broadcast); Target->SetPort(LyraRoomDiscovery::Port);
  auto Sender = Sockets->CreateInternetAddr();
  FSocket* Probe = Sockets->CreateSocket(NAME_DGram, TEXT("Discovery interface test"), FNetworkProtocolTypes::IPv4);
  if (!Probe) { AddError(TEXT("Probe socket creation failed")); continue; }
  const bool bBound = Probe->SetNonBlocking(true) && Probe->SetBroadcast(true) && Probe->Bind(*Local);
  if (TestTrue(TEXT("Bind per-interface probe"), bBound))
  {
   LyraRoomDiscovery::FPacket Query, Reply;
   Query.Nonce = FGuid::NewGuid();
   const auto Data = LyraRoomDiscovery::Encode(Query);
   int32 Sent = 0, Read = 0; uint8 Buffer[512];
   Probe->SendTo(Data.GetData(), Data.Num() - 1, Sent, *Target);
   FPlatformProcess::Sleep(0.02f); Host.TickHost(17777, 4, 1);
   TestFalse(TEXT("Malformed query receives no reply"), Probe->RecvFrom(Buffer, sizeof(Buffer), Read, *Sender));
   TestTrue(TEXT("Directed broadcast sent"), Probe->SendTo(Data.GetData(), Data.Num(), Sent, *Target));
   bool bReceived = false;
   const double Deadline = FPlatformTime::Seconds() + 2.0;
   while (!bReceived && FPlatformTime::Seconds() < Deadline)
   {
    Host.TickHost(17777, 4, 1);
    bReceived = Probe->RecvFrom(Buffer, sizeof(Buffer), Read, *Sender);
    if (!bReceived) { FPlatformProcess::Sleep(0.01f); }
   }
   if (TestTrue(FString::Printf(TEXT("Unicast reply to interface %s"), *Local->ToString(false)), bReceived))
   {
    TestTrue(TEXT("Reply protocol valid"), LyraRoomDiscovery::Decode(Buffer, Read, Reply));
    TestEqual(TEXT("Reply echoes query nonce"), Reply.Nonce, Query.Nonce);
    uint32 Source = 0; Sender->GetIp(Source);
    TestEqual(TEXT("Reply source is matching interface"), Source, Interface.Address);
    AddInfo(FString::Printf(TEXT("Broadcast %s -> unicast source %s verified"), *Target->ToString(true), *Sender->ToString(true)));
   }
  }
  Sockets->DestroySocket(Probe);
 }
 Search(2);
 if (!TestEqual(TEXT("Full room remains discoverable"), Rooms.Num(), 1)) { return false; }
 TestEqual(TEXT("Full occupancy refreshed"), Rooms[0].Players, uint8(2));
 TestEqual(TEXT("Room identity stable within session"), Rooms[0].Id, FirstId);
 Host.Stop(); Search(1);
 TestEqual(TEXT("Stopped host no longer responds; prior results cleared"), Rooms.Num(), 0);
 if (!TestTrue(TEXT("Rehost reopens sockets"), Host.StartHost())) { return false; }
 Search(1);
 if (!TestEqual(TEXT("New host discoverable"), Rooms.Num(), 1)) { return false; }
 TestNotEqual(TEXT("Rehost changes room identity"), Rooms[0].Id, FirstId);
 TestEqual(TEXT("New host occupancy resets"), Rooms[0].Players, uint8(1));
 return true;
}
#endif
