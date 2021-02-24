#include "Character.hpp"

Character::Character() : _name("default"), _ap(40), _weapon(nullptr)
{
}

Character::Character(const std::string& name) : _name(name), _ap(40), _weapon(nullptr)
{
}

Character::Character(const Character& character)
{
	*this = character;
}

Character &Character::operator=(const Character& character)
{
	if (this == &character)
		return *this;
	
	_name = character.getName();
	_ap = character.getCurrentAp();
	_weapon = character.getCurrentWeapon();
	
	return *this;
}

Character::~Character()
{
}

std::string Character::getName() const
{
	return _name;
}

void Character::recoverAP()
{
	if (_ap + 10 >= 40)
		_ap = 40;
	else
		_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (_weapon == nullptr || _weapon->getAPCost() > _ap)
		return;
	
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	_ap -= _weapon->getAPCost();
	
	if (enemy->getHP() <= 0)
		delete enemy;
}

int Character::getCurrentAp() const
{
	return _ap;
}

AWeapon *Character::getCurrentWeapon() const
{
	return _weapon;
}

std::ostream& operator<<(std::ostream& os, const Character& character)
{
	AWeapon* weapon = character.getCurrentWeapon();
	
	if (weapon == nullptr)
		os << character.getName() << " has " << character.getCurrentAp() << " AP and is unarmed" << std::endl;
	else
		os << character.getName() << " has " << character.getCurrentAp() << " AP and wields a " << weapon->getName() << std::endl;
	
	return os;
}
