#pragma once

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
public:
	FragTrap(const std::string& name);
	~FragTrap();
	
	void vaulthunter_dot_exe(std::string const & target);
};
