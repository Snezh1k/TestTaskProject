// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "DrawDebugHelpers.h"
#include "WeaponComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("MeshComponent");
	SetRootComponent(MeshComponent);
}

void AWeapon::StartFire()
{
	if(!IsLoadedAmmoEmpty())
	{
		MakeShot();
	}
	GetWorldTimerManager().SetTimer(ShotTimerHandle, this, &AWeapon::MakeShot, TimeBetweenShots, true);
}

void AWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(ShotTimerHandle);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	CurrentAmmo = DefaultAmmo;
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::MakeShot()
{
	if(!GetWorld() || IsAmmoEmpty()){
	  return;
	} 
	FVector TraceStart, TraceEnd;
	FVector ViewLocation;
	FRotator ViewRotation;
	GetPlayerViewPoint(ViewLocation, ViewRotation);
	
	TraceStart = ViewLocation;
	const auto HalfRad = FMath::DegreesToRadians(BulletSpread);
	const FVector ShootDirection = FMath::VRandCone(ViewRotation.Vector(), HalfRad);
	TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	
	FHitResult HitResult;
	MakeHit(HitResult, TraceStart, TraceEnd);
	if(HitResult.bBlockingHit)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, MeshComponent, MuzzleSocketName);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, HitResult.ImpactPoint);
		AActor* HitActor = HitResult.GetActor();
		if(HitActor != nullptr)
		{
			FPointDamageEvent DamageEvent(Damage, HitResult, ShootDirection, nullptr);
			HitActor->TakeDamage(Damage, DamageEvent, OwnerPawn->GetController(), this);
		}
		//DrawDebugLine(GetWorld(), GetMuzzleLocation(), HitResult.ImpactPoint, FColor::Red, false, 0.2f, 0, 2.0f);
		//DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 0.3f);
	}
	else
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, MeshComponent, MuzzleSocketName);
		//DrawDebugLine(GetWorld(), GetMuzzleLocation(), TraceEnd, FColor::Red, false, 3.0f, 0, 3.0f);
	}
	DecreaseAmmo();
}

void AWeapon::DecreaseAmmo()
{
	if(IsLoadedAmmoEmpty() && !IsAmmoEmpty())
	{
		StopFire();
	}
	if(!IsLoadedAmmoEmpty())
	{
		CurrentAmmo.LoadedBullets--;
	}
}

void AWeapon::Reload()
{
	if(CurrentAmmo.ExtraBullets != 0)
	{
		if(DefaultAmmo.LoadedBullets - CurrentAmmo.LoadedBullets > CurrentAmmo.ExtraBullets)
		{
			CurrentAmmo.LoadedBullets += CurrentAmmo.ExtraBullets;
			CurrentAmmo.ExtraBullets = 0;
		}
		else
		{
			CurrentAmmo.ExtraBullets -= DefaultAmmo.LoadedBullets - CurrentAmmo.LoadedBullets;
			CurrentAmmo.LoadedBullets = DefaultAmmo.LoadedBullets;
		}
	}
}

bool AWeapon::IsAmmoEmpty() const
{
	return CurrentAmmo.ExtraBullets == 0 && IsLoadedAmmoEmpty();
}

bool AWeapon::IsLoadedAmmoEmpty() const
{
	return CurrentAmmo.LoadedBullets == 0;
}

APlayerController* AWeapon::GetPlayerController() const
{
	const auto Player = Cast<ACharacter>(GetOwner());
	if(!Player) return nullptr;

	return Player->GetController<APlayerController>();
}

bool AWeapon::GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
	const auto Controller = GetPlayerController();
	if(!Controller) return false;
	Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
	return true;
}

FVector AWeapon::GetMuzzleLocation() const
{
	return MeshComponent->GetSocketLocation(MuzzleSocketName);
}

void AWeapon::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd) const
{
	if(!GetWorld()) return;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner());

	GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECollisionChannel::ECC_Visibility);
}


