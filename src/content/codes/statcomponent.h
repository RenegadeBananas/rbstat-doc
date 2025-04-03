#pragma once

#include "CoreMinimal.h"
#include "Stat/StatComponent.h"

#include "MyStatComponent.generated.h"


class UStatBase;
class URangeValueStat;
class URegenStat;
class UExperienceStat;

UCLASS()
class MYPROJECT_API UMyStatComponent : public UStatComponent
{
	GENERATED_BODY()
	
	public:
		UMyStatComponent();
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
			UStatBase* Stamina = nullptr;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
			URangeValueStat* Rage = nullptr;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
			URegenStat* Hunger = nullptr;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
			UExperienceStat* Mining = nullptr;

		virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};