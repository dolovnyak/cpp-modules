#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string& target);
	
	void execute(const Bureaucrat& executor) const;
};

