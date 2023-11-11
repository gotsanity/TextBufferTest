#include "EncounterRoom.h"

EncounterRoom::EncounterRoom(std::string desc, std::string monsterType) : AbstractRoom(desc)
{
	MonsterType = monsterType;
}

bool EncounterRoom::Execute()
{
	return false;
}

short EncounterRoom::ToShort()
{
	return L'M';
}

//COLOUR EncounterRoom::GetColor()
//{
//    return FG_RED;
//}
