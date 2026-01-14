// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"

void AMyPlayerState::CopyProperties(APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);

	//AMyPlayerState* NewPS = Cast(PlayerState);
	//if (!NewPS)
	//{
	//	return;
	//}

	//// Copy any variables you want to persist across seamless travel.
	//NewPS->SelectedClass = SelectedClass;
	//NewPS->CosmeticID = CosmeticID;
	//NewPS->LoadoutData = LoadoutData;


}
