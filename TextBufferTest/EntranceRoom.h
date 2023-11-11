#pragma once
#include "AbstractRoom.h"


class EntranceRoom :
	public AbstractRoom
{
public:
	EntranceRoom(std::string desc);

	// Inherited via AbstractRoom
	virtual short ToShort() override;
};

