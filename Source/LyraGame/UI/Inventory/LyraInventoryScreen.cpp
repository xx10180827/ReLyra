// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryScreen.h"
#include "SInventoryGraphic.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UObject/ConstructorHelpers.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "Inventory/InventoryFragment_QuickBarIcon.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "CommonUIExtensions.h"
#include "Engine/Texture2D.h"
#include "GameFramework/PlayerController.h"
#include "Framework/Application/SlateApplication.h"
#include "DragAndDrop/DecoratedDragDropOp.h"
#include "Styling/CoreStyle.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SOverlay.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SSpinBox.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "InventoryScreen"
namespace InventoryStyle
{
	const FLinearColor Cyan(0.02f, 0.76f, 0.95f);
	const FLinearColor Muted(0.40f, 0.55f, 0.65f);
	const FLinearColor Panel(0.014f, 0.033f, 0.06f, 0.97f);
	const FSlateBrush* White() { return FCoreStyle::Get().GetBrush("WhiteBrush"); }
	FSlateFontInfo Font(int32 Size, bool Bold = false) { return FCoreStyle::GetDefaultFontStyle(Bold ? "Bold" : "Regular", Size); }
	TSharedRef<SWidget> Text(FText Value, int32 Size, FLinearColor Color = FLinearColor::White)
	{
		return SNew(STextBlock).Text(Value).Font(Font(Size)).ColorAndOpacity(Color);
	}
	TSharedRef<SWidget> Frame(TSharedRef<SWidget> Content, FLinearColor Color = FLinearColor(0.12f, 0.26f, 0.36f))
	{
		return SNew(SBorder).BorderImage(White()).BorderBackgroundColor(Color).Padding(1)
			[SNew(SBorder).BorderImage(White()).BorderBackgroundColor(Panel).Padding(16)[Content]];
	}
}

class FInventorySlotDrag : public FDecoratedDragDropOp
{
public:
	DRAG_DROP_OPERATOR_TYPE(FInventorySlotDrag, FDecoratedDragDropOp)
	TWeakObjectPtr<ULyraInventoryScreen> Screen;
	int32 Source = INDEX_NONE;
	FGuid Entry;
	int32 Count = 0;
	static TSharedRef<FInventorySlotDrag> Make(ULyraInventoryScreen* Owner, int32 Index)
	{
		auto Op = MakeShared<FInventorySlotDrag>();
		Op->Screen = Owner; Op->Source = Index;
		Op->Entry = Owner->GetDisplayedSlots()[Index].EntryId;
		Op->Count = Owner->GetDisplayedSlots()[Index].StackCount;
		Op->DefaultHoverText = Owner->SlotName(Index);
		Op->Construct();
		return Op;
	}
};

class SInventorySlot : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SInventorySlot) {} SLATE_ARGUMENT(ULyraInventoryScreen*, Screen) SLATE_ARGUMENT(int32, Index) SLATE_END_ARGS()
	void Construct(const FArguments& Args)
	{
		Owner = Args._Screen; Index = Args._Index;
		ChildSlot[SNew(SBorder).BorderImage(InventoryStyle::White()).Padding(2)
			.BorderBackgroundColor_Lambda([this] { return Owner.IsValid() && Owner->IsSelected(Index) ? InventoryStyle::Cyan : (IsHovered() ? FLinearColor(0.18f, 0.45f, 0.55f) : FLinearColor(0.10f, 0.19f, 0.25f)); })
			[SNew(SBorder).BorderImage(InventoryStyle::White()).BorderBackgroundColor(FLinearColor(0.012f, 0.023f, 0.038f)).Padding(7)
			[SNew(SOverlay)
			+ SOverlay::Slot().VAlign(VAlign_Center).HAlign(HAlign_Center)
			[SNew(SBox).WidthOverride(88).HeightOverride(52)
				[SNew(SImage).Image_Lambda([this] { return Owner.IsValid() ? Owner->SlotIcon(Index) : nullptr; })
				.ColorAndOpacity_Lambda([this] { return Owner.IsValid() ? Owner->SlotTint(Index) : FLinearColor::Transparent; })]]
			+ SOverlay::Slot().VAlign(VAlign_Center).HAlign(HAlign_Center)
			[SNew(SBox).WidthOverride(88).HeightOverride(52)
				.Visibility_Lambda([this] { return Owner.IsValid() && Owner->HasFallbackIcon(Index) ? EVisibility::HitTestInvisible : EVisibility::Collapsed; })
				[SNew(SInventoryGraphic).Medical_Lambda([this] { return Owner.IsValid() && Owner->IsMedicalSlot(Index); })]]
			+ SOverlay::Slot().VAlign(VAlign_Top)
			[SNew(STextBlock).Text(FText::AsNumber(Index + 1)).Font(InventoryStyle::Font(11)).ColorAndOpacity(InventoryStyle::Muted)]
			+ SOverlay::Slot().VAlign(VAlign_Bottom)
			[SNew(STextBlock).Text_Lambda([this] { return Owner.IsValid() ? Owner->SlotName(Index) : FText(); }).Font(InventoryStyle::Font(12)).ColorAndOpacity(FLinearColor(0.7f, 0.8f, 0.86f)).WrapTextAt(85)]
			+ SOverlay::Slot().HAlign(HAlign_Right).VAlign(VAlign_Top)
			[SNew(STextBlock).Text_Lambda([this] { return Owner.IsValid() ? Owner->SlotCount(Index) : FText(); }).Font(InventoryStyle::Font(18, true))]
		]]];
	}
	virtual FReply OnMouseButtonDown(const FGeometry& Geometry, const FPointerEvent& Event) override
	{
		if (Owner.IsValid() && Event.GetEffectingButton() == EKeys::LeftMouseButton)
		{
			Owner->SelectSlot(Index);
			return FReply::Handled().DetectDrag(SharedThis(this), EKeys::LeftMouseButton);
		}
		return FReply::Unhandled();
	}
	virtual FReply OnDragDetected(const FGeometry& Geometry, const FPointerEvent& Event) override
	{
		if (Owner.IsValid() && !Owner->IsRequestPending() && !Owner->IsQuantityOpen()
			&& Owner->GetDisplayedSlots().IsValidIndex(Index) && Owner->GetDisplayedSlots()[Index].Instance)
		{
			return FReply::Handled().BeginDragDrop(FInventorySlotDrag::Make(Owner.Get(), Index));
		}
		return FReply::Unhandled();
	}
	virtual FReply OnDrop(const FGeometry& Geometry, const FDragDropEvent& Event) override
	{
		const auto Op = Event.GetOperationAs<FInventorySlotDrag>();
		if (Owner.IsValid() && Op && Op->Screen == Owner)
		{
			Owner->DropOnSlot(Op->Source, Op->Entry, Op->Count, Index, Event.IsShiftDown());
			return FReply::Handled();
		}
		return FReply::Unhandled();
	}
private:
	TWeakObjectPtr<ULyraInventoryScreen> Owner;
	int32 Index = INDEX_NONE;
};

ULyraInventoryScreen::ULyraInventoryScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	InputConfig = ELyraWidgetInputMode::Menu;
	bIsBackHandler = true;
	SetIsFocusable(true);
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> IconMaterial(TEXT("/Game/UI/Hud/Art/M_UI_Base_SimpleIcon.M_UI_Base_SimpleIcon"));
	LegacyIconMaterial = IconMaterial.Object;
}

TSharedRef<SWidget> ULyraInventoryScreen::RebuildWidget()
{
	Super::RebuildWidget(); // CommonUI registers rebuilding widgets with its input tree here.
	using namespace InventoryStyle;
	TSharedRef<SUniformGridPanel> Grid = SNew(SUniformGridPanel).SlotPadding(4);
	SlotWidgets.Reset();
	for (int32 Index = 0; Index < 20; ++Index)
	{
		auto Cell = SNew(SInventorySlot).Screen(this).Index(Index);
		SlotWidgets.Add(Cell);
		Grid->AddSlot(Index % 5, Index / 5)[SNew(SBox).WidthOverride(102).HeightOverride(100)[Cell]];
	}
	auto GridPanel = SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 22)
		[SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()[Text(LOCTEXT("Inventory", "背包  /  INVENTORY"), 25, Cyan)]
			+ SHorizontalBox::Slot().AutoWidth()[SNew(STextBlock).Text_UObject(this, &ThisClass::CapacityText).Font(Font(24, true))]]
		+ SVerticalBox::Slot().AutoHeight()[Grid]
		+ SVerticalBox::Slot().AutoHeight().Padding(4, 22, 0, 0)
		[SNew(SCheckBox).IsChecked_Lambda([this] { return bMergeMode ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			.OnCheckStateChanged_Lambda([this](ECheckBoxState State) { bMergeMode = State == ECheckBoxState::Checked; })
			[Text(LOCTEXT("MergeMode", "同类物品拖动时优先合并"), 17)]]
		+ SVerticalBox::Slot().AutoHeight().Padding(4, 12, 0, 0)
		[Text(LOCTEXT("DragHint", "拖动：移动 / 交换    Shift + 拖动：选择数量"), 15, Muted)];
	auto CenterPanel = SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight()[Text(LOCTEXT("Personal", "PERSONAL STORAGE"), 13, Cyan)]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 12, 0, 0)[Text(LOCTEXT("Ready", "随身物资"), 28)]
		+ SVerticalBox::Slot().VAlign(VAlign_Center)
		[SNew(SVerticalBox)
			+ SVerticalBox::Slot().FillHeight(1)[SNew(SInventoryGraphic).Backpack(true)]
			+ SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Center)[Text(LOCTEXT("Pack", "FIELD PACK / 20"), 15, Cyan)]]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 12)[Text(LOCTEXT("Quick", "快捷栏  /  QUICK SLOTS"), 15, Cyan)];
	for (int32 Index = 0; Index < 3; ++Index)
	{
		CenterPanel->AddSlot().AutoHeight().Padding(0, 4)
		[Frame(SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 12, 0)[Text(FText::AsNumber(Index + 1), 18, Cyan)]
			+ SHorizontalBox::Slot()[SNew(STextBlock).Text_Lambda([this, Index] { return QuickSlotName(Index); }).Font(Font(14))
				.ColorAndOpacity_Lambda([this, Index] { return QuickSlotActive(Index) ? Cyan : Muted; })])];
	}
	auto Details = SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight()[Text(LOCTEXT("Details", "物品详情"), 14, Cyan)]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 18, 0, 6)[SNew(STextBlock).Text_UObject(this, &ThisClass::DetailName).Font(Font(26, true)).WrapTextAt(266)]
		+ SVerticalBox::Slot().AutoHeight()[SNew(STextBlock).Text_UObject(this, &ThisClass::DetailType).Font(Font(17)).ColorAndOpacity(Muted)]
		+ SVerticalBox::Slot().AutoHeight().Padding(16, 38)[SNew(SBox).HeightOverride(130)
			[SNew(SOverlay)
			+ SOverlay::Slot()[SNew(SImage).Image_Lambda([this] { return SlotIcon(SelectedSlot); }).ColorAndOpacity_Lambda([this] { return SlotTint(SelectedSlot); })]
			+ SOverlay::Slot()[SNew(SInventoryGraphic).Medical_Lambda([this] { return IsMedicalSlot(SelectedSlot); }).Visibility_Lambda([this] { return HasFallbackIcon(SelectedSlot) ? EVisibility::HitTestInvisible : EVisibility::Collapsed; })]]]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 8)[SNew(STextBlock).Text_UObject(this, &ThisClass::DetailStats).Font(Font(17)).ColorAndOpacity(Cyan).WrapTextAt(266)]
		+ SVerticalBox::Slot().FillHeight(1).Padding(0, 20)[SNew(SScrollBox)
			+ SScrollBox::Slot()[SNew(STextBlock).Text_UObject(this, &ThisClass::DetailDescription).Font(Font(17)).AutoWrapText(true)]]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 8)[SNew(SButton).HAlign(HAlign_Center)
			.IsEnabled_Lambda([this] { return !bRequestPending && !bQuantityOpen && Definition(SelectedSlot); })
			.OnClicked_Lambda([this] { BeginDrop(); return FReply::Handled(); })[Text(LOCTEXT("Drop", "丢弃…"), 20, Cyan)]]
		+ SVerticalBox::Slot().AutoHeight()[Text(LOCTEXT("SelectHelp", "选择数量丢弃到面前\n其他玩家可按 E 拾取"), 14, Muted)];
	auto QuantityBox = Frame(SNew(SBox).WidthOverride(420)
		[SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 8)[SNew(STextBlock).Font(Font(26)).ColorAndOpacity(Cyan)
			.Text_Lambda([this] { return PendingOperation == ELyraInventoryOperation::Drop ? LOCTEXT("DropQuantity", "选择丢弃数量") : LOCTEXT("QuantityTitle", "选择转移数量"); })]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 18)
		[SNew(SSpinBox<int32>).MinValue(1).MaxValue_Lambda([this] { return TOptional<int32>(GetQuantityLimit()); })
			.Value_Lambda([this] { return Quantity; }).OnValueChanged_Lambda([this](int32 Value) { Quantity = Value; }).Font(Font(24))]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 8)[SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().Padding(0, 0, 8, 0)[SNew(SButton).HAlign(HAlign_Center).OnClicked_Lambda([this] { ConfirmQuantity(); return FReply::Handled(); })[Text(LOCTEXT("Confirm", "确认"), 20)]]
			+ SHorizontalBox::Slot()[SNew(SButton).HAlign(HAlign_Center).OnClicked_Lambda([this] { CancelQuantity(); return FReply::Handled(); })[Text(LOCTEXT("Cancel", "取消"), 20)]]]], Cyan);
	Panel = SNew(SOverlay)
		+ SOverlay::Slot()[SNew(SBorder).BorderImage(White()).BorderBackgroundColor(FLinearColor(0.004f, 0.009f, 0.018f, 0.94f)).Padding(20)
		[SNew(SScaleBox).Stretch(EStretch::ScaleToFit)
		[SNew(SBox).WidthOverride(1260).HeightOverride(730)
		[SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 16)
		[SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()[Text(LOCTEXT("Header", "LYRA  /  INVENTORY SYSTEM"), 16, Muted)]
			+ SHorizontalBox::Slot().AutoWidth()[SNew(SButton).OnClicked_Lambda([this] { CloseInventory(); return FReply::Handled(); })[Text(LOCTEXT("Close", "关闭  ×"), 18)]]]
		+ SVerticalBox::Slot().FillHeight(1)[SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(580)[Frame(GridPanel)]
			+ SHorizontalBox::Slot().FillWidth(224).Padding(20, 14)[CenterPanel]
			+ SHorizontalBox::Slot().FillWidth(320)[Frame(Details)]]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 20, 0, 0)
		[SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()[SNew(STextBlock).Text_Lambda([this] { return Feedback; }).Font(Font(17)).ColorAndOpacity(Cyan)]
			+ SHorizontalBox::Slot().AutoWidth()[Text(LOCTEXT("CloseKeys", "[ I ] / [ Esc ]  关闭背包"), 17, Muted)]]
		]]]]
		+ SOverlay::Slot().HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[SNew(SBorder).Visibility_Lambda([this] { return bQuantityOpen ? EVisibility::Visible : EVisibility::Collapsed; })
			.BorderImage(White()).BorderBackgroundColor(FLinearColor(0, 0, 0, 0.78f)).HAlign(HAlign_Center).VAlign(VAlign_Center)
			[SNew(SScaleBox).Stretch(EStretch::ScaleToFit)[QuantityBox]]];
	return Panel.ToSharedRef();
}

void ULyraInventoryScreen::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren); Panel.Reset(); SlotWidgets.Reset();
}

void ULyraInventoryScreen::NativeOnActivated()
{
	Super::NativeOnActivated();
	UnbindInventory();
	Inventory = GetOwningPlayer() ? GetOwningPlayer()->FindComponentByClass<ULyraInventoryManagerComponent>() : nullptr;
	if (!Inventory) { CloseInventory(); return; }
	InventoryChangedHandle = Inventory->OnInventoryChanged.AddUObject(this, &ThisClass::InvalidateInventory);
	Inventory->OnInventoryOperationResult.AddUniqueDynamic(this, &ThisClass::OperationCompleted);
	bRequestPending = bAwaitingReplication = bQuantityOpen = false;
	Feedback = LOCTEXT("InitialHint", "拖动物品整理背包");
	RefreshInventory();
}

void ULyraInventoryScreen::UnbindInventory()
{
	if (Inventory)
	{
		Inventory->OnInventoryChanged.Remove(InventoryChangedHandle);
		Inventory->OnInventoryOperationResult.RemoveDynamic(this, &ThisClass::OperationCompleted);
	}
	InventoryChangedHandle.Reset(); Inventory = nullptr;
}

void ULyraInventoryScreen::NativeOnDeactivated()
{
	UnbindInventory(); bQuantityOpen = false;
	DisplayedSlots.Reset(); Icons.Reset(); IconResources.Reset();
	if (FSlateApplication::IsInitialized()) { FSlateApplication::Get().CancelDragDrop(); }
	Super::NativeOnDeactivated();
}

void ULyraInventoryScreen::NativeDestruct() { UnbindInventory(); Super::NativeDestruct(); }
void ULyraInventoryScreen::InvalidateInventory() { bRefreshRequested = true; }
void ULyraInventoryScreen::CloseInventory() { CancelQuantity(); DeactivateWidget(); }
void ULyraInventoryScreen::CancelQuantity() { bQuantityOpen = false; }
UWidget* ULyraInventoryScreen::NativeGetDesiredFocusTarget() const { return const_cast<ULyraInventoryScreen*>(this); }
bool ULyraInventoryScreen::NativeOnHandleBackAction()
{
	if (bQuantityOpen) { CancelQuantity(); } else { CloseInventory(); }
	return true;
}
FReply ULyraInventoryScreen::NativeOnPreviewKeyDown(const FGeometry& Geometry, const FKeyEvent& Event)
{
	if (Event.GetKey() == EKeys::I || Event.GetKey() == EKeys::Escape)
	{
		if (!Event.IsRepeat()) { if (bQuantityOpen && Event.GetKey() == EKeys::Escape) { CancelQuantity(); } else { CloseInventory(); } }
		return FReply::Handled();
	}
	return Super::NativeOnPreviewKeyDown(Geometry, Event);
}

void ULyraInventoryScreen::NativeTick(const FGeometry& Geometry, float DeltaTime)
{
	Super::NativeTick(Geometry, DeltaTime);
	if (!IsActivated() || !Inventory) { return; }
	// Also resolves item subobjects/definitions and ammo tags that arrive after the slot FastArray.
	const double Now = FPlatformTime::Seconds();
	if (bRefreshRequested || Now >= NextRefresh) { RefreshInventory(); NextRefresh = Now + 0.1; }
	if (bRequestPending && Now - RequestStartedAt > 8) { Feedback = LOCTEXT("Waiting", "正在等待服务器同步，可关闭后重新打开查看"); }
}

void ULyraInventoryScreen::RefreshInventory()
{
	if (!Inventory) { return; }
	bRefreshRequested = false;
	DisplayedSlots = Inventory->GetSlotSnapshot();
	for (const auto& EntryView : DisplayedSlots)
	{
		if (!EntryView.Instance || !EntryView.Instance->GetItemDef() || Icons.Contains(EntryView.Instance->GetItemDef())) { continue; }
		const auto* Def = GetDefault<ULyraInventoryItemDefinition>(EntryView.Instance->GetItemDef());
		FSlateBrush Brush;
		if (auto* Texture = Def->InventoryIcon.LoadSynchronous())
		{
			Brush.SetResourceObject(Texture); Brush.ImageSize = FVector2D(Texture->GetSizeX(), Texture->GetSizeY()); Brush.DrawAs = ESlateBrushDrawType::Image;
		}
		else if (const auto* Fragment = Cast<UInventoryFragment_QuickBarIcon>(Def->FindFragmentByClass(UInventoryFragment_QuickBarIcon::StaticClass())))
		{
			Brush = Fragment->Brush;
			if (LegacyIconMaterial)
			{
				if (auto* Mask = Cast<UTexture>(Brush.GetResourceObject()))
				{
					auto* Material = UMaterialInstanceDynamic::Create(LegacyIconMaterial, this);
					Material->SetTextureParameterValue(TEXT("TextureMask"), Mask);
					Material->SetVectorParameterValue(TEXT("IconRGB"), FLinearColor(0.75f, 0.87f, 0.94f));
					Brush.SetResourceObject(Material);
				}
			}
		}
		if (Brush.GetResourceObject()) { IconResources.AddUnique(Brush.GetResourceObject()); }
		Icons.Add(EntryView.Instance->GetItemDef(), Brush);
	}
	if (SelectedEntry.IsValid())
	{
		SelectedSlot = DisplayedSlots.IndexOfByPredicate([this](const auto& Slot) { return Slot.EntryId == SelectedEntry; });
		if (SelectedSlot == INDEX_NONE) { SelectedEntry.Invalidate(); }
	}
	if (SelectedSlot == INDEX_NONE && !DisplayedSlots.IsEmpty())
	{
		SelectedSlot = 0; SelectedEntry = DisplayedSlots[0].EntryId;
	}
	if (bAwaitingReplication && DisplayedSlots.IsValidIndex(PendingSource.SlotIndex) && DisplayedSlots.IsValidIndex(PendingTarget.SlotIndex))
	{
		const auto& A = DisplayedSlots[PendingSource.SlotIndex]; const auto& B = DisplayedSlots[PendingTarget.SlotIndex];
		bool Applied = false;
		switch (PendingOperation)
		{
		case ELyraInventoryOperation::Move: Applied = !A.EntryId.IsValid() && B.EntryId == PendingSource.EntryId; break;
		case ELyraInventoryOperation::Swap: Applied = A.EntryId == PendingTarget.EntryId && B.EntryId == PendingSource.EntryId; break;
		case ELyraInventoryOperation::Split: Applied = A.EntryId == PendingSource.EntryId && A.StackCount == PendingSource.StackCount - Quantity && B.Instance && B.StackCount == Quantity; break;
		case ELyraInventoryOperation::Merge: Applied = A.StackCount == PendingSource.StackCount - Quantity && B.EntryId == PendingTarget.EntryId && B.StackCount == PendingTarget.StackCount + Quantity; break;
		case ELyraInventoryOperation::Drop: Applied = Quantity == PendingSource.StackCount ? !A.EntryId.IsValid() : A.EntryId == PendingSource.EntryId && A.StackCount == PendingSource.StackCount - Quantity; break;
		}
		if (Applied) { bRequestPending = bAwaitingReplication = false; Feedback = PendingOperation == ELyraInventoryOperation::Drop ? LOCTEXT("Dropped", "已丢弃到面前，关闭背包可按 E 拾取") : LOCTEXT("Done", "整理完成"); }
	}
}

const ULyraInventoryItemDefinition* ULyraInventoryScreen::Definition(int32 Index) const
{
	return DisplayedSlots.IsValidIndex(Index) && DisplayedSlots[Index].Instance && DisplayedSlots[Index].Instance->GetItemDef()
		? GetDefault<ULyraInventoryItemDefinition>(DisplayedSlots[Index].Instance->GetItemDef()) : nullptr;
}
FText ULyraInventoryScreen::SlotName(int32 Index) const { const auto* Def = Definition(Index); return Def ? Def->DisplayName : FText(); }
FText ULyraInventoryScreen::SlotCount(int32 Index) const
{
	return DisplayedSlots.IsValidIndex(Index) && DisplayedSlots[Index].StackCount > 1 ? FText::AsNumber(DisplayedSlots[Index].StackCount) : FText();
}
const FSlateBrush* ULyraInventoryScreen::SlotIcon(int32 Index) const
{
	const auto* Def = Definition(Index); return Def ? Icons.Find(Def->GetClass()) : nullptr;
}
FLinearColor ULyraInventoryScreen::SlotTint(int32 Index) const { return Definition(Index) && !HasFallbackIcon(Index) ? FLinearColor::White : FLinearColor::Transparent; }
bool ULyraInventoryScreen::HasFallbackIcon(int32 Index) const { const auto* Icon = SlotIcon(Index); return Definition(Index) && (!Icon || !Icon->GetResourceObject()); }
bool ULyraInventoryScreen::IsMedicalSlot(int32 Index) const { const auto* Def = Definition(Index); return Def && Def->GetInventoryItemType() == ELyraInventoryItemType::Consumable; }
FText ULyraInventoryScreen::CapacityText() const
{
	int32 Used = 0; for (const auto& EntryView : DisplayedSlots) { Used += EntryView.EntryId.IsValid() ? 1 : 0; }
	return FText::FromString(FString::Printf(TEXT("%02d / %02d"), Used, DisplayedSlots.Num()));
}
FText ULyraInventoryScreen::DetailName() const { return Definition(SelectedSlot) ? SlotName(SelectedSlot) : LOCTEXT("Empty", "空格子"); }
FText ULyraInventoryScreen::DetailType() const
{
	const auto* Def = Definition(SelectedSlot); if (!Def) { return LOCTEXT("EmptyHint", "将物品拖到这里"); }
	switch (Def->GetInventoryItemType())
	{
	case ELyraInventoryItemType::Weapon: return LOCTEXT("Weapon", "武器 / WEAPON");
	case ELyraInventoryItemType::Ammunition: return LOCTEXT("Ammo", "弹药 / AMMO");
	case ELyraInventoryItemType::Consumable: return LOCTEXT("Consumable", "消耗品 / SUPPLY");
	default: return LOCTEXT("Item", "物品 / ITEM");
	}
}
FText ULyraInventoryScreen::DetailDescription() const
{
	const auto* Def = Definition(SelectedSlot); if (!Def) { return LOCTEXT("EmptyDescription", "背包保留固定空位。拖动到空位可移动，拖到其他物品可交换或合并。"); }
	return Def->Description.IsEmpty() ? LOCTEXT("NoDescription", "这件物品暂未配置详细说明。") : Def->Description;
}
FText ULyraInventoryScreen::DetailStats() const
{
	const auto* Def = Definition(SelectedSlot); if (!Def) { return FText(); }
	FString Value = FString::Printf(TEXT("数量  %d     堆叠上限  %d"), DisplayedSlots[SelectedSlot].StackCount, Def->GetMaxStackSize());
	if (Def->GetInventoryItemType() == ELyraInventoryItemType::Weapon)
	{
		const auto* Item = DisplayedSlots[SelectedSlot].Instance.Get();
		Value += FString::Printf(TEXT("\n弹匣  %d     备弹  %d"),
			Item->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"))),
			Item->GetStatTagStackCount(FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"))));
	}
	return FText::FromString(Value);
}
FText ULyraInventoryScreen::QuickSlotName(int32 Index) const
{
	const auto* Bar = GetOwningPlayer() ? GetOwningPlayer()->FindComponentByClass<ULyraQuickBarComponent>() : nullptr;
	if (Bar && Bar->GetSlots().IsValidIndex(Index))
	{
		const auto* Item = Bar->GetSlots()[Index];
		if (Item && Item->GetItemDef()) { return GetDefault<ULyraInventoryItemDefinition>(Item->GetItemDef())->DisplayName; }
	}
	return LOCTEXT("Unassigned", "未装备");
}
bool ULyraInventoryScreen::QuickSlotActive(int32 Index) const
{
	const auto* Bar = GetOwningPlayer() ? GetOwningPlayer()->FindComponentByClass<ULyraQuickBarComponent>() : nullptr;
	return Bar && Bar->GetActiveSlotIndex() == Index;
}
void ULyraInventoryScreen::SelectSlot(int32 Index)
{
	if (DisplayedSlots.IsValidIndex(Index)) { SelectedSlot = Index; SelectedEntry = DisplayedSlots[Index].EntryId; }
}
void ULyraInventoryScreen::DropOnSlot(int32 Source, FGuid Entry, int32 Count, int32 Target, bool bSplit)
{
	if (!Inventory || bRequestPending || bQuantityOpen || Source == Target || !DisplayedSlots.IsValidIndex(Source) || !DisplayedSlots.IsValidIndex(Target)) { return; }
	const auto A = DisplayedSlots[Source]; const auto B = DisplayedSlots[Target];
	if (!A.Instance || A.EntryId != Entry || A.StackCount != Count)
	{
		Feedback = LOCTEXT("DragExpired", "物品已发生变化，请重新拖动"); return;
	}
	const bool SameDefinition = B.Instance && A.Instance->GetItemDef() == B.Instance->GetItemDef();
	ELyraInventoryOperation Op = !B.EntryId.IsValid() ? ELyraInventoryOperation::Move : SameDefinition && bMergeMode ? ELyraInventoryOperation::Merge : ELyraInventoryOperation::Swap;
	if (bSplit)
	{
		if (B.EntryId.IsValid() && !SameDefinition) { Feedback = LOCTEXT("SplitIncompatible", "只能拆到空格或合入同类物品"); return; }
		Op = B.EntryId.IsValid() ? ELyraInventoryOperation::Merge : ELyraInventoryOperation::Split;
		PendingSource = A; PendingTarget = B; PendingOperation = Op;
		if (GetQuantityLimit() < 1) { Feedback = LOCTEXT("NoRoom", "没有可转移的数量或目标已满"); return; }
		Quantity = FMath::Min(FMath::Max(1, A.StackCount / 2), GetQuantityLimit()); bQuantityOpen = true; return;
	}
	int32 Amount = 0;
	if (Op == ELyraInventoryOperation::Merge)
	{
		const auto* Def = Definition(Source);
		// Non-stackable weapons are always swapped, never merged.
		if (!Def || Def->GetMaxStackSize() <= 1) { Op = ELyraInventoryOperation::Swap; }
		else
		{
			Amount = FMath::Min(A.StackCount, Def->GetMaxStackSize() - B.StackCount);
			if (Amount <= 0) { Feedback = LOCTEXT("FullStack", "目标堆叠已满，可取消优先合并后交换"); return; }
		}
	}
	Submit(Op, A, B, Amount);
}
int32 ULyraInventoryScreen::GetQuantityLimit() const
{
	if (PendingOperation == ELyraInventoryOperation::Drop) { return PendingSource.StackCount; }
	if (PendingOperation == ELyraInventoryOperation::Split) { return PendingSource.StackCount - 1; }
	const auto* Def = Definition(PendingSource.SlotIndex);
	return Def ? FMath::Min(PendingSource.StackCount, Def->GetMaxStackSize() - PendingTarget.StackCount) : 0;
}
void ULyraInventoryScreen::BeginDrop()
{
	if (!Inventory || bRequestPending || bQuantityOpen || !Definition(SelectedSlot)) { return; }
	PendingSource = PendingTarget = DisplayedSlots[SelectedSlot];
	PendingOperation = ELyraInventoryOperation::Drop;
	Quantity = 1; bQuantityOpen = true;
}

void ULyraInventoryScreen::ConfirmQuantity()
{
	if (!bQuantityOpen) { return; }
	if (Quantity < 1 || Quantity > GetQuantityLimit()) { Feedback = LOCTEXT("BadQuantity", "请输入有效数量"); return; }
	bQuantityOpen = false;
	Submit(PendingOperation, PendingSource, PendingTarget, Quantity);
}
void ULyraInventoryScreen::Submit(ELyraInventoryOperation Op, const FLyraInventorySlotView& Source, const FLyraInventorySlotView& Target, int32 Count)
{
	if (!Inventory || bRequestPending) { return; }
	const auto Current = Inventory->GetSlotSnapshot();
	if (!Current.IsValidIndex(Source.SlotIndex) || !Current.IsValidIndex(Target.SlotIndex)
		|| Current[Source.SlotIndex].EntryId != Source.EntryId || Current[Source.SlotIndex].StackCount != Source.StackCount
		|| Current[Target.SlotIndex].EntryId != Target.EntryId || Current[Target.SlotIndex].StackCount != Target.StackCount)
	{
		Feedback = LOCTEXT("Expired", "物品已更新，请重新选择操作"); InvalidateInventory(); return;
	}
	PendingOperation = Op; PendingSource = Source; PendingTarget = Target; Quantity = Count;
	PendingRequestId = Inventory->GetNextLocalOperationId();
	bRequestPending = true; bAwaitingReplication = false; RequestStartedAt = FPlatformTime::Seconds();
	Feedback = Op == ELyraInventoryOperation::Drop ? LOCTEXT("Dropping", "正在丢弃…") : LOCTEXT("Submitting", "正在整理…");
	// Set pending state first: a listen-server owner's result can be synchronous.
	if (!Inventory->RequestInventoryOperation(Op, Source.SlotIndex, Target.SlotIndex, Count))
	{
		bRequestPending = false; Feedback = LOCTEXT("Unavailable", "背包尚未准备好，请稍后重试");
	}
}
void ULyraInventoryScreen::OperationCompleted(const FLyraInventoryOperationResult& Result)
{
	if (!bRequestPending || Result.RequestId != PendingRequestId) { return; }
	if (Result.Status == ELyraInventoryOperationStatus::Success) { bAwaitingReplication = true; InvalidateInventory(); return; }
	bRequestPending = bAwaitingReplication = false;
	switch (Result.Status)
	{
	case ELyraInventoryOperationStatus::InvalidLocation: Feedback = LOCTEXT("DropBlocked", "面前没有安全落点，请移到平坦空地后重试；物品未扣除"); break;
	case ELyraInventoryOperationStatus::SpawnFailed: Feedback = LOCTEXT("SpawnFailed", "地面物品生成失败，物品未扣除"); break;
	case ELyraInventoryOperationStatus::NotAllowed: Feedback = LOCTEXT("DropNotAllowed", "当前角色状态无法丢弃，物品未改变"); break;
	case ELyraInventoryOperationStatus::Incompatible: Feedback = LOCTEXT("Incompatible", "物品状态不同，不能合并"); break;
	case ELyraInventoryOperationStatus::NoSpace: Feedback = LOCTEXT("NoSpace", "目标空间不足，物品未改变"); break;
	case ELyraInventoryOperationStatus::StaleState:
	case ELyraInventoryOperationStatus::StaleRequest: Feedback = LOCTEXT("Stale", "物品已更新，请重新拖动"); break;
	default: Feedback = LOCTEXT("Rejected", "本次整理未成功，物品未改变"); break;
	}
	InvalidateInventory();
}
#undef LOCTEXT_NAMESPACE
