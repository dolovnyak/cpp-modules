#pragma once

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int zombiesNumber);
	~ZombieHorde();
	void announce();

private:
	int _zombiesNumber;
	Zombie* _zombies;
};
