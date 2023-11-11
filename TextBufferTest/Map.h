#pragma once
#include <vector>
#include <string>
#include <random>
#include "EmptyRoom.h"
#include "EncounterRoom.h"
#include "EntranceRoom.h"

class AbstractRoom;


class Map
{
private:
	int SizeX, SizeY;
	std::vector<std::vector<AbstractRoom*>> Rooms;

	int GetRandomNumber(int min, int max);

public:
	Map();
	Map(int sizeX, int sizeY);

	int GetSizeX();
	int GetSizeY();

	AbstractRoom* GetRoom(int x, int y);
};

