// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class WITCHHUNT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

	public:
	// Sets default values for this character's properties
	AMyCharacter();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//Making the character move
	void MoveForward(float value);
	void MoveRight(float value);

	//Fires the projectile/Magic
	void Fire();

	//Making the character jump
	void StartJump();
	void StopJump();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
