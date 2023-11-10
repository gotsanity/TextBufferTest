#include "EncounterRoom.h"

EncounterRoom::EncounterRoom(std::string desc, std::string monsterType) : AbstractRoom(desc)
{
	MonsterType = monsterType;
}

bool EncounterRoom::Execute()
{
	return false;
}

std::string EncounterRoom::ToString()
{
	return "M";
}

short EncounterRoom::ToShort()
{
	return L'M';
}

COLOUR EncounterRoom::GetColor()
{
    return FG_RED;
}
