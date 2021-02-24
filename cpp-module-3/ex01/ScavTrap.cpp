#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	
	std::string quotes[3] =
			{
			"Recompiling my combat code!",
			"This time it'll be awesome, I promise!",
			"Look out everybody! Things are about to get awesome!"
			};
	std::cout << quotes[std::rand() % 3] << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::string quotes[2] =
			{
			"NOOO!",
			"Argh arghargh death gurgle gurglegurgle urgh... death."
			};
	std::cout << quotes[std::rand() % 2] << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "SC45-TA <" << _name << "> attacks <" << target << "> at range, causing "
			  << _rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "SC45-TA <" << _name << "> attacks <" << target << "> at melee, causing "
			  << _meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount - _armorDamageReduction >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= (amount - _armorDamageReduction);
	
	std::cout << "SC45-TA <" << _name << "> take damage " << amount
			  << ", armor damage reduction " << _armorDamageReduction
			  << ", current hp " << _hitPoints << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints += amount;
	
	std::cout << "SC45-TA <" << _name << "> repaired " << amount
			  << " current hp " << _hitPoints << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::string tasks[5] =
			{
			"Starts playing blackjack.",
			"Loses his apartment.",
			"Divorcing wife.",
			"Drink a lot.",
			"Cry a lot."
			};
	std::cout << tasks[std::rand() % 5] << std::endl;
}
