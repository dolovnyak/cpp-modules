#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: Form("presidential pardon", target, 25, 5)
{
}


void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

Form* PresidentialPardonForm::createNewInstance(const std::string& target) const
{
	return new PresidentialPardonForm(target);
}

