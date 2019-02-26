#pragma once

#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

class UShapeComponent;

UCLASS()
class WitchHunt_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:
	AEnemy();

	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;
    
    FVector MoveDirection = FVector(1.f, 0.f, 0.f);
    
    
private:
    
    UPROPERTY(EditAnywhere)
    float Speed = 150.f;
    
    UPROPERTY(EditAnywhere)
    float TurnDelayMax = 5.f;

    UPROPERTY(EditAnywhere)
    float TurnDelayMin = 1.f;
    
    float CurrentTurnDelay = 0.f;
    
    UPROPERTY(EditAnywhere)
    UShapeComponent* RootBox = nullptr;
};
