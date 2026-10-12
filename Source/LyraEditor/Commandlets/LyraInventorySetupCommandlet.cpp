// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventorySetupCommandlet.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Editor.h"
#include "Engine/AssetManager.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/DirectionalLight.h"
#include "Engine/SkyLight.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/TextRenderActor.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "FileHelpers.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/WorldSettings.h"
#include "HAL/FileManager.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Logging/MessageLog.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "Misc/Parse.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"
#include "UObject/UnrealType.h"

namespace LyraInventorySetup
{
	const FString ExperiencePath(TEXT("/Game/InventorySystem/System/B_InventoryMultiplayer"));
	const FString MapPath(TEXT("/Game/InventorySystem/Maps/L_InventoryMultiplayer"));

	bool SetProperty(UObject* Object, FName Name, const FString& Value)
	{
		FProperty* Property = Object ? Object->GetClass()->FindPropertyByName(Name) : nullptr;
		if (!Property || !Property->ImportText_InContainer(*Value, Object, Object, PPF_None, GWarn))
		{
			UE_LOG(LogTemp, Error, TEXT("Inventory setup could not set %s.%s"), *GetPathNameSafe(Object), *Name.ToString());
			return false;
		}
		return true;
	}

	bool SaveAsset(UObject* Asset)
	{
		UPackage* Package = Asset->GetOutermost();
		const FString Filename = FPackageName::LongPackageNameToFilename(Package->GetName(), FPackageName::GetAssetPackageExtension());
		IFileManager::Get().MakeDirectory(*FPaths::GetPath(Filename), true);
		Asset->MarkPackageDirty();
		FAssetRegistryModule::AssetCreated(Asset);
		FSavePackageArgs Args;
		Args.TopLevelFlags = RF_Public | RF_Standalone;
		Args.SaveFlags = SAVE_NoError;
		return UPackage::SavePackage(Package, Asset, *Filename, Args);
	}

	AStaticMeshActor* AddBlock(UWorld* World, UStaticMesh* Cube, const TCHAR* Name, const FVector& Position, const FVector& Scale)
	{
		AStaticMeshActor* Block = World->SpawnActor<AStaticMeshActor>(Position, FRotator::ZeroRotator);
		if (Block)
		{
			Block->SetActorLabel(Name);
			Block->GetStaticMeshComponent()->SetStaticMesh(Cube);
			Block->GetStaticMeshComponent()->SetCollisionProfileName(TEXT("BlockAll"));
			Block->SetActorScale3D(Scale);
		}
		return Block;
	}
}

ULyraInventorySetupCommandlet::ULyraInventorySetupCommandlet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	IsClient = false;
	IsServer = false;
	IsEditor = true;
	LogToConsole = true;
}

int32 ULyraInventorySetupCommandlet::Main(const FString& Params)
{
	using namespace LyraInventorySetup;
	if (FParse::Param(*Params, TEXT("RepairLabels")))
	{
		FString Filename;
		if (!FPackageName::DoesPackageExist(MapPath, &Filename))
		{
			return 1;
		}
		UWorld* World = UEditorLoadingAndSavingUtils::LoadMap(Filename);
		if (!World)
		{
			return 1;
		}
		const TArray<FString> Names = {TEXT("RIFLE"), TEXT("SHOTGUN"), TEXT("RIFLE AMMO"), TEXT("SHELLS"), TEXT("MEDKIT")};
		int32 Fixed = 0;
		for (TActorIterator<ATextRenderActor> It(World); It; ++It)
		{
			if (Names.Contains(It->GetTextRender()->Text.ToString()) && FMath::IsNearlyEqual(It->GetActorLocation().X, 250.0))
			{
				It->SetActorRotation(FRotator(0, 180, 0));
				UE_LOG(LogTemp, Display, TEXT("Inventory label %s rotation=%s"), *It->GetTextRender()->Text.ToString(), *It->GetActorRotation().ToString());
				++Fixed;
			}
		}
		if (Fixed != 5 || !UEditorLoadingAndSavingUtils::SaveMap(World, MapPath))
		{
			return 1;
		}
		GEditor->Exec(World, TEXT("MAP CHECK DONTDISPLAYDIALOG"), *GWarn);
		FMessageLog MapCheck(TEXT("MapCheck"));
		const int32 Messages = MapCheck.NumMessages(EMessageSeverity::Warning);
		UE_LOG(LogTemp, Display, TEXT("INVENTORY_LABEL_REPAIR count=%d mapCheckWarningsAndErrors=%d"), Fixed, Messages);
		return Messages == 0 ? 0 : 1;
	}
	if (FPackageName::DoesPackageExist(ExperiencePath) || FPackageName::DoesPackageExist(MapPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Inventory setup outputs already exist. This initial generator will not overwrite edited assets."));
		return 1;
	}
	UClass* ExperienceClass = LoadClass<UObject>(nullptr, TEXT("/Script/LyraGame.LyraExperienceDefinition"));
	UClass* ComponentsActionClass = LoadClass<UObject>(nullptr, TEXT("/Script/GameFeatures.GameFeatureAction_AddComponents"));
	UClass* StartClass = LoadClass<AActor>(nullptr, TEXT("/Script/LyraGame.LyraPlayerStart"));
	UClass* GameModeClass = LoadClass<AGameModeBase>(nullptr, TEXT("/Script/LyraGame.LyraInventoryGameMode"));
	UStaticMesh* Cube = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (!GEditor || !ExperienceClass || !ComponentsActionClass || !StartClass || !GameModeClass || !Cube)
	{
		UE_LOG(LogTemp, Error, TEXT("Inventory setup required classes or engine cube are unavailable"));
		return 1;
	}

	UPackage* ExperiencePackage = CreatePackage(*ExperiencePath);
	UBlueprint* Experience = FKismetEditorUtilities::CreateBlueprint(ExperienceClass, ExperiencePackage,
		FName(*FPackageName::GetShortName(ExperiencePath)), BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
	if (!Experience || !Experience->GeneratedClass)
	{
		return 1;
	}
	UObject* Defaults = Experience->GeneratedClass->GetDefaultObject();
	UObject* ComponentsAction = NewObject<UObject>(Defaults, ComponentsActionClass, TEXT("InventoryBaseComponents"), RF_Transactional);
	bool bConfigured = SetProperty(Defaults, TEXT("GameFeaturesToEnable"), TEXT("(\"ShooterCore\")"));
	bConfigured &= SetProperty(Defaults, TEXT("DefaultPawnData"), TEXT("/Script/LyraGame.LyraPawnData'/ShooterCore/Game/HeroData_ShooterGame.HeroData_ShooterGame'"));
	bConfigured &= SetProperty(Defaults, TEXT("ActionSets"),
		TEXT("(\"/Script/LyraGame.LyraExperienceActionSet'/ShooterCore/Experiences/LAS_ShooterGame_SharedInput.LAS_ShooterGame_SharedInput'\",\"/Script/LyraGame.LyraExperienceActionSet'/ShooterCore/Experiences/LAS_ShooterGame_StandardComponents.LAS_ShooterGame_StandardComponents'\",\"/Script/LyraGame.LyraExperienceActionSet'/ShooterCore/Experiences/LAS_ShooterGame_StandardHUD.LAS_ShooterGame_StandardHUD'\")"));
	bConfigured &= SetProperty(ComponentsAction, TEXT("ComponentList"),
		TEXT("((ActorClass=\"/Script/LyraGame.LyraGameState\",ComponentClass=\"/ShooterCore/Game/B_TeamSetup_TwoTeams.B_TeamSetup_TwoTeams_C\",bClientComponent=False,bServerComponent=True),(ActorClass=\"/Script/LyraGame.LyraGameState\",ComponentClass=\"/Script/LyraGame.LyraPlayerSpawningManagerComponent\",bClientComponent=False,bServerComponent=True),(ActorClass=\"/Script/Engine.Controller\",ComponentClass=\"/Game/Characters/Cosmetics/B_PickRandomCharacter.B_PickRandomCharacter_C\",bClientComponent=False,bServerComponent=True))"));
	FArrayProperty* ActionsProperty = CastField<FArrayProperty>(Defaults->GetClass()->FindPropertyByName(TEXT("Actions")));
	FObjectPropertyBase* Inner = ActionsProperty ? CastField<FObjectPropertyBase>(ActionsProperty->Inner) : nullptr;
	if (!bConfigured || !Inner)
	{
		return 1;
	}
	FScriptArrayHelper Actions(ActionsProperty, ActionsProperty->ContainerPtrToValuePtr<void>(Defaults));
	Actions.Resize(1);
	Inner->SetObjectPropertyValue(Actions.GetRawPtr(0), ComponentsAction);
	FBlueprintEditorUtils::MarkBlueprintAsModified(Experience);
	FKismetEditorUtilities::CompileBlueprint(Experience);
	if (Experience->Status == BS_Error || !SaveAsset(Experience))
	{
		UE_LOG(LogTemp, Error, TEXT("Inventory experience could not be compiled or saved"));
		return 1;
	}
	UAssetManager::Get().ScanPathsForPrimaryAssets(FPrimaryAssetType(TEXT("LyraExperienceDefinition")),
		{TEXT("/Game/InventorySystem/System")}, ExperienceClass, true, false, true);

	UWorld* World = UEditorLoadingAndSavingUtils::NewBlankMap(false);
	AWorldSettings* Settings = World ? World->GetWorldSettings() : nullptr;
	if (!World || !Settings)
	{
		return 1;
	}
	Settings->DefaultGameMode = GameModeClass;
	if (!SetProperty(Settings, TEXT("DefaultGameplayExperience"), Experience->GeneratedClass->GetPathName())
		|| !SetProperty(Settings, TEXT("ForceStandaloneNetMode"), TEXT("False")))
	{
		return 1;
	}
	AddBlock(World, Cube, TEXT("InventoryArena_Floor"), FVector(0, 0, -50), FVector(30, 30, 1));
	AddBlock(World, Cube, TEXT("InventoryArena_North"), FVector(0, 1500, 150), FVector(30, 0.5, 3));
	AddBlock(World, Cube, TEXT("InventoryArena_South"), FVector(0, -1500, 150), FVector(30, 0.5, 3));
	AddBlock(World, Cube, TEXT("InventoryArena_East"), FVector(1500, 0, 150), FVector(0.5, 30, 3));
	AddBlock(World, Cube, TEXT("InventoryArena_West"), FVector(-1500, 0, 150), FVector(0.5, 30, 3));
	for (int32 Index = 0; Index < 2; ++Index)
	{
		AActor* Start = World->SpawnActor<AActor>(StartClass, FVector(-600, Index == 0 ? -250 : 250, 110), FRotator::ZeroRotator);
		if (!Start)
		{
			return 1;
		}
		Start->SetActorLabel(FString::Printf(TEXT("Inventory_PlayerStart_%d"), Index + 1));
	}
	ADirectionalLight* Sun = World->SpawnActor<ADirectionalLight>(FVector(0, 0, 600), FRotator(-50, -30, 0));
	ASkyLight* Sky = World->SpawnActor<ASkyLight>();
	if (!Sun || !Sky)
	{
		return 1;
	}
	Sun->GetLightComponent()->SetMobility(EComponentMobility::Movable);
	Sun->GetLightComponent()->SetIntensity(6.0f);
	Sky->GetLightComponent()->SetMobility(EComponentMobility::Movable);
	Sky->GetLightComponent()->SetIntensity(1.0f);
	const TCHAR* StationNames[] = {TEXT("RIFLE"), TEXT("SHOTGUN"), TEXT("RIFLE AMMO"), TEXT("SHELLS"), TEXT("MEDKIT")};
	for (int32 Index = 0; Index < UE_ARRAY_COUNT(StationNames); ++Index)
	{
		const FVector Position(250, -600 + Index * 300, 25);
		AddBlock(World, Cube, StationNames[Index], Position, FVector(1.5, 1.5, 0.5));
		ATextRenderActor* Label = World->SpawnActor<ATextRenderActor>(Position + FVector(0, 0, 120), FRotator(0, 180, 0));
		if (!Label)
		{
			return 1;
		}
		Label->GetTextRender()->SetText(FText::FromString(StationNames[Index]));
		Label->GetTextRender()->SetHorizontalAlignment(EHTA_Center);
		Label->GetTextRender()->SetWorldSize(24);
		Label->GetTextRender()->SetTextRenderColor(FColor::White);
	}
	IFileManager::Get().MakeDirectory(*FPaths::GetPath(FPackageName::LongPackageNameToFilename(MapPath)), true);
	if (!UEditorLoadingAndSavingUtils::SaveMap(World, MapPath))
	{
		return 1;
	}
	GEditor->Exec(World, TEXT("MAP CHECK DONTDISPLAYDIALOG"), *GWarn);
	FMessageLog MapCheck(TEXT("MapCheck"));
	const int32 Errors = MapCheck.NumMessages(EMessageSeverity::Error);
	const int32 Warnings = MapCheck.NumMessages(EMessageSeverity::Warning) - Errors;
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_SETUP map=%s experience=%s errors=%d warnings=%d"), *MapPath, *ExperiencePath, Errors, Warnings);
	return Errors == 0 && Warnings == 0 ? 0 : 1;
}
