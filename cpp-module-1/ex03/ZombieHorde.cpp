#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int zombiesNumber) :_zombiesNumber(zombiesNumber)
{
	if (zombiesNumber <= 0)
	{
		std::cout << "zombies number doesn't correct" << std::endl;
		return;
	}
	
	std::srand(std::time(NULL));
	
	_zombies = new Zombie[zombiesNumber];
	std::string names[10] = {"KoJlypblga", "Kpot", "O6}l{opa", "pakpak", "olov", "6y6blda", "Agent Kapusta", "Jhon", "David", "Katrin"};
	
	for (int i = 0; i < zombiesNumber; i++)
	{
		_zombies[i].SetName(names[std::rand() % 10]);
		_zombies[i].SetType("Horde");
	};
}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombies;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < _zombiesNumber; i++)
	{
		_zombies[i].announce();
	}
}
