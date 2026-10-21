// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Camera/LyraCameraAssistInterface.h"
#include "CommonPlayerController.h"
#include "Inventory/LyraWorldPickup.h"
#include "Teams/LyraTeamAgentInterface.h"

#include "LyraPlayerController.generated.h"

struct FGenericTeamId;

class ALyraHUD;
class ALyraPlayerState;
class APawn;
class APlayerState;
class FPrimitiveComponentId;
class IInputInterface;
class ULyraAbilitySystemComponent;
class ULyraSettingsShared;
class ULyraInventoryScreen;
class ULyraRoomScreen;
class UObject;
class UPlayer;
struct FFrame;

/**
 * ALyraPlayerController
 *
 *	The base player controller class used by this project.
 */
UCLASS(Config = Game, Meta = (ShortTooltip = "The base player controller class used by this project."))
class LYRAGAME_API ALyraPlayerController : public ACommonPlayerController, public ILyraCameraAssistInterface, public ILyraTeamAgentInterface
{
	GENERATED_BODY()

public:

	ALyraPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Lyra|PlayerController")
	ALyraPlayerState* GetLyraPlayerState() const;

	UFUNCTION(BlueprintCallable, Category = "Lyra|PlayerController")
	ULyraAbilitySystemComponent* GetLyraAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable, Category = "Lyra|PlayerController")
	ALyraHUD* GetLyraHUD() const;

	// Call from game state logic to start recording an automatic client replay if ShouldRecordClientReplay returns true
	UFUNCTION(BlueprintCallable, Category = "Lyra|PlayerController")
	bool TryToRecordClientReplay();

	// Call to see if we should record a replay, subclasses could change this
	virtual bool ShouldRecordClientReplay();

	// Run a cheat command on the server.
	UFUNCTION(Reliable, Server, WithValidation)
	void ServerCheat(const FString& Msg);

	// Run a cheat command on the server for all players.
	UFUNCTION(Reliable, Server, WithValidation)
	void ServerCheatAll(const FString& Msg);

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//~End of AActor interface

	//~AController interface
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void InitPlayerState() override;
	virtual void CleanupPlayerState() override;
	virtual void OnRep_PlayerState() override;
	//~End of AController interface

	//~APlayerController interface
	virtual void SetupInputComponent() override;
	virtual bool InputKey(const FInputKeyParams& Params) override;
	virtual void Tick(float DeltaTime) override;
	virtual void PreClientTravel(const FString& PendingURL, ETravelType TravelType, bool bIsSeamlessTravel) override;
	virtual void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>& ActorList) override;
	virtual void ReceivedPlayer() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetPlayer(UPlayer* InPlayer) override;
	virtual void AddCheats(bool bForce) override;
	virtual void UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId) override;
	virtual void UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents) override;
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
	//~End of APlayerController interface

	//~ILyraCameraAssistInterface interface
	virtual void OnCameraPenetratingTarget() override;
	//~End of ILyraCameraAssistInterface interface
	
	//~ILyraTeamAgentInterface interface
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;
	virtual FGenericTeamId GetGenericTeamId() const override;
	virtual FOnLyraTeamIndexChangedDelegate* GetOnTeamIndexChangedDelegate() override;
	//~End of ILyraTeamAgentInterface interface

	UFUNCTION(BlueprintCallable, Category = "Lyra|Character")
	void SetIsAutoRunning(const bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Lyra|Character")
	bool GetIsAutoRunning() const;

private:
	UPROPERTY()
	FOnLyraTeamIndexChangedDelegate OnTeamChangedDelegate;

	UPROPERTY()
	TObjectPtr<APlayerState> LastSeenPlayerState;

private:
	UFUNCTION()
	void OnPlayerStateChangedTeam(UObject* TeamAgent, int32 OldTeam, int32 NewTeam);

protected:
	// Called when the player state is set or cleared
	virtual void OnPlayerStateChanged();

private:
	void BroadcastOnPlayerStateChanged();

protected:

	//~APlayerController interface

	//~End of APlayerController interface

	void OnSettingsChanged(ULyraSettingsShared* Settings);
	
	void OnStartAutoRun();
	void OnEndAutoRun();

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnStartAutoRun"))
	void K2_OnStartAutoRun();

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnEndAutoRun"))
	void K2_OnEndAutoRun();

	bool bHideViewTargetPawnNextFrame = false;
public:
	void ToggleInventory();
	void PrepareRoomInventoryPawn(APawn* NewPawn);
	void ToggleRoomMenu();
	// Server-only entry selection. Never changed by an in-room RPC.
	int32 RequestedRoomTeam = INDEX_NONE;
	UFUNCTION(Server, Reliable) void ServerChooseRoomTeam(int32 Team);
	UFUNCTION(Client, Reliable) void ClientRoomTeamResult(bool bSuccess, const FText& Message);
	FText GetRoomTeamFeedback() const { return RoomTeamFeedback; }
	ULyraRoomScreen* GetRoomScreen() const { return RoomScreen; }
	ULyraInventoryScreen* GetInventoryScreen() const { return InventoryScreen; }
	void PickupFocusedItem();
	int64 RequestPickup(ALyraWorldPickup* Pickup);
	UFUNCTION(Server, Reliable) void ServerRequestPickup(ALyraWorldPickup* Pickup, FGuid Id, int32 Revision, int64 RequestId);
	UFUNCTION(Client, Reliable) void ClientPickupResult(const FLyraPickupResult& Result);
	const FLyraPickupResult& GetLastPickupResult() const { return LastPickupResult; }
	ALyraWorldPickup* GetFocusedPickup() const { return FocusedPickup.Get(); }
private:
	void TickPickupInteraction();
	void RemovePickupPrompt();
	bool CanUsePickupInput() const;
	TSharedPtr<SWidget> PickupPrompt;
	TWeakObjectPtr<ALyraWorldPickup> FocusedPickup;
	FText PickupFeedback;
	FLyraPickupResult LastPickupResult;
	int64 NextPickupRequest = 0;
	int64 LastServerPickupRequest = 0;
	int64 PendingPickupRequest = 0;
	double PickupRequestTime = 0;
	double PickupFeedbackUntil = 0;
	double NextPickupScan = 0;
	UPROPERTY(Transient) TObjectPtr<ULyraInventoryScreen> InventoryScreen;
	UPROPERTY(Transient) TObjectPtr<ULyraRoomScreen> RoomScreen;
	FText RoomTeamFeedback;
	TWeakObjectPtr<APawn> InventoryPawn;
	bool bRoomPawnSpawned = false;


	void ReleaseInventoryUI();

};


// A player controller used for replay capture and playback
UCLASS()
class ALyraReplayPlayerController : public ALyraPlayerController
{
	GENERATED_BODY()

	virtual void Tick(float DeltaSeconds) override;
	virtual void SmoothTargetViewRotation(APawn* TargetPawn, float DeltaSeconds) override;
	virtual bool ShouldRecordClientReplay() override;

	// Callback for when the game state's RecorderPlayerState gets replicated during replay playback
	void RecorderPlayerStateUpdated(APlayerState* NewRecorderPlayerState);

	// Callback for when the followed player state changes pawn
	UFUNCTION()
	void OnPlayerStatePawnSet(APlayerState* ChangedPlayerState, APawn* NewPlayerPawn, APawn* OldPlayerPawn);

	// The player state we are currently following */
	UPROPERTY(Transient)
	TObjectPtr<APlayerState> FollowedPlayerState;
};
