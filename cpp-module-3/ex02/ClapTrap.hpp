#pragma once

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(
			const std::string& name,
			const std::string& type,
			unsigned int hitPoints,
			unsigned int maxHitPoints,
			unsigned int energyPoints,
			unsigned int maxEnergyPoints,
			unsigned int level,
			unsigned int meleeAttackDamage,
			unsigned int rangedAttackDamage,
			unsigned int armorDamageReduction
		  );
	~ClapTrap();
	
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
protected:
	std::string _name;
	std::string _type;
	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	unsigned int _meleeAttackDamage;
	unsigned int _rangedAttackDamage;
	unsigned int _armorDamageReduction;
};
