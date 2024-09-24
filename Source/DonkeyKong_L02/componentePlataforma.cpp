// Fill out your copyright notice in the Description page of Project Settings.


#include "componentePlataforma.h"

// Sets default values
AcomponentePlataforma::AcomponentePlataforma()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("	StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	meshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = meshPlataforma;

	FVector nuevaScalaPlataforma(3.0f, 3.0f, 0.5f); // Cambia estos valores según tus necesidades
	SetActorScale3D(nuevaScalaPlataforma);
	bMoverHorizontalmente = false;
	bMoverVerticalmente = false;

	StartPoint = FVector(0.0f, 0.0f, 0.0f);
	EndPoint = FVector(1000.0f, 0.0f, 0.0f);
	Speed = 200.0f;
}

// Called when the game starts or when spawned
void AcomponentePlataforma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AcomponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//float RunningTime = GetGameTimeSinceCreation();
	//if (bMoverHorizontalmente) {
	//	FVector NewLocation = GetActorLocation();
	//	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	//	NewLocation.Y += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	//	RunningTime += DeltaTime;
	//	SetActorLocation(NewLocation);
	//}
	//if (bMoverVerticalmente) {
	//	FVector NewLocation = GetActorLocation();
	//	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	//	NewLocation.Z += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	//	RunningTime += DeltaTime;
	//	SetActorLocation(NewLocation);
	//}
	//if (bMoverHorizontalmente) {
	/*FVector CurrentLocation = GetActorLocation();
	FVector TargetLocation = bMoverHorizontalmente ? EndPoint : StartPoint;
	FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();
	FVector NewLocation = CurrentLocation + Direction * Speed * DeltaTime;

	SetActorLocation(NewLocation);

	if (FVector::Dist(NewLocation, TargetLocation) < 10.0f)
	{
		//bMoverHorizontalmente = !bMoverHorizontalmente;
	}*/
}

