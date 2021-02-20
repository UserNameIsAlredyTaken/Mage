// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilBlueprints.generated.h"

/**
 * 
 */
UCLASS()
class TWOHANDMAGE_API UUtilBlueprints : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilFunctions")
	static FVector CalculateAdvancedShootTarget(APawn* shootingTarget, FVector shootingPosition, float buletSpeed, bool predictZAxis);
};
