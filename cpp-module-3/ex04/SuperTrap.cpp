#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name)
: ClapTrap(name, "SuperTrap", 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::string quotes[3] =
			{
			"AAAAAAAAAAAAAAA I WILL KILL EVERY ONE",
			"-_-",
			"I'm alive :) THEN YOU WILL DEAD SO SOON!!!"
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 3] << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::string quotes[3] =
			{
			"X_X",
			"x_x",
			"(x.x)"
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 3] << std::endl;
}
