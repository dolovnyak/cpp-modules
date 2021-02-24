#pragma once

#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();

private:
	std::string _type;
};

