#include "Enemy.h"
#include "MyCharacter.h"

#include "Components/BoxComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


// Sets default values
AEnemy::AEnemy()
{
    RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MyEnemy"));
    RootComponent = RootBox;
    RootBox->SetGenerateOverlapEvents(true);
}


void AEnemy::BeginPlay()
{
	Super::BeginPlay();
    MoveDirection = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() - GetActorLocation();
    MoveDirection.Normalize();
    SetActorRotation(MoveDirection.Rotation());
}

// Called every frame
void AEnemy::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
    
    FVector NewLocation = GetActorLocation();
    NewLocation += (MoveDirection * Speed * DeltaTime);
    SetActorLocation(NewLocation);
}


