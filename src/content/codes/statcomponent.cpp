#include "MyStatComponent.h"

#include "Stat/StatBase.h"
#include "Stat/RangeValueStat.h"
#include "Stat/RegenStat.h"
#include "Stat/ExperienceStat.h"

#include "Net/UnrealNetwork.h"

UMyStatComponent::UMyStatComponent()
{
	// Create stat instances
	Stamina = CreateDefaultSubobject<UStatBase>(FName("Stamina"));
	Rage = CreateDefaultSubobject<URangeValueStat>(FName("Rage"));
	Hunger = CreateDefaultSubobject<URegenStat>(FName("Hunger"));
	Mining = CreateDefaultSubobject<UExperienceStat>(FName("Mining"));
	
	// Create stat initialization structs
	FStatBaseInit StaminaInit = {15};
	FRangeValueInit RageInit = {0, 0, 100};
	FRegenInit HungerInit = {100, 0, 100, 1.0f, -0.05f};

	FExperienceInit MiningInit;
	MiningInit.CurrentValue = 0;
	MiningInit.StartLevel = 1;
	MiningInit.Min = 0;
	MiningInit.Max = 100000;
	MiningInit.ExpModifier = 1.0f;
	
	// Init stats
	Stamina->Init(this, StaminaInit);
	Rage->Init(this, RageInit);
	Hunger->Init(this, HungerInit);
	Mining->Init(this, MiningInit);
}

void UMyStatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	// Replicate stats
	DOREPLIFETIME(UMyStatComponent, Stamina);
	DOREPLIFETIME(UMyStatComponent, Rage);
	DOREPLIFETIME(UMyStatComponent, Hunger);
	DOREPLIFETIME(UMyStatComponent, Mining);
}