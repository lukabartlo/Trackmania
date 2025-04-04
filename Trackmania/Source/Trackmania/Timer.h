// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Timer.generated.h"

UCLASS()
class TRACKMANIA_API ATimer : public AActor
{
	GENERATED_BODY()
	
	FTimerHandle MyTimerHandle;
	int32 TimerCount = 0;
	
public:
	
	ATimer();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	void StartChrono();
	void StopChrono();
	void ResetChrono();
	float GetElapsedTime() const;

private:
	FTimerHandle TimerHandle;
	float StartTime;
	bool bIsRunning;

	void UpdateChrono();
};


