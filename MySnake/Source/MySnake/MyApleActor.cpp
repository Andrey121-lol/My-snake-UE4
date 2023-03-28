// Fill out your copyright notice in the Description page of Project Settings.


#include "MyApleActor.h"

// Sets default values
AMyApleActor::AMyApleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyApleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyApleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

