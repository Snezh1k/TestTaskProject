// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

USTRUCT(BlueprintType)
struct FAmmoData
{
	GENERATED_USTRUCT_BODY();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapon")
	int32 LoadedBullets;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapon")
	int32 ExtraBullets;
};

UCLASS()
class TESTTASKPROJECT_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	void StartFire();
	void StopFire();
	void Reload();

	FAmmoData GetAmmoData() const {return CurrentAmmo; };
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Component")
	USkeletalMeshComponent* MeshComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FName MuzzleSocketName = "MuzzleSocket";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceMaxDistance = 3500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeBetweenShots = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BulletSpread = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeToReload = 1.0f;

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	FAmmoData DefaultAmmo{30, 60};

	UPROPERTY(EditAnywhere)
	float Damage = 1.0f;

	APlayerController* GetPlayerController() const;
	
	bool GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const;

	FVector GetMuzzleLocation() const;

	bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const;

	void MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd) const;
	
	void MakeShot();
	void DecreaseAmmo();
	bool IsAmmoEmpty() const;
	bool IsLoadedAmmoEmpty() const;


private:
	FTimerHandle ShotTimerHandle;

	FTimerHandle ReloadTimerHandle;

	FAmmoData CurrentAmmo;
};
