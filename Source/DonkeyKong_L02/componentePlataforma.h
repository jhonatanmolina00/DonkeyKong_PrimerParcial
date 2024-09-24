// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "componentePlataforma.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_L02_API AcomponentePlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AcomponentePlataforma();

	FVector StartPoint;
	FVector EndPoint;
	float Speed;

	bool bMoverHorizontalmente;
	bool bMoverVerticalmente;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* meshPlataforma;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
