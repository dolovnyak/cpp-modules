#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: Form("robotomy request", target, 72, 45)
{
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << "VEVEVEVEVEVEVEVEVEVEV KATAH KATAH KATAH VEVEVEVEVEVVEVE ";
	if (std::rand() % 2)
		std::cout << "<" << getTarget() << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << getTarget() << "> failed robotomize" << std::endl;
}

Form* RobotomyRequestForm::createNewInstance(const std::string& target) const
{
	return new RobotomyRequestForm(target);
}
