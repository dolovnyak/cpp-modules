#include "Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

Character::Character(const std::string& name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character& Character::operator=(const Character& character)
{
	if (this == &character)
		return *this;
	
	deleteMaterias();
	for (int i = 0; i < 4; i++)
	{
		if (character._materias[i] != nullptr)
			_materias[i] = character._materias[i]->clone();
	}
	_name = character._name;
		
	return *this;
}

Character::~Character()
{
	deleteMaterias();
}

void Character::deleteMaterias()
{
	for (int i = 0; i < 4; i++)
		if (_materias[i] != nullptr)
			delete _materias[i];
}

const std::string& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (m == nullptr)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		if (_materias[idx] != nullptr)
			_materias[idx]->use(target);
}
