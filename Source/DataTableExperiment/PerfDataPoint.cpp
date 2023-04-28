#include "PerfDataPoint.h"
#include "Components/PrimitiveComponent.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"

APerfDataPoint::APerfDataPoint()
{
	PrimaryActorTick.bCanEverTick = false;

}

void APerfDataPoint::BeginPlay()
{
	Super::BeginPlay();

}

void APerfDataPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APerfDataPoint::SetFrametime(float _frametime)
{
	frametime = _frametime;
}

void APerfDataPoint::SetColorFromFrameTime()
{
	// if <16.6 then green

	// 16 <> 24.95 fade to yellow

	// 24.96 <> 33.3 fade to red

	// > 33.3 red

}