#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *pony = new Pony("RainbowDash", 103);
	pony->HaveFun();
	delete pony;
}

void ponyOnTheStack()
{
	Pony pony("Sparkle", 235);
	pony.HaveFun();
}

int main()
{
	std::cout << "Start function ponyOnTheHeap:" << std::endl << std::endl;
	ponyOnTheHeap();
	std::cout << "End function ponyOnTheHeap" << std::endl << std::endl;
	
	std::cout << "Start function ponyOnTheStack:" << std::endl;
	ponyOnTheStack();
	std::cout << "End function ponyOnTheStack" << std::endl;
	
	return 0;
}