// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "UI/LyraActivatableWidget.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Styling/SlateBrush.h"
#include "LyraInventoryScreen.generated.h"

class STextBlock;
class SWidget;
class SSpinBoxBase;
class UMaterialInterface;

/** CommonUI menu backed exclusively by the owning controller's replicated inventory. */
UCLASS()
class ULyraInventoryScreen : public ULyraActivatableWidget
{
	GENERATED_BODY()
public:
	ULyraInventoryScreen(const FObjectInitializer& ObjectInitializer);
	void CloseInventory();
	void SelectSlot(int32 Index);
	void DropOnSlot(int32 Source, FGuid Entry, int32 Count, int32 Target, bool bSplit);
	void ConfirmQuantity();
	void BeginDrop();
	void EquipSelected(int32 QuickSlot);
	void ActivateQuickSlot(int32 QuickSlot);
	void RemoveQuickSlot(int32 QuickSlot);
	bool CanEquipSelected() const;
	void CancelQuantity();
	bool IsRequestPending() const { return bRequestPending; }
	bool IsQuantityOpen() const { return bQuantityOpen; }
	bool IsSelected(int32 Index) const { return SelectedSlot == Index; }
	const TArray<FLyraInventorySlotView>& GetDisplayedSlots() const { return DisplayedSlots; }
	ULyraInventoryManagerComponent* GetBoundInventory() const { return Inventory; }
	FText SlotName(int32 Index) const;
	FText SlotCount(int32 Index) const;
	const FSlateBrush* SlotIcon(int32 Index) const;
	bool HasFallbackIcon(int32 Index) const;
	bool IsMedicalSlot(int32 Index) const;
	TSharedPtr<SWidget> GetSlotWidget(int32 Index) const { return SlotWidgets.IsValidIndex(Index) ? SlotWidgets[Index] : nullptr; }
	FLinearColor SlotTint(int32 Index) const;
	FText CapacityText() const;
	FText DetailName() const;
	FText DetailType() const;
	FText DetailDescription() const;
	FText DetailStats() const;
	FText QuickSlotName(int32 Index) const;
	bool QuickSlotActive(int32 Index) const;
	FText GetFeedback() const { return Feedback; }
	void SetQuantity(int32 Value) { Quantity = Value; }
	int32 GetQuantity() const { return Quantity; }
	int32 GetQuantityLimit() const;
	void SetMergeMode(bool Value) { bMergeMode = Value; }
	bool GetMergeMode() const { return bMergeMode; }

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& Geometry, float DeltaTime) override;
	virtual FReply NativeOnPreviewKeyDown(const FGeometry& Geometry, const FKeyEvent& Event) override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	virtual bool NativeOnHandleBackAction() override;

private:
	void UnbindInventory();
	void InvalidateInventory();
	void RefreshInventory();
	void SubmitEquipment(ELyraInventoryOperation Op, int32 SourceSlot, int32 QuickSlot);
	int32 InventorySlotForQuickSlot(int32 QuickSlot) const;
	void Submit(ELyraInventoryOperation Op, const FLyraInventorySlotView& Source, const FLyraInventorySlotView& Target, int32 Count);
	UFUNCTION() void OperationCompleted(const FLyraInventoryOperationResult& Result);
	const ULyraInventoryItemDefinition* Definition(int32 Index) const;
	UPROPERTY(Transient) TObjectPtr<ULyraInventoryManagerComponent> Inventory;
	UPROPERTY(Transient) TArray<FLyraInventorySlotView> DisplayedSlots;
	UPROPERTY(Transient) TArray<TObjectPtr<UObject>> IconResources;
	UPROPERTY() TObjectPtr<UMaterialInterface> LegacyIconMaterial;
	TMap<TSubclassOf<ULyraInventoryItemDefinition>, FSlateBrush> Icons;
	TSharedPtr<SWidget> Panel;
	TArray<TSharedPtr<SWidget>> SlotWidgets;
	FDelegateHandle InventoryChangedHandle;
	FText Feedback;
	int32 SelectedSlot = INDEX_NONE;
	FGuid SelectedEntry;
	bool bRefreshRequested = false;
	bool bRequestPending = false;
	bool bAwaitingReplication = false;
	bool bQuantityOpen = false;
	bool bMergeMode = true;
	int32 Quantity = 1;
	int64 PendingRequestId = 0;
	int32 PendingQuickSlot = INDEX_NONE;
	FLyraInventorySlotView PendingSource;
	FLyraInventorySlotView PendingTarget;
	ELyraInventoryOperation PendingOperation = ELyraInventoryOperation::Move;
	double NextRefresh = 0;
	double RequestStartedAt = 0;
};
