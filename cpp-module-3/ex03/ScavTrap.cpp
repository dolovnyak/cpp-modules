#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name)
: ClapTrap(name, "ScavTrap", 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::string quotes[3] =
			{
			"Recompiling my combat code!",
			"This time it'll be awesome, I promise!",
			"Look out everybody! Things are about to get awesome!"
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 3] << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::string quotes[2] =
			{
			"NOOO!",
			"Argh arghargh death gurgle gurglegurgle urgh... death."
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 2] << std::endl;
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
	std::cout << _type << " <" << _name << ">: " << tasks[std::rand() % 5] << std::endl;
}
