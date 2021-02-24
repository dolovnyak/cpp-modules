#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(const std::string& name);
	~ScavTrap();
	
	void challengeNewcomer();
};
