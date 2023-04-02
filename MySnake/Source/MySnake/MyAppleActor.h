// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "MySnakeActor.h"
#include "MyAppleActor.generated.h"

UCLASS()
class MYSNAKE_API AMyAppleActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMyAppleActor();

	//vars
	class USphereComponent* MyRoot;
	class UStaticMesh* AppleMesh;
	class UMaterialInstance* AppleColor;
	float MinY=-920.0f;float MaxY=920.0f;float MinX=-685.0f;
	float MaxX=685.0f ;float SpawnZ=100.0f;
	

	//func
	void addApple();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
