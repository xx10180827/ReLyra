// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"
#include "Weapons/LyraGameplayAbility_Reload.h"
#include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"

bool ULyraInventoryNetworkTest::TickInventoryReload()
{
	APlayerController* Local = nullptr;
	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It) { if (It->Get()->IsLocalController()) { Local = It->Get(); break; } }
	if (!Local || !Local->GetPawn()) { return false; }
	auto* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Local->GetPawn());
	auto* Equipment = Local->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
	auto* Weapon = Equipment ? Equipment->GetFirstInstanceOfType<ULyraRangedWeaponInstance>() : nullptr;
	if (!ASC || !Weapon) { return false; }
	FGameplayAbilitySpecHandle Reload, Fire;
	for (const auto& Spec : ASC->GetActivatableAbilities())
	{
		if (Spec.SourceObject != Weapon || !Spec.Ability) { continue; }
		if (Spec.Ability->IsA<ULyraGameplayAbility_Reload>()) { Reload = Spec.Handle; }
		if (Spec.Ability->IsA<ULyraGameplayAbility_RangedWeapon>()) { Fire = Spec.Handle; }
	}
	const auto Fail = [&](const TCHAR* Reason)
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_RELOAD FAIL role=%s step=%d ammo=%d/%d reason=%s"), *ExpectedRole, ReloadStep, Weapon->GetCurrentAmmo(), Weapon->GetCurrentReserveAmmo(), Reason);
		EndTest(1); return false;
	};
	if (!Reload.IsValid() || !Fire.IsValid()) { return Fail(TEXT("real rifle abilities missing")); }
	const double Now = FPlatformTime::Seconds();
	if (ReloadStep == 0)
	{
		if (Weapon->GetCurrentAmmo() != 5 || Weapon->GetCurrentReserveAmmo() != 19) { return Fail(TEXT("unexpected initial rifle state")); }
		if (!ASC->TryActivateAbility(Reload)) { return Fail(TEXT("reload did not start")); }
		ReloadAt = Now; ++ReloadStep; return false;
	}
	if (ReloadStep == 1)
	{
		if (Now - ReloadAt < 0.4) { return false; }
		if (!ASC->FindAbilitySpecFromHandle(Reload)->IsActive()) { return Fail(TEXT("reload ended before interruption")); }
		if (!ASC->TryActivateAbility(Fire)) { return Fail(TEXT("fire could not interrupt reload")); }
		ReloadAt = Now; ++ReloadStep; return false;
	}
	if (ReloadStep == 2)
	{
		if (Now - ReloadAt < Weapon->GetReloadTime() + 0.8) { return false; }
		if (ASC->FindAbilitySpecFromHandle(Reload)->IsActive() || Weapon->GetCurrentAmmo() != 4 || Weapon->GetCurrentReserveAmmo() != 19)
		{
			return Fail(TEXT("interrupted reload changed ammo after its old deadline"));
		}
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_RELOAD_CANCEL role=%s magazine=4 reserve=19 oldDeadline=passed"), *ExpectedRole);
		if (!ASC->TryActivateAbility(Reload)) { return Fail(TEXT("reload could not restart")); }
		ReloadAt = Now; ++ReloadStep; return false;
	}
	if (Now - ReloadAt < Weapon->GetReloadTime() + 0.8) { return false; }
	if (ASC->FindAbilitySpecFromHandle(Reload)->IsActive() || Weapon->GetCurrentAmmo() != 23 || Weapon->GetCurrentReserveAmmo() != 0)
	{
		return Fail(TEXT("normal reload did not transfer exactly nineteen rounds"));
	}
	bReloadVerified = true;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_RELOAD PASS role=%s cancelled=4/19 normal=23/0 conserved=23"), *ExpectedRole);
	return true;
}
