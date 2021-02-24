#pragma once

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
	~Bureaucrat();
	
	const std::string& getName() const;
	int getGrade() const;
	
	void incrementGrade();
	void decrementGrade();
	
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
	const std::string _name;
	int _grade;
	
	Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
