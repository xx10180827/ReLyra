// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "Engine/EngineBaseTypes.h"
#include "LyraRoomSubsystem.generated.h"

class UCommonSession_SearchSessionRequest;
class UCommonSession_SearchResult;
class APlayerController;
class UNetDriver;
struct FOnlineResultInformation;

/** LAN room flow survives map travel. CommonSession owns the underlying session. */
UCLASS()
class ULyraRoomSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
 GENERATED_BODY()
public:
 virtual void Initialize(FSubsystemCollectionBase& Collection) override;
 virtual void Deinitialize() override;
 virtual void Tick(float DeltaTime) override;
 virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(ULyraRoomSubsystem, STATGROUP_Tickables); }
 virtual bool IsTickable() const override { return !IsTemplate(); }
 void Host();
 void Search();
 void Join(int32 Index);
 void DirectJoin(const FString& Address);
 void Leave();
 void SelectTeam(int32 Team);
 void SelectMap(const FString& Id);
 const FString& GetSelectedMap() const { return SelectedMap; }
 FText GetMapLabel() const;
 FText GetResultMapLabel(int32 Index) const;
 bool IsBusy() const;
 bool IsInRoom() const;
 bool IsReady() const;
 void FrontendReady(UWorld* World) { ReadyFrontendWorld = World; }
 int32 GetSelectedTeam() const { return SelectedTeam; }
 FText GetStatus() const { return Status; }
 const TArray<TObjectPtr<UCommonSession_SearchResult>>& GetResults() const { return Results; }
 static bool NormalizeAddress(const FString& Input, FString& Output);
 static const TCHAR* FrontendMap();
private:
 enum class EState : uint8 { Idle, Searching, Hosting, Joining, Connected, Leaving, Failed };
 void SetState(EState NewState, const FText& Message);
 void Created(const FOnlineResultInformation& Result);
 void Joined(const FOnlineResultInformation& Result);
 void PreTravel(FString& URL);
 void Failed(const FText& Message);
 void NetworkFailure(UWorld* World, UNetDriver* Driver, ENetworkFailure::Type Type, const FString& Error);
 void TravelFailure(UWorld* World, ETravelFailure::Type Type, const FString& Error);
 bool HasSession() const;
 APlayerController* Controller() const;
 EState State = EState::Idle;
 FText Status;
 int32 SelectedTeam = 1;
 FString SelectedMap = TEXT("Inventory");
 double OperationStarted = 0;
 bool bReturnToMenu = false;
 bool bRoomFlow = false;
 TWeakObjectPtr<UWorld> ReadyFrontendWorld;
 TWeakObjectPtr<UWorld> OperationWorld;
 FDelegateHandle CreateHandle, JoinHandle, PreTravelHandle, NetworkHandle, TravelHandle;
 UPROPERTY() TObjectPtr<UCommonSession_SearchSessionRequest> SearchRequest;
 UPROPERTY() TArray<TObjectPtr<UCommonSession_SearchResult>> Results;
};
