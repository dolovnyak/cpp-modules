#include "Human.hpp"

int main()
{
	Human human;
	
	std::cout << human.identify() << std::endl;
	std::cout << human.Brain.identify() << std::endl;
}