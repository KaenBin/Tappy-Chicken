// Fill out your copyright notice in the Description page of Project Settings.


#include "Class_Bird.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AClass_Bird::AClass_Bird()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(CapsuleComp);
}

// Called when the game starts or when spawned
void AClass_Bird::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClass_Bird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AClass_Bird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AClass_Bird::Jump);
}

void AClass_Bird::Jump()
{
	CapsuleComp->AddImpulse(JumpStrength, NAME_None, true);
}