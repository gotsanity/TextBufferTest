#include <iostream>
#include "Game.h"

int main()
{
	Game myGame;

	myGame.ConstructConsole(120, 90, 8, 8);

	myGame.Start();

}
