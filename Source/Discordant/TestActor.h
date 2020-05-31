#pragma once
#include "CoreMinimal.h"

#include "TestActor.generated.h"

class UUserWidget;

// A - Actor
// U - UnrealObject
// F - Struct
// E - Enum

USTRUCT()
struct FMyStruct
{
	GENERATED_BODY()

	FMyStruct(){}

	FMyStruct(int A){ }

	int A = 0;

	int B = 1;

	int C = 2;
};


UCLASS()
class UNonExportedObject : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class DISCORDANT_API UExportedObject : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class UPicture : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class UFramedPicture : public UPicture
{
	GENERATED_BODY()
};


class MySimpleCPPClass
{

};


UCLASS(Blueprintable, BlueprintType)
class DISCORDANT_API ATestActor : public AActor
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY()
	UPicture* Picture;

	UPROPERTY()
	TArray<UPicture> Pictures;

	UPROPERTY(EditDefaultsOnly)
	TSubClass<UPicture> PictureClass;

	MySimpleCPPClass* Foo;

	virtual void Tick(float Delta){}
};

//DISCORDANTEDITOR_API

//CHARACTERSTUFF_API



