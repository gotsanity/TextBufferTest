#include "Game.h"

bool Game::OnUserCreate()
{
	playerX = 2;
	playerY = 2;
	text = "";
	combatText = "";
	myMap = new Map(30, 30);
    return true;
}

bool Game::OnUserUpdate(float fElapesedTime)
{
	text = "";
	// get user input
	if (m_keys[VK_LEFT].bPressed) {
		moveX(-1);
	}

	if (m_keys[VK_RIGHT].bPressed) {
		moveX(1);
	}

	if (m_keys[VK_UP].bPressed) {
		moveY(-1);
	}

	if (m_keys[VK_DOWN].bPressed) {
		moveY(1);
	}



	// CLEAR SCREEN
	Fill(0, 0, m_nScreenWidth, m_nScreenHeight, L' ', 0);

	// Draw Border
	Fill(1, 1, myMap->GetSizeX() + 3, myMap->GetSizeY() + 3, PIXEL_SOLID, FG_WHITE);

	// DRAW MAP
	for (int i = 0; i < myMap->GetSizeY(); i++) {
		for (int j = 0; j < myMap->GetSizeX(); j++) {
			Fill(2 + i, 2 + j, 3 + i, 3 + j, myMap->GetRoom(i, j)->ToShort(), myMap->GetRoom(i, j)->GetColor());
		}
	}

	// DRAW PLAYER
	Fill(playerX, playerY, playerX + 1, playerY + 1, L'P', 3);
	text = myMap->GetRoom(playerY - 2, playerX - 2)->GetDescription();

	// Draw Room
	myMap->GetRoom(playerY - 2, playerX - 2)->Execute();

	DrawString(1, myMap->GetSizeY() + 5, std::wstring(text.begin(), text.end()).c_str());

	return true;
}

void Game::moveX(int amount)
{
	if (playerX + amount >= 2 && playerX + amount < myMap->GetSizeX() + 2) {
		playerX += amount;
	}
}

void Game::moveY(int amount)
{
	if (playerY + amount >= 2 && playerY + amount < myMap->GetSizeY() + 2) {
		playerY += amount;
	}
}

Game::Game()
{

}

void Game::RunCombat()
{
	combatText = "Combat Started";
}
