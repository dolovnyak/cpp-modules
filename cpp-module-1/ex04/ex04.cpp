#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	
	std::string* ptrBrain = &brain;
	std::string& refBrain = brain;
	
	std::cout << *ptrBrain << std::endl;
	std::cout << refBrain << std::endl;
}
