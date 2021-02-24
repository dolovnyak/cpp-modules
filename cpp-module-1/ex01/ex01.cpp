#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

//int main()
//{
//	memoryLeak();
//}

// I used "leaks" program for check leaks, can explain few ways for checking leaks
