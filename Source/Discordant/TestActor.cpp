#include "TestActor.h"

#include "Blueprint/UserWidget.h"

ATestActor::ATestActor(const FObjectInitializer& FO) : Super(FO)
{

	Foo = new MySimpleCPPClass();

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bTickEvenWhenPaused = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.TickInterval = 0.2f;

    UPicture* Picture = CreateDefaultObject<UPicture>();

	RootComponent = Picture;

}

void ATestActor:BeginPlay()
{
	Super::BeginPlay();


	Picture = NewObject<UPicture>(this, PictureClass);


	//GetWorld().GetTimerManager().SetTimer(TimerHandle, callthisfucntion, 1.0f, delay)
}
