#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, _type);
}

Zombie* ZombieEvent::randomChump()
{
	Zombie *zombie;
	
	std::string names[6] = {"KoJlypblga", "Kpot", "O6}l{opa", "pakpak", "olov", "6y6blda"};
	
	zombie = new Zombie(names[std::rand() % 6], _type);
	zombie->announce();
	
	return zombie;
}

ZombieEvent::ZombieEvent()
{
	std::srand(std::time(NULL));
}
