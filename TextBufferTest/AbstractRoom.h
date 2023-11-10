#pragma once
#include <string>
#include <memory>
#include "Pixel.h"
#include "Game.h"

class AbstractRoom
{

private:

protected:
	std::string Description;

public:
	AbstractRoom(std::string desc);

	std::string GetDescription();
	void SetDescription(std::string desc);

	virtual std::string ToString() = 0; // draw the cell of the room
	virtual short ToShort() = 0;
	virtual COLOUR GetColor();
	virtual bool Execute();
};

