// Copyright Epic Games, Inc. All Rights Reserved.
#include "Player/LyraPlayerController.h"
#include "LyraInventoryManagerComponent.h"
#include "LyraInventoryItemDefinition.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Character/LyraHealthComponent.h"
#include "Input/CommonUIActionRouterBase.h"
#include "Engine/GameViewportClient.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "LoadingScreenManager.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"
#include "Styling/CoreStyle.h"

#define LOCTEXT_NAMESPACE "InventoryPickup"
bool ALyraPlayerController::CanUsePickupInput() const
{
	if (!IsLocalController() || !GetPawn() || !GetLocalPlayer() || (InventoryScreen && InventoryScreen->IsActivated())) { return false; }
	const auto* Loading = GetGameInstance()->GetSubsystem<ULoadingScreenManager>();
	if (Loading && Loading->GetLoadingScreenDisplayStatus()) { return false; }
	const auto* Health = ULyraHealthComponent::FindHealthComponent(GetPawn());
	if (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0)) { return false; }
	const auto* Router = GetLocalPlayer()->GetSubsystem<UCommonUIActionRouterBase>();
	return Router && Router->GetActiveInputMode() != ECommonInputMode::Menu;
}

void ALyraPlayerController::TickPickupInteraction()
{
	if (!IsLocalController()) { return; }
	const double Now = FPlatformTime::Seconds();
	if (PendingPickupRequest && Now - PickupRequestTime > 8)
	{
		PendingPickupRequest = 0; PickupFeedback = LOCTEXT("Timeout", "拾取结果尚未到达，请查看背包后重试"); PickupFeedbackUntil = Now + 4;
	}
	if (!CanUsePickupInput()) { FocusedPickup.Reset(); if (PickupPrompt) { PickupPrompt->SetVisibility(EVisibility::Collapsed); } return; }
	if (Now < NextPickupScan) { return; }
	NextPickupScan = Now + 0.1;
	FocusedPickup.Reset();
	FVector Eye; FRotator View; GetPlayerViewPoint(Eye, View);
	float BestScore = -1;
	for (TActorIterator<ALyraWorldPickup> It(GetWorld()); It; ++It)
	{
		if (It->CheckAccess(this) != ELyraPickupStatus::Success) { continue; }
		const float Dot = FVector::DotProduct((It->GetActorLocation() - Eye).GetSafeNormal(), View.Vector());
		if (Dot > 0.75f && Dot > BestScore) { BestScore = Dot; FocusedPickup = *It; }
	}
	if (!PickupPrompt && GetLocalPlayer()->ViewportClient)
	{
		const TWeakObjectPtr<ALyraPlayerController> WeakThis(this);
		PickupPrompt = SNew(SOverlay)
			+ SOverlay::Slot().HAlign(HAlign_Center).VAlign(VAlign_Bottom).Padding(16, 0, 16, 115)
			[SNew(SBorder).BorderImage(FCoreStyle::Get().GetBrush("WhiteBrush")).BorderBackgroundColor(FLinearColor(0.01f, 0.03f, 0.06f, 0.94f)).Padding(16)
			[SNew(STextBlock).Font(FCoreStyle::GetDefaultFontStyle("Bold", 19)).ColorAndOpacity(FLinearColor(0.15f, 0.9f, 1)).Justification(ETextJustify::Center)
			.Text_Lambda([WeakThis]
			{
				if (!WeakThis.IsValid()) { return FText(); }
				FString Text;
				if (const auto* Pickup = WeakThis->FocusedPickup.Get())
				{
					const auto& State = Pickup->GetPickupState();
					if (State.Definition) { Text = FString::Printf(TEXT("[ E ] 拾取  %s × %d"), *GetDefault<ULyraInventoryItemDefinition>(State.Definition)->DisplayName.ToString(), State.Count); }
				}
				if (FPlatformTime::Seconds() < WeakThis->PickupFeedbackUntil) { if (!Text.IsEmpty()) { Text += TEXT("\n"); } Text += WeakThis->PickupFeedback.ToString(); }
				return FText::FromString(Text);
			})]];
		GetLocalPlayer()->ViewportClient->AddViewportWidgetForPlayer(GetLocalPlayer(), PickupPrompt.ToSharedRef(), 15);
	}
	if (PickupPrompt) { PickupPrompt->SetVisibility(FocusedPickup.IsValid() || Now < PickupFeedbackUntil ? EVisibility::HitTestInvisible : EVisibility::Collapsed); }
}

void ALyraPlayerController::RemovePickupPrompt()
{
	if (PickupPrompt && GetLocalPlayer() && GetLocalPlayer()->ViewportClient) { GetLocalPlayer()->ViewportClient->RemoveViewportWidgetForPlayer(GetLocalPlayer(), PickupPrompt.ToSharedRef()); }
	PickupPrompt.Reset(); FocusedPickup.Reset();
}

void ALyraPlayerController::PickupFocusedItem()
{
	if (CanUsePickupInput() && FocusedPickup.IsValid() && !PendingPickupRequest) { RequestPickup(FocusedPickup.Get()); }
}

int64 ALyraPlayerController::RequestPickup(ALyraWorldPickup* Pickup)
{
	if (!IsLocalController() || !IsValid(Pickup) || NextPickupRequest == MAX_int64) { return 0; }
	const auto State = Pickup->GetPickupState();
	const int64 Id = ++NextPickupRequest;
	PendingPickupRequest = Id; PickupRequestTime = FPlatformTime::Seconds();
	ServerRequestPickup(Pickup, State.Id, State.Revision, Id);
	return Id;
}

void ALyraPlayerController::ServerRequestPickup_Implementation(ALyraWorldPickup* Pickup, FGuid Id, int32 Revision, int64 RequestId)
{
	FLyraPickupResult Result;
	if (RequestId <= 0 || RequestId <= LastServerPickupRequest) { Result.Status = ELyraPickupStatus::Stale; }
	else
	{
		LastServerPickupRequest = RequestId; // Even rejected requests consume their sequence.
		if (IsValid(Pickup) && Pickup->GetWorld() == GetWorld()) { Result = Pickup->TryPickup(this, Id, Revision); }
	}
	Result.RequestId = RequestId;
	LastPickupResult = Result;
	ClientPickupResult(Result);
}

void ALyraPlayerController::ClientPickupResult_Implementation(const FLyraPickupResult& Result)
{
	LastPickupResult = Result;
	NextPickupRequest = FMath::Max(NextPickupRequest, Result.RequestId);
	if (PendingPickupRequest != Result.RequestId) { return; }
	PendingPickupRequest = 0;
	switch (Result.Status)
	{
	case ELyraPickupStatus::Success: PickupFeedback = FText::Format(LOCTEXT("Success", "已拾取 {0} 个"), FText::AsNumber(Result.Added)); break;
	case ELyraPickupStatus::Partial: PickupFeedback = FText::Format(LOCTEXT("Partial", "已拾取 {0} 个，地面剩余 {1} 个（背包空间不足）"), FText::AsNumber(Result.Added), FText::AsNumber(Result.Remaining)); break;
	case ELyraPickupStatus::NoSpace: PickupFeedback = LOCTEXT("Full", "背包空间不足，物品仍留在地面"); break;
	case ELyraPickupStatus::TooFar: PickupFeedback = LOCTEXT("Far", "距离太远，请靠近物品"); break;
	case ELyraPickupStatus::Blocked: PickupFeedback = LOCTEXT("Blocked", "视线被遮挡，无法拾取"); break;
	case ELyraPickupStatus::Stale: PickupFeedback = LOCTEXT("Changed", "物品已发生变化，请重新查看"); break;
	default: PickupFeedback = LOCTEXT("Unavailable", "当前无法拾取，物品可能已被其他玩家领取"); break;
	}
	PickupFeedbackUntil = FPlatformTime::Seconds() + 4;
}
#undef LOCTEXT_NAMESPACE
