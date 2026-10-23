// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"
#include "Weapons/LyraGameplayAbility_Reload.h"
#include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"

bool ULyraInventoryNetworkTest::TickWeaponSync()
{
	APlayerController* Local = GetWorld()->GetFirstPlayerController();
	if (!Local || !Local->IsLocalController() || !Local->GetPawn()) { return false; }
	auto* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Local->GetPawn());
	auto* Equipment = Local->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
	auto* Weapon = Equipment ? Equipment->GetFirstInstanceOfType<ULyraRangedWeaponInstance>() : nullptr;
	auto* Bar = Local->FindComponentByClass<ULyraQuickBarComponent>();
	if (!ASC || !Weapon || !Bar) { return false; }
	const double Now = FPlatformTime::Seconds();
	const auto Fail = [&](const TCHAR* Reason) { UE_LOG(LogTemp, Error, TEXT("WEAPON_SYNC FAIL role=%s step=%d ammo=%d/%d reason=%s"), *ExpectedRole, WeaponSyncStep, Weapon->GetCurrentAmmo(), Weapon->GetCurrentReserveAmmo(), Reason); EndTest(1); return false; };
	FGameplayAbilitySpecHandle Reload, Fire;
	for (const auto& Spec : ASC->GetActivatableAbilities())
	{
		if (Spec.SourceObject != Weapon || !Spec.Ability) { continue; }
		if (Spec.Ability->IsA<ULyraGameplayAbility_Reload>()) { Reload = Spec.Handle; }
		if (Spec.Ability->IsA<ULyraGameplayAbility_RangedWeapon>()) { Fire = Spec.Handle; }
	}
	if (!Reload.IsValid() || !Fire.IsValid()) { return false; }
	const auto Next = [&] { ++WeaponSyncStep; WeaponSyncPhase = 0; WeaponSyncAt = Now; };
	const auto AmmoIs = [&](int32 Mag, int32 Reserve) { return Weapon->GetCurrentAmmo() == Mag && Weapon->GetCurrentReserveAmmo() == Reserve; };
	const FGameplayTag FireTag = FGameplayTag::RequestGameplayTag(TEXT("Event.Movement.WeaponFire"));
	// Exhaust the real rifle, and later the real shotgun: each activation is one cartridge,
	// independent of the shotgun's pellet count. Wait for authoritative replicated values.
	if (WeaponSyncStep == 0 || WeaponSyncStep == 7 || WeaponSyncStep == 9)
	{
		const int32 Count = WeaponSyncStep == 0 ? 23 : WeaponSyncStep == 7 ? 6 : 1;
		const int32 Reserve = WeaponSyncStep == 7 ? 1 : 0;
		if (WeaponSyncPhase == 1)
		{
			if (Now - WeaponSyncAt < 0.8) { return false; }
			if (!AmmoIs(Count - WeaponSyncShots, Reserve)) { if (Now - WeaponSyncAt < 4) { return false; } return Fail(TEXT("shot consumption not exactly one")); }
			if (ASC->HasMatchingGameplayTag(FireTag)) { if (Now - WeaponSyncAt < 4) { return false; } return Fail(TEXT("firing tag remained after shot settled")); }
			WeaponSyncPhase = 0;
		}
		if (WeaponSyncShots == Count)
		{
			if (ASC->TryActivateAbility(Fire)) { return Fail(TEXT("empty magazine fired")); }
			if (Reserve == 0 && ASC->TryActivateAbility(Reload)) { return Fail(TEXT("empty reserve reloaded")); }
			WeaponSyncShots = 0; Next(); return false;
		}
		if (!ASC->TryActivateAbility(Fire)) { if (Now - WeaponSyncAt < 4) { return false; } return Fail(TEXT("loaded weapon cannot fire")); }
		if (ASC->FindAbilitySpecFromHandle(Fire)->IsActive() && !ASC->HasMatchingGameplayTag(FireTag)) { return Fail(TEXT("active fire missing movement tag")); }
		++WeaponSyncShots; WeaponSyncPhase = 1; WeaponSyncAt = Now; return false;
	}
	// Switch to shotgun, cancel its reload by switching away, then return to it.
	if (WeaponSyncStep == 1 || WeaponSyncStep == 3 || WeaponSyncStep == 5)
	{
		const int32 Slot = WeaponSyncStep == 3 ? 1 : 0;
		if (WeaponSyncPhase == 0) { Bar->SetActiveSlotIndex(Slot); WeaponSyncPhase = 1; WeaponSyncAt = Now; return false; }
		if (Now - WeaponSyncAt < 0.8 || Bar->GetActiveSlotIndex() != Slot || Weapon->GetInstigator() != Bar->GetActiveSlotItem()) { return false; }
		Next(); return false;
	}
	if (WeaponSyncStep == 2)
	{
		if (WeaponSyncPhase == 0)
		{
			if (!AmmoIs(0, 7)) { return Fail(TEXT("initial shotgun changed")); }
			if (!Local->HasAuthority() && (Weapon->ReloadAmmo() != 0 || !AmmoIs(0, 7))) { return Fail(TEXT("client transferred persistent ammo")); }
			if (!ASC->TryActivateAbility(Reload)) { return Fail(TEXT("shotgun reload start")); }
			WeaponSyncPhase = 1; WeaponSyncAt = Now; return false;
		}
		if (Now - WeaponSyncAt < 0.4) { return false; }
		Next(); return false;
	}
	if (WeaponSyncStep == 4)
	{
		if (Now - WeaponSyncAt < 3) { return false; }
		auto* Shotgun = Bar->GetSlots()[0];
		if (!Shotgun || Shotgun->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"))) != 0
			|| Shotgun->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"))) != 7) { return Fail(TEXT("switch-cancelled reload transferred ammo")); }
		Next(); return false;
	}
	if (WeaponSyncStep == 6 || WeaponSyncStep == 8)
	{
		if (WeaponSyncPhase == 0)
		{
			if (!ASC->TryActivateAbility(Reload)) { return Fail(TEXT("finite shotgun reload failed")); }
			WeaponSyncPhase = 1; WeaponSyncAt = Now; return false;
		}
		if (Now - WeaponSyncAt < Weapon->GetReloadTime() + 1.5) { return false; }
		if (ASC->FindAbilitySpecFromHandle(Reload)->IsActive() || !AmmoIs(WeaponSyncStep == 6 ? 6 : 1, WeaponSyncStep == 6 ? 1 : 0)) { return Fail(TEXT("finite reload conservation")); }
		if (WeaponSyncStep == 6 && ASC->TryActivateAbility(Reload)) { return Fail(TEXT("full magazine reload accepted")); }
		Next(); return false;
	}
	if (!bObservedRemoteReload) { return Fail(TEXT("observer never saw replicated reload montage")); }
	bWeaponSyncVerified = true;
	UE_LOG(LogTemp, Display, TEXT("WEAPON_SYNC PASS role=%s rifle=0/0 shotgun=0/0 shots=30 switchCancel=preserved remoteReload=seen authority=passed fireTagCleanup=passed"), *ExpectedRole);
	return true;
}
