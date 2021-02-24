#include "Squad.hpp"

Squad::Squad() : _unitsNumber(0), _units(nullptr)
{
}

Squad::Squad(const Squad &squad) : _unitsNumber(0), _units(nullptr)
{
	*this = squad;
}

Squad& Squad::operator=(const Squad &squad)
{
	if (this == &squad)
		return *this;

	if (_units != nullptr)
		deleteAllUnits();
	
	copyUnits(squad._units);
	_unitsNumber = squad._unitsNumber;
	
	return *this;
}

Squad::~Squad()
{
	if (_units != nullptr)
		deleteAllUnits();
}

int Squad::getCount() const
{
	return _unitsNumber;
}

ISpaceMarine* Squad::getUnit(int unitIndex) const
{
	if (unitIndex >= _unitsNumber || unitIndex < 0)
		return nullptr;
	 
	UnitsList* tmpList = _units;
	for (int i = 0; i < unitIndex; i++)
		tmpList = tmpList->next;
	
	return tmpList->unit;
}

int Squad::push(ISpaceMarine* spaceMarine)
{
	if (spaceMarine == nullptr)
		return _unitsNumber;
	
	if (_units == nullptr)
	{
		_units = new UnitsList();
		_units->unit = spaceMarine;
		_units->next = nullptr;
	}
	else
	{
		UnitsList* tmpList = _units;
		
		while (tmpList->next)
		{
			if (tmpList->unit == spaceMarine)
				return _unitsNumber;
			tmpList = tmpList->next;
		}
		if (tmpList->unit == spaceMarine)
			return _unitsNumber;
		
		tmpList->next = new UnitsList();
		tmpList->next->unit = spaceMarine;
		tmpList->next->next = nullptr;
	}
	
	_unitsNumber++;
	return _unitsNumber;
}

void Squad::deleteAllUnits()
{
	UnitsList* tmpList = _units;
	while (tmpList)
	{
		UnitsList* current = tmpList;
		tmpList = tmpList->next;
		
		delete current->unit;
		delete current;
	}
}

void Squad::copyUnits(UnitsList *unitsList)
{
	if (unitsList == nullptr)
	{
		_units = nullptr;
		return;
	}
	
	UnitsList* newUnitsList = new UnitsList();
	_units = newUnitsList;
	
	while (unitsList)
	{
		newUnitsList->unit = unitsList->unit->clone();
		
		if (unitsList->next != nullptr)
		{
			newUnitsList->next = new UnitsList();
			newUnitsList = newUnitsList->next;
		}
		
		unitsList = unitsList->next;
	}
}
