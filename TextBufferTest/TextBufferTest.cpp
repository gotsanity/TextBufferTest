#include <iostream>
#include "Game.h"




using namespace std;

int main()
{
	//ShowConsoleCursor(false);
	Game myGame;

	myGame.ConstructConsole(160, 80, 8, 8);

	myGame.Start();

}
