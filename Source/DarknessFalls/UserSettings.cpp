// Fill out your copyright notice in the Description page of Project Settings.


#include "UserSettings.h"

UUserSettings::UUserSettings(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
    MouseSensitivity = 0.65f;
}

void UUserSettings::SetMouseSensitivity(float Value)
{
    MouseSensitivity = Value;
}

float UUserSettings::GetMouseSensitivity() const
{
    return MouseSensitivity;
}

UUserSettings * UUserSettings::GetUserGameSettings()
{
    return Cast<UUserSettings>(UGameUserSettings::GetGameUserSettings());
}

