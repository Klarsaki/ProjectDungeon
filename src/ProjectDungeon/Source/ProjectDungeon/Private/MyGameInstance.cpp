// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Interfaces/OnlineSessionInterface.h" 
#include "OnlineSubsystem.h" 
#include "OnlineSubsystemUtils.h"
#include "gamemodebase.h"

void UMyGameInstance::Init() { 
	Super::Init();
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get(); 
	if (Subsystem) 
	{ 
		SessionInterface = Subsystem->GetSessionInterface(); 
	} 

	AGameModeBase

}

void UMyGameInstance::CreateGameSession(int32 NumPublicConnections, bool bIsLAN) { 
	if (!SessionInterface.IsValid()) return; 



	CurrentSessionSettings = FOnlineSessionSettings(); 
	CurrentSessionSettings.NumPublicConnections = NumPublicConnections; 
	CurrentSessionSettings.bIsLANMatch = bIsLAN; 
	CurrentSessionSettings.bShouldAdvertise = true; 
	CurrentSessionSettings.bAllowJoinInProgress = true; 
	CurrentSessionSettings.bUsesPresence = true; // presence-enabled subsystems (e.g., EOS/Steam) 
	CurrentSessionSettings.bAllowInvites = true; 
	CurrentSessionSettings.bUseLobbiesIfAvailable = true;
		
	SessionInterface->CreateSession(0, NAME_GameSession, CurrentSessionSettings);
}
