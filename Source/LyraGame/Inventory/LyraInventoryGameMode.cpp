// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryGameMode.h"
#include "LyraInventoryPlayerController.h"
#include "LyraInventorySupplyDefinitions.h"
#include "LyraWorldPickup.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/World.h"

#include "Kismet/GameplayStatics.h"

void ALyraInventoryGameSession::InitOptions(const FString& Options)
{
	Super::InitOptions(Options);
	// The direct-IP path must enforce the same limit as the advertised session.
	MaxPlayers = 2;
	MaxSpectators = 0;
	MaxSplitscreensPerConnection = 1;
}

ALyraInventoryGameMode::ALyraInventoryGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameSessionClass = ALyraInventoryGameSession::StaticClass();
	PlayerControllerClass = ALyraInventoryPlayerController::StaticClass();
}

void ALyraInventoryGameMode::InitGameState()
{
	Super::InitGameState();
	GameState->FindComponentByClass<ULyraExperienceManagerComponent>()->CallOrRegister_OnExperienceLoaded_LowPriority(
		FOnLyraExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::SpawnPickupStations));
}

void ALyraInventoryGameMode::SpawnPickupStations(const ULyraExperienceDefinition* Experience)
{
	// Runtime sources on the existing demonstration pedestals; no map binary rewrite.
	const TSubclassOf<ULyraInventoryItemDefinition> Definitions[] = {
		LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C")),
		LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C")),
		ULyraRifleAmmoDefinition::StaticClass(), ULyraShellsDefinition::StaticClass(), ULyraMedkitDefinition::StaticClass()
	};
	// Large ammo source deliberately exercises partial admission and a full backpack.
	const int32 Counts[] = {1, 1, 1250, 48, 12};
	for (int32 Index = 0; Index < UE_ARRAY_COUNT(Definitions); ++Index)
	{
		auto* Pickup = GetWorld()->SpawnActor<ALyraWorldPickup>(FVector(250, -600 + Index * 300, 85), FRotator::ZeroRotator);
		if (!Pickup || !Pickup->Initialize(Definitions[Index], Counts[Index]))
		{
			UE_LOG(LogTemp, Error, TEXT("Inventory pickup station %d initialization failed"), Index);
			if (Pickup) { Pickup->Destroy(); }
		}
	}
}

void ALyraInventoryGameMode::PreLogin(const FString& Options, const FString& Address,
	const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
	if (GetNumPlayers() >= 2)
	{
		ErrorMessage = TEXT("INVENTORY_ROOM_FULL");
	}
	else if (UGameplayStatics::HasOption(Options, TEXT("SpectatorOnly")))
	{
		ErrorMessage = TEXT("INVENTORY_SPECTATORS_DISABLED");
	}
}
