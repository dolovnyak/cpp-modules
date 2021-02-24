#include <vector>
#include <list>

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> v;
		v.push_back(4);
		v.push_back(5);
		v.push_back(7);
		v.push_back(9);
		v.push_back(10);
		v.push_back(20);
		
		std::list<int> l;
		l.push_back(4);
		l.push_back(5);
		l.push_back(7);
		l.push_back(9);
		l.push_back(10);
		l.push_back(13);
		
		std::vector<int>::iterator vi = easyfind(v, 7);
		std::list<int>::iterator li = easyfind(l, 7);
		
		while (vi != v.end())
		{
			std::cout << *vi << " ";
			vi++;
		}
		std::cout << std::endl;
		while (li != l.end())
		{
			std::cout << *li << " ";
			li++;
		}
		std::cout << std::endl;
		
		easyfind(l, 25); //exception
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
