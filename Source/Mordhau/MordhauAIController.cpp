// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauAIController.h"
#include "MordhauCharacter.h"
#include "UnrealNetwork.h"
//
//void AMordhauAIController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
//{
//	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//
//	DOREPLIFETIME(AMordhauAIController, bFirstRun)
//	DOREPLIFETIME(AMordhauAIController, RandomFloat)
//	DOREPLIFETIME(AMordhauAIController, EnemyScanInterval)
//	DOREPLIFETIME(AMordhauAIController, EnemyScanIntervalVariance)
//	DOREPLIFETIME(AMordhauAIController, bAutoRespawn)
//	DOREPLIFETIME(AMordhauAIController, bWantsRespawn)
//	DOREPLIFETIME(AMordhauAIController, NextRespawnTime)
//	DOREPLIFETIME(AMordhauAIController, bEnableAnticipateTurns)
//	DOREPLIFETIME(AMordhauAIController, bEnableObstacleAvoidance)
//	DOREPLIFETIME(AMordhauAIController, bEnableSeparation)
//	DOREPLIFETIME(AMordhauAIController, bEnableOptimizeVisibility)
//	DOREPLIFETIME(AMordhauAIController, bEnableOptimizeTopology)
//	DOREPLIFETIME(AMordhauAIController, bEnablePathOffset)
//	DOREPLIFETIME(AMordhauAIController, bEnableSlowdownAtGoal)
//	DOREPLIFETIME(AMordhauAIController, SeparationWeight)
//	DOREPLIFETIME(AMordhauAIController, CollisionQueryRange)
//	DOREPLIFETIME(AMordhauAIController, PathOptimizationRange)
//	DOREPLIFETIME(AMordhauAIController, AvoidanceRangeMultiplier)
//
//}

//void AMordhauAIController::OnAfterUnPossess_Implementation()
//{
//
//}
//void AMordhauAIController::OnStartedPerceivingCharacter_Implementation(class AAdvancedCharacter* PerceivedCharacter, struct FPerceptionInfo PerceptionInfo)
//{
//
//}
//void AMordhauAIController::OnStoppedPerceivingCharacter_Implementation(class AAdvancedCharacter* PerceivedCharacter, struct FPerceptionInfo PerceptionInfo)
//{
//
//}

EAIFacingMode ReturnAIFace;
void AMordhauAIController::UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, FPerceptionInfo PerceptionInfo)
{}
//void AMordhauAIController::OnCharacterDiedOrDestroyed_Implementation(class AAdvancedCharacter* AdvancedCharacter)
//{}
void AMordhauAIController::GetPerceivedEnemies(TArray<class AMordhauCharacter*>& enemies)
{}
void AMordhauAIController::GetPerceivedAllies(TArray<class AMordhauCharacter*>& allies)
{

}
class AMordhauCharacter* AMordhauAIController::GetClosestEnemy()
{
	return nullptr;
}
class AMordhauCharacter* AMordhauAIController::GetClosestAlly()
{
	return nullptr;
}
float AMordhauAIController::GetMotionBasedRandom()
{
	return 1;
}
void AMordhauAIController::DestroyController()
{
	
}
int AMordhauAIController::GetTeam()
{
	return 1;
}
int AMordhauAIController::GetAllyClearanceSides()
{
	return 1;
}


void AMordhauAIController::RefreshCharacterProfile()
{}

void AMordhauAIController::RequestVoiceCommand(uint8 Command)
{}

void AMordhauAIController::StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset)
{}
void AMordhauAIController::StartFacingActor2D(class AActor* Actor, float LocationUpOffset)
{}
void AMordhauAIController::StartFacingBone(class USkeletalMeshComponent* SkelMesh, const FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset)
{

}
void AMordhauAIController::StartFacingLocation(const struct FVector& WorldLocation)
{}
void AMordhauAIController::StartFacingMovement(float LocationUpOffset)
{}
class AActor* AMordhauAIController::GetCurrentlyFacingActor()
{
	return nullptr;
}
//class AMordhauCharacter* AMordhauAIController::GetClosestAlly()
//{
//	return nullptr;
//}
//class AMordhauCharacter* AMordhauAIController::GetClosestEnemy()
//{
//	return nullptr;
//}
EAIFacingMode AMordhauAIController::GetCurrentFacingMode()
{
	return ReturnAIFace;
}

bool AMordhauAIController::PerceivesEnemy()
{
	return 1;
}
bool AMordhauAIController::PerceivesAlly()
{
	return 1;
	}
class AMordhauCharacter* AMordhauAIController::GetKthClosestOfThree(int Idx)
{
	return nullptr;
}