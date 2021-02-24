#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer sorcerer1;
	Sorcerer sorcerer2("Dylan", "FireLord");
	std::cout << std::endl;

	std::cout << sorcerer1 << sorcerer2;
	std::cout << std::endl;

	sorcerer1 = sorcerer2;
	Sorcerer sorcerer3(sorcerer2);
	std::cout << std::endl;

	std::cout << sorcerer1 << sorcerer2 << sorcerer3;
	
	///////////////////////
	std::cout << std::endl;
	std::cout << std::endl;
	/////////////////////////
	
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << std::endl;
	
	std::cout << "Test copy and assign" << std::endl;
	Peon jui(joe);
	Peon maria("Maria");
	maria = jui;
	std::cout << std::endl;
	
	std::cout << robert << jim << joe;
	std::cout << std::endl;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << std::endl;
	
	return 0;
}
