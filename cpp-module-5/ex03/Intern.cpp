#include "Intern.hpp"

Intern::Intern() : _forms(nullptr)
{
	addNewForm(new PresidentialPardonForm(""));
	addNewForm(new ShrubberyCreationForm(""));
	addNewForm(new RobotomyRequestForm(""));
}

Intern::Intern(const Intern& intern)
{
	*this = intern;
}

Intern& Intern::operator=(const Intern& intern)
{
	if (this == &intern)
		return *this;
	
	deleteAllForms();
	copyForms(intern._forms);
	
	return *this;
}

Intern::~Intern()
{
	deleteAllForms();
}

Form* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
	FormsList* tmpList = _forms;
	
	while (tmpList)
	{
		if (tmpList->form->getName() == formName)
			return tmpList->form->createNewInstance(formTarget);
		tmpList = tmpList->next;
	}
	
	std::cout << "form with name <" << formName << "> doesn't exist" << std::endl;
	return nullptr;
}

void Intern::addNewForm(Form* form)
{
	if (_forms == nullptr)
	{
		_forms = new FormsList;
		_forms->form = form;
		_forms->next = nullptr;
	}
	else
	{
		FormsList* tmpList = _forms;
		
		while (tmpList->next)
			tmpList = tmpList->next;
		
		tmpList->next = new FormsList;
		tmpList->next->form = form;
		tmpList->next->next = nullptr;
	}
}

void Intern::copyForms(FormsList* formsList)
{
	if (formsList == nullptr)
	{
		_forms = nullptr;
		return;
	}
	
	FormsList* newFormsList = new FormsList;
	_forms = newFormsList;
	
	while (formsList)
	{
		newFormsList->form = formsList->form;
		
		if (formsList->next != nullptr)
		{
			newFormsList->next = new FormsList;
			newFormsList = newFormsList->next;
		}
		
		formsList = formsList->next;
	}
	
}

void Intern::deleteAllForms()
{
	FormsList* tmpList = _forms;
	while (tmpList)
	{
		FormsList* current = tmpList;
		tmpList = tmpList->next;
		
		delete current->form;
		delete current;
	}
}

