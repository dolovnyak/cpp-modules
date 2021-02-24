#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name)
: ClapTrap(name, "NinjaTrap", 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::string quotes[3] =
			{
			"Hahahahaha! I'm alive!",
			"Ha ha ha! I LIVE! Hahaha!",
			"Hahaha... I ascend!"
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 3] << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::string quotes[2] =
			{
			"Silent death...",
			"Shadows wait for me",
			};
	std::cout << _type << " <" << _name << ">: " << quotes[std::rand() % 2] << std::endl;
}

void PrintAttackQuote(const std::string& type, const std::string& name)
{
	std::string quotes[5] =
			{
			"In yo' FACE!",
			"Get ready for some Fragtrap face time!",
			"Chk-chk, BOOM!",
			"You're listening to 'Short-Range Damage Radio'.",
			"Up close and personal."
			};
	std::cout << type << " <" << name << ">: " << quotes[std::rand() % 5] << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& trap)
{
	PrintAttackQuote(_type, _name);
	trap.takeDamage(_meleeAttackDamage);
}

void NinjaTrap::ninjaShoebox(ScavTrap& trap)
{
	PrintAttackQuote(_type, _name);
	trap.takeDamage(_meleeAttackDamage);
}

void NinjaTrap::ninjaShoebox(FragTrap& trap)
{
	PrintAttackQuote(_type, _name);
	trap.takeDamage(_meleeAttackDamage);
}
