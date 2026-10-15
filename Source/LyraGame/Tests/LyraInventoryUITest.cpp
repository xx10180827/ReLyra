// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryNetworkTest.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "UI/Inventory/LyraInventoryScreen.h"
#include "Input/CommonUIActionRouterBase.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"
#include "UnrealClient.h"
#include "Framework/Application/SlateApplication.h"
#include "Layout/WidgetPath.h"
#include "GameFramework/PlayerInput.h"
#include "GenericPlatform/GenericPlatformInputDeviceMapper.h"

namespace InventoryUIAutomation
{
	bool Drag(ULyraInventoryScreen* Screen, int32 Source, int32 Target, bool Shift = false)
	{
		auto From = Screen->GetSlotWidget(Source); auto To = Screen->GetSlotWidget(Target);
		if (!From || !To) { return false; }
		auto& Slate = FSlateApplication::Get();
		FWidgetPath FromPath, ToPath;
		if (!Slate.GeneratePathToWidgetUnchecked(From.ToSharedRef(), FromPath) || !Slate.GeneratePathToWidgetUnchecked(To.ToSharedRef(), ToPath)) { return false; }
		// Generated layout paths have no per-widget pointer positions in UE 5.4.
		// Resolve them as input paths before routing pointer events.
		FromPath = FWeakWidgetPath(FromPath).ToWidgetPath();
		ToPath = FWeakWidgetPath(ToPath).ToWidgetPath();
		if (!FromPath.IsValid() || !ToPath.IsValid()) { return false; }
		const auto Start = From->GetCachedGeometry().GetAbsolutePosition() + From->GetCachedGeometry().GetAbsoluteSize() * 0.5;
		const auto End = To->GetCachedGeometry().GetAbsolutePosition() + To->GetCachedGeometry().GetAbsoluteSize() * 0.5;
		const FModifierKeysState Mods(Shift, false, false, false, false, false, false, false, false);
		const TSet<FKey> Held = {EKeys::LeftMouseButton}; const TSet<FKey> Released;
		const uint32 Pointer = FSlateApplication::CursorPointerIndex;
		Slate.RoutePointerMoveEvent(FromPath, FPointerEvent(Pointer, Start, Start, Released, FKey(), 0, Mods), false);
		Slate.RoutePointerDownEvent(FromPath, FPointerEvent(Pointer, Start, Start, Held, EKeys::LeftMouseButton, 0, Mods));
		Slate.RoutePointerMoveEvent(FromPath, FPointerEvent(Pointer, Start + FVector2D(16, 16), Start, Held, FKey(), 0, Mods), false);
		if (!Slate.IsDragDropping()) { return false; }
		Slate.RoutePointerMoveEvent(ToPath, FPointerEvent(Pointer, End, Start, Held, FKey(), 0, Mods), false);
		Slate.RoutePointerUpEvent(ToPath, FPointerEvent(Pointer, End, End, Released, EKeys::LeftMouseButton, 0, Mods));
		return !Slate.IsDragDropping();
	}
	void MenuKey(FKey Key)
	{
		auto& Slate = FSlateApplication::Get();
		const FKeyEvent Event(Key, FModifierKeysState(), 0, false, 0, 0);
		Slate.ProcessKeyDownEvent(Event); Slate.ProcessKeyUpEvent(Event);
	}
	void InventoryKey(APlayerController* Controller, EInputEvent Event)
	{
		// This project filters input by platform user. An invalid device is deliberately rejected by the engine.
		const FInputDeviceId Device = IPlatformInputDeviceMapper::Get().GetPrimaryInputDeviceForUser(Controller->GetPlatformUserId());
		Controller->InputKey(FInputKeyParams(EKeys::I, Event, Event == IE_Pressed ? 1.0 : 0.0, false, Device));
	}
}

bool ULyraInventoryNetworkTest::TickInventoryUI(bool bHost)
{
	const double Now = FPlatformTime::Seconds();
	ALyraInventoryPlayerController* Controller = nullptr;
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (It->Get()->IsLocalController()) { Controller = Cast<ALyraInventoryPlayerController>(It->Get()); break; }
	}
	if (!Controller) { return false; }
	auto* Inventory = Controller->FindComponentByClass<ULyraInventoryManagerComponent>();
	auto* Screen = Controller->GetInventoryScreen();
	auto* Router = Controller->GetLocalPlayer()->GetSubsystem<UCommonUIActionRouterBase>();
	auto Fail = [this](const TCHAR* Reason)
	{
		UE_LOG(LogTemp, Error, TEXT("INVENTORY_UI FAIL role=%s step=%d reason=%s"), *ExpectedRole, UIStep, Reason);
		EndTest(1); return false;
	};
	if (UIStep == 0)
	{
		InventoryUIAutomation::InventoryKey(Controller, IE_Pressed); UIChangedAt = Now; ++UIStep; return false;
	}
	if (Now - UIChangedAt < 0.5) { return false; }
	if (UIStep == 1)
	{
		InventoryUIAutomation::InventoryKey(Controller, IE_Released);
		if (!Screen || !Screen->IsActivated() || Screen->GetDisplayedSlots().Num() != 20 || Screen->GetBoundInventory() != Inventory)
		{
			if (Now - UIChangedAt > 5) { return Fail(TEXT("owning inventory or widget not initialized")); }
			return false;
		}
		if (!Router || Router->GetActiveInputMode() != ECommonInputMode::Menu) { return Fail(TEXT("menu did not acquire input")); }
		const auto Slots = Screen->GetDisplayedSlots();
		const int32 Source = bHost ? 0 : 3; const int32 Target = bHost ? 5 : 2;
		if (!InventoryUIAutomation::Drag(Screen, Source, Target)) { return Fail(TEXT("Slate drag failed")); }
		++UIStep; UIChangedAt = Now; return false;
	}
	if (UIStep >= 2 && UIStep <= 5)
	{
		if (!Screen || !Screen->IsActivated()) { return Fail(TEXT("screen closed during operation")); }
		if (Screen->IsRequestPending()) { return false; }
		const auto Slots = Screen->GetDisplayedSlots();
		if (UIStep == 2)
		{
			const int32 Source = bHost ? 5 : 2; const int32 Target = bHost ? 0 : 3;
			if (!Slots[Source].Instance || Slots[Target].Instance) { return Fail(TEXT("move not rendered")); }
			if (!InventoryUIAutomation::Drag(Screen, Source, Target, !bHost)) { return Fail(TEXT("Slate split drag failed")); }
			if (!bHost)
			{
				if (!Screen->IsQuantityOpen()) { return Fail(TEXT("quantity dialog missing")); }
				Screen->SetQuantity(2); Screen->ConfirmQuantity();
			}
		}
		else if (!bHost && UIStep == 3)
		{
			if (Slots[2].StackCount != 4 || Slots[3].StackCount != 2) { return Fail(TEXT("split not rendered")); }
			Screen->SetMergeMode(false);
			if (!InventoryUIAutomation::Drag(Screen, 2, 1)) { return Fail(TEXT("Slate swap drag failed")); }
		}
		else if (!bHost && UIStep == 4)
		{
			if (Slots[1].StackCount != 4 || Slots[2].StackCount != 10) { return Fail(TEXT("swap not rendered")); }
			Screen->SetMergeMode(true);
			if (!InventoryUIAutomation::Drag(Screen, 3, 1)) { return Fail(TEXT("Slate merge drag failed")); }
		}
		else if (UIStep == 5)
		{
			if (bHost ? !Slots[0].Instance || Slots[5].Instance : Slots[1].StackCount != 6 || Slots[3].Instance) { return Fail(TEXT("final UI state mismatch")); }
			// Record each visible slot against the actual inventory, not just the RPC acknowledgement.
			const auto Actual = Inventory->GetSlotSnapshot();
			for (int32 Index = 0; Index < Actual.Num(); ++Index)
			{
				if (Actual[Index].EntryId != Slots[Index].EntryId || Actual[Index].StackCount != Slots[Index].StackCount) { return Fail(TEXT("stale visible slot")); }
			}
			const FString Path = FPaths::Combine(ScreenshotDirectory, TEXT("Inventory") + ExpectedRole + TEXT(".png"));
			if (GEngine) { GEngine->ClearOnScreenDebugMessages(); } // Keep all log diagnostics; clear transient text for the UI capture only.
			FScreenshotRequest::RequestScreenshot(Path, true, false);
		}
		++UIStep; UIChangedAt = Now; return false;
	}
	if (UIStep == 6)
	{
		const FString Path = FPaths::Combine(ScreenshotDirectory, TEXT("Inventory") + ExpectedRole + TEXT(".png"));
		if (!IFileManager::Get().FileExists(*Path)) { return false; }
		InventoryUIAutomation::MenuKey(EKeys::I); ++UIStep; UIChangedAt = Now; return false;
	}
	if (UIStep == 7 || UIStep == 9)
	{
		if (Screen->IsActivated() || Screen->GetBoundInventory() || Inventory->OnInventoryChanged.IsBoundToObject(Screen)
			|| !Router || Router->GetActiveInputMode() == ECommonInputMode::Menu)
		{
			return Fail(TEXT("close did not release input/listeners"));
		}
		if (UIStep == 7) { InventoryUIAutomation::InventoryKey(Controller, IE_Pressed); ++UIStep; UIChangedAt = Now; return false; }
		bUIVerified = true;
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_UI PASS role=%s slots=20 owner=local refresh=matched reopen=passed listeners=cleared input=restored"), *ExpectedRole);
		return true;
	}
	if (UIStep == 8)
	{
		InventoryUIAutomation::InventoryKey(Controller, IE_Released);
		if (!Screen || !Screen->IsActivated() || Screen->GetDisplayedSlots().Num() != 20 || Screen->GetBoundInventory() != Inventory) { return Fail(TEXT("reopen failed")); }
		InventoryUIAutomation::MenuKey(EKeys::Escape); ++UIStep; UIChangedAt = Now;
	}
	return false;
}
