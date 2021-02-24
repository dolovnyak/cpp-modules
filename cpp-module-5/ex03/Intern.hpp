#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);
	~Intern();
	
	Form* makeForm(const std::string& formName, const std::string& formTarget);

private:
	typedef struct	FormsList
	{
		Form* form;
		FormsList* next;
	}				FormsList;
	
	FormsList* _forms;
	
	void addNewForm(Form* form);
	void deleteAllForms();
	void copyForms(FormsList* formsList);
};

