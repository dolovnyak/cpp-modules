#include "Pony.hpp"

Pony::Pony(std::string name, int friendshipPower)
	: _name(name), _friendshipPower(friendshipPower)
{
	std::cout << "I was born, I'm really happy!!!" << std::endl;
	std::cout << "What? My name is " << _name << " and my friendship power is " << _friendshipPower
		<< "? Thank you, I really love you!" << std::endl << std::endl;
}

void Pony::HaveFun()
{
	std::cout << "*jumps and rejoices*" << std::endl << std::endl;
}

Pony::~Pony()
{
	std::cout << "NO!! PLEASE DON'T KILL ME, NO, PLEASE!!! PLEASE!!!! mommy.. mommy.. please... help me..." << std::endl;
	std::cout << "*sighs one last time*" << std::endl << std::endl;
}
