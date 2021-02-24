#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	switch (std::rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			std::cout << "impossible" << std::endl;
			return nullptr;
	}
}

void identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	std::srand(time(nullptr));
	
	A* a = new A;
	B* b = new B;
	C* c = new C;
	
	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	std::cout << std::endl;
	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);
	std::cout << std::endl;
	
	delete a;
	delete b;
	delete c;
	
	Base* base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;

	return 0;
}
