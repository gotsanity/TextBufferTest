#include "Map.h"

int Map::GetRandomNumber(int min, int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(min, max);
	return distr(gen);
}

Map::Map()
{
	SizeX = 0;
	SizeY = 0;
}

Map::Map(int sizeX, int sizeY)
{
	SizeX = sizeX;
	SizeY = sizeY;

	// generate the map
	Rooms.resize(sizeY);

	for (int i = 0; i < sizeY; i++) {
		Rooms.resize(sizeX);
		for (int j = 0; j < sizeX; j++) {
			// choose the room
			int roomChoice = GetRandomNumber(1, 10);

			if (i == 0 && j == 0) {
				Rooms[i].push_back(new EntranceRoom("The stairs lead you down into the dungeon..."));
			}
			else if (roomChoice > 9) {
				Rooms[i].push_back(new EmptyRoom("This room is dusty but otherwise empty."));
			}
			else {
				Rooms[i].push_back(new EncounterRoom("You walk into the room and are suddenly faced with a ", "Goblin"));
			}
		}
	}
}

int Map::GetSizeX()
{
	return SizeX;
}

int Map::GetSizeY()
{
	return SizeY;
}

AbstractRoom* Map::GetRoom(int x, int y)
{
	return Rooms[y][x];
}