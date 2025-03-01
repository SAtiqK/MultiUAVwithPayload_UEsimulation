// 2018-2021 Kyr Dunenkoff

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_One.generated.h"

UCLASS()
class WACTUALDRONE_API ATest_One : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_One();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
