#pragma once
#include "AbstractRoom.h"

class Map;

class EncounterRoom :
	public AbstractRoom
{
private:
	std::string MonsterType;
	bool CombatStarted;

public:
	EncounterRoom(std::string desc, std::string monsterType);

	virtual short ToShort() override;
	virtual COLOUR GetColor() override;
	bool Execute(Map& theMap) override;
};

