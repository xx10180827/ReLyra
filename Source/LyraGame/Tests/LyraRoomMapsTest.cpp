// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomMapsTest.h"
#include "UI/Rooms/LyraRoomMaps.h"
#include "UI/Rooms/LyraRoomSubsystem.h"
#include "UI/Rooms/LyraRoomScreen.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Player/LyraPlayerController.h"
#include "Player/LyraPlayerState.h"
#include "GameModes/LyraGameState.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "GameModes/LyraExperienceDefinition.h"
#include "AbilitySystem/Phases/LyraGamePhaseSubsystem.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "EngineUtils.h"
#include "Camera/PlayerCameraManager.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "GameFramework/Pawn.h"
#include "UnrealClient.h"
#include "LoadingScreenManager.h"
#include "UObject/StructOnScope.h"
#include "UObject/UnrealType.h"

void ULyraRoomMapsTest::Signal(const FString& Name, const FString& Value)
{ FFileHelper::SaveStringToFile(Value, *(Directory / FString::Printf(TEXT("%d_%s"), Round, *Name))); }
bool ULyraRoomMapsTest::Has(const FString& Name) const
{ return IFileManager::Get().FileExists(*(Directory / FString::Printf(TEXT("%d_%s"), Round, *Name))); }
void ULyraRoomMapsTest::Advance(int32 Next)
{ Step = Next; Changed = FPlatformTime::Seconds(); UE_LOG(LogTemp, Display, TEXT("ROOM_MAP role=%s round=%d step=%d"), bHost ? TEXT("Host") : TEXT("Client"), Round, Step); }
void ULyraRoomMapsTest::Fail(const TCHAR* Reason)
{ bFinished = true; UE_LOG(LogTemp, Error, TEXT("ROOM_MAP FAIL role=%s round=%d step=%d probe=%d reason=%s"), bHost ? TEXT("Host") : TEXT("Client"), Round, Step, ProbeStep, Reason); EndTest(1); }
void ULyraRoomMapsTest::OnInit()
{
 bHost = FParse::Param(FCommandLine::Get(), TEXT("RoomTestHost"));
 FParse::Value(FCommandLine::Get(), TEXT("RoomTestDir="), Directory);
 FParse::Value(FCommandLine::Get(), TEXT("port="), Port);
 Started = Changed = FPlatformTime::Seconds();
 if (Directory.IsEmpty()) { EndTest(1); }
}
bool ULyraRoomMapsTest::CheckWorld(ALyraPlayerController* PC)
{
 const auto& Map = LyraRoomMaps::All()[Round];
 auto* GS = GetWorld()->GetGameState<ALyraGameState>();
 auto* Experience = GS ? GS->FindComponentByClass<ULyraExperienceManagerComponent>() : nullptr;
 if (!GS || !GS->bIsLanRoom || !Experience || !Experience->IsExperienceLoaded() || !PC->GetPawn() || !PC->GetLyraPlayerState()) { return false; }
 if (GetWorld()->GetOutermost()->GetName() != Map.Package || Experience->GetCurrentExperienceChecked()->GetClass()->GetName() != Map.Experience + TEXT("_C"))
 { Fail(TEXT("map/experience differs from host selection")); return false; }
 if (GetWorld()->GetGameInstance()->GetLocalPlayers().Num() != 1) { Fail(TEXT("unexpected local/splitscreen players")); return false; }
 if (bHost && Map.Id == TEXT("TopDownLocal"))
 {
  for (const auto* Component : GS->GetComponents())
  { if (Component && Component->GetClass()->GetName().Contains(TEXT("SpawnLocalPlayers"))) { Fail(TEXT("local player spawning component active in network room")); return false; } }
 }
 int32 Humans = 0;
 for (const auto& Player : GS->PlayerArray)
 {
  if (!Player || Player->IsABot() || Player->IsOnlyASpectator()) { continue; }
  ++Humans;
  const auto* PS = CastChecked<ALyraPlayerState>(Player);
  if (PS->GetTeamId() == INDEX_NONE) { return false; }
  const int32 Expected = Round == 3 ? 1 : (Player == PC->PlayerState ? (bHost ? 1 : 2) : (bHost ? 2 : 1));
  if (PS->GetTeamId() != Expected) { Fail(TEXT("team selection/replication mismatch")); return false; }
 }
 if (Humans != 2) { return false; }
 const auto* Inventory = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
 if (!Inventory || Inventory->GetSlotCapacity() != 20) { return false; }
 if (Map.Id.StartsWith(TEXT("TopDown")))
 {
  const auto& Clock = GS->GetRoomRoundClock();
  if (!Clock.bPlaying || Clock.ServerEndTime <= GS->GetServerWorldTimeSeconds()) { return false; }
  bool bNativeClockChecked = false;
  for (auto* Component : GS->GetComponents())
  {
   auto* Function = Component ? Component->FindFunction(TEXT("GetRoundTimeRemaining")) : nullptr;
   auto* Seconds = Function ? FindFProperty<FNumericProperty>(Function, TEXT("SecondsRemaining")) : nullptr;
   if (!Seconds || !Seconds->IsFloatingPoint()) { continue; }
   FStructOnScope Params(Function);
   Component->ProcessEvent(Function, Params.GetStructMemory());
   const double Remaining = Seconds->GetFloatingPointPropertyValue(Seconds->ContainerPtrToValuePtr<void>(Params.GetStructMemory()));
   // Invoke the exact getter used by W_RoundTimer, including its IsPlaying gate.
   if (Remaining <= 0 || FMath::Abs(Remaining - (Clock.ServerEndTime - GS->GetServerWorldTimeSeconds())) > 0.2) { return false; }
   bNativeClockChecked = true;
  }
  if (!bNativeClockChecked) { Fail(TEXT("native TopDown HUD clock getter missing")); return false; }
  if (bHost && !Has(TEXT("ServerRoundEnd"))) { Signal(TEXT("ServerRoundEnd"), FString::Printf(TEXT("%.6f"), Clock.ServerEndTime)); }
  FString EndTime;
  if (!FFileHelper::LoadFileToString(EndTime, *(Directory / FString::Printf(TEXT("%d_ServerRoundEnd"), Round)))) { return false; }
  if (FMath::Abs(FCString::Atod(*EndTime) - Clock.ServerEndTime) > 0.01) { Fail(TEXT("TopDown end time differs between peers")); return false; }
  if (!bClockVerified)
  {
   UE_LOG(LogTemp, Display, TEXT("ROOM_MAP CLOCK role=%s map=%s nativeRemaining=%.2f replicatedEnd=%.2f"), bHost ? TEXT("Host") : TEXT("Client"), *Map.Id, Clock.ServerEndTime - GS->GetServerWorldTimeSeconds(), Clock.ServerEndTime);
   bClockVerified = true;
  }
 }
 return true;
}
bool ULyraRoomMapsTest::Probe(ALyraPlayerController* PC)
{
 if (!CheckWorld(PC)) { return false; }
 const auto& Map = LyraRoomMaps::All()[Round];
 const bool bArena = Map.Id.StartsWith(TEXT("TopDown"));
 const double Now = FPlatformTime::Seconds();
 auto* ASC = PC->GetLyraAbilitySystemComponent();
 auto* Inventory = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
 if (!ASC) { return false; }
 if (ProbeStep == 0)
 {
  if (!bRoomShot)
  {
   if (const auto* Loading = GetWorld()->GetGameInstance()->GetSubsystem<ULoadingScreenManager>(); Loading && Loading->GetLoadingScreenDisplayStatus()) { ProbeAt = Now; return false; }
   if (!PC->GetRoomScreen() || !PC->GetRoomScreen()->IsActivated()) { PC->ToggleRoomMenu(); ProbeAt = Now; return false; }
   // CommonUI animates the layer after activation. Capture only after it settles.
   if (Now - ProbeAt < 2) { return false; }
   FScreenshotRequest::RequestScreenshot(Directory / FString::Printf(TEXT("%s_%sRoom.png"), *Map.Id, bHost ? TEXT("Host") : TEXT("Client")), true, false);
   bRoomShot = true; ProbeAt = Now; return false;
  }
  if (Now - ProbeAt < 1) { return false; }
  if (auto* Screen = PC->GetRoomScreen(); Screen && Screen->IsActivated()) { Screen->DeactivateWidget(); }
  if (Inventory->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 0) { Fail(TEXT("items survived room/map transition")); return false; }
  PC->ServerChooseRoomTeam(PC->GetLyraPlayerState()->GetTeamId() == 1 ? 2 : 1);
  StartPosition = PC->GetPawn()->GetActorLocation(); ProbeAt = Now; ++ProbeStep; return false;
 }
 if (ProbeStep == 1)
 {
  const double Elapsed = Now - ProbeAt;
  // Original player starts can face a corner. Try all four directions before
  // rejecting locomotion, instead of requiring one arbitrary direction to be clear.
  const FVector Directions[] = {FVector::ForwardVector, FVector::RightVector, -FVector::ForwardVector, -FVector::RightVector};
  PC->GetPawn()->AddMovementInput(Directions[int32(Elapsed / 1.0) % 4], 1);
  Moved = FMath::Max(Moved, float(FVector::Dist(StartPosition, PC->GetPawn()->GetActorLocation())));
  if (Elapsed < 1.6) { return false; }
  if (Moved < 5) { if (Elapsed > 8) { Fail(TEXT("native pawn did not move after trying four directions")); } return false; }
  if (bArena && PC->PlayerCameraManager->GetCameraRotation().Pitch > -20) { Fail(TEXT("topdown camera missing")); return false; }
  bool bActivated = false;
  for (const auto& Spec : ASC->GetActivatableAbilities())
  {
   if (!Spec.Ability) { continue; }
   if (bArena ? Spec.Ability->GetClass()->GetName() == TEXT("GA_DropBomb_C") : Spec.Ability->IsA<ULyraGameplayAbility_RangedWeapon>())
   {
    FiredWeapon = Cast<ULyraRangedWeaponInstance>(Spec.SourceObject.Get());
    AmmoBefore = FiredWeapon.IsValid() ? FiredWeapon->GetCurrentAmmo() : 0;
    bActivated = ASC->TryActivateAbility(Spec.Handle);
    if (bActivated) { break; }
   }
  }
  if (!bActivated) { if (Elapsed > 15) { Fail(TEXT("native fire/bomb ability could not activate")); } return false; }
  ProbeAt = Now; ++ProbeStep; return false;
 }
 if (ProbeStep == 2)
 {
  if (bArena)
  {
   for (TActorIterator<AActor> It(GetWorld()); It; ++It) { if (It->GetClass()->GetName().StartsWith(TEXT("B_Bomb_"))) { bBombSeen = true; } }
  }
  if (Now - ProbeAt < 2) { return false; }
  if (bArena ? !bBombSeen : (!FiredWeapon.IsValid() || FiredWeapon->GetCurrentAmmo() >= AmmoBefore))
  { Fail(TEXT("native bomb spawn/fire ammo result missing")); return false; }
  FiredWeapon.Reset();
  Signal(bHost ? TEXT("HostGameplay") : TEXT("ClientGameplay"));
  UE_LOG(LogTemp, Display, TEXT("ROOM_MAP GAMEPLAY role=%s map=%s moved=%.1f ability=%s"), bHost ? TEXT("Host") : TEXT("Client"), *Map.Id, Moved, bArena ? TEXT("bomb") : TEXT("fire"));
  ++ProbeStep;
 }
 if (ProbeStep == 3)
 {
  if (Inventory->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 7) { return false; }
  PC->ToggleInventory(); ProbeAt = Now; ++ProbeStep; return false;
 }
 if (ProbeStep == 7) { return true; }
 auto* Screen = PC->GetInventoryScreen();
 if (!Screen || !Screen->IsActivated() || Screen->GetBoundInventory() != Inventory || Screen->GetDisplayedSlots().Num() != 20) { return false; }
 if (ProbeStep == 4)
 {
  const auto Slots = Inventory->GetSlotSnapshot();
  for (const auto& Slot : Slots)
  {
   if (Slot.Instance && Slot.Instance->GetItemDef() == ULyraInventoryTestItemDefinition::StaticClass())
   { Screen->DropOnSlot(Slot.SlotIndex, Slot.EntryId, Slot.StackCount, 19, false); ++ProbeStep; return false; }
  }
 }
 if (ProbeStep == 5)
 {
  const auto Slots = Inventory->GetSlotSnapshot();
  if (!Slots[19].Instance || Slots[19].StackCount != 7 || Screen->IsRequestPending()) { return false; }
  FScreenshotRequest::RequestScreenshot(Directory / FString::Printf(TEXT("%s_%sInventory.png"), *Map.Id, bHost ? TEXT("Host") : TEXT("Client")), true, false);
  ProbeAt = Now; ++ProbeStep; return false;
 }
 if (ProbeStep == 6 && Now - ProbeAt > 2)
 {
  Screen->CloseInventory(); Signal(bHost ? TEXT("HostChecked") : TEXT("ClientChecked"));
  UE_LOG(LogTemp, Display, TEXT("ROOM_MAP CHECK role=%s map=%s experience=%s team=%d inventoryMove=passed"), bHost ? TEXT("Host") : TEXT("Client"), *Map.Id, *Map.Experience, PC->GetLyraPlayerState()->GetTeamId());
  ++ProbeStep;
 }
 return ProbeStep == 7;
}
void ULyraRoomMapsTest::OnTick(float DeltaTime)
{
 if (bFinished) { return; }
 const double Now = FPlatformTime::Seconds();
 if (Now - Started > 1200 || Now - Changed > 150) { Fail(TEXT("timeout")); return; }
 if (!GetWorld() || !GetWorld()->GetGameInstance()) { return; }
 auto* PC = Cast<ALyraPlayerController>(GetWorld()->GetFirstPlayerController());
 if (!PC) { return; }
 auto* Rooms = GetWorld()->GetGameInstance()->GetSubsystem<ULyraRoomSubsystem>();
 const auto& Map = LyraRoomMaps::All()[Round];
 auto Menu = [&]() -> ULyraRoomScreen* { if (!PC->GetRoomScreen() || !PC->GetRoomScreen()->IsActivated()) { PC->ToggleRoomMenu(); } return PC->GetRoomScreen(); };
 if (bHost && Rooms->IsInRoom())
 {
  for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
  {
   auto* Player = Cast<ALyraPlayerController>(It->Get());
   if (Player && Player->GetLyraAbilitySystemComponent()) { Player->GetLyraAbilitySystemComponent()->SetLooseGameplayTagCount(FGameplayTag::RequestGameplayTag(TEXT("Gameplay.DamageImmunity")), 1); }
  }
 }
 if (bHost)
 {
  if (Step == 0 && Rooms->IsReady()) { auto* Screen = Menu(); if (!Screen) { return; } Screen->ChooseMap(Map.Id); Screen->ChooseTeam(1); Screen->HostRoom(); Advance(1); }
  else if (Step == 1 && Rooms->IsInRoom() && PC->GetPawn() && !Rooms->IsBusy()) { Signal(TEXT("HostReady")); Advance(2); }
  else if (Step == 2 && CheckWorld(PC))
  {
   // Allow the original shooter warmup to finish before manipulating its pawn/inventory.
   auto* Phases = GetWorld()->GetSubsystem<ULyraGamePhaseSubsystem>();
   if (Phases && Phases->IsPhaseActive(FGameplayTag::RequestGameplayTag(TEXT("ShooterGame.GamePhase.Warmup"), false))) { return; }
   if (Now - Changed < 5) { return; }
   Signal(TEXT("ProbeReady")); Advance(3);
  }
  else if (Step == 3)
  {
   if (Has(TEXT("HostGameplay")) && Has(TEXT("ClientGameplay")) && !Has(TEXT("Seeded")))
   {
    for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    { auto* Inv = It->Get()->FindComponentByClass<ULyraInventoryManagerComponent>(); if (!Inv || Inv->AddItemDefinitionWithResult(ULyraInventoryTestItemDefinition::StaticClass(), 7, false).AddedCount != 7) { Fail(TEXT("inventory probe seed")); return; } }
    Signal(TEXT("Seeded"));
   }
   if (Probe(PC) && Has(TEXT("ClientChecked"))) { Advance(4); }
  }
  else if (Step == 4 && Has(TEXT("Rejoined")) && CheckWorld(PC))
  {
   Signal(TEXT("ExpectDisconnect")); Menu()->LeaveRoom(); Advance(5);
  }
  else if (Step == 5 && Rooms->IsReady() && Has(TEXT("ClientReturned")))
  {
   Signal(TEXT("RoundPassed"));
   UE_LOG(LogTemp, Display, TEXT("ROOM_MAP PASS role=Host map=%s listJoin=passed directRejoin=passed"), *Map.Id);
   if (++Round == LyraRoomMaps::All().Num()) { bFinished = true; EndTest(0); return; }
   ProbeStep = 0; Moved = 0; bBombSeen = false; bRoomShot = false; bClockVerified = false; Advance(0);
  }
 }
 else
 {
  if (Step == 0 && Rooms->IsReady() && Has(TEXT("HostReady")))
  { auto* Screen = Menu(); if (!Screen) { return; } Screen->ChooseMap(TEXT("Inventory")); Screen->ChooseTeam(Round == 3 ? 1 : 2); Screen->SearchRooms(); Advance(1); }
  else if (Step == 1 && !Rooms->IsBusy() && Rooms->GetResults().Num() > 0)
  {
   if (!Rooms->GetResultMapLabel(0).EqualTo(Map.Label)) { Fail(TEXT("search result map label mismatch")); return; }
   Menu()->JoinRoom(0); Advance(2);
  }
  else if (Step == 2 && Has(TEXT("ProbeReady")) && CheckWorld(PC)) { Advance(3); }
  else if (Step == 3 && Probe(PC) && Has(TEXT("HostChecked"))) { Menu()->LeaveRoom(); Advance(4); }
  else if (Step == 4 && Rooms->IsReady()) { Menu()->JoinAddress(FString::Printf(TEXT("127.0.0.1:%d"), Port)); Advance(5); }
  else if (Step == 5 && CheckWorld(PC))
  {
   if (PC->FindComponentByClass<ULyraInventoryManagerComponent>()->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 0)
   { Fail(TEXT("rejoin retained prior player inventory")); return; }
   UE_LOG(LogTemp, Display, TEXT("ROOM_MAP EXPECT_DISCONNECT BEGIN map=%s"), *Map.Id);
   Signal(TEXT("Rejoined")); Advance(6);
  }
  else if (Step == 6 && Rooms->IsReady()) { UE_LOG(LogTemp, Display, TEXT("ROOM_MAP EXPECT_DISCONNECT END map=%s"), *Map.Id); Signal(TEXT("ClientReturned")); Advance(7); }
  else if (Step == 7 && Has(TEXT("RoundPassed")))
  {
   UE_LOG(LogTemp, Display, TEXT("ROOM_MAP PASS role=Client map=%s listJoin=passed directRejoin=passed"), *Map.Id);
   if (++Round == LyraRoomMaps::All().Num()) { bFinished = true; EndTest(0); return; }
   ProbeStep = 0; Moved = 0; bBombSeen = false; bRoomShot = false; bClockVerified = false; Advance(0);
  }
 }
}
