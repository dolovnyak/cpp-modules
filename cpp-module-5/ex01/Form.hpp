#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
public:
	Form(const std::string& name, int requiredSignGrade, int requiredExecuteGrade);
	Form(const Form& form);
	Form& operator=(const Form& form);
	~Form();
	
	const std::string& getName() const;
	int getRequiredSignGrade() const;
	int getRequiredExecuteGrade() const;
	bool isSigned() const;
	
	void beSigned(const Bureaucrat& bureaucrat);
	
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw(); //_NOEXCEPT
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw(); //_NOEXCEPT
	};
	
private:
	std::string _name;
	bool _isSigned;
	int _requiredSignGrade;
	int _requiredExecuteGrade;
	
	Form();
};

std::ostream& operator<<(std::ostream& os, const Form& form);
