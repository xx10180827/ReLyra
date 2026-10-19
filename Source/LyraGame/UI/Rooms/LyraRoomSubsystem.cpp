// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomSubsystem.h"
#include "LyraRoomMaps.h"
#include "GameModes/LyraGameState.h"
#include "CommonSessionSubsystem.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
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
 if (SearchRequest) { SearchRequest->OnSearchFinished.RemoveAll(this); }
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
 bRoomFlow = true; Results.Reset();
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
 bRoomFlow = true; Results.Reset();
 if (SearchRequest) { SearchRequest->OnSearchFinished.RemoveAll(this); }
 auto* Sessions = GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>();
 SearchRequest = Sessions->CreateOnlineSearchSessionRequest();
 SearchRequest->OnlineMode = ECommonSessionOnlineMode::LAN; SearchRequest->bUseLobbies = false;
 SearchRequest->OnSearchFinished.AddWeakLambda(this, [this](bool bOK, const FText& Error)
 {
  if (State != EState::Searching) { return; }
  if (!bOK) { Failed(LOCTEXT("SearchFailed", "搜索失败，请稍后重试，或使用 IP 直连。")); return; }
  for (const auto& Result : SearchRequest->Results)
  {
   FString Mode; bool bFound = false; Result->GetStringSetting(TEXT("GAMEMODE"), Mode, bFound);
   if (bFound && Mode == TEXT("LyraInventoryRoom")) { Results.Add(Result); }
  }
  SetState(EState::Idle, Results.IsEmpty() ? LOCTEXT("NoRooms", "未找到房间。确认双方在同一局域网，可刷新或使用 IP 直连。") : LOCTEXT("Found", "选择一个房间加入。"));
 });
 SetState(EState::Searching, LOCTEXT("Searching", "正在搜索局域网房间……"));
 Sessions->FindSessions(Controller(), SearchRequest);
}
void ULyraRoomSubsystem::Join(int32 Index)
{
 if (!IsReady() || !Results.IsValidIndex(Index)) { return; }
 if (Results[Index]->GetNumOpenPublicConnections() <= 0) { Status = LOCTEXT("Full", "房间已满，请刷新列表。"); return; }
 bRoomFlow = true;
 SetState(EState::Joining, LOCTEXT("Joining", "正在加入房间……"));
 GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>()->JoinSession(Controller(), Results[Index]);
}
void ULyraRoomSubsystem::DirectJoin(const FString& Address)
{
 if (!IsReady()) { return; }
 FString Normalized;
 if (!NormalizeAddress(Address, Normalized)) { Status = LOCTEXT("BadAddress", "请输入有效 IPv4 地址，可附端口，例如 192.168.1.10:7777。"); return; }
 bRoomFlow = true;
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
 Results.Reset();
 GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>()->CleanUpSessions();
 SetState(EState::Failed, Message);
 bReturnToMenu = true;
}
void ULyraRoomSubsystem::Leave()
{
 if (State == EState::Leaving) { return; }
 Results.Reset();
 bRoomFlow = true;
 GetGameInstance()->GetSubsystem<UCommonSessionSubsystem>()->CleanUpSessions();
 SetState(EState::Leaving, LOCTEXT("Leaving", "正在离开并清理房间……"));
 bReturnToMenu = true;
}
void ULyraRoomSubsystem::NetworkFailure(UWorld* World, UNetDriver* Driver, ENetworkFailure::Type Type, const FString& Error)
{
 if (World != GetWorld() || !bRoomFlow || State == EState::Leaving || State == EState::Failed) { return; }
 Failed(Error.Contains(TEXT("FULL")) ? LOCTEXT("RoomFull", "房间已满，最多两名玩家。请返回后重试。") : LOCTEXT("ConnectionLost", "无法连接或连接已断开，房主可能已退出。可重新搜索或输入地址重试。"));
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
 FString Package; bool bFound = false;
 if (Results.IsValidIndex(Index)) { Results[Index]->GetStringSetting(TEXT("MAPNAME"), Package, bFound); }
 const auto* Map = bFound ? LyraRoomMaps::FindPackage(Package) : nullptr;
 return Map ? Map->Label : LOCTEXT("UnknownMap", "未知地图");
}
void ULyraRoomSubsystem::Tick(float DeltaTime)
{
 if (!GetWorld() || !GetWorld()->IsGameWorld()) { return; }
 if (bReturnToMenu)
 {
  bReturnToMenu = false;
  GEngine->CancelPending(GetWorld());
  if (!GetWorld()->GetMapName().Contains(TEXT("L_LyraFrontEnd"))) { UGameplayStatics::OpenLevel(this, FName(FrontendMap())); }
  return;
 }
 if (State == EState::Leaving && !HasSession()) { SetState(EState::Idle, LOCTEXT("Left", "已离开房间，可以重新建房或加入。")); }
 if ((State == EState::Hosting || State == EState::Joining) && IsInRoom() && Controller() && Controller()->GetPawn())
 { SetState(EState::Connected, LOCTEXT("Connected", "已连接。按 F10 打开房间菜单；I 打开背包。")); }
 if (IsBusy() && FPlatformTime::Seconds() - OperationStarted > 90.0)
 { Failed(LOCTEXT("Timeout", "操作超时。请检查地址、房主状态和局域网连接后重试。")); }
}
#undef LOCTEXT_NAMESPACE
