#pragma once
#include "Engine/DataTable.h"
#include "PerfData.generated.h"

/** Structure that defines a level up table entry */
USTRUCT(BlueprintType)
struct FPerfData : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

public:

    FPerfData()
        :xPos(0.f)
        ,yPos(0.f)
        ,zPos(0.f)
        ,xRot(0.f)
        ,yRot(0.f)
        ,zRot(0.f)
        ,frametime(0.f)
    {}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float xPos;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float yPos;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float zPos;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float xRot;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float yRot;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float zRot;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PerfData)
        float frametime;
};