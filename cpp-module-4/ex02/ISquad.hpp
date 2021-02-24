#pragma once

#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int unitIndex) const = 0;
	virtual int push(ISpaceMarine* spaceMarine) = 0;
};