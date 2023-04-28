#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerfDataPoint.generated.h"

UCLASS()
class DATATABLEEXPERIMENT_API APerfDataPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	APerfDataPoint();

private:

	void SetColorFromFrameTime();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Performance Data")
	float frametime{};

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetFrametime(float _frametime);

	UFUNCTION(BlueprintCallable)
	float GetFrametime() { return frametime; }

};
