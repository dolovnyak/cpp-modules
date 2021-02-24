#pragma once

#include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad();
	Squad(const Squad& squad);
	Squad& operator=(const Squad& squad);
	~Squad();
	
	int getCount() const;
	ISpaceMarine* getUnit(int unitIndex) const;
	int push(ISpaceMarine *spaceMarine);

private:
	int _unitsNumber;
	
	typedef struct	UnitsList
	{
		ISpaceMarine* unit;
		UnitsList* next;
	}				UnitsList;
	UnitsList* _units;

	void deleteAllUnits();
	void copyUnits(UnitsList* unitsList);
};
