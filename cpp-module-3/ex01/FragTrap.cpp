#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	
	std::string quotes[3] =
			{
			"I'm a sexy dinosaur! Rawr!",
			"Let's get this party started!",
			"Glitching weirdness is a term of endearment, right?",
			};
	std::cout << quotes[std::rand() % 3] << std::endl;
}

FragTrap::~FragTrap()
{
	std::string quotes[3] =
			{
			"My robotic flesh! AAHH!",
			"If only my chassis... weren't made of recycled human body parts! Wahahaha!",
			"Why do I even feel pain?!",
			};
	std::cout << quotes[std::rand() % 3] << std::endl;
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing "
			  << _rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at melee, causing "
			  << _meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount - _armorDamageReduction >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= (amount - _armorDamageReduction);
	
	std::cout << "FR4G-TP <" << _name << "> take damage " << amount
		<< ", armor damage reduction " << _armorDamageReduction
		<< ", current hp " << _hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints += amount;
	
	std::cout << "FR4G-TP <" << _name << "> repaired " << amount
			<< " current hp " << _hitPoints << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Not enough energy, need 25, current " << _energyPoints << std::endl;
		return;
	}
	_energyPoints -= 25;
	
	std::string quotes[2] =
			{
					"Just point me in the right direction! - ",
					"Have no fear, mini-trap is here! - ",
			};
	std::cout << quotes[std::rand() % 2];
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> with freeze attack, causing "
			  << 20 + std::rand() % 40 << " points of damage! Current energy "<< _energyPoints << std::endl;
}
