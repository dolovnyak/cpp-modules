#include "ZombieEvent.hpp"

int main()
{
	Zombie *zombie;
	ZombieEvent zombieEvent;
	
	zombie = zombieEvent.newZombie("hatak");
	zombie->announce();
	delete zombie;
	
	zombieEvent.setZombieType("matak");
	zombie = zombieEvent.newZombie("ratak");
	zombie->announce();
	delete zombie;
	
	zombieEvent.setZombieType("kotak");
	zombie = zombieEvent.newZombie("ratok");
	zombie->announce();
	delete zombie;
	
	zombie = new Zombie("latak", "oratak");
	zombie->announce();
	delete zombie;
	
	zombieEvent.setZombieType("chump");
	for (int i = 0; i < 10; i++)
	{
		zombie = zombieEvent.randomChump();
		delete zombie;
	}
}