#include "AbstractRoom.h"

AbstractRoom::AbstractRoom(std::string desc)
{
	Description = desc;
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

bool AbstractRoom::Execute()
{
	return false;
}
