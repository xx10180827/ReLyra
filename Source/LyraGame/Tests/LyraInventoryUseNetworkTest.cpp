// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventorySupplyDefinitions.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraHealthSet.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "UnrealClient.h"
#include "Misc/Paths.h"
#include "GameplayEffect.h"

bool ULyraInventoryNetworkTest::TickInventoryUse(bool bHost)
{
	using Status = ELyraInventoryOperationStatus;
	ALyraInventoryPlayerController* Local = nullptr; ALyraInventoryPlayerController* Remote = nullptr;
	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		auto* PC = Cast<ALyraInventoryPlayerController>(It->Get());
		if (PC && PC->IsLocalController()) { Local = PC; } else if (PC) { Remote = PC; }
	}
	if (!Local || !Local->GetPawn() || (bHost && !Remote)) { return false; }
	auto* Inv = Local->FindComponentByClass<ULyraInventoryManagerComponent>();
	auto* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Local->GetPawn());
	const auto* Health = ASC ? ASC->GetSet<ULyraHealthSet>() : nullptr;
	if (!Health) { return false; }
	const auto Rifle = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C"));
	const auto Shotgun = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C"));
	const auto Medkit = ULyraMedkitDefinition::StaticClass(); const auto Ammo = ULyraRifleAmmoDefinition::StaticClass(); const auto Shells = ULyraShellsDefinition::StaticClass();
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	const auto Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
	const auto Fail = [&](const TCHAR* Reason) { UE_LOG(LogTemp, Error, TEXT("INVENTORY_USE FAIL role=%s step=%d reason=%s"), *ExpectedRole, UseStep, Reason); EndTest(1); return false; };
	if (UseStep == 0)
	{
		if (bHost)
		{
			for (auto* PC : {Local, Remote})
			{
				auto* Inventory = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
				if (Inventory->AddItemDefinitionWithResult(Medkit, 3).AddedCount != 3 || Inventory->AddItemDefinitionWithResult(Ammo, 80).AddedCount != 80
					|| Inventory->AddItemDefinitionWithResult(Shells, 5).AddedCount != 5) { return Fail(TEXT("seed supplies")); }
				auto* OwnerASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PC->GetPawn());
				if (!OwnerASC) { return Fail(TEXT("seed health")); }
				auto* Effect = NewObject<UGameplayEffect>(GetTransientPackage());
				Effect->DurationPolicy = EGameplayEffectDurationType::Instant;
				auto& Modifier = Effect->Modifiers.AddDefaulted_GetRef();
				Modifier.Attribute = ULyraHealthSet::GetHealthAttribute();
				Modifier.ModifierOp = EGameplayModOp::Override;
				Modifier.ModifierMagnitude = FScalableFloat(50.0f);
				OwnerASC->ApplyGameplayEffectSpecToSelf(FGameplayEffectSpec(Effect, OwnerASC->MakeEffectContext(), 1.0f));
			}
		}
		UseStep = 1; return false;
	}
	if (UseStep == 1 && UsePhase == 0 && (Inv->GetTotalItemCountByDefinition(Medkit) != 3 || Inv->GetTotalItemCountByDefinition(Ammo) != 80 || Health->GetHealth() != 50)) { return false; }
	const double Now = FPlatformTime::Seconds();
	if (UseStep <= 11)
	{
		if (UsePhase == 0) { Local->ToggleInventory(); UseAt = Now; UsePhase = 1; return false; }
		auto* Screen = Local->GetInventoryScreen();
		if (!Screen || !Screen->IsActivated() || Now - UseAt < 0.7) { return false; }
		if (UsePhase == 1)
		{
			const auto Slots = Inv->GetSlotSnapshot();
			const auto Select = [&](UClass* Def) { auto* Item = Inv->FindFirstItemStackByDefinition(Def); Screen->SelectSlot(Slots.IndexOfByPredicate([&](const auto& S) { return Item && S.Instance == Item; })); };
			if (UseStep == 8) { Screen->ActivateQuickSlot(0); }
			else if (UseStep == 10) { Screen->ActivateQuickSlot(1); }
			else { Select(UseStep <= 3 || UseStep == 11 ? Medkit : UseStep == 7 || UseStep == 9 ? Shells : Ammo); Screen->UseSelected(); }
			UseAt = Now; UsePhase = 2; return false;
		}
		if (Screen->IsRequestPending()) { return false; }
		const auto Expected = UseStep == 3 || UseStep == 11 ? Status::FullHealth : UseStep == 6 ? Status::ReserveFull : UseStep == 7 ? Status::WeaponMismatch : Status::Success;
		if (Inv->GetLastOperationResult().Status != Expected) { return Fail(TEXT("unexpected use result")); }
		auto* RifleItem = Inv->FindFirstItemStackByDefinition(Rifle); auto* ShellWeapon = Inv->FindFirstItemStackByDefinition(Shotgun);
		const int32 ExpectedRifle = UseStep < 4 ? 19 : UseStep == 4 ? 79 : 90;
		if (!RifleItem || !ShellWeapon || RifleItem->GetStatTagStackCount(Reserve) != ExpectedRifle
			|| ShellWeapon->GetStatTagStackCount(Reserve) != (UseStep < 9 ? 7 : 12)
			|| RifleItem->GetStatTagStackCount(Magazine) != 5 || ShellWeapon->GetStatTagStackCount(Magazine) != 0
			|| Health->GetHealth() != (UseStep == 1 ? 75 : 100)
			|| Inv->GetTotalItemCountByDefinition(Medkit) != (UseStep == 1 ? 2 : 1)
			|| Inv->GetTotalItemCountByDefinition(Ammo) != (UseStep < 4 ? 80 : UseStep == 4 ? 20 : 9)
			|| Inv->GetTotalItemCountByDefinition(Shells) != (UseStep < 9 ? 5 : 0)) { return Fail(TEXT("health, ammo or consumption mismatch")); }
		if (UsePhase == 2 && !ScreenshotDirectory.IsEmpty() && (UseStep == 2 || UseStep == 5))
		{
			FScreenshotRequest::RequestScreenshot(FPaths::Combine(ScreenshotDirectory, FString::Printf(TEXT("Use-%s-%d.png"), *ExpectedRole, UseStep)), true, false);
			UsePhase = 3; UseAt = Now; return false;
		}
		Screen->CloseInventory(); ++UseStep; UsePhase = 0; return false;
	}
	if (UseStep == 12 && !bHost)
	{
		FLyraInventoryOperationRequest Replay; Replay.RequestId = Inv->GetLastOperationResult().RequestId; Replay.Operation = ELyraInventoryOperation::Use;
		if (Inv->ExecuteInventoryOperation(Replay).Status != Status::NotAuthority) { return Fail(TEXT("client authoritative write")); }
		Inv->ServerRequestInventoryOperation(Replay); ++UseStep; return false;
	}
	if (!bHost && Inv->GetLastOperationResult().Status != Status::StaleRequest) { return false; }
	if (bHost)
	{
		auto* Other = Remote->FindComponentByClass<ULyraInventoryManagerComponent>();
		if (Other->GetLastOperationResult().Status != Status::StaleRequest || Other->GetTotalItemCountByDefinition(Ammo) != 9 || Other->GetTotalItemCountByDefinition(Medkit) != 1) { return false; }
	}
	bUseVerified = true;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_USE PASS role=%s health=100 medkits=1 rifle=5/90 ammo=9 shotgun=0/12 shells=0 full=denied mismatch=denied replay=denied"), *ExpectedRole);
	return true;
}
