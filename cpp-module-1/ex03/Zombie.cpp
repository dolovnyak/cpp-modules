#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{}

void Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")>  Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " completely died this time" << std::endl;
}

void Zombie::SetName(std::string name)
{
	_name = name;
}

void Zombie::SetType(std::string type)
{
	_type = type;
}
