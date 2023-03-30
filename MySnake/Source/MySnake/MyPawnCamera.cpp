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
	MyCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	MyCamera->OrthoWidth = 3000.0f;
	//MyCamera->OrthoWidth = 0.0f;

	CameraSpring->SetRelativeRotation(FRotator(-90,0,0));
	CameraSpring->TargetArmLength=1500;
	CameraSpring->bDoCollisionTest=false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void AMyPawnCamera::AddSnakeToMap()
{
	FVector StartPoint = GetActorLocation();
	FRotator StartPointRot = GetActorRotation();
	if(GetWorld())
	{
		SnakePlayer = GetWorld()->SpawnActor<AMySnakeActor>(StartPoint,StartPointRot);
	}
	
}

void AMyPawnCamera::Fmove(float f)
{
	int32 Key=f;
	

	switch (Key)
	{
		case 1:
			if(wasd.X!=1)
			{
				wasd=FVector2D(0,0);
				wasd.X= -1;
			}
		break;

		case 2:
			if(wasd.X!=-1)
			{
				wasd=FVector2D(0,0);
				wasd.X= 1;
			}
		break;

		case 3:
			if(wasd.Y!=1)
			{
				wasd=FVector2D(0,0);
				wasd.Y= -1;
			}
		break;
		case 4:
			if(wasd.Y!=-1)
			{
				wasd=FVector2D(0,0);
				wasd.Y= 1;
			}
		break;
	}
	if (SnakePlayer)
	{
		SnakePlayer->DirectionMove=wasd;
	}
}

void AMyPawnCamera::spawnApple()
{
	FRotator StartPointRot = GetActorRotation();
	AppleRef = GetWorld()->SpawnActor<AMyAppleActor>(FVector(0,0,100),StartPointRot);

}


// Called when the game starts or when spawned
void AMyPawnCamera::BeginPlay()
{
	Super::BeginPlay();
	AddSnakeToMap();
	SnakePlayer->addApple();
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
	InputComponent->BindAxis("KeyMap",this ,&AMyPawnCamera::Fmove);

}

