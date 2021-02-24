#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(const std::string& name);
	~NinjaTrap();
	
	void ninjaShoebox(NinjaTrap& ninjaTrap);
	void ninjaShoebox(ScavTrap& scavTrap);
	void ninjaShoebox(FragTrap& fragTrap);
};
