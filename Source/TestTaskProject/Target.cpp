// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->AttachTo(RootComponent);

	DefaultMaterial = CreateDefaultSubobject<UMaterialInterface>("DefaultMaterial");
	ImpactMaterial = CreateDefaultSubobject<UMaterialInterface>("ImpactMaterial");
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
	MeshComponent->SetMaterial(0, DefaultMaterial);
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATarget::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	float Damage =  Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	MeshComponent->SetMaterial(0, ImpactMaterial);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATarget::ChangeMaterialToDefault, 0.5f, false);
	return Damage;
}

void ATarget::ChangeMaterialToDefault()
{
	MeshComponent->SetMaterial(0, DefaultMaterial);
}

