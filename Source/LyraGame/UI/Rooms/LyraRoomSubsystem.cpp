// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomSubsystem.h"
#include "LyraRoomMaps.h"
#include "GameModes/LyraGameState.h"
#include "CommonSessionSubsystem.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "Engine/NetDriver.h"
#include "IPAddress.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils.h"

#define LOCTEXT_NAMESPACE "LyraRooms"
const TCHAR* ULyraRoomSubsystem::FrontendMap() { return TEXT("/Game/System/FrontEnd/Maps/L_LyraFrontEnd"); }
APlayerController* ULyraRoomSubsystem::Controller() const { return GetGameInstance()->GetFirstLocalPlayerController(); }

void ULyraRoomSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
 Super::Initialize(Collection);
 Collection.InitializeDependency<UCommonSessionSubsystem>();
 auto* Sessions = GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>();
 CreateHandle = Sessions->OnCreateSessionCompleteEvent.AddUObject(this, &ThisClass::Created);
 JoinHandle = Sessions->OnJoinSessionCompleteEvent.AddUObject(this, &ThisClass::Joined);
 PreTravelHandle = Sessions->OnPreClientTravelEvent.AddUObject(this, &ThisClass::PreTravel);
 NetworkHandle = GEngine->OnNetworkFailure().AddUObject(this, &ThisClass::NetworkFailure);
 TravelHandle = GEngine->OnTravelFailure().AddUObject(this, &ThisClass::TravelFailure);
 Status = LOCTEXT("Ready", "创建双人局域网房间，或搜索／输入房主地址加入。");
}
void ULyraRoomSubsystem::Deinitialize()
{
 if (auto* Sessions = GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>())
 {
  Sessions->OnCreateSessionCompleteEvent.Remove(CreateHandle);
  Sessions->OnJoinSessionCompleteEvent.Remove(JoinHandle);
  Sessions->OnPreClientTravelEvent.Remove(PreTravelHandle);
 }
 if (GEngine) { GEngine->OnNetworkFailure().Remove(NetworkHandle); GEngine->OnTravelFailure().Remove(TravelHandle); }
 Discovery.Stop();
 Super::Deinitialize();
}
bool ULyraRoomSubsystem::IsInRoom() const
{
 const auto* GS = GetWorld() ? GetWorld()->GetGameState<ALyraGameState>() : nullptr;
 return GS && GS->bIsLanRoom && GetWorld()->GetNetMode() != NM_Standalone;
}
bool ULyraRoomSubsystem::HasSession() const
{
 auto* Online = Online::GetSubsystem(GetWorld());
 const auto Sessions = Online ? Online->GetSessionInterface() : nullptr;
 return Sessions.IsValid() && Sessions->GetSessionState(NAME_GameSession) != EOnlineSessionState::NoSession;
}
bool ULyraRoomSubsystem::IsBusy() const
{
 return State == EState::Searching || State == EState::Hosting || State == EState::Joining || State == EState::Leaving;
}
bool ULyraRoomSubsystem::IsReady() const
{
 auto* PC = Controller();
 return !bReturnToMenu && ReadyFrontendWorld.Get() == GetWorld() && !IsBusy() && !HasSession() && !IsInRoom() && PC && PC->GetLocalPlayer()
  && PC->GetLocalPlayer()->GetPreferredUniqueNetId().IsValid()
  && GetWorld()->GetMapName().Contains(TEXT("L_LyraFrontEnd"));
}
void ULyraRoomSubsystem::SetState(EState NewState, const FText& Message)
{
 State = NewState; Status = Message; OperationStarted = FPlatformTime::Seconds();
 OperationWorld = GetWorld();
 UE_LOG(LogTemp, Display, TEXT("ROOM_FLOW state=%d message=%s"), int32(State), *Status.ToString());
}
bool ULyraRoomSubsystem::NormalizeAddress(const FString& Input, FString& Output)
{
 Output.Reset();
 FString Address = Input.TrimStartAndEnd();
 FString Host, Port;
 if (!Address.Split(TEXT(":"), &Host, &Port)) { Host = Address; Port = TEXT("7777"); }
 TArray<FString> Octets; Host.ParseIntoArray(Octets, TEXT("."), false);
 if (Octets.Num() != 4 || Port.IsEmpty() || Port.Len() > 5) { return false; }
 auto Digits = [](const FString& Text) { for (TCHAR C : Text) { if (C < '0' || C > '9') { return false; } } return !Text.IsEmpty(); };
 for (const auto& Octet : Octets) { if (!Digits(Octet) || Octet.Len() > 3 || FCString::Atoi(*Octet) > 255) { return false; } }
 if (!Digits(Port) || FCString::Atoi(*Port) < 1 || FCString::Atoi(*Port) > 65535) { return false; }
 Output = Host + TEXT(":") + FString::FromInt(FCString::Atoi(*Port));
 return true;
}
void ULyraRoomSubsystem::Host()
{
 if (!IsReady()) { return; }
 const auto* Map = LyraRoomMaps::Find(SelectedMap);
 if (!Map) { return; }
 bRoomFlow = true; Results.Reset(); ++ResultsRevision;
 Discovery.Stop(); bDiscoveryHostAttempted = false;
 auto* Sessions = GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>();
 auto* Request = Sessions->CreateOnlineHostSessionRequest();
 Request->OnlineMode = ECommonSessionOnlineMode::LAN; Request->bUseLobbies = false;
 Request->MapID = FPrimaryAssetId(TEXT("Map"), FName(*Map->Package));
 Request->MaxPlayerCount = 2;
 Request->ModeNameForAdvertisement = TEXT("LyraInventoryRoom");
 Request->ExtraArgs.Add(TEXT("RoomTeam"), FString::FromInt(SelectedTeam));
 Request->ExtraArgs.Add(TEXT("LyraLanRoom"), TEXT("1"));
 Request->ExtraArgs.Add(TEXT("Experience"), Map->Experience);
 SetState(EState::Hosting, LOCTEXT("Creating", "正在创建房间并加载地图……"));
 Sessions->HostSession(Controller(), Request);
}
void ULyraRoomSubsystem::Search()
{
 if (!IsReady()) { return; }
 bRoomFlow = true; Results.Reset(); ++ResultsRevision;
 SetState(EState::Searching, LOCTEXT("Searching", "正在搜索局域网房间……"));
 if (!Discovery.StartSearch())
 { SetState(EState::Idle, LOCTEXT("SearchNoInterface", "无法启动搜索，请确认局域网连接后重试，或使用 IP 直连。")); }
}
void ULyraRoomSubsystem::Join(int32 Index)
{
 if (!IsReady() || !Results.IsValidIndex(Index)) { return; }
 if (Results[Index].Players >= 2) { Status = LOCTEXT("Full", "房间已满，请刷新列表。"); return; }
 const FString Address = Results[Index].Address;
 DirectJoin(Address);
}
void ULyraRoomSubsystem::DirectJoin(const FString& Address)
{
 if (!IsReady()) { return; }
 FString Normalized;
 if (!NormalizeAddress(Address, Normalized)) { Status = LOCTEXT("BadAddress", "请输入有效 IPv4 地址，可附端口，例如 192.168.1.10:7777。"); return; }
 bRoomFlow = true;
 Discovery.Stop(); Results.Reset(); ++ResultsRevision;
 SetState(EState::Joining, LOCTEXT("Connecting", "正在连接房主；连接失败后可重试……"));
 FString URL = Normalized; PreTravel(URL);
 Controller()->ClientTravel(URL, TRAVEL_Absolute);
}
void ULyraRoomSubsystem::PreTravel(FString& URL)
{
 if (bRoomFlow && State == EState::Joining) { URL += FString::Printf(TEXT("?RoomTeam=%d"), SelectedTeam); }
}
void ULyraRoomSubsystem::Created(const FOnlineResultInformation& Result)
{
 if (State == EState::Hosting && !Result.bWasSuccessful) { Failed(LOCTEXT("HostFailed", "创建房间失败，清理完成后可重试。")); }
}
void ULyraRoomSubsystem::Joined(const FOnlineResultInformation& Result)
{
 if (State == EState::Joining && !Result.bWasSuccessful) { Failed(LOCTEXT("JoinFailed", "加入失败：房间可能已满或已关闭。请刷新后重试。")); }
}
void ULyraRoomSubsystem::Failed(const FText& Message)
{
 Discovery.Stop(); Results.Reset(); ++ResultsRevision;
 GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>()->CleanUpSessions();
 SetState(EState::Failed, Message);
 bReturnToMenu = true;
}
void ULyraRoomSubsystem::Leave()
{
 if (State == EState::Leaving) { return; }
 Discovery.Stop(); Results.Reset(); ++ResultsRevision;
 bRoomFlow = true;
 GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>()->CleanUpSessions();
 SetState(EState::Leaving, LOCTEXT("Leaving", "正在离开并清理房间……"));
 bReturnToMenu = true;
}
void ULyraRoomSubsystem::NetworkFailure(UWorld* World, UNetDriver* Driver, ENetworkFailure::Type Type, const FString& Error)
{
 // PreLogin rejection has no gameplay world yet. Match the pending driver to this
 // game instance instead of dropping its full-room/error response (also safe in PIE).
 const FWorldContext* Pending = GEngine && Driver ? GEngine->GetWorldContextFromPendingNetGameNetDriver(Driver) : nullptr;
 const bool bOwnPending = Pending && Pending->OwningGameInstance == GetGameInstance();
 if ((World != GetWorld() && !bOwnPending) || !bRoomFlow || State == EState::Leaving || State == EState::Failed) { return; }
 // A failed remote connection on the listen server must not evict the host.
 if (GetWorld() && GetWorld()->GetNetMode() == NM_ListenServer && State == EState::Connected
  && (Type == ENetworkFailure::ConnectionLost || Type == ENetworkFailure::ConnectionTimeout || Type == ENetworkFailure::FailureReceived)) { return; }
 Failed(Error.Contains(TEXT("full"), ESearchCase::IgnoreCase) ? LOCTEXT("RoomFull", "房间已满，最多两名玩家。请返回后重试。") : LOCTEXT("ConnectionLost", "无法连接或连接已断开，房主可能已退出。可重新搜索或输入地址重试。"));
}
void ULyraRoomSubsystem::TravelFailure(UWorld* World, ETravelFailure::Type Type, const FString& Error)
{
 if (World == GetWorld() && bRoomFlow && State != EState::Failed && State != EState::Leaving)
 { Failed(LOCTEXT("TravelFailed", "地图加载或跳转失败，请确认双方项目版本一致后重试。")); }
}
void ULyraRoomSubsystem::SelectTeam(int32 Team)
{
 if ((Team != 1 && Team != 2) || IsBusy()) { return; }
 if (IsInRoom())
 {
  Status = LOCTEXT("TeamLocked", "进入房间后队伍已锁定；请退出房间后重新选择。");
 }
 else { SelectedTeam = Team; }
}
void ULyraRoomSubsystem::SelectMap(const FString& Id)
{
 if (IsReady() && LyraRoomMaps::Find(Id)) { SelectedMap = Id; }
}
FText ULyraRoomSubsystem::GetMapLabel() const
{
 const auto* Map = IsInRoom() ? LyraRoomMaps::FindPackage(GetWorld()->GetOutermost()->GetName()) : LyraRoomMaps::Find(SelectedMap);
 return Map ? Map->Label : LOCTEXT("UnknownMap", "未知地图");
}
FText ULyraRoomSubsystem::GetResultMapLabel(int32 Index) const
{
 return Results.IsValidIndex(Index) && LyraRoomMaps::All().IsValidIndex(Results[Index].MapIndex)
  ? LyraRoomMaps::All()[Results[Index].MapIndex].Label : LOCTEXT("UnknownMap", "未知地图");
}
void ULyraRoomSubsystem::Tick(float DeltaTime)
{
 if (!GetWorld() || !GetWorld()->IsGameWorld()) { return; }
 if (State == EState::Searching)
 {
  Discovery.TickSearch(Results);
  if (FPlatformTime::Seconds() - OperationStarted >= LyraRoomDiscovery::SearchSeconds)
  {
   Discovery.Stop(); ++ResultsRevision;
   UE_LOG(LogTemp, Display, TEXT("ROOM_DISCOVERY search complete rooms=%d"), Results.Num());
   SetState(EState::Idle, Results.IsEmpty() ? LOCTEXT("NoRooms", "未找到房间。确认双方在同一局域网，可刷新或使用 IP 直连。") : LOCTEXT("Found", "选择一个房间加入。"));
  }
 }
 // Synchronous map loading can exceed the connection timeout on a cold cache.
 // A new target world is real progress; give its experience activation a fresh deadline once.
 if ((State == EState::Hosting || State == EState::Joining) && OperationWorld.Get() != GetWorld()
  && !GetWorld()->GetMapName().Contains(TEXT("L_LyraFrontEnd")))
 { OperationWorld = GetWorld(); OperationStarted = FPlatformTime::Seconds(); }
 if (bReturnToMenu)
 {
  bReturnToMenu = false;
  GEngine->CancelPending(GetWorld());
  if (!GetWorld()->GetMapName().Contains(TEXT("L_LyraFrontEnd"))) { UGameplayStatics::OpenLevel(this, FName(FrontendMap())); }
  return;
 }
 if (State == EState::Leaving && !HasSession()) { SetState(EState::Idle, LOCTEXT("Left", "已离开房间，可以重新建房或加入。")); }
 // A replicated local PlayerState in a gameplay world establishes a client join.
 // Original Lyra hosts do not set bIsLanRoom, and spectators may never own a pawn.
 // Keep IsInRoom separate: it enables our two-player rules, not transport readiness.
 const bool bJoinedGame = State == EState::Joining && GetWorld()->GetNetMode() == NM_Client
  && !GetWorld()->GetOutermost()->GetName().Contains(TEXT("L_LyraFrontEnd")) && GetWorld()->GetGameState()
  && Controller() && Controller()->PlayerState;
 if (bJoinedGame || (State == EState::Hosting && IsInRoom() && Controller() && Controller()->PlayerState))
 { SetState(EState::Connected, LOCTEXT("Connected", "已连接。按 F10 打开房间菜单；I 打开背包。")); }
 const bool bAdvertise = State == EState::Connected && IsInRoom() && GetWorld()->GetNetMode() == NM_ListenServer;
 if (bAdvertise)
 {
  if (!bDiscoveryHostAttempted)
  {
   bDiscoveryHostAttempted = true;
   if (!Discovery.StartHost()) { Status = LOCTEXT("AdvertiseFailed", "房间已创建，但搜索广播未能启动；其他玩家可尝试 IP 直连。"); }
  }
  auto* Driver = GetWorld()->GetNetDriver();
  const auto Address = Driver ? Driver->GetLocalAddr() : nullptr;
  const auto* Map = LyraRoomMaps::FindPackage(GetWorld()->GetOutermost()->GetName());
  auto* Mode = GetWorld()->GetAuthGameMode();
  if (Address && Map && Mode)
  { Discovery.TickHost(uint16(Address->GetPort()), uint8(Map - LyraRoomMaps::All().GetData()), uint8(FMath::Clamp(Mode->GetNumPlayers(), 0, 2))); }
 }
 else if (Discovery.IsHosting()) { Discovery.Stop(); bDiscoveryHostAttempted = false; }
 if (IsBusy() && FPlatformTime::Seconds() - OperationStarted > 90.0)
 { Failed(LOCTEXT("Timeout", "操作超时。请检查地址、房主状态和局域网连接后重试。")); }
}
#undef LOCTEXT_NAMESPACE
