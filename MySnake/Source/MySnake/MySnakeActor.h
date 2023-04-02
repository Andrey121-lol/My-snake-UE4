#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyAppleActor.h"

#include "MySnakeActor.generated.h"

UCLASS()
class MYSNAKE_API AMySnakeActor : public AActor
{
	GENERATED_BODY()

private:
	// Sets default values for this actor's properties
	AMySnakeActor();
public:
	// Variables
	int32 SnakeSize=300;
	float StepSnake = 100.0f;
	TArray<UStaticMeshComponent*> SnakeBody;
	class USphereComponent* MyRootComponent;
	FVector SnakePos;
	class UStaticMesh* SnakeMesh;
	class UMaterialInstance* BodyColor;
	class UMaterialInstance* HeadColor;
	FName NameChunk;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VisibleBodyChunks=1;
	FVector2D DirectionMove;
	float StepDelay=0.5f;
	float BufferTime=0.0f;
	class AMyAppleActor* Apple;
	class AMyPawnCamera* PawnCamera;
	float MinY=-920.0f;float MaxY=920.0f;float MinX=-685.0f;
	float MaxX=685.0f ;float SpawnZ=150.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Score = 0;
	

	
	// Functions
	void CreateSnakeBody();
	void SetVisibleBodyChunks();
	void MoveSnake();
	void OnHitApple();
	void addApple();
	void Damage();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
