#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string& target);
	
	void execute(const Bureaucrat& executor) const;
};

