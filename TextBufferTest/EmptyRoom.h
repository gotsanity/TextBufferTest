#pragma once
#include "AbstractRoom.h"

class EmptyRoom :
	public AbstractRoom
{
private:

protected:

public:
	EmptyRoom(std::string desc);

	// Inherited via AbstractRoom
	virtual short ToShort() override;
	/*virtual COLOUR GetColor() override;*/
};

