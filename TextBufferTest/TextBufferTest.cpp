#include <iostream>
#include "Game.h"

int main()
{
	Game myGame;

	myGame.ConstructConsole(160, 80, 8, 8);

	myGame.Start();

}
