#pragma once

#include "CoreMinimal.h"
#include "Stat/ExperienceStat.h"

#include "MyExperienceStat.generated.h"


UCLASS()
class MYPROJECT_API UMyExperienceStat : public UExperienceStat
{
	GENERATED_BODY()

	public:
		virtual float GetExperienceRequired_Implementation(int32 InLevel) override;
};