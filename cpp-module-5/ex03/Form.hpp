#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
public:
	Form(const std::string& name, const std::string& target, int requiredSignGrade, int requiredExecuteGrade);
	Form(const Form& form);
	Form& operator=(const Form& form);
	virtual ~Form();
	
	const std::string& getName() const;
	const std::string& getTarget() const;
	int getRequiredSignGrade() const;
	int getRequiredExecuteGrade() const;
	bool isSigned() const;
	
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	virtual Form* createNewInstance(const std::string& target) const = 0;
	
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
	
	class NotSignedException : public std::exception
	{
	public:
		const char* what() const throw(); //_NOEXCEPT
	};
	
private:
	std::string _name;
	std::string _target;
	bool _isSigned;
	int _requiredSignGrade;
	int _requiredExecuteGrade;
	
	Form();
};

std::ostream& operator<<(std::ostream& os, const Form& form);
