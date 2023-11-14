#pragma once
#include "olcConsoleGameEngineOOP.h"
#include "Map.h"

class Game :
	public olcConsoleGameEngineOOP
{
public:
	Game();
	void RunCombat(std::string monsterType);

protected:
	bool OnUserCreate();

	bool OnUserUpdate(float fElapesedTime);


private:
	int playerX;
	int playerY;
	std::string text;
	std::string combatText;
	Map* myMap;

	void moveX(int amount);

	void moveY(int amount);
};