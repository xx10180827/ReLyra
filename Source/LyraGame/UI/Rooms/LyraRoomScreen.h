// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "UI/LyraActivatableWidget.h"
#include "LyraRoomScreen.generated.h"
class SVerticalBox;
class SEditableTextBox;
class ULyraRoomSubsystem;

UCLASS()
class ULyraRoomScreen : public ULyraActivatableWidget
{
 GENERATED_BODY()
public:
 ULyraRoomScreen(const FObjectInitializer& ObjectInitializer);
 void HostRoom();
 void SearchRooms();
 void JoinRoom(int32 Index);
 void JoinAddress(const FString& Address);
 void ChooseTeam(int32 Team);
 void ChooseMap(const FString& Id);
 void LeaveRoom();
protected:
 virtual TSharedRef<SWidget> RebuildWidget() override;
 virtual void ReleaseSlateResources(bool bReleaseChildren) override;
 virtual void NativeTick(const FGeometry& Geometry, float DeltaTime) override;
 virtual UWidget* NativeGetDesiredFocusTarget() const override;
 virtual FReply NativeOnPreviewKeyDown(const FGeometry& Geometry, const FKeyEvent& Event) override;
private:
 ULyraRoomSubsystem* Rooms() const;
 FText Roster() const;
 TSharedPtr<SVerticalBox> List;
 TSharedPtr<SEditableTextBox> AddressBox;
 TArray<TSharedPtr<FString>> MapOptions;
 int32 DisplayedResults = -1;
 uint32 DisplayedRevision = MAX_uint32;
 bool bConfirmLeave = false;
};
