// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "UserSettings.generated.h"

/**
 * 
 */
UCLASS()
class DARKNESSFALLS_API UUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

protected:

	UPROPERTY(Config)
	float MouseSensitivity;

public:
	UFUNCTION(BlueprintCallable)
	void SetMouseSensitivity(float Value);

	UFUNCTION(BlueprintPure)
	float GetMouseSensitivity() const;

	//Get reference to the config class
	UFUNCTION(BlueprintCallable)
	static UUserSettings* GetUserGameSettings();
	
};
 