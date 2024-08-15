// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FlappyBird.generated.h"

UCLASS()
class MYPROJECT_API AFlappyBird : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFlappyBird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

private:
	UPROPERTY(EditDefaultsOnly, Category = "Components") class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditDefaultsOnly, Category = "Components") class UStaticMeshComponent* BaseMesh;
};
