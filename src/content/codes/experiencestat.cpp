#include "MyExperienceStat.h"

float UMyExperienceStat::GetExperienceRequired_Implementation(int32 InLevel)
{
	return InLevel * 100 + InLevel;
}