// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawnCamera.h"

// Sets default values
AMyPawnCamera::AMyPawnCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//блок для камеры
	MyRootComponent = CreateDefaultSubobject<UBoxComponent>("RootModel");
	RootComponent = MyRootComponent;
	CameraSpring = CreateDefaultSubobject <USpringArmComponent>("Spring");
	CameraSpring->SetRelativeLocation(FVector(0,0,0));
	MyCamera = CreateDefaultSubobject<UCameraComponent>("Camera");
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, true);
	CameraSpring->AttachToComponent(MyRootComponent,AttachmentRules);
	MyCamera->AttachToComponent(CameraSpring,AttachmentRules);
	
}

// Called when the game starts or when spawned
void AMyPawnCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawnCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawnCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

