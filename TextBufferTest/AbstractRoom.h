#pragma once
#include <string>
#include <memory>
#include "EColour.h"

class Map;

class AbstractRoom
{

private:

protected:
	std::string Description;
	bool bShouldRunEvent;

public:
	AbstractRoom(std::string desc);

	std::string GetDescription();
	void SetDescription(std::string desc);

	virtual short ToShort() = 0;
	virtual COLOUR GetColor();
	virtual bool Execute(Map& theMap);
	virtual bool ShouldRunEvent();
};

