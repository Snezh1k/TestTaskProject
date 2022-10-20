// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class AWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTTASKPROJECT_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Weapon")
	TSubclassOf<AWeapon> WeaponClass;

	UPROPERTY()
	AWeapon* CurrentWeapon = nullptr;

	UPROPERTY(EditAnywhere, Category="Weapon")
	FName WeaponAttachPointName = "WeaponSocket";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Weapon")
	float TimeToReload = 1.0f;


private:
	FTimerHandle ReloadTimerHandle;
	FTimerHandle ReloadEndTimerHandle;
	FTimerHandle ReloadTime;

	float ReloadProgress = 0.0f;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SpawnWeapon();
	void StartFire();
	void StopFire();
	void Reload();
	void ReloadEnd();
	void ReloadPercent();
	bool IsReload = false;
	
	float GetReloadProgress() const {return ReloadProgress;};

	bool GetWeaponAmmoData(FAmmoData& AmmoData) const;
};
