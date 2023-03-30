// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDeadActor.h"
#include "Components/BoxComponent.h"

// Sets default values
AMyDeadActor::AMyDeadActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DeadMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Cube")).Object;
	MyRoot = CreateDefaultSubobject<UBoxComponent>("RootDead");
	RootComponent =MyRoot;
	DeadChunk = CreateDefaultSubobject<UStaticMeshComponent>("Dead");
	DeadChunk->SetStaticMesh(DeadMesh);
	DeadChunk->SetRelativeLocation(FVector(0,0,0));
	DeadChunk->SetupAttachment(MyRoot);
	DeadColor = ConstructorHelpers::FObjectFinderOptional<UMaterialInstance>(TEXT("MaterialInstanceConstant'/Game/Materials/Inst/M_Damage_Inst.M_Damage_Inst'")).Get();
	DeadMesh->SetMaterial(0,DeadColor);

}
//смэрть Snake
void AMyDeadActor::HitSnake()
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);
	for (int i =0;i<OverlappingActors.Num();i++)
	{
		OverlappingActors[i]->Destroy(true,true);
	}
	
}

// Called when the game starts or when spawned
void AMyDeadActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDeadActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HitSnake();

}

