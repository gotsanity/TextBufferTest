#pragma once
#include "olcConsoleGameEngine.h"
#include "Map.h"

class Game :
	public olcConsoleGameEngine
{
public:
	Game() {

	}

	void RunCombat() {
		combatText = "Combat Started";
	}

protected:
	virtual bool OnUserCreate()
	{
		return true;
	}

	bool OnUserUpdate(float fElapesedTime)
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
		Fill(1, 1, map.GetSizeX() + 3, map.GetSizeY() + 3, PIXEL_SOLID, FG_WHITE);

		// DRAW MAP
		for (int i = 0; i < map.GetSizeY(); i++) {
			for (int j = 0; j < map.GetSizeX(); j++) {
				Fill(2 + i, 2 + j, 3 + i, 3 + j, map.GetRoom(i, j)->ToShort(), map.GetRoom(i, j)->GetColor());
			}
		}

		// DRAW PLAYER
		Fill(playerX, playerY, playerX + 1, playerY + 1, L'P', 3);
		text = map.GetRoom(playerY-2, playerX-2)->GetDescription();

		map.GetRoom(playerY - 2, playerX - 2)->Execute();

		DrawString(1, map.GetSizeY() + 5, std::wstring(text.begin(), text.end()).c_str());

		return true;
	}

private:
	int playerX = 2;
	int playerY = 2;
	std::string text = "";
	std::string combatText = "";
	Map map = Map(30, 30);

	void moveX(int amount) {
		if (playerX + amount >= 2 && playerX + amount < map.GetSizeX() + 2) {
			playerX += amount;
		}
	}

	void moveY(int amount) {
		if (playerY + amount >= 2 && playerY + amount < map.GetSizeY() + 2) {
			playerY += amount;
		}
	}
};