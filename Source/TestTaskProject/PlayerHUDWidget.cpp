// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUDWidget.h"

#include "WeaponComponent.h"

bool UPlayerHUDWidget::GetWeaponAmmoData(FAmmoData& AmmoData) const
{
	const auto WeaponComponent = GetWeaponComponent();
	if(!WeaponComponent) return false;
	return WeaponComponent->GetWeaponAmmoData(AmmoData);
}

float UPlayerHUDWidget::GetReloadPercent()
{
	const auto WeaponComponent = GetWeaponComponent();
	if(!WeaponComponent) return false;
	return WeaponComponent->GetReloadProgress();
}

UWeaponComponent* UPlayerHUDWidget::GetWeaponComponent() const
{
	const auto Player = GetOwningPlayerPawn();
	if(!Player) return nullptr;

	const auto Component = Player->GetComponentByClass(UWeaponComponent::StaticClass());
	const auto WeaponComponent = Cast<UWeaponComponent>(Component);
	return WeaponComponent;
}
