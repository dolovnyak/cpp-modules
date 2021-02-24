#include "Form.hpp"

Form::Form() : _name(""), _target(""), _isSigned(false), _requiredSignGrade(150), _requiredExecuteGrade(150)
{
}

Form::Form(const std::string& name, const std::string& target, int requiredSignGrade, int requiredExecuteGrade)
: _name(name), _target(target), _isSigned(false)
{
	if (requiredSignGrade < 1 || requiredExecuteGrade < 1)
		throw Form::GradeTooHighException();
	if (requiredSignGrade > 150 || requiredExecuteGrade > 150)
		throw Form::GradeTooLowException();
	
	_requiredSignGrade = requiredSignGrade;
	_requiredExecuteGrade = requiredExecuteGrade;
}

Form::Form(const Form& form)
{
	*this = form;
}

Form& Form::operator=(const Form& form)
{
	if (this == &form)
		return *this;
	
	_name = form.getName();
	_isSigned = form.isSigned();
	_requiredSignGrade = form.getRequiredSignGrade();
	_requiredExecuteGrade = form.getRequiredExecuteGrade();
	_target = form.getTarget();
	
	return *this;
}

Form::~Form()
{
}

const std::string& Form::getName() const
{
	return _name;
}

const std::string& Form::getTarget() const
{
	return _target;
}

int Form::getRequiredSignGrade() const
{
	return _requiredSignGrade;
}

int Form::getRequiredExecuteGrade() const
{
	return _requiredExecuteGrade;
}

bool Form::isSigned() const
{
	return _isSigned;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _requiredSignGrade)
		throw Form::GradeTooLowException();
	
	_isSigned = true;
}

void Form::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > _requiredExecuteGrade)
		throw Form::GradeTooLowException();
	if (!_isSigned)
		throw Form::NotSignedException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: grade too low!";
}

const char* Form::NotSignedException::what() const throw()
{
	return "Form: try to execute when not signed!";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	if (form.isSigned())
		os << "Form: <" << form.getName() << ">, <signed>, required sign grade <"
		   << form.getRequiredSignGrade() << "> required execute grade <" << form.getRequiredExecuteGrade() << ">" << std::endl;
	else
		os << "Form: <" << form.getName() << ">, <not signed>, required sign grade <"
		   << form.getRequiredSignGrade() << "> required execute grade <" << form.getRequiredExecuteGrade() << ">" << std::endl;
	
	return os;
}
