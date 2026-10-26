// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomLifecycleTest.h"
#include "UI/Rooms/LyraRoomSubsystem.h"
#include "UI/Rooms/LyraRoomMaps.h"
#include "UI/Rooms/LyraRoomScreen.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Player/LyraPlayerController.h"
#include "Player/LyraPlayerState.h"
#include "Character/LyraHealthComponent.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystem/Phases/LyraGamePhaseSubsystem.h"
#include "GameModes/LyraGameState.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "GameModes/LyraExperienceDefinition.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Inventory/LyraInventorySupplyDefinitions.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "GameFramework/Pawn.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "UnrealClient.h"

void ULyraRoomLifecycleTest::Signal(const FString& Name)
{ FFileHelper::SaveStringToFile(TEXT("ok"), *(Directory / FString::Printf(TEXT("%d_%s"), Round, *Name))); }
bool ULyraRoomLifecycleTest::Has(const FString& Name) const
{ return IFileManager::Get().FileExists(*(Directory / FString::Printf(TEXT("%d_%s"), Round, *Name))); }
void ULyraRoomLifecycleTest::Advance(int32 Next)
{ Step = Next; Changed = FPlatformTime::Seconds(); UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE role=%s map=%s step=%d"), *Role, *LyraRoomMaps::All()[Round].Id, Step); }
void ULyraRoomLifecycleTest::Fail(const TCHAR* Why)
{ bFinished = true; UE_LOG(LogTemp, Error, TEXT("ROOM_LIFE FAIL role=%s round=%d step=%d reason=%s"), *Role, Round, Step, Why); EndTest(1); }
void ULyraRoomLifecycleTest::OnInit()
{
 bHost = FParse::Param(FCommandLine::Get(), TEXT("RoomTestHost"));
 bIntruder = FParse::Param(FCommandLine::Get(), TEXT("RoomTestIntruder"));
 bCrash = FParse::Param(FCommandLine::Get(), TEXT("RoomTestCrash"));
 if (bCrash) { Round = 4; }
 if (FParse::Param(FCommandLine::Get(), TEXT("RoomTestReconnect"))) { Step = 4; }
 Role = bHost ? TEXT("Host") : bIntruder ? TEXT("Intruder") : TEXT("Client");
 FParse::Value(FCommandLine::Get(), TEXT("RoomTestDir="), Directory);
 FParse::Value(FCommandLine::Get(), TEXT("port="), Port);
 Started = Changed = FPlatformTime::Seconds();
 if (Directory.IsEmpty()) { Fail(TEXT("missing report directory")); }
}
FString ULyraRoomLifecycleTest::InventoryState(ALyraPlayerController* PC) const
{
 FString Result;
 const auto* Inv = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
 if (!Inv) { return Result; }
 for (const auto& Slot : Inv->GetSlotSnapshot())
 {
  if (!Slot.Instance) { continue; }
  Result += FString::Printf(TEXT("%d:%s:%s:%d"), Slot.SlotIndex, *Slot.EntryId.ToString(), *GetPathNameSafe(Slot.Instance->GetItemDef()), Slot.StackCount);
  for (const auto* TagName : {TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"), TEXT("Lyra.ShooterGame.Weapon.SpareAmmo")})
  { Result += FString::Printf(TEXT("/%s=%d"), TagName, Slot.Instance->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TagName))); }
  Result += TEXT(";");
 }
 if (const auto* Bar = PC->FindComponentByClass<ULyraQuickBarComponent>())
 {
  Result += FString::Printf(TEXT("active=%d;"), Bar->GetActiveSlotIndex());
  for (const auto* Item : Bar->GetSlots())
  {
   const auto Slots = Inv->GetSlotSnapshot();
   const auto* View = Slots.FindByPredicate([Item](const auto& S) { return Item && S.Instance == Item; });
   Result += View ? View->EntryId.ToString() : TEXT("empty");
  }
 }
 return Result;
}
bool ULyraRoomLifecycleTest::Seed(ALyraPlayerController* PC, int32 Count)
{
 auto* Inv = PC ? PC->FindComponentByClass<ULyraInventoryManagerComponent>() : nullptr;
 if (!Inv || !PC->GetPawn()) { return false; }
 if (Inv->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 0) { Fail(TEXT("old inventory survived join")); return false; }
 if (!Inv->AddItemDefinition(ULyraInventoryTestItemDefinition::StaticClass(), Count) || !Inv->AddItemDefinition(ULyraRifleAmmoDefinition::StaticClass(), 17)) { Fail(TEXT("seed inventory")); return false; }
 if (auto* Equipment = PC->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>())
 {
  if (auto* Weapon = Equipment->GetFirstInstanceOfType<ULyraRangedWeaponInstance>()) { Weapon->ConsumeAmmo(3); }
 }
 if (auto* Bar = PC->FindComponentByClass<ULyraQuickBarComponent>(); Bar && Bar->GetActiveSlotIndex() == 0 && Bar->GetSlots().Num() > 1)
 {
  auto* Item = Bar->RemoveItemFromSlot(0);
  Bar->AddItemToSlot(1, Item); Bar->SetActiveSlotIndex(1);
 }
 return true;
}
bool ULyraRoomLifecycleTest::Capture(ALyraPlayerController* PC)
{
 auto* Inv = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
 const auto* Health = ULyraHealthComponent::FindHealthComponent(PC->GetPawn());
 if (!Inv || !Health || Health->IsDeadOrDying() || Inv->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != (bHost ? 11 : 7)
  || Inv->GetTotalItemCountByDefinition(ULyraRifleAmmoDefinition::StaticClass()) != 17) { return false; }
 PC->ToggleInventory();
 auto* Screen = PC->GetInventoryScreen();
 if (!Screen || !Screen->IsActivated() || Screen->GetBoundInventory() != Inv) { return false; }
 BeforePawn = PC->GetPawn(); BeforeComponent = Inv; BeforeInventory = InventoryState(PC);
 if (auto* Bar = PC->FindComponentByClass<ULyraQuickBarComponent>()) { BeforeActive = Bar->GetActiveSlotIndex(); }
 UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE CAPTURE role=%s state=%s"), *Role, *BeforeInventory);
 Signal(Role + TEXT("Captured")); return true;
}
void ULyraRoomLifecycleTest::ObserveDeath(ALyraPlayerController* PC)
{
 if (BeforeInventory.IsEmpty() || bRespawned) { return; }
 auto* Health = ULyraHealthComponent::FindHealthComponent(PC->GetPawn());
 if (Health && Health->IsDeadOrDying())
 {
  if (!bSawDeath)
  {
   DeathAt = FPlatformTime::Seconds();
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE DEATH role=%s pawn=%s"), *Role, *GetNameSafe(PC->GetPawn()));
   if (auto* Inventory = PC->FindComponentByClass<ULyraInventoryManagerComponent>())
   {
    for (const auto& Slot : Inventory->GetSlotSnapshot())
    {
     if (Slot.Instance)
     { Inventory->RequestInventoryOperation(ELyraInventoryOperation::Move, Slot.SlotIndex, 19, 0); break; }
    }
   }
  }
  bSawDeath = true;
  // The controller tick must close the old menu, including the death animation interval.
  if (auto* Screen = PC->GetInventoryScreen(); Screen && Screen->IsActivated()) { return; }
  PC->ToggleInventory();
  if (PC->GetInventoryScreen() && PC->GetInventoryScreen()->IsActivated()) { Fail(TEXT("inventory reopened while dying")); return; }
  if (!Has(Role + TEXT("DeathLocked"))) { PC->ServerChooseRoomTeam(2); Signal(Role + TEXT("DeathLocked")); }
 }
 // TopDown's original ability set has death but no auto-respawn. Preserve elimination.
 if ((Round == 2 || Round == 3) && bSawDeath && !PC->GetPawn() && FPlatformTime::Seconds() - DeathAt > 12)
 {
  if (BeforeComponent.Get() != PC->FindComponentByClass<ULyraInventoryManagerComponent>() || InventoryState(PC) != BeforeInventory
   || BeforeComponent->GetLastOperationResult().Status != ELyraInventoryOperationStatus::NotAllowed)
  { Fail(TEXT("elimination lost inventory or accepted a death operation")); return; }
  PC->ToggleInventory(); PC->ServerChooseRoomTeam(2);
  if ((PC->GetInventoryScreen() && PC->GetInventoryScreen()->IsActivated()) || PC->GetLyraPlayerState()->GetTeamId() != 1)
  { Fail(TEXT("elimination reopened UI or unlocked team")); return; }
  bRespawned = true; Signal(Role + TEXT("Respawned"));
  UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE ELIMINATED role=%s map=%s inventory=preserved pawn=none team=locked UI=closed"), *Role, *LyraRoomMaps::All()[Round].Id);
  return;
 }
 if (!bSawDeath || !PC->GetPawn() || PC->GetPawn() == BeforePawn.Get() || !Health || Health->IsDeadOrDying()) { return; }
 if (BeforeComponent.Get() != PC->FindComponentByClass<ULyraInventoryManagerComponent>()) { Fail(TEXT("inventory component replaced on death")); return; }
 if (BeforeComponent->GetLastOperationResult().Status != ELyraInventoryOperationStatus::NotAllowed)
 { Fail(TEXT("death inventory request was not rejected")); return; }
 const FString After = InventoryState(PC);
 if (!bStateVerified && After != BeforeInventory)
 {
  UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE DIFFERENCE before=%s after=%s"), *BeforeInventory, *After);
  Fail(TEXT("inventory/quickbar/item state changed on respawn")); return;
 }
 if (BeforeActive >= 0)
 {
  auto* Bar = PC->FindComponentByClass<ULyraQuickBarComponent>();
  auto* Equipment = PC->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
  auto* Weapon = Equipment ? Equipment->GetFirstInstanceOfType<ULyraRangedWeaponInstance>() : nullptr;
  if (!Bar || !Weapon || Weapon->GetInstigator() != Bar->GetActiveSlotItem() || Weapon->GetPawn() != PC->GetPawn()) { return; }
  if (!bStateVerified && Weapon->GetCurrentAmmo() != Bar->GetActiveSlotItem()->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo")))) { Fail(TEXT("restored weapon ammo mismatch")); return; }
 }
 bStateVerified = true;
 if (PC->GetLyraPlayerState()->GetTeamId() != 1) { Fail(TEXT("death unlocked team")); return; }
 if (RespawnAt == 0) { RespawnAt = FPlatformTime::Seconds(); RespawnPosition = PC->GetPawn()->GetActorLocation(); }
 const double Elapsed = FPlatformTime::Seconds() - RespawnAt;
 const FVector Directions[] = {FVector::ForwardVector, FVector::RightVector, -FVector::ForwardVector, -FVector::RightVector};
 if (RespawnUIAt == 0) { PC->GetPawn()->AddMovementInput(Directions[int32(Elapsed) % 4], 1); }
 RespawnMoved = FMath::Max(RespawnMoved, float(FVector::Dist(RespawnPosition, PC->GetPawn()->GetActorLocation())));
 if (Elapsed < 1.5) { return; }
 // The original spawn effect temporarily owns a movement lock on the listen host.
 // Allow that ability to finish; a persistent lock still fails the test.
 if (PC->IsMoveInputIgnored()) { if (Elapsed > 15) { Fail(TEXT("movement still blocked after respawn")); } return; }
 if (RespawnMoved < 5) { if (Elapsed > 8) { Fail(TEXT("new pawn cannot move")); } return; }
 if (BeforeActive >= 0 && !bFired)
 {
  auto* ASC = PC->GetLyraAbilitySystemComponent();
  for (const auto& Spec : ASC->GetActivatableAbilities())
  {
   if (!Spec.Ability || !Spec.Ability->IsA<ULyraGameplayAbility_RangedWeapon>()) { continue; }
   RestoredWeapon = Cast<ULyraRangedWeaponInstance>(Spec.SourceObject.Get());
   if (!RestoredWeapon.IsValid() || RestoredWeapon->GetPawn() != PC->GetPawn()) { continue; }
   AmmoBeforeFire = RestoredWeapon->GetCurrentAmmo();
   if (ASC->TryActivateAbility(Spec.Handle)) { bFired = true; FiredAt = FPlatformTime::Seconds(); break; }
  }
  if (!bFired && Elapsed > 15) { Fail(TEXT("restored weapon cannot fire")); }
  return;
 }
 if (BeforeActive >= 0)
 {
  if (FPlatformTime::Seconds() - FiredAt < 2) { return; }
  if (!RestoredWeapon.IsValid() || RestoredWeapon->GetCurrentAmmo() >= AmmoBeforeFire) { Fail(TEXT("restored fire did not consume ammo")); return; }
 }
 // Preservation was checked before this deliberate post-respawn shot. Subsequent
 // peer-exit checks compare against the resulting legitimate inventory state.
 BeforeInventory = InventoryState(PC);
 if (RespawnUIAt == 0) { PC->ToggleInventory(); RespawnUIAt = FPlatformTime::Seconds(); }
 if (!PC->GetInventoryScreen() || !PC->GetInventoryScreen()->IsActivated() || PC->GetInventoryScreen()->GetBoundInventory() != BeforeComponent.Get()) { return; }
 if (FPlatformTime::Seconds() - RespawnUIAt < 1) { return; }
 FScreenshotRequest::RequestScreenshot(Directory / FString::Printf(TEXT("%s_%sRespawn.png"), *LyraRoomMaps::All()[Round].Id, *Role), true, false);
 bRespawned = true; Signal(Role + TEXT("Respawned"));
 UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE RESPAWN role=%s map=%s inventory=preserved equipment=restored team=locked UI=rebound moved=%.1f fire=passed"), *Role, *LyraRoomMaps::All()[Round].Id, RespawnMoved);
}
void ULyraRoomLifecycleTest::NextRound()
{
 UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE PASS role=%s map=%s"), *Role, *LyraRoomMaps::All()[Round].Id);
 if (++Round == LyraRoomMaps::All().Num()) { bFinished = true; EndTest(0); return; }
 BeforeInventory.Reset(); BeforePawn.Reset(); BeforeComponent.Reset(); DepartedPlayer.Reset();
 bSawDeath = bRespawned = false; BeforeActive = -1; RespawnAt = DeathAt = RespawnUIAt = 0; Advance(0);
 bStateVerified = bFired = false; RespawnMoved = 0; FiredAt = 0; RestoredWeapon.Reset();
}
void ULyraRoomLifecycleTest::OnTick(float DeltaTime)
{
 if (bFinished) { return; }
 const double Now = FPlatformTime::Seconds();
 if (Now - Started > 2100 || Now - Changed > 300) { Fail(TEXT("timeout")); return; }
 if (!GetWorld() || !GetWorld()->GetGameInstance()) { return; }
 auto* PC = Cast<ALyraPlayerController>(GetWorld()->GetFirstPlayerController());
 if (!PC) { return; }
 auto* Rooms = GetWorld()->GetGameInstance()->GetSubsystem<ULyraRoomSubsystem>();
 const auto& Map = LyraRoomMaps::All()[Round];
 auto* Inv = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
 auto* GS = GetWorld()->GetGameState<ALyraGameState>();
 auto* Exp = GS ? GS->FindComponentByClass<ULyraExperienceManagerComponent>() : nullptr;
 const bool bConnected = Rooms->IsInRoom() && !Rooms->IsBusy() && PC->GetPawn() && Inv && Exp && Exp->IsExperienceLoaded();
 if (bConnected && (GetWorld()->GetOutermost()->GetName() != Map.Package || Exp->GetCurrentExperienceChecked()->GetClass()->GetName() != Map.Experience + TEXT("_C"))) { Fail(TEXT("original experience changed")); return; }
 if (bIntruder)
 {
  if (Rooms->IsInRoom()) { Fail(TEXT("third player admitted")); return; }
  if (Step == 0 && Rooms->IsReady() && Has(TEXT("FullReady")))
  { Rooms->Search(); Advance(10); }
  else if (Step == 10 && Rooms->IsReady())
  {
   if (Rooms->GetResults().Num() != 1 || Rooms->GetResults()[0].Players != 2)
   { Fail(TEXT("full room missing or discovery occupancy incorrect")); return; }
   const FString Address = Rooms->GetResults()[0].Address;
   Rooms->Join(0);
   if (Rooms->IsBusy() || !Rooms->GetStatus().ToString().Contains(TEXT("房间已满")))
   { Fail(TEXT("full room list join was not blocked")); return; }
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE full discovery and list rejection passed address=%s"), *Address);
   // Bypass the list deliberately: server admission must still reject the third player.
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE BEGIN")); Rooms->DirectJoin(Address); Advance(1);
  }
  else if (Step == 1 && Rooms->IsReady())
  {
   if (!Rooms->GetStatus().ToString().Contains(TEXT("房间已满"))) { Fail(TEXT("third player missing full feedback")); return; }
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE END")); Signal(TEXT("FullRejected")); Advance(2);
  }
  else if (Step == 2 && Has(TEXT("ClientRespawned")) && (Round == 2 || Round == 3))
  { UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE BEGIN")); Rooms->DirectJoin(FString::Printf(TEXT("127.0.0.1:%d"), Port)); Advance(3); }
  else if (Step == 3 && Rooms->IsReady())
  {
   if (!Rooms->GetStatus().ToString().Contains(TEXT("房间已满"))) { Fail(TEXT("eliminated player released human slot")); return; }
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE END")); Signal(TEXT("EliminatedFullRejected")); Advance(4);
  }
  else if ((Step == 2 || Step == 4) && Has(TEXT("RoundPassed"))) { NextRound(); }
  return;
 }
 if (bHost && Rooms->IsInRoom())
 {
  for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
  {
   auto* Player = Cast<ALyraPlayerController>(It->Get());
   if (Player && Player->GetLyraAbilitySystemComponent()) { Player->GetLyraAbilitySystemComponent()->SetLooseGameplayTagCount(FGameplayTag::RequestGameplayTag(TEXT("Gameplay.DamageImmunity")), 1); }
  }
 }
 ObserveDeath(PC);
 if (bFinished) { return; }
 ALyraPlayerController* Remote = nullptr;
 if (bHost) { for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It) { if (It->Get() != PC) { Remote = Cast<ALyraPlayerController>(It->Get()); } } }
 if (bHost)
 {
  if (Step == 0 && Rooms->IsReady()) { Rooms->SelectMap(Map.Id); Rooms->SelectTeam(1); Rooms->Host(); Advance(1); }
  else if (Step == 1 && bConnected && Now - Changed > 20)
  {
   auto* Phases = GetWorld()->GetSubsystem<ULyraGamePhaseSubsystem>();
   if (Phases && Phases->IsPhaseActive(FGameplayTag::RequestGameplayTag(TEXT("ShooterGame.GamePhase.Warmup"), false))) { return; }
   if (!Seed(PC, 11)) { return; }
   Signal(TEXT("HostReady")); Advance(2);
  }
  else if (Step == 2 && Has(TEXT("ClientJoined")) && Remote && Remote->GetPawn())
  { if (!Seed(Remote, 7)) { return; } DepartedPlayer = Remote; Signal(TEXT("Seeded")); Advance(3); }
  else if (Step == 3 && Has(TEXT("Seeded")))
  {
   if (!Has(TEXT("HostCaptured")) && !Capture(PC)) { return; }
   if (!Has(TEXT("ClientCaptured"))) { return; }
   Signal(TEXT("FullReady"));
   if (!Has(TEXT("FullRejected"))) { return; }
   if (!Remote || !ULyraHealthComponent::FindHealthComponent(Remote->GetPawn())) { return; }
   ULyraHealthComponent::FindHealthComponent(Remote->GetPawn())->DamageSelfDestruct(); Advance(4);
  }
  else if (Step == 4 && Has(TEXT("ClientRespawned")))
  {
   if ((Round == 2 || Round == 3) && !Has(TEXT("EliminatedFullRejected"))) { return; }
   ULyraHealthComponent::FindHealthComponent(PC->GetPawn())->DamageSelfDestruct(); Advance(5);
  }
  else if (Step == 5 && bRespawned)
  {
   if (PC->GetInventoryScreen() && PC->GetInventoryScreen()->IsActivated()) { PC->GetInventoryScreen()->CloseInventory(); }
   if (bCrash) { UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE BEGIN")); }
   Signal(TEXT("AllowLeave")); Advance(6);
  }
  else if (Step == 6 && Has(TEXT("ClientLeft")) && !Remote)
  {
   if (DepartedPlayer.IsValid()) { Fail(TEXT("departed controller remains alive")); return; }
   if (InventoryState(PC) != BeforeInventory) { Fail(TEXT("client exit changed host inventory")); return; }
   if (bCrash) { UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE END")); }
   Signal(TEXT("RejoinAllowed")); Advance(7);
  }
  else if (Step == 7 && Has(TEXT("Rejoined")) && Remote)
  {
   if (bCrash) { Signal(TEXT("KillHost")); UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE HOST_CRASH_READY")); Advance(9); }
   else { Rooms->Leave(); Advance(8); }
  }
  else if (Step == 8 && Rooms->IsReady() && Has(TEXT("ClientReturned")))
  { Signal(TEXT("RoundPassed")); NextRound(); }
 }
 else
 {
  if (Step == 0 && Rooms->IsReady() && Has(TEXT("HostReady")))
  { Rooms->SelectTeam(1); Rooms->DirectJoin(FString::Printf(TEXT("127.0.0.1:%d"), Port)); Advance(1); }
  else if (Step == 1 && bConnected)
  {
   if (Inv->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 0) { Fail(TEXT("late join inherited host inventory")); return; }
   Signal(TEXT("ClientJoined")); Advance(2);
  }
  else if (Step == 2 && Has(TEXT("Seeded")) && Capture(PC)) { Advance(3); }
  else if (Step == 3 && Has(TEXT("AllowLeave")) && bRespawned)
  {
   if (PC->GetInventoryScreen() && PC->GetInventoryScreen()->IsActivated()) { PC->GetInventoryScreen()->CloseInventory(); }
   if (bCrash) { Signal(TEXT("KillClient")); Advance(9); }
   else { Rooms->Leave(); Advance(4); }
  }
  else if (Step == 4 && Rooms->IsReady()) { Signal(TEXT("ClientLeft")); Advance(5); }
  else if (Step == 5 && Rooms->IsReady() && Has(TEXT("RejoinAllowed")))
  { Rooms->SelectTeam(2); Rooms->DirectJoin(FString::Printf(TEXT("127.0.0.1:%d"), Port)); Advance(6); }
  else if (Step == 6 && bConnected)
  {
   if (Inv->GetTotalItemCountByDefinition(ULyraInventoryTestItemDefinition::StaticClass()) != 0 || PC->GetLyraPlayerState()->GetTeamId() != 2) { Fail(TEXT("rejoin inventory/team initialization")); return; }
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE BEGIN")); Signal(TEXT("Rejoined")); Advance(7);
  }
  else if (Step == 7 && Rooms->IsReady())
  {
   if (!Rooms->GetStatus().ToString().Contains(TEXT("断开"))) { Fail(TEXT("host exit feedback missing")); return; }
   PC->ToggleRoomMenu();
   if (!PC->GetRoomScreen() || !PC->GetRoomScreen()->IsActivated()) { Fail(TEXT("returned menu unusable")); return; }
   PC->GetRoomScreen()->DeactivateWidget();
   UE_LOG(LogTemp, Display, TEXT("ROOM_LIFE EXPECT_FAILURE END")); Signal(TEXT("ClientReturned"));
   if (bCrash) { Signal(TEXT("RoundPassed")); NextRound(); }
   else { Advance(8); }
  }
  else if (Step == 8 && Has(TEXT("RoundPassed"))) { NextRound(); }
 }
}
