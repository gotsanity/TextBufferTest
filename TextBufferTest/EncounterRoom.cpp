#include "EncounterRoom.h"
#include "Map.h"

EncounterRoom::EncounterRoom(std::string desc, std::string monsterType) : AbstractRoom(desc)
{
	MonsterType = monsterType;
	CombatStarted = false;
	bShouldRunEvent = true;
}

short EncounterRoom::ToShort()
{
	return L'M';
}

COLOUR EncounterRoom::GetColor()
{
    return FG_RED;
}

bool EncounterRoom::Execute(Map& theMap)
{
	CombatStarted = true;
	bShouldRunEvent = false;
	theMap.StartCombat(MonsterType);
	return CombatStarted;
}
