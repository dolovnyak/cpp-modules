#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name)
{
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
