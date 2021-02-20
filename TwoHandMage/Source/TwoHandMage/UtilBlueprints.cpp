// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilBlueprints.h"

#include <string>

FVector UUtilBlueprints::CalculateAdvancedShootTarget(APawn* shootingTarget, FVector shootingPosition, float buletSpeed, bool predictZAxis)
{
	if(!shootingTarget)
		return FVector(NULL);
		
	FVector targetLocation = shootingTarget->GetActorLocation();
	
	float targetSpeed = shootingTarget->GetVelocity().Size();
	if(targetSpeed == 0) //if target does not move, hust shoot it!
		return targetLocation;
	
	float distanceToTarget = FVector::Distance(targetLocation, shootingPosition);
	float cos = FVector::DotProduct(shootingTarget->GetVelocity(), shootingPosition - targetLocation) / (distanceToTarget * targetSpeed);
		
	float numerator = (sqrt(pow(distanceToTarget, 2) * (pow(buletSpeed, 2) + pow(targetSpeed, 2) * (pow(cos, 2) - 1)))
		- distanceToTarget * targetSpeed * cos);
	float denominator = (pow(buletSpeed, 2) - pow(targetSpeed, 2));
	float timeBeforeIntersec = numerator / denominator;


	FVector advancedTargetLocation = shootingTarget->GetVelocity() * timeBeforeIntersec + targetLocation;

	if(!predictZAxis) //if do not need to predict target location on Z axis, just set current value in target's Z axis
		return FVector(advancedTargetLocation.X, advancedTargetLocation.Y, targetLocation.Z);
	
	return advancedTargetLocation;
}
