#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name, "FragTrap", 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::string quotes[3] =
			{
			"I'm a sexy dinosaur! Rawr!",
			"Let's get this party started!",
			"Glitching weirdness is a term of endearment, right?",
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 3] << std::endl;
}

FragTrap::~FragTrap()
{
	std::string quotes[3] =
			{
			"My robotic flesh! AAHH!",
			"If only my chassis... weren't made of recycled human body parts! Wahahaha!",
			"Why do I even feel pain?!",
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 3] << std::endl;
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
	std::cout << _type << " <" << _name << "> attacks <" << target << "> with freeze attack, causing "
			  << 20 + std::rand() % 40 << " points of damage! Current energy "<< _energyPoints << std::endl;
}
