// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent; // we are telling the compiler to check in this class forUSphereComponent. 

UCLASS()
class NICHICK_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp; // this will be the sphere or the object so that its visual exits.

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp; // this is going to hold some collision information.

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* PickupFX; // used during effects function.

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayEffects(); // to add some effect during shooting.

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  // this is used whenever the actor get overlap.

};
