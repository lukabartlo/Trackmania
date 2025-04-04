// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer.h"

// Sets default values
ATimer::ATimer()
{
	
	PrimaryActorTick.bCanEverTick = false;
	bIsRunning = false;
	StartTime = 0.0f;
}

void ATimer::BeginPlay()
{
	Super::BeginPlay();
}

void ATimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATimer::StartChrono()
{
	if (!bIsRunning)
	{
		StartTime = GetWorld()->GetTimerManager()
		bIsRunning = true;
	}
}

void ATimer::StopChrono()
{
	if (bIsRunning)
	{
		bIsRunning = false;
	}
}

void ATimer::ResetChrono()
{
	StartTime = GetWorld()->GetTimeSeconds();
}

float ATimer::GetElapsedTime() const
{
	if (bIsRunning)
	{
		return GetWorld()->GetTimeSeconds() - StartTime;
	}
	return 0.0f;
}