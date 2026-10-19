// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomFlowTest.h"
#include "UI/Rooms/LyraRoomSubsystem.h"
#include "UI/Rooms/LyraRoomScreen.h"
#include "Player/LyraPlayerController.h"
#include "Player/LyraPlayerState.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraHealthSet.h"
#include "Character/LyraHealthComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "UnrealClient.h"
#include "UI/Frontend/LyraFrontendStateComponent.h"
#include "UI/Foundation/LyraButtonBase.h"
#include "Framework/Application/SlateApplication.h"
#include "Layout/WidgetPath.h"
#include "Widgets/SWidget.h"
#include "GameFramework/Pawn.h"

namespace RoomFlowAutomation
{
 TSharedPtr<SWidget> FindButton(const TSharedRef<SWidget>& Widget)
 {
  if (Widget->GetType() == TEXT("SCommonButton")) { return Widget; }
  FChildren* Children = Widget->GetChildren();
  for (int32 I = 0; I < Children->Num(); ++I)
  { if (auto Found = FindButton(Children->GetChildAt(I))) { return Found; } }
  return nullptr;
 }
 bool Click(ULyraButtonBase* Button, bool bExecute = true)
 {
  if (!Button || !Button->GetIsEnabled() || !Button->GetCachedWidget()) { return false; }
  auto Widget = FindButton(Button->GetCachedWidget().ToSharedRef());
  if (!Widget) { return false; }
  auto& Slate = FSlateApplication::Get();
  FWidgetPath Path;
  if (!Slate.GeneratePathToWidgetUnchecked(Widget.ToSharedRef(), Path)) { return false; }
  if (!Path.IsValid() || Widget->GetCachedGeometry().GetLocalSize().IsNearlyZero()) { return false; }
  const FVector2D Point = Widget->GetCachedGeometry().GetAbsolutePosition() + Widget->GetCachedGeometry().GetAbsoluteSize() * 0.5;
  // Hit-test the displayed button; a generated path alone can reach a covered widget.
  Path = Slate.LocateWindowUnderMouse(Point, Slate.GetInteractiveTopLevelWindows());
  if (!Path.IsValid() || !Path.ContainsWidget(Widget.Get())) { return false; }
  if (!bExecute) { return true; }
  const TSet<FKey> Held = { EKeys::LeftMouseButton }, Released;
  const FModifierKeysState Mods;
  const uint32 Pointer = FSlateApplication::CursorPointerIndex;
  Slate.RoutePointerMoveEvent(Path, FPointerEvent(Pointer, Point, Point, Released, FKey(), 0, Mods), false);
  Slate.RoutePointerDownEvent(Path, FPointerEvent(Pointer, Point, Point, Held, EKeys::LeftMouseButton, 0, Mods));
  Slate.RoutePointerUpEvent(Path, FPointerEvent(Pointer, Point, Point, Released, EKeys::LeftMouseButton, 0, Mods));
  return true;
 }
}

bool ULyraRoomFlowTest::OpenMenuFromFrontend()
{
 auto* GS = GetWorld()->GetGameState();
 auto* Frontend = GS ? GS->FindComponentByClass<ULyraFrontendStateComponent>() : nullptr;
 auto* Button = Frontend ? Frontend->GetRoomMenuButton() : nullptr;
 if (!Button) { return false; }
 if (MenuSeen == 0)
 {
  MenuSeen = FPlatformTime::Seconds();
  return false;
 }
 const double VisibleTime = FPlatformTime::Seconds() - MenuSeen;
 if (VisibleTime < 4) { return false; }
 if (!bMenuScreenshot)
 {
  if (!RoomFlowAutomation::Click(Button, false)) { return false; }
  FScreenshotRequest::RequestScreenshot(Directory / FString::Printf(TEXT("%sFrontend%d.png"), bHost ? TEXT("Host") : TEXT("Client"), MenuClicks), true, false);
  bMenuScreenshot = true;
  MenuSeen = FPlatformTime::Seconds();
  return false;
 }
 if (!RoomFlowAutomation::Click(Button)) { return false; }
 auto* PC = CastChecked<ALyraPlayerController>(GetWorld()->GetFirstPlayerController());
 if (!PC->GetRoomScreen() || !PC->GetRoomScreen()->IsActivated())
 { UE_LOG(LogTemp, Error, TEXT("ROOM_TEST frontend button click did not open room menu")); EndTest(1); return false; }
 ++MenuClicks; MenuSeen = 0; bMenuScreenshot = false;
 UE_LOG(LogTemp, Display, TEXT("ROOM_TEST frontend pointer click passed role=%s count=%d"), bHost ? TEXT("Host") : TEXT("Client"), MenuClicks);
 return true;
}

void ULyraRoomFlowTest::Signal(const FString& Name) { FFileHelper::SaveStringToFile(TEXT("ok"), *(Directory / Name)); }
bool ULyraRoomFlowTest::HasSignal(const FString& Name) const { return IFileManager::Get().FileExists(*(Directory / Name)); }
void ULyraRoomFlowTest::Advance(int32 Next)
{
 Step = Next; Changed = FPlatformTime::Seconds();
 UE_LOG(LogTemp, Display, TEXT("ROOM_TEST role=%s step=%d"), bHost ? TEXT("Host") : TEXT("Client"), Step);
}
void ULyraRoomFlowTest::OnInit()
{
 bHost = FParse::Param(FCommandLine::Get(), TEXT("RoomTestHost"));
 FParse::Value(FCommandLine::Get(), TEXT("RoomTestDir="), Directory);
 FParse::Value(FCommandLine::Get(), TEXT("port="), Port);
 Started = Changed = FPlatformTime::Seconds();
 if (Directory.IsEmpty()) { EndTest(1); }
}
void ULyraRoomFlowTest::OnTick(float DeltaTime)
{
 const double Now = FPlatformTime::Seconds();
 if (Now - Started > 600) { UE_LOG(LogTemp, Error, TEXT("ROOM_TEST timeout role=%s step=%d"), bHost ? TEXT("Host") : TEXT("Client"), Step); EndTest(1); return; }
 if (!GetWorld() || !GetWorld()->GetGameInstance()) { return; }
 auto* PC = Cast<ALyraPlayerController>(GetWorld()->GetFirstPlayerController());
 if (!PC) { return; }
 auto* Rooms = GetWorld()->GetGameInstance()->GetSubsystem<ULyraRoomSubsystem>();
 auto* Screen = PC->GetRoomScreen();
 // Frontend recovery must use the visible menu entry, never the controller shortcut.
 const bool bNeedsScreen = bHost ? (Step == 0 || Step == 6 || Step == 7 || Step == 9 || Step == 10)
  : (Step <= 3 || Step == 9 || Step == 10 || Step == 11 || Step == 13 || Step == 17);
 if (!bHost && Step == 1 && Rooms->IsReady() && !bRecoveryReopened)
 {
  if (Screen && Screen->IsActivated()) { Screen->DeactivateWidget(); }
  if (!OpenMenuFromFrontend()) { return; }
  bRecoveryReopened = true;
  UE_LOG(LogTemp, Display, TEXT("ROOM_TEST timeout recovery via original menu entry passed"));
  if (!Rooms->GetStatus().ToString().Contains(TEXT("超时")) && !Rooms->GetStatus().ToString().Contains(TEXT("无法连接"))) { EndTest(1); return; }
  FScreenshotRequest::RequestScreenshot(Directory / TEXT("ClientFailureFeedback.png"), true, false);
  Changed = Now;
  return;
 }
 else if (bNeedsScreen && (!Screen || !Screen->IsActivated()))
 {
  if (Rooms->IsReady()) { OpenMenuFromFrontend(); }
  else if (Rooms->IsInRoom() && !Rooms->IsBusy()) { PC->ToggleRoomMenu(); }
  return;
 }
 Screen = PC->GetRoomScreen();
 auto* GS = GetWorld()->GetGameState();
 auto* PS = PC->GetLyraPlayerState();
 auto* Health = PC->GetPawn() ? ULyraHealthComponent::FindHealthComponent(PC->GetPawn()) : nullptr;
 const bool bConnected = Rooms->IsInRoom() && GS && GS->PlayerArray.Num() == 2 && PS && Health && !Rooms->IsBusy();
 if (bHost)
 {
  if (Step == 0 && Rooms->IsReady())
  {
   FString Address;
   if (!ULyraRoomSubsystem::NormalizeAddress(TEXT(" 127.0.0.1:17777 "), Address) || Address != TEXT("127.0.0.1:17777")
    || ULyraRoomSubsystem::NormalizeAddress(TEXT("127.0.0.1?listen"), Address)
    || ULyraRoomSubsystem::NormalizeAddress(TEXT("1.2.3.999:7777"), Address)
    || ULyraRoomSubsystem::NormalizeAddress(TEXT("127.0.0.1:0"), Address)) { EndTest(1); return; }
   Screen->ChooseTeam(1); Screen->HostRoom(); Advance(1);
  }
  else if (Step == 1 && Rooms->IsInRoom() && PC->GetPawn() && !Rooms->IsBusy()) { Signal(TEXT("HostReady")); Advance(2); }
  else if (Step == 2 && bConnected && HasSignal(TEXT("AliveChecked")))
  {
   if (PS->GetTeamId() != 1) { EndTest(1); return; }
   ALyraPlayerController* Other = nullptr;
   for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It) { if (It->Get() != PC) { Other = Cast<ALyraPlayerController>(It->Get()); } }
   if (!Other || !Other->GetLyraAbilitySystemComponent()) { return; }
   if (Other->GetLyraPlayerState()->GetTeamId() != 1) { EndTest(1); return; }
   // Isolate the team lock from T17's full death/respawn lifecycle.
   Other->GetLyraAbilitySystemComponent()->SetNumericAttributeBase(ULyraHealthSet::GetHealthAttribute(), 0);
   PC->GetLyraAbilitySystemComponent()->SetNumericAttributeBase(ULyraHealthSet::GetHealthAttribute(), 0);
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2);
   Signal(TEXT("DeadReady")); Advance(3);
  }
  else if (Step == 3 && bConnected && HasSignal(TEXT("DeadChecked")))
  {
   if (Screen && Screen->IsActivated()) { EndTest(1); return; }
   for (const auto& Player : GS->PlayerArray) { if (CastChecked<ALyraPlayerState>(Player)->GetTeamId() != 1) { EndTest(1); return; } }
   HostPawn = PC->GetPawn();
   for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
   { if (It->Get() != PC) { ClientPawn = It->Get()->GetPawn(); It->Get()->UnPossess(); } }
   PC->UnPossess();
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2);
   Signal(TEXT("NoPawnReady")); Advance(4);
  }
  else if (Step == 4 && HasSignal(TEXT("NoPawnChecked")))
  {
   if (Screen && Screen->IsActivated()) { EndTest(1); return; }
   for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
   { if (CastChecked<ALyraInventoryPlayerController>(It->Get())->RequestedRoomTeam != 1) { EndTest(1); return; } }
   if (PS->GetTeamId() != 1) { EndTest(1); return; }
   if (!HostPawn.IsValid() || !ClientPawn.IsValid()) { EndTest(1); return; }
   PC->Possess(HostPawn.Get());
   PC->GetLyraAbilitySystemComponent()->SetNumericAttributeBase(ULyraHealthSet::GetHealthAttribute(), 100);
   for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
   { if (It->Get() != PC) { It->Get()->Possess(ClientPawn.Get()); CastChecked<ALyraPlayerController>(It->Get())->GetLyraAbilitySystemComponent()->SetNumericAttributeBase(ULyraHealthSet::GetHealthAttribute(), 100); } }
   HostPawn.Reset(); ClientPawn.Reset();
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2);
   Signal(TEXT("Restored")); Advance(5);
  }
  else if (Step == 5 && HasSignal(TEXT("RestoreChecked")))
  {
   for (const auto& Player : GS->PlayerArray) { if (CastChecked<ALyraPlayerState>(Player)->GetTeamId() != 1) { EndTest(1); return; } }
   Signal(TEXT("TeamsPassed")); Advance(6);
  }
  else if (Step == 6 && HasSignal(TEXT("ClientLeft")) && GS && GS->PlayerArray.Num() == 1)
  { Screen->LeaveRoom(); Advance(7); }
  else if (Step == 7 && Rooms->IsReady()) { Screen->ChooseTeam(2); Screen->HostRoom(); Advance(8); }
  else if (Step == 8 && Rooms->IsInRoom() && PC->GetPawn() && !Rooms->IsBusy()) { Signal(TEXT("Rehost")); Advance(9); }
  else if (Step == 9 && bConnected && HasSignal(TEXT("DirectJoined")))
  {
   if (PS->GetTeamId() != 2) { EndTest(1); return; }
   for (const auto& Player : GS->PlayerArray) { if (Player != PS && CastChecked<ALyraPlayerState>(Player)->GetTeamId() != 1) { EndTest(1); return; } }
   Screen->LeaveRoom(); Advance(10);
  }
  else if (Step == 10 && Rooms->IsReady() && HasSignal(TEXT("DisconnectHandled")))
  { UE_LOG(LogTemp, Display, TEXT("ROOM_TEST PASS role=Host host=2 searchJoin=passed teams=passed cleanup=passed")); EndTest(0); }
 }
 else
 {
  if (Step == 0 && Rooms->IsReady() && HasSignal(TEXT("HostReady")))
  {
   Screen->JoinAddress(TEXT("127.0.0.1?listen"));
   if (Rooms->IsBusy()) { EndTest(1); return; }
   Screen->JoinAddress(TEXT("127.0.0.1:17998")); Advance(1);
  }
  else if (Step == 1 && Rooms->IsReady() && Now - Changed > 3)
  { Screen->ChooseTeam(1); Screen->SearchRooms(); Advance(2); }
  else if (Step == 2 && !Rooms->IsBusy())
  {
   if (Rooms->GetResults().Num() > 0) { Screen->JoinRoom(0); Advance(3); }
   else if (Now - Changed > 3 && Searches++ < 4) { Screen->SearchRooms(); Changed = Now; }
  }
  else if (Step == 3 && bConnected)
  {
   if (PS->GetTeamId() != 1) { EndTest(1); return; }
   Screen->ChooseTeam(2);
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2); Advance(4);
  }
  else if (Step == 4 && Now - Changed > 1)
  {
   if (PS->GetTeamId() != 1) { EndTest(1); return; }
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(99); Advance(5);
  }
  else if (Step == 5 && Now - Changed > 1)
  { if (PS->GetTeamId() != 1) { EndTest(1); return; } Screen->DeactivateWidget(); Signal(TEXT("AliveChecked")); Advance(6); }
  else if (Step == 6 && HasSignal(TEXT("DeadReady")) && Health && Health->GetHealth() <= 0)
  {
   if (Screen && Screen->IsActivated()) { EndTest(1); return; }
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2); Advance(7);
  }
  else if (Step == 7 && Now - Changed > 2)
  { if (PS->GetTeamId() != 1) { EndTest(1); return; } Signal(TEXT("DeadChecked")); Advance(8); }
  else if (Step == 8 && HasSignal(TEXT("NoPawnReady")) && !PC->GetPawn())
  {
   if (Screen && Screen->IsActivated()) { EndTest(1); return; }
   CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2); Advance(14);
  }
  else if (Step == 14 && Now - Changed > 2)
  { if (PS->GetTeamId() != 1) { EndTest(1); return; } Signal(TEXT("NoPawnChecked")); Advance(15); }
  else if (Step == 15 && HasSignal(TEXT("Restored")) && Health && Health->GetHealth() > 0)
  { CastChecked<ALyraInventoryPlayerController>(PC)->ServerChooseRoomTeam(2); Advance(16); }
  else if (Step == 16 && Now - Changed > 2)
  { if (PS->GetTeamId() != 1) { EndTest(1); return; } Signal(TEXT("RestoreChecked")); Advance(17); }
  else if (Step == 17 && HasSignal(TEXT("TeamsPassed")))
  {
   for (const auto& Player : GS->PlayerArray) { if (CastChecked<ALyraPlayerState>(Player)->GetTeamId() != 1) { EndTest(1); return; } }
   FScreenshotRequest::RequestScreenshot(Directory / TEXT("ClientTeams.png"), true, false); Advance(9);
  }
  else if (Step == 9 && Now - Changed > 3) { Screen->LeaveRoom(); Advance(10); }
  else if (Step == 10 && Rooms->IsReady()) { Signal(TEXT("ClientLeft")); Advance(11); }
  else if (Step == 11 && HasSignal(TEXT("Rehost")) && Rooms->IsReady())
  { Screen->ChooseTeam(1); Screen->JoinAddress(FString::Printf(TEXT("127.0.0.1:%d"), Port)); Advance(12); }
  else if (Step == 12 && bConnected && PS->GetTeamId() == 1)
  {
   for (const auto& Player : GS->PlayerArray) { if (Player != PS && CastChecked<ALyraPlayerState>(Player)->GetTeamId() != 2) { return; } }
   Signal(TEXT("DirectJoined")); Advance(13);
  }
  else if (Step == 13 && Rooms->IsReady())
  { Signal(TEXT("DisconnectHandled")); UE_LOG(LogTemp, Display, TEXT("ROOM_TEST PASS role=Client invalidAddress=passed timeoutRetry=passed searchJoin=passed directJoin=passed teams=passed disconnect=passed")); EndTest(0); }
 }
}
