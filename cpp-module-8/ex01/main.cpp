#include "span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		
		sp.addNumber(8); //exception
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		
		std::cout << sp.shortestSpan() << std::endl; //exception
		std::cout << sp.longestSpan() << std::endl; //exception
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
