// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryPlayerController.h"
#include "LyraInventoryManagerComponent.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Tests/LyraInventoryTestItemDefinition.h"
#include "LyraInventorySupplyDefinitions.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraHealthSet.h"
#include "GameFramework/Pawn.h"
#include "Character/LyraHealthComponent.h"
#include "GameplayEffect.h"
void ALyraInventoryPlayerController::ServerReadyForUseFixture_Implementation()
{
	if (FParse::Param(FCommandLine::Get(), TEXT("InventoryUseFixture"))) { bUseFixtureReady = true; }
}

void ALyraInventoryPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsLocalController() && !bUseFixtureRequested && FParse::Param(FCommandLine::Get(), TEXT("InventoryUseFixture")))
	{
		const auto* LocalHealth = GetPawn() ? ULyraHealthComponent::FindHealthComponent(GetPawn()) : nullptr;
		if (LocalHealth && LocalHealth->GetHealth() > 0)
		{
			// Client health initialization resets attributes. Seed only after that client is ready.
			bUseFixtureRequested = true;
			ServerReadyForUseFixture();
		}
	}
	if (HasAuthority() && bUseFixtureReady && !bUseFixtureSeeded && FParse::Param(FCommandLine::Get(), TEXT("InventoryUseFixture")))
	{
		auto* Inventory = FindComponentByClass<ULyraInventoryManagerComponent>();
		auto* ASC = GetPawn() ? UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetPawn()) : nullptr;
		const auto* Health = GetPawn() ? ULyraHealthComponent::FindHealthComponent(GetPawn()) : nullptr;
		if (Inventory && Inventory->GetSlotCapacity() == 20 && Inventory->GetAllItems().Num() > 0
			&& ASC && ASC->GetSet<ULyraHealthSet>() && Health && Health->GetHealth() > 0)
		{
			// Explicit acceptance fixture, once per controller; no changes to ordinary starts.
			bUseFixtureSeeded = true;
			FLyraInventoryItemSnapshot Weapon; Weapon.StackCount = 1;
			const auto Size = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineSize"));
			const auto Mag = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
			const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
			Weapon.ItemDef = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C"));
			Weapon.StatTags.Add(Size, 30); Weapon.StatTags.Add(Mag, 5); Weapon.StatTags.Add(Reserve, 19);
			bool bReady = Inventory->RestoreItemSnapshot(Weapon) != nullptr;
			Weapon.ItemDef = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C"));
			Weapon.StatTags.Reset(); Weapon.StatTags.Add(Size, 6); Weapon.StatTags.Add(Reserve, 7);
			bReady &= Inventory->RestoreItemSnapshot(Weapon) != nullptr;
			bReady &= Inventory->AddItemDefinition(ULyraMedkitDefinition::StaticClass(), 3) != nullptr;
			bReady &= Inventory->AddItemDefinition(ULyraRifleAmmoDefinition::StaticClass(), 80) != nullptr;
			bReady &= Inventory->AddItemDefinition(ULyraShellsDefinition::StaticClass(), 5) != nullptr;
			// Execute an effect so the listen host receives HealthSet/HealthComponent
			// notifications too; a direct base write only refreshed the remote HUD via OnRep.
			auto* Effect = NewObject<UGameplayEffect>(GetTransientPackage());
			Effect->DurationPolicy = EGameplayEffectDurationType::Instant;
			auto& Modifier = Effect->Modifiers.AddDefaulted_GetRef();
			Modifier.Attribute = ULyraHealthSet::GetHealthAttribute();
			Modifier.ModifierOp = EGameplayModOp::Override;
			Modifier.ModifierMagnitude = FScalableFloat(50.0f);
			ASC->ApplyGameplayEffectSpecToSelf(FGameplayEffectSpec(Effect, ASC->MakeEffectContext(), 1.0f));
			bReady &= Health->GetHealth() == 50.0f;
			if (bReady) { UE_LOG(LogTemp, Display, TEXT("INVENTORY_USE_FIXTURE ready controller=%s health=50 medkits=3 ammo=80 shells=5"), *GetName()); }
			else { UE_LOG(LogTemp, Error, TEXT("INVENTORY_USE_FIXTURE failed controller=%s"), *GetName()); }
		}
	}


	// Actor Tick also runs on remote controllers at the server; PlayerTick does not.
	// Explicit manual UI acceptance fixture; never grants items in ordinary gameplay.
	if (HasAuthority() && !bUIFixtureSeeded && FParse::Param(FCommandLine::Get(), TEXT("InventoryUIFixture")))
	{
		if (auto* Inventory = FindComponentByClass<ULyraInventoryManagerComponent>())
		{
			if (Inventory->GetSlotCapacity() == 20 && Inventory->GetAllItems().Num() > 0)
			{
				Inventory->AddItemDefinition(ULyraInventoryTestItemDefinition::StaticClass(), 13);
				bUIFixtureSeeded = true;
			}
		}
	}
}
