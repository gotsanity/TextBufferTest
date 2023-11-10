#include "EntranceRoom.h"

EntranceRoom::EntranceRoom(std::string desc) : AbstractRoom(desc)
{
}

std::string EntranceRoom::ToString()
{
	return "S";
}

short EntranceRoom::ToShort()
{
	return L'S';
}
