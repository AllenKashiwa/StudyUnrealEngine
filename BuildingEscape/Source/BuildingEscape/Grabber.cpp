// Copyright Allen Kashiwa

#include "Grabber.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("Grabber reporting for duty!"));
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Get the play view point this tick
    FVector PlayerViewPointPos;
    FRotator PlayerViewPointRotator;
    GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
        OUT PlayerViewPointPos,
        OUT PlayerViewPointRotator
    );
    // Log for test
    UE_LOG(LogTemp, Warning, TEXT("Location:%s, Rotation:%s"),
        *PlayerViewPointPos.ToString(),
        *PlayerViewPointRotator.ToString()
    );
    // Ray-cast out to reach distance

    // See what we hit
}

