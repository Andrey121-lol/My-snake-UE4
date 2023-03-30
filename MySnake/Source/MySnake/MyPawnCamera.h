// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MySnakeActor.h"
#include "MyAppleActor.h"
#include "MyPawnCamera.generated.h"

UCLASS()
class MYSNAKE_API AMyPawnCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawnCamera();
	
	//блок для камеры
	//vars
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMySnakeActor* SnakePlayer;
	class UBoxComponent* MyRootComponent;
	class AMyAppleActor* AppleRef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D wasd=FVector2D(0,0);
	UPROPERTY(EditAnywhere)
	USpringArmComponent* CameraSpring;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* MyCamera;
	float MinY=-920.0f;float MaxY=920.0f;float MinX=-685.0f;
	float MaxX=685.0f ;float SpawnZ=100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GameMode = 0;
	
	

	//func
	void AddSnakeToMap();
	void Fmove(float f);
	void spawnApple();
	UFUNCTION(BlueprintCallable,Category="MyF")
	int32 GetGameMode() const {return GameMode;}
	UFUNCTION(BlueprintCallable,Category="MyF")
	int32 GetScore() const {return SnakePlayer->Score;}
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
