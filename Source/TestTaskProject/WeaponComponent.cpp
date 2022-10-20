// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"

#include "DrawDebugHelpers.h"
#include "Weapon.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	
	//SpawnWeapon();
}

void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UWeaponComponent::StopFire()
{
	if(!CurrentWeapon) return;
	CurrentWeapon->StopFire();
}

void UWeaponComponent::Reload()
{
	if(!CurrentWeapon) return;
	IsReload = true;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, CurrentWeapon, &AWeapon::Reload, TimeToReload, false);
	GetWorld()->GetTimerManager().SetTimer(ReloadEndTimerHandle, this, &UWeaponComponent::ReloadEnd, TimeToReload, false);
	if(ReloadProgress <= 1.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(ReloadTime, this, &UWeaponComponent::ReloadPercent, TimeToReload / 100, true);
	}
}

void UWeaponComponent::ReloadEnd()
{
	IsReload = false;
	GetWorld()->GetTimerManager().ClearTimer(ReloadTime);
	ReloadProgress = 0.0f;
}

void UWeaponComponent::ReloadPercent()
{
	ReloadProgress += 0.01f;
}


bool UWeaponComponent::GetWeaponAmmoData(FAmmoData& AmmoData) const
{
	if(CurrentWeapon)
	{
		AmmoData = CurrentWeapon->GetAmmoData();
		return true;
	}
	return false;
}

void UWeaponComponent::StartFire()
{
	if(!CurrentWeapon) return;
	if(!IsReload)
	{
		CurrentWeapon->StartFire();
	}
}

void UWeaponComponent::SpawnWeapon()
{
	if(!GetWorld()) return;
	
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if(!Character) return;
	CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass);
	if(!CurrentWeapon) return;

	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
	CurrentWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
	CurrentWeapon->SetOwner(Character);
}
