#include "EmptyRoom.h"

EmptyRoom::EmptyRoom(std::string desc) : AbstractRoom(desc)
{
}

std::string EmptyRoom::ToString()
{
	return " ";
}

short EmptyRoom::ToShort()
{
	return L'#';
}

COLOUR EmptyRoom::GetColor()
{
	return FG_BLACK;
}
