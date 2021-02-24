#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name, const std::string &type, unsigned int hitPoints, unsigned int maxHitPoints,
				   unsigned int energyPoints, unsigned int maxEnergyPoints, unsigned int level,
				   unsigned int meleeAttackDamage, unsigned int rangedAttackDamage, unsigned int armorDamageReduction)
				   : _name(name), _type(type), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
				   _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _level(level),
				   _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage), _armorDamageReduction(armorDamageReduction)
{
	std::cout << "ClapTrap, type <" << _type << ">, name <" << _name << "> created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap, type <" << _type << "> deleted" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << _type << " <" << _name << "> attacks <" << target << "> at range, causing "
			  << _rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << _type << " <" << _name << "> attacks <" << target << "> at melee, causing "
			  << _meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount - _armorDamageReduction >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= (amount - _armorDamageReduction);
	
	std::cout << _type << " <" << _name << "> take damage " << amount
			  << ", armor damage reduction " << _armorDamageReduction
			  << ", current hp " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints += amount;
	
	std::cout << _type << " <" << _name << "> repaired " << amount
			  << " current hp " << _hitPoints << std::endl;
}

