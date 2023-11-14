#include "AbstractRoom.h"
#include "Map.h"

AbstractRoom::AbstractRoom(std::string desc)
{
	Description = desc;
	bShouldRunEvent = false;
}

std::string AbstractRoom::GetDescription()
{
	return Description;
}

void AbstractRoom::SetDescription(std::string desc)
{
	Description = desc;
}

COLOUR AbstractRoom::GetColor()
{
    return FG_GREY;
}

bool AbstractRoom::Execute(Map& theMap)
{
	return false;
}

bool AbstractRoom::ShouldRunEvent()
{
	return bShouldRunEvent;
}
