// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraRoomScreen.h"
#include "LyraRoomSubsystem.h"
#include "LyraRoomMaps.h"
#include "CommonSessionSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/GameStateBase.h"
#include "Player/LyraPlayerController.h"
#include "Player/LyraPlayerState.h"
#include "Styling/CoreStyle.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "RoomScreen"
ULyraRoomScreen::ULyraRoomScreen(const FObjectInitializer& O) : Super(O)
{ InputConfig = ELyraWidgetInputMode::Menu; bIsBackHandler = true; SetIsFocusable(true); }
ULyraRoomSubsystem* ULyraRoomScreen::Rooms() const { return GetGameInstance()->GetSubsystem<ULyraRoomSubsystem>(); }
void ULyraRoomScreen::HostRoom() { Rooms()->Host(); }
void ULyraRoomScreen::SearchRooms() { DisplayedResults = -1; Rooms()->Search(); }
void ULyraRoomScreen::JoinRoom(int32 Index) { Rooms()->Join(Index); }
void ULyraRoomScreen::JoinAddress(const FString& Address) { Rooms()->DirectJoin(Address); }
void ULyraRoomScreen::ChooseTeam(int32 Team) { Rooms()->SelectTeam(Team); }
void ULyraRoomScreen::ChooseMap(const FString& Id) { Rooms()->SelectMap(Id); }
void ULyraRoomScreen::LeaveRoom() { Rooms()->Leave(); }
TSharedRef<SWidget> ULyraRoomScreen::RebuildWidget()
{
 Super::RebuildWidget();
 MapOptions.Reset();
 for (const auto& Map : LyraRoomMaps::All()) { MapOptions.Add(MakeShared<FString>(Map.Id)); }
 auto Text = [](FText Value, int Size) { return SNew(STextBlock).Text(Value).Font(FCoreStyle::GetDefaultFontStyle("Regular", Size)); };
 auto Button = [&](FText Label, TFunction<void()> Action, bool bNeedsReady = false) -> TSharedRef<SWidget>
 {
  return SNew(SButton).ContentPadding(FMargin(18, 10))
   .IsEnabled_Lambda([this, bNeedsReady] { return bNeedsReady ? Rooms()->IsReady() : !Rooms()->IsBusy(); })
   .OnClicked_Lambda([Action] { Action(); return FReply::Handled(); })[Text(Label, 16)];
 };
 return SNew(SBorder).BorderImage(FCoreStyle::Get().GetBrush("WhiteBrush"))
  .BorderBackgroundColor(FLinearColor(0.008f, 0.018f, 0.035f, 0.98f)).Padding(24)
  [SNew(SScaleBox).Stretch(EStretch::ScaleToFit)
  [SNew(SBox).WidthOverride(900).HeightOverride(620).VAlign(VAlign_Center)
   [SNew(SVerticalBox)
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,12)[Text(LOCTEXT("Title", "双人局域网 · 创建与加入"), 28)]
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,10)
     [SNew(SComboBox<TSharedPtr<FString>>).OptionsSource(&MapOptions)
      .IsEnabled_Lambda([this] { return Rooms()->IsReady(); })
      .OnGenerateWidget_Lambda([Text](TSharedPtr<FString> Id) -> TSharedRef<SWidget> { return Text(LyraRoomMaps::Find(*Id)->Label, 16); })
      .OnSelectionChanged_Lambda([this](TSharedPtr<FString> Id, ESelectInfo::Type) { if (Id) { ChooseMap(*Id); } })
      [SNew(STextBlock).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16)).Text_Lambda([this] { return Rooms()->GetMapLabel(); })]]
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,12)
     [SNew(STextBlock).Text_Lambda([this] { return Rooms()->GetStatus(); }).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16)).AutoWrapText(true).ColorAndOpacity(FLinearColor(0.12f,0.8f,0.95f))]
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,8)[Text(LOCTEXT("Rule", "允许同队；仅进入房间前选队。进入后整局锁定，死亡／重生也不能换队。"), 14)]
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,12)
     [SNew(SHorizontalBox)
      +SHorizontalBox::Slot().AutoWidth()[Button(LOCTEXT("Red", "选择红队"), [this] { ChooseTeam(1); }, true)]
      +SHorizontalBox::Slot().AutoWidth().Padding(10,0)[Button(LOCTEXT("Blue", "选择蓝队"), [this] { ChooseTeam(2); }, true)]
      +SHorizontalBox::Slot().FillWidth(1).VAlign(VAlign_Center)[SNew(STextBlock).Text_Lambda([this] { return Roster(); }).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16)).AutoWrapText(true)]]
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,12)
     [SNew(SHorizontalBox)
      +SHorizontalBox::Slot().AutoWidth()[Button(LOCTEXT("Host", "创建房间 · 2 人"), [this] { HostRoom(); }, true)]
      +SHorizontalBox::Slot().AutoWidth().Padding(10,0)[Button(LOCTEXT("Search", "搜索／刷新局域网"), [this] { SearchRooms(); }, true)]]
    +SVerticalBox::Slot().AutoHeight().Padding(0,0,0,12)
     [SNew(SHorizontalBox)
      +SHorizontalBox::Slot().FillWidth(1)[SAssignNew(AddressBox, SEditableTextBox).Text(FText::FromString(TEXT("127.0.0.1:7777")))
       .HintText(LOCTEXT("Address", "房主 IPv4:端口")).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16)).IsEnabled_Lambda([this] { return Rooms()->IsReady(); })]
      +SHorizontalBox::Slot().AutoWidth().Padding(10,0,0,0)[Button(LOCTEXT("Direct", "IP 直连"), [this] { JoinAddress(AddressBox->GetText().ToString()); }, true)]]
    +SVerticalBox::Slot().AutoHeight()[SNew(SBox).HeightOverride(120)[SNew(SScrollBox)+SScrollBox::Slot()[SAssignNew(List, SVerticalBox)]]]
    +SVerticalBox::Slot().AutoHeight().Padding(0,12)
     [SNew(STextBlock).Text_Lambda([this] { auto* PC = Cast<ALyraPlayerController>(GetOwningPlayer()); return PC ? PC->GetRoomTeamFeedback() : FText(); }).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16)).AutoWrapText(true)]
    +SVerticalBox::Slot().AutoHeight()[SNew(SHorizontalBox)
     +SHorizontalBox::Slot().AutoWidth()[SNew(SButton).ContentPadding(12).OnClicked_Lambda([this] { DeactivateWidget(); return FReply::Handled(); })[Text(LOCTEXT("Back", "返回 · F10 / Esc"), 16)]]
     +SHorizontalBox::Slot().AutoWidth().Padding(10,0)[SNew(SButton).ContentPadding(12)
      .IsEnabled_Lambda([this] { return Rooms()->IsInRoom() && !Rooms()->IsBusy(); })
      .OnClicked_Lambda([this] { if (bConfirmLeave) { LeaveRoom(); bConfirmLeave = false; } else { bConfirmLeave = true; } return FReply::Handled(); })
      [SNew(STextBlock).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16)).Text_Lambda([this] { return bConfirmLeave ? LOCTEXT("ConfirmLeave", "确认离开（房主退出会关闭房间）") : LOCTEXT("Leave", "离开房间"); })]]]
    +SVerticalBox::Slot().AutoHeight().Padding(0,12,0,0)[Text(LOCTEXT("Help", "房主建房前选图，加入者跟随房主。跨电脑填写房主局域网 IP；游戏中 F10 打开。"), 12)]
   ]]];
}
FText ULyraRoomScreen::Roster() const
{
 if (!Rooms()->IsInRoom()) { return Rooms()->GetSelectedTeam() == 1 ? LOCTEXT("SelectedRed", "预选：红队") : LOCTEXT("SelectedBlue", "预选：蓝队"); }
 FString Value;
 if (auto* GS = GetWorld()->GetGameState())
 {
  int32 HumanCount = 0;
  for (const auto& Player : GS->PlayerArray) { if (Player && !Player->IsABot() && !Player->IsOnlyASpectator()) { ++HumanCount; } }
  Value = FString::Printf(TEXT("房间 %d / 2\n"), HumanCount);
  const auto* Map = LyraRoomMaps::FindPackage(GetWorld()->GetOutermost()->GetName());
  int32 PlayerIndex = 0;
  for (const auto& Player : GS->PlayerArray)
  {
   const auto* PS = Cast<ALyraPlayerState>(Player);
   if (!PS || PS->IsABot() || PS->IsOnlyASpectator()) { continue; }
   ++PlayerIndex;
   if (PS) { Value += FString::Printf(TEXT("玩家 %d%s：%s\n"), PlayerIndex, PS == GetOwningPlayer()->PlayerState ? TEXT("（你）") : TEXT(""), Map && PS->GetTeamId() == Map->RedTeam ? TEXT("红队") : (Map && PS->GetTeamId() == Map->BlueTeam ? TEXT("蓝队") : TEXT("待分队"))); }
  }
 }
 return FText::FromString(Value);
}
void ULyraRoomScreen::NativeTick(const FGeometry& G, float D)
{
 Super::NativeTick(G,D);
 const int32 Count = Rooms()->IsInRoom() ? 0 : Rooms()->GetResults().Num();
 if (!List || DisplayedResults == Count) { return; }
 List->ClearChildren(); DisplayedResults = Count;
 for (int32 I = 0; I < DisplayedResults; ++I)
 {
  auto* Result = Rooms()->GetResults()[I].Get();
  const FText Label = FText::FromString(FString::Printf(TEXT("%s · 房间 %d  |  %d / %d 人  |  %d ms  |  加入"),
   *Rooms()->GetResultMapLabel(I).ToString(), I + 1, Result->GetMaxPublicConnections() - Result->GetNumOpenPublicConnections(), Result->GetMaxPublicConnections(), Result->GetPingInMs()));
  List->AddSlot().AutoHeight().Padding(0,3)[SNew(SButton).ContentPadding(10)
   .IsEnabled_Lambda([this,I] { return Rooms()->IsReady() && Rooms()->GetResults().IsValidIndex(I) && Rooms()->GetResults()[I]->GetNumOpenPublicConnections() > 0; })
   .OnClicked_Lambda([this,I] { JoinRoom(I); return FReply::Handled(); })[SNew(STextBlock).Text(Label).Font(FCoreStyle::GetDefaultFontStyle("Regular", 16))]];
 }
}
void ULyraRoomScreen::ReleaseSlateResources(bool bChildren) { Super::ReleaseSlateResources(bChildren); List.Reset(); AddressBox.Reset(); DisplayedResults = -1; }
UWidget* ULyraRoomScreen::NativeGetDesiredFocusTarget() const { return const_cast<ULyraRoomScreen*>(this); }
FReply ULyraRoomScreen::NativeOnPreviewKeyDown(const FGeometry& G, const FKeyEvent& E)
{
 if (E.GetKey() == EKeys::F10 || E.GetKey() == EKeys::Escape) { if (!E.IsRepeat()) { DeactivateWidget(); } return FReply::Handled(); }
 return Super::NativeOnPreviewKeyDown(G,E);
}
#undef LOCTEXT_NAMESPACE
