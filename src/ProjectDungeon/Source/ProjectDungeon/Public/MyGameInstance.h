// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/OnlineSessionInterface.h" 
#include "OnlineSubsystem.h" 
#include "OnlineSessionSettings.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDUNGEON_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
    

   public:
        // Session interface pointer
    IOnlineSessionPtr SessionInterface;

    // Function to create a session
    void CreateGameSession(int32 NumPublicConnections, bool bIsLAN);
    FOnlineSessionSettings CurrentSessionSettings;

    protected: virtual void Init() override;
    

	
};
