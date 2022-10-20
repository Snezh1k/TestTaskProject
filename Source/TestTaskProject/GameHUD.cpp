// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

#include "Blueprint/UserWidget.h"
#include "Engine/Canvas.h"

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	DrawCrosshair();
}

void AGameHUD::DrawCrosshair()
{
	const TInterval<float> Center(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);
	const float HalfLineSize = 10.0f;
	const float LineThikness = 1.0f;
	
	DrawLine(Center.Min - HalfLineSize, Center.Max, Center.Min + HalfLineSize, Center.Max, FLinearColor::Red, LineThikness);
	DrawLine(Center.Min, Center.Max - HalfLineSize, Center.Min, Center.Max + HalfLineSize, FLinearColor::Red, LineThikness);
}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerHUDWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDWidgetClass);
	if(PlayerHUDWidget)
	{
		PlayerHUDWidget->AddToViewport();
	}
}
