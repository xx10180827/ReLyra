// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryMapsAuditCommandlet.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/World.h"
#include "GameModes/LyraWorldSettings.h"
#include "GameFramework/GameModeBase.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "UObject/UnrealType.h"

ULyraInventoryMapsAuditCommandlet::ULyraInventoryMapsAuditCommandlet()
{
	IsEditor = true; IsClient = false; IsServer = false; LogToConsole = true;
}

int32 ULyraInventoryMapsAuditCommandlet::Main(const FString& Params)
{
	auto& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry")).Get();
	Registry.SearchAllAssets(true);
	TArray<FAssetData> Maps;
	Registry.GetAssetsByClass(UWorld::StaticClass()->GetClassPathName(), Maps);
	FString Report(TEXT("Map\tGameMode\tDefaultExperience\n"));
	int32 Count = 0, Failed = 0;
	for (const auto& Asset : Maps)
	{
		const FString Path = Asset.PackageName.ToString();
		if (!Path.StartsWith(TEXT("/Game/")) && !Path.StartsWith(TEXT("/Shooter")) && !Path.StartsWith(TEXT("/TopDownArena/"))) { continue; }
		auto* World = Cast<UWorld>(Asset.GetAsset());
		const auto* Settings = World ? World->GetWorldSettings() : nullptr;
		if (!Settings) { ++Failed; UE_LOG(LogTemp, Error, TEXT("Inventory map audit cannot load %s"), *Path); continue; }
		FString Experience;
		if (const auto* Prop = FindFProperty<FProperty>(Settings->GetClass(), TEXT("DefaultGameplayExperience")))
		{
			Prop->ExportText_InContainer(0, Experience, Settings, Settings, const_cast<AWorldSettings*>(Settings), PPF_None);
		}
		Report += FString::Printf(TEXT("%s\t%s\t%s\n"), *Path, *GetPathNameSafe(Settings->DefaultGameMode), *Experience);
		++Count;
	}
	TArray<FAssetData> Experiences;
	Registry.GetAssetsByClass(FTopLevelAssetPath(TEXT("/Script/LyraGame"), TEXT("LyraUserFacingExperienceDefinition")), Experiences);
	FString Playlists(TEXT("Asset\tMap\tExperience\tVisible\n"));
	for (const auto& Asset : Experiences)
	{
		if (auto* Experience = Asset.GetAsset())
		{
			const auto Value = [&](const TCHAR* Name)
			{
				FString Text;
				if (const auto* Prop = FindFProperty<FProperty>(Experience->GetClass(), Name)) { Prop->ExportText_InContainer(0, Text, Experience, Experience, Experience, PPF_None); }
				return Text;
			};
			Playlists += FString::Printf(TEXT("%s\t%s\t%s\t%s\n"), *Asset.PackageName.ToString(), *Value(TEXT("MapID")), *Value(TEXT("ExperienceID")), *Value(TEXT("bShowInFrontEnd")));
		}
	}
	const FString Directory = FPaths::ProjectSavedDir() / TEXT("InventoryMultiplayer/MapsAudit");
	IFileManager::Get().MakeDirectory(*Directory, true);
	const bool Saved = FFileHelper::SaveStringToFile(Report, *(Directory / TEXT("Maps.tsv")), FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM)
		&& FFileHelper::SaveStringToFile(Playlists, *(Directory / TEXT("Playlists.tsv")), FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM);
	UE_LOG(LogTemp, Display, TEXT("INVENTORY_MAP_AUDIT maps=%d failures=%d"), Count, Failed);
	return Saved && Count > 0 && Failed == 0 ? 0 : 1;
}
