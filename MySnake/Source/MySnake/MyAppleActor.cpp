// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAppleActor.h"
#include "Components/SphereComponent.h"

// Sets default values
AMyAppleActor::AMyAppleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyRoot = CreateDefaultSubobject<USphereComponent>("RootApple");
	RootComponent =MyRoot;

	AppleMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Sphere")).Object;

	class UStaticMeshComponent* AppleChank = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Apple"));
	AppleChank->SetStaticMesh(AppleMesh);
	AppleChank->SetRelativeScale3D(FVector(0.5,0.5,0.5));
	AppleChank->SetRelativeLocation(FVector(0,0,0));
	AppleColor = ConstructorHelpers::FObjectFinderOptional<UMaterialInstance>(TEXT("MaterialInstanceConstant'/Game/Materials/Inst/M_Apple_Inst.M_Apple_Inst'")).Get();
	AppleChank->SetMaterial(0,AppleColor);

	FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, true);
	AppleChank->AttachToComponent (MyRoot,AttachmentRules);

	
}

void AMyAppleActor::addApple()
{
	float SpawnX,SpawnY;
	SpawnX = FMath::FRandRange(MinX,MaxX);
	SpawnY = FMath::FRandRange(MinY,MaxY);
	FVector Point =FVector(SpawnX,SpawnY,SpawnZ);
	SetActorLocation(Point);
	
}

// Called when the game starts or when spawned
void AMyAppleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyAppleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}

