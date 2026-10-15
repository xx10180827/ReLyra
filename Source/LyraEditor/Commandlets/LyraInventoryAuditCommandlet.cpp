// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryAuditCommandlet.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "Editor.h"
#include "Engine/Blueprint.h"
#include "Engine/Level.h"
#include "Engine/World.h"
#include "FileHelpers.h"
#include "GameFramework/Actor.h"
#include "GameFramework/WorldSettings.h"
#include "HAL/FileManager.h"
#include "Logging/MessageLog.h"
#include "Misc/FileHelper.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "Misc/Parse.h"
#include "UObject/UObjectHash.h"
#include "UObject/UnrealType.h"

namespace LyraInventoryAudit
{
	void DescribeObject(UObject* Object, FString& Report)
	{
		Report += FString::Printf(TEXT("\nOBJECT %s CLASS %s\n"), *Object->GetPathName(), *Object->GetClass()->GetPathName());
		for (TFieldIterator<FProperty> It(Object->GetClass()); It; ++It)
		{
			FProperty* Property = *It;
			if (Property->HasAnyPropertyFlags(CPF_Transient | CPF_Deprecated)
				|| !Property->HasAnyPropertyFlags(CPF_Edit | CPF_BlueprintVisible))
			{
				continue;
			}
			FString Value;
			// Passing the same data and delta forces exporting zero/default-valued fields too.
			Property->ExportText_InContainer(0, Value, Object, Object, Object, PPF_None);
			Report += FString::Printf(TEXT("  %s = %s\n"), *Property->GetName(), *Value);
		}
	}

	void DescribeBlueprint(UBlueprint* Blueprint, FString& Report)
	{
		Report += FString::Printf(TEXT("PARENT %s\n"), *GetPathNameSafe(Blueprint->ParentClass));
		if (Blueprint->GeneratedClass)
		{
			UObject* Defaults = Blueprint->GeneratedClass->GetDefaultObject();
			DescribeObject(Defaults, Report);
			ForEachObjectWithOuter(Defaults, [&Report](UObject* Child)
			{
				DescribeObject(Child, Report);
			});
		}

		TArray<UEdGraph*> Graphs;
		Blueprint->GetAllGraphs(Graphs);
		for (const UEdGraph* Graph : Graphs)
		{
			Report += FString::Printf(TEXT("\nGRAPH %s\n"), *Graph->GetName());
			for (const UEdGraphNode* Node : Graph->Nodes)
			{
				if (!Node)
				{
					continue;
				}
				Report += FString::Printf(TEXT("  NODE %s: %s\n"), *Node->GetName(), *Node->GetNodeTitle(ENodeTitleType::FullTitle).ToString());
				for (const UEdGraphPin* Pin : Node->Pins)
				{
					for (const UEdGraphPin* Linked : Pin->LinkedTo)
					{
						if (Pin->Direction == EGPD_Output)
						{
							Report += FString::Printf(TEXT("    LINK %s -> %s.%s\n"), *Pin->PinName.ToString(), *Linked->GetOwningNode()->GetName(), *Linked->PinName.ToString());
						}
					}
					if (!Pin->DefaultValue.IsEmpty() || Pin->DefaultObject)
					{
						Report += FString::Printf(TEXT("    %s = %s %s\n"), *Pin->PinName.ToString(), *Pin->DefaultValue, *GetPathNameSafe(Pin->DefaultObject));
					}
				}
			}
		}
	}
}

ULyraInventoryAuditCommandlet::ULyraInventoryAuditCommandlet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	IsClient = false;
	IsServer = false;
	IsEditor = true;
	LogToConsole = true;
}

int32 ULyraInventoryAuditCommandlet::Main(const FString& Params)
{
	TArray<FString> AssetPaths = {
		TEXT("/Game/B_LyraGameMode"),
		TEXT("/ShooterCore/ShooterCore"),
		TEXT("/ShooterExplorer/ShooterExplorer"),
		TEXT("/ShooterCore/Experiences/B_ShooterGame_Elimination"),
		TEXT("/ShooterCore/Game/B_QuickBarComponent"),
		TEXT("/ShooterExplorer/Game/HeroData_Explorer"),
		TEXT("/ShooterExplorer/System/Experiences/B_TestInventoryExperience"),
		TEXT("/ShooterExplorer/System/Experiences/LAS_InventoryTest"),
		TEXT("/ShooterExplorer/Input/Mappings/IMC_InventoryTest"),
		TEXT("/ShooterExplorer/Input/Actions/InputData_InventoryTest"),
		TEXT("/ShooterExplorer/Input/Abilities/GA_ToggleInventory"),
		TEXT("/ShooterExplorer/UserInterface/W_InventoryScreen"),
		TEXT("/ShooterExplorer/UserInterface/W_InventoryGrid"),
		TEXT("/ShooterExplorer/UserInterface/W_InventoryTile"),
		TEXT("/ShooterCore/Experiences/LAS_ShooterGame_StandardComponents"),
		TEXT("/ShooterCore/Experiences/LAS_ShooterGame_SharedInput"),
		TEXT("/ShooterCore/Experiences/LAS_ShooterGame_StandardHUD"),
		TEXT("/Game/WeaponSystem/Abilities/GA_WS_Reload_Rifle"),
		TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle"),
		TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun"),
		TEXT("/Game/WeaponSystem/Maps/L_WS_WeaponTest")
	};

	FString FocusedAsset;
	const bool bFocused = FParse::Value(*Params, TEXT("Asset="), FocusedAsset);
	if (bFocused) { AssetPaths = {FocusedAsset}; }
	FString Report(TEXT("Lyra inventory and multiplayer asset audit (read-only)\n"));
	int32 Failures = 0;
	for (const FString& Path : AssetPaths)
	{
		const FString ObjectPath = Path + TEXT(".") + FPackageName::GetShortName(Path);
		FString PackageFilename;
		const bool bIsMap = FPackageName::DoesPackageExist(Path, &PackageFilename)
			&& PackageFilename.EndsWith(FPackageName::GetMapPackageExtension());
		// Map Check needs a fully initialized editor world, not just a deserialized UWorld asset.
		UObject* Asset = bIsMap
			? UEditorLoadingAndSavingUtils::LoadMap(PackageFilename)
			: LoadObject<UObject>(nullptr, *ObjectPath);
		if (!Asset)
		{
			++Failures;
			Report += FString::Printf(TEXT("\nLOAD FAILED %s\n"), *Path);
			UE_LOG(LogTemp, Error, TEXT("Inventory audit could not load %s"), *Path);
			continue;
		}
		Report += FString::Printf(TEXT("\nASSET %s\n"), *Asset->GetPathName());
		if (UBlueprint* Blueprint = Cast<UBlueprint>(Asset))
		{
			if (!Blueprint->GeneratedClass || Blueprint->Status == BS_Error)
			{
				++Failures;
				Report += TEXT("BLUEPRINT ERROR: missing generated class or compile error\n");
			}
			LyraInventoryAudit::DescribeBlueprint(Blueprint, Report);
		}
		else if (UWorld* World = Cast<UWorld>(Asset))
		{
			if (!World->PersistentLevel || !World->GetWorldSettings())
			{
				++Failures;
				Report += TEXT("MAP ERROR: missing persistent level or world settings\n");
				continue;
			}
			LyraInventoryAudit::DescribeObject(World->GetWorldSettings(), Report);
			for (AActor* Actor : World->PersistentLevel->Actors)
			{
				if (Actor)
				{
					Report += FString::Printf(TEXT("ACTOR %s CLASS %s\n"), *Actor->GetName(), *Actor->GetClass()->GetPathName());
				}
			}
			if (GEditor)
			{
				if (!GEditor->Exec(World, TEXT("MAP CHECK DONTDISPLAYDIALOG"), *GWarn))
				{
					++Failures;
					Report += TEXT("MAP CHECK command was not handled\n");
					continue;
				}
				FMessageLog MapCheck(TEXT("MapCheck"));
				const int32 Errors = MapCheck.NumMessages(EMessageSeverity::Error);
				const int32 Warnings = MapCheck.NumMessages(EMessageSeverity::Warning) - Errors;
				Report += FString::Printf(TEXT("MAP CHECK errors=%d warnings=%d\n"), Errors, Warnings);
				Failures += Errors;
			}
			else
			{
				++Failures;
				Report += TEXT("MAP CHECK unavailable: no editor engine\n");
			}
		}
		else
		{
			LyraInventoryAudit::DescribeObject(Asset, Report);
			ForEachObjectWithOuter(Asset, [&Report](UObject* Child)
			{
				LyraInventoryAudit::DescribeObject(Child, Report);
			});
		}
	}

	const FString ReportPath = FPaths::ProjectSavedDir() / (bFocused ? TEXT("InventoryMultiplayer/FocusedAssetAudit.txt") : TEXT("InventoryMultiplayer/AssetAudit.txt"));
	IFileManager::Get().MakeDirectory(*FPaths::GetPath(ReportPath), true);
	if (!FFileHelper::SaveStringToFile(Report, *ReportPath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot save inventory audit report to %s"), *ReportPath);
		return 1;
	}
	UE_LOG(LogTemp, Display, TEXT("Inventory audit complete: failures=%d report=%s"), Failures, *ReportPath);
	return Failures == 0 ? 0 : 1;
}
