#pragma once
#include "AbstractRoom.h"

class EncounterRoom :
	public AbstractRoom
{
private:
	std::string MonsterType;

public:
	EncounterRoom(std::string desc, std::string monsterType);

	bool Execute() override;

	// Inherited via AbstractRoom
	virtual short ToShort() override;
	/*virtual COLOUR GetColor() override;*/
};

