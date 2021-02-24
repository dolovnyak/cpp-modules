#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string& target);
	
	void execute(const Bureaucrat& executor) const;
};

