// Copyright Epic Games, Inc. All Rights Reserved.
#include "Player/LyraPlayerController.h"
#include "LyraInventoryManagerComponent.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "PrimaryGameLayout.h"
#include "CommonUIExtensions.h"
#include "Components/InputComponent.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "GameModes/LyraExperienceDefinition.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/World.h"
#include "GameFramework/PlayerInput.h"

void ALyraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindKey(EKeys::E, IE_Pressed, this, &ThisClass::PickupFocusedItem).bConsumeInput = false;
}

bool ALyraPlayerController::InputKey(const FInputKeyParams& Params)
{
	// Reserve I before Enhanced Input sees it: Explorer otherwise activates its
	// legacy inventory ability in addition to this shared backpack.
	if (IsLocalController() && Params.Key == EKeys::I)
	{
		if (Params.Event == IE_Pressed) { ToggleInventory(); }
		return true;
	}
	return Super::InputKey(Params);
}

void ALyraPlayerController::ToggleInventory()
{
	if (FParse::Param(FCommandLine::Get(), TEXT("InventoryTestUI")))
	{
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_UI_INPUT toggle local=%d open=%d"), IsLocalController(), InventoryScreen && InventoryScreen->IsActivated());
	}
	if (!IsLocalController()) { return; }
	if (InventoryScreen && InventoryScreen->IsActivated()) { InventoryScreen->CloseInventory(); return; }
	auto* Inventory = FindComponentByClass<ULyraInventoryManagerComponent>();
	auto* Layout = UPrimaryGameLayout::GetPrimaryGameLayout(this);
	if (!GetPawn() || !Inventory || Inventory->GetSlotCapacity() <= 0 || !Layout) { return; }
	const FGameplayTag MenuLayer = FGameplayTag::RequestGameplayTag(TEXT("UI.Layer.Menu"));
	// Never open beneath/above an existing pause or confirmation menu.
	auto* Layer = Layout->GetLayerWidget(MenuLayer);
	if (!Layer || Layer->GetActiveWidget()) { return; }
	InventoryPawn = GetPawn();
	InventoryScreen = Layout->PushWidgetToLayerStack<ULyraInventoryScreen>(MenuLayer, ULyraInventoryScreen::StaticClass());
}

void ALyraPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Experiences may inject their own inventory during activation. Only supply a
	// replicated empty inventory after activation when a playable pawn has none.
	if (HasAuthority() && GetPawn() && !FindComponentByClass<ULyraInventoryManagerComponent>())
	{
		const auto* GS = GetWorld()->GetGameState();
		const auto* Experience = GS ? GS->FindComponentByClass<ULyraExperienceManagerComponent>() : nullptr;
		if (Experience && Experience->IsExperienceLoaded() && Experience->GetCurrentExperienceChecked()->DefaultPawnData)
		{
			auto* Inventory = NewObject<ULyraInventoryManagerComponent>(this, TEXT("GameplayInventory"));
			Inventory->RegisterComponent();
		}
	}
	TickPickupInteraction();
	if (InventoryScreen && InventoryScreen->IsActivated() && GetPawn() != InventoryPawn.Get()) { ReleaseInventoryUI(); }
}

void ALyraPlayerController::ReleaseInventoryUI()
{
	if (InventoryScreen && InventoryScreen->IsActivated()) { InventoryScreen->CloseInventory(); }
	InventoryScreen = nullptr;
	InventoryPawn.Reset();
	RemovePickupPrompt();
	PendingPickupRequest = 0;
	PickupFeedbackUntil = 0;
}

void ALyraPlayerController::PreClientTravel(const FString& PendingURL, ETravelType TravelType, bool bIsSeamlessTravel)
{
	ReleaseInventoryUI();
	Super::PreClientTravel(PendingURL, TravelType, bIsSeamlessTravel);
}

void ALyraPlayerController::GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>& ActorList)
{
	ReleaseInventoryUI();
	if (HasAuthority())
	{
		if (auto* Inventory = FindComponentByClass<ULyraInventoryManagerComponent>())
		{
			// Consume all old-level ownership and equipment references before carrying
			// the controller. The new experience grants its own normal initial loadout.
			for (auto* Item : Inventory->GetAllItems()) { Inventory->RemoveItemInstance(Item); }
		}
	}
	Super::GetSeamlessTravelActorList(bToEntry, ActorList);
}
