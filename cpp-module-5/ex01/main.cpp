#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Jhon", 5);
//		Bureaucrat bureaucrat("Jhon", 11);

//		Bureaucrat bureaucrat("Jhon", 0);
//		Bureaucrat bureaucrat("Jhon", 151);

		std::cout << bureaucrat;
		
		Form form("Agile rules", 10, 2);
//		Form form("Agile rules", 0, 2);
//		Form form("Agile rules", 10, 151);

		std::cout << form;
		
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
	}
	catch (std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
	}
	
	return 0;
}
