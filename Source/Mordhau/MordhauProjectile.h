// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "Mordhau.h"
#include "MordhauProjectile.generated.h"

/**
 *
 */

USTRUCT(Blueprintable, BlueprintType)
struct FProjectileInfo
{
	GENERATED_BODY()
};

UCLASS()
class MORDHAU_API AMordhauProjectile : public AMordhauActor
{
	GENERATED_BODY()

public:

	AMordhauProjectile();


	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class USceneComponent*                             SpinComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bDestroyWhenTerminated;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bWasAttachedOnClient;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText                                       ProjectileName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     LastProjectileLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHideProjectile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FTransform                                  CosmeticOffsetToBlendOut;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CosmeticOffsetBlendOutSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CosmeticOffsetBlendWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FTransform                                  OriginalMeshRelativeTransform;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FQuat                                       DefaultMeshRotationOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FWoundInfo>                          WoundInfoArray;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TEnumAsByte<EPhysicalSurface>>              WillStickyOn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TEnumAsByte<EPhysicalSurface>>              WillPassThroughOn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap <TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> SurfaceImpactParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap <TEnumAsByte<EPhysicalSurface>, struct FDecalInfo> SurfaceImpactDecals;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     RotationSpin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              PathBlendDuration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RagdollLifeSpan;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                     AttackMask;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue*                                   FlightSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue*                                   ImpactSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue*                                   FleshImpactSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class UAudioComponent>              CurrentFlightSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FActorSetAndArray                           CosmeticIgnoreActors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FActorSetAndArray                           IgnoreActors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FHitResult>                          HitResultCache;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator                                    AccumulatedRotationSpin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FProjectileInfo                    ProjectileInfo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AActor>                       Creator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AController>                  OwningController;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class APawn>                        OwningPawn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsFromLocalPlayer;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauProjectile*                          AssociatedProjectile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DamageModifierHuntsmanPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DamageMultiplier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<float>                                      Damage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<float>                                      HeadBonus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<float>                                      LegBonus;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              WoodDamage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StoneDamage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasReceivedInfo;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class USkeletalMeshComponent* SkeletalMeshComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              FiredTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              LastProjectileSweepTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bUsesLocalProjectileBlending;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsConfirmed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasTerminated;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TerminatedTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasNetworkOrigin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasFired;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*>                              RestockAmmoForEquipment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass*                                      GiveEquipmentOnPickup;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bAssignCustomizationOnPickup;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FEquipmentCustomization                     CreatorEquipmentCustomization;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsActiveBlendProjectile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasStartedTrail;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bAutomaticallyDetermineMeshLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                ProjectileCollisionPrecedence;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bWillIgnoreShooter;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bAutomaticallyDetermineSpinLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StickySurfacePitchBlend;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StickySurfaceYawBlend;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystem*                             TrailParticleTemplate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class UParticleSystemComponent>     CurrentTrailParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       TrailStartSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       TrailEndSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TrailWidth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsLocallyPredicted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AttackBounceForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ParryBounceForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ProjectileBounceForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EnvironmentBounceForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              BounceAngularVelocityFactor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              BounceMinAngularVelocity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bShouldFlinch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CullDistanceRagdoll;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class UBoxComponent*                               CollisionComp;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class UAdvProjectileMovementComponent*             ProjectileMovement;
	//TEnumAsByte<ETrailWidthMode>                       TrailWidthMode;








	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		bool WillSticky(uint8 Surface);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		bool WillPassThrough(uint8 Surface);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		bool UsesProjectileBlending();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void UpdateProjectileState(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void TerminateProjectile();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void SweepProjectile();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		bool RestockCharacter(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void OnRep_ProjectileInfo();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		class AController* GetProjectileOwningController();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		class AActor* GetProjectileCreator();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		float GetPercentageOfMaxVelocityClamped();
	//UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
	//	struct FTransform GetCurrentTransformWithOffsets();
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		class UParticleSystemComponent* GetCurrentTrailParticles();
	//UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
	//	struct FTransform GetBlendedTransform(float T);
	UFUNCTION(BlueprintCallable, Category = "ProjectileFns")
		void BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		bool AttachProjectile(const struct FHitResult& Hit);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void Fire();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void CarryOverTrail(class AMordhauProjectile* NewProjectile);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void OnProjectileHitCosmetic(class AActor* OtherActor, const struct FHitResult& Hit);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void OnProjectileFired();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const FName& bone);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void ProcessProjectileHit(bool bIsBlocking, const struct FHitResult& Hit);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void StopTrail();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ProjectileEvents")
		void StartTrail();




};
