// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySnakeActor.h"
#include "MyDeadActor.generated.h"

UCLASS()
class MYSNAKE_API AMyDeadActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDeadActor();

	//var
	UPROPERTY(EditAnywhere)
	class UBoxComponent* MyRoot;

	UPROPERTY(EditAnywhere)
	class UMaterialInstance* DeadColor;

	class UStaticMesh* DeadMesh;
	class UStaticMeshComponent* DeadChunk;
	
	//func
	void HitSnake();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
