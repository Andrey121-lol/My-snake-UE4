// Fill out your copyright notice in the Description page of Project Settings.


#include "MySnakeActor.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"

// Sets default values
AMySnakeActor::AMySnakeActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyRootComponent = CreateDefaultSubobject<USphereComponent>("MyRoot");
	RootComponent = MyRootComponent;
	MyRootComponent->SetRelativeLocation(SnakePos);
	//MyRootComponent()->OnComponentHit.AddDynamic(this, &AMySnakeActor::OnHitApple);
	
	CreateSnakeBody();
}

void AMySnakeActor::CreateSnakeBody()
{
	SnakeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Sphere")).Object;
	BodyColor = ConstructorHelpers::FObjectFinderOptional<UMaterialInstance>(TEXT("MaterialInstanceConstant'/Game/Materials/Inst/M_Body_Inst.M_Body_Inst'")).Get();
	HeadColor = ConstructorHelpers::FObjectFinderOptional<UMaterialInstance>(TEXT("MaterialInstanceConstant'/Game/Materials/Inst/M_Head_Inst.M_Head_Inst'")).Get();
	FVector NextPoint = GetActorLocation();

	for (int i = 0; i < SnakeSize; i++)
	{
		FName ChankName = FName("Chanks" + FString::FromInt(i));
		UStaticMeshComponent* BodyChank = CreateDefaultSubobject<UStaticMeshComponent>(ChankName);
		BodyChank->SetStaticMesh(SnakeMesh);
		BodyChank->SetRelativeLocation(NextPoint);
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, true);
		
		SnakeBody.Add(BodyChank);
		NextPoint.X -= StepSnake;
		BodyChank->AttachToComponent(MyRootComponent, AttachmentRules);
		BodyChank->SetMaterial(0,BodyColor);
		if (i==0)
		{
			BodyChank->SetMaterial(0,HeadColor);
		}
		else
		{
			BodyChank->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			BodyChank->SetRelativeScale3D(FVector(0.7,0.7,0.7));
		}
		
		
	}
	SetVisibleBodyChunks();
}

void AMySnakeActor::SetVisibleBodyChunks()
{
	for(int i =0;i<SnakeBody.Num();i++)
	{
		if (i<VisibleBodyChunks)
		{
			SnakeBody[i]->SetVisibility(true,true);
		}
		else
		{
			SnakeBody[i]->SetVisibility(false,true);
		}
		
	}
}

void AMySnakeActor::MoveSnake()
{
	
	if (DirectionMove.X !=0||DirectionMove.Y !=0)
	{
		for (int i =SnakeBody.Num()-1;i>0;i--)
		{
			FVector V = SnakeBody[i-1]->GetRelativeLocation();
			SnakeBody[i]->SetRelativeLocation(V);
			
		}
		FVector HeadV =SnakeBody[0]->GetRelativeLocation();

		//Move x
		if(DirectionMove.X>0) HeadV.X-=StepSnake;
		if(DirectionMove.X<0) HeadV.X+=StepSnake;
		//Move y
		if(DirectionMove.Y>0) HeadV.Y+=StepSnake;
		if(DirectionMove.Y<0) HeadV.Y-=StepSnake;

		SnakeBody[0]->SetRelativeLocation(HeadV);
		Damage();

		
	}
	
}

void AMySnakeActor::OnHitApple()
{
	
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors, AMyAppleActor::StaticClass());
	for (AActor* OverlappingActor : OverlappingActors)
	{
		AMyAppleActor* AppleRef = Cast<AMyAppleActor>(OverlappingActor);
		if (AppleRef && FVector::Distance(SnakeBody[0]->GetComponentLocation(), AppleRef->GetActorLocation()) < 75.0f)
		{
			AppleRef->Destroy(true, true);
			addApple();
			VisibleBodyChunks++;
			Score++;
		}
		
	}
}

void AMySnakeActor::addApple()
{
	int32 SpawnX, SpawnY;
	do {
		SpawnX = FMath::FloorToInt(FMath::FRandRange(MinX, MaxX));
		SpawnY = FMath::FloorToInt(FMath::FRandRange(MinY, MaxY));
		SpawnX -= SpawnX % 100;
		SpawnY -= SpawnY % 100;
	} while (SpawnX == MaxX && SpawnY == MaxY);
    
	FVector Point = FVector(SpawnX, SpawnY, SpawnZ);
	Apple = GetWorld()->SpawnActor<AMyAppleActor>(Point, FRotator(0, 0, 0));
	
}

void AMySnakeActor::Damage()
{
	for (int i=1;i<=VisibleBodyChunks;i++)
	{
		if (SnakeBody[0]->GetComponentLocation().Equals(SnakeBody[i]->GetComponentLocation()))
		{
			Destroy(true,true);
			UGameplayStatics::OpenLevel(GetWorld(), FName("NewWorld"));
			UGameplayStatics::OpenLevel(GetWorld(), FName("Untitled"));


		}
			
	
	}
}

// Called when the game starts or when spawned
void AMySnakeActor::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AMySnakeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetVisibleBodyChunks();
	BufferTime+= DeltaTime;
	OnHitApple();
	
	if (BufferTime > StepDelay)
	{
		MoveSnake();
		BufferTime=0;
		switch (Score)
		{
		case 10:
			{
				StepDelay= 0.45;
				break;
			}
		case 25:
			{
				StepDelay= 0.4;
				break;
			}
		case 50:
			{
				StepDelay= 0.35;
				break;
			}
		case 75:
			{
				StepDelay= 0.3;
				break;
			}
		case 100:
			{
				StepDelay= 0.25;
				break;
			}
		case 120:
			{
				StepDelay= 0.2;
				break;
			}
		case 150:
			{
				StepDelay= 0.1;
				break;
			}
			
			
		}
	}
	
	
}