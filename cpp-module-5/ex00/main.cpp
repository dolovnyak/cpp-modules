#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Jhon", 0);

//		Bureaucrat bureaucrat("Jhon", 1);

//		Bureaucrat bureaucrat("Jhon", 1);
//		bureaucrat.incrementGrade();

//		Bureaucrat bureaucrat("Jhon", 151);

//		Bureaucrat bureaucrat("Jhon", 150);

//		Bureaucrat bureaucrat("Jhon", 150);
//		bureaucrat.decrementGrade();
		
		std::cout << bureaucrat;
	}
	catch (std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
	}
	
	return 0;
}
