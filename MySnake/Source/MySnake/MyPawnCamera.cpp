// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawnCamera.h"
#include "Kismet/GameplayStatics.h"


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
	CameraSpring->SetupAttachment(MyRootComponent);
	MyCamera->SetupAttachment(CameraSpring);
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
	UE_LOG(LogTemp, Warning, TEXT("IsPressButton value: %d"), IsUp);
	UE_LOG(LogTemp, Warning, TEXT("IsPressButton value: %d"), IsDown);
	UE_LOG(LogTemp, Warning, TEXT("IsPressButton value: %d"), IsRight);
	UE_LOG(LogTemp, Warning, TEXT("IsPressButton value: %d"), IsLeft);


}

// Called to bind functionality to input
void AMyPawnCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	InputComponent->BindAction("Up",IE_Pressed,this ,&AMyPawnCamera::UpMove);
	InputComponent->BindAction("Down",IE_Pressed,this ,&AMyPawnCamera::DownMove);
	InputComponent->BindAction("Left",IE_Pressed,this ,&AMyPawnCamera::LeftMove);
	InputComponent->BindAction("Right",IE_Pressed,this ,&AMyPawnCamera::RightMove);
	InputComponent->BindAction("Up",IE_Released,this ,&AMyPawnCamera::SetPressUp);
	InputComponent->BindAction("Down",IE_Released,this ,&AMyPawnCamera::SetPressDw);
	InputComponent->BindAction("Left",IE_Released,this ,&AMyPawnCamera::SetPressLf);
	InputComponent->BindAction("Right",IE_Released,this ,&AMyPawnCamera::SetPressRg);
	InputComponent->BindAction("Pause",IE_Pressed,this ,&AMyPawnCamera::Pause);




}

void AMyPawnCamera::UpMove()
{
	if (!IsDown && !IsRight && !IsLeft && !IsUp)
	{
		// логика для движения вверх
		if(wasd.X!=1)
		{
			wasd=FVector2D(0,0);
			wasd.X= -1;
		}

		IsUp = true; // установить флаг для кнопки Up
		if (SnakePlayer)
		{
			SnakePlayer->DirectionMove = wasd;
		}
	}
}

void AMyPawnCamera::DownMove()
{
	if (!IsUp && !IsRight && !IsLeft && !IsDown)
	{
		// логика для движения вниз
		if(wasd.X!=-1)
		{
			wasd=FVector2D(0,0);
			wasd.X= 1;
				
		}

		IsDown = true; // установить флаг для кнопки Down
		if (SnakePlayer)
		{
			SnakePlayer->DirectionMove = wasd;
		}
	}
}

void AMyPawnCamera::LeftMove()
{
	if (!IsDown && !IsRight && !IsUp && !IsLeft)
	{
		// логика для движения влево
		if(wasd.Y!=1)
		{
			wasd=FVector2D(0,0);
			wasd.Y= -1;
				
		}

		IsLeft = true; // установить флаг для кнопки Left
		if (SnakePlayer)
		{
			SnakePlayer->DirectionMove = wasd;
		}
	}
}

void AMyPawnCamera::RightMove()
{
	if (!IsDown && !IsUp && !IsLeft && !IsRight)
	{
		// логика для движения вправо
		if(wasd.Y!=-1)
		{
			wasd=FVector2D(0,0);
			wasd.Y= 1;
				
		}

		IsRight = true; // установить флаг для кнопки Right
		if (SnakePlayer)
		{
			SnakePlayer->DirectionMove = wasd;
		}
	}
}

void AMyPawnCamera::SetPressUp()
{
	IsUp = false; // сбросить флаг для кнопки Up
}

void AMyPawnCamera::SetPressDw()
{
	IsDown = false; // сбросить флаг для кнопки Down
}

void AMyPawnCamera::SetPressLf()
{
	IsLeft = false; // сбросить флаг для кнопки Left
}

void AMyPawnCamera::SetPressRg()
{
	IsRight = false; // сбросить флаг для кнопки Right
}


void AMyPawnCamera::Pause()
{
	flipFlop = !flipFlop; // переключаем состояние
    
	if (flipFlop)
	{
		// выполняем действия в первом состоянии
		UGameplayStatics::SetGamePaused(GetWorld(), true);
	}
	else
	{
		// выполняем действия во втором состоянии
		UGameplayStatics::SetGamePaused(GetWorld(), false);
	}
	
}



