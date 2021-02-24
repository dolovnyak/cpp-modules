#include "AwesomePhoneBook.h"

void AwesomePhoneBook::PrintMainUsage()
{
	std::cout << std::endl << "Available commands: ADD, SEARCH, EXIT" << std::endl;
}

void AwesomePhoneBook::ShowContactsMainInfo()
{
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < _contactsNumber; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		
		if (_contacts[i].FirstName.length() < 10)
			std::cout << std::setw(10) << _contacts[i].FirstName << "|";
		else
			std::cout << std::setw(9) << _contacts[i].FirstName.substr(0, 9) << ".|";
		
		if (_contacts[i].LastName.length() < 10)
			std::cout << std::setw(10) << _contacts[i].LastName << "|";
		else
			std::cout << std::setw(9) << _contacts[i].LastName.substr(0, 9) << ".|";
		
		if (_contacts[i].Nickname.length() < 10)
			std::cout << std::setw(10) << _contacts[i].Nickname << "|";
		else
			std::cout << std::setw(9) << _contacts[i].Nickname.substr(0, 9) << ".|";
		std::cout << std::endl;
	}
}

void AwesomePhoneBook::ShowContactByIndex()
{
	std::string stringIndex;
	int index;
	
	std::cout << "Input index: " << std::endl;
	std::getline(std::cin, stringIndex);
	index = atoi(stringIndex.c_str());
	
	if (index >= 1 && index <= _contactsNumber)
		_contacts[index - 1].ShowAllFields();
	else
		std::cout << "Index doesn't correct: " << std::endl;
}

void AwesomePhoneBook::CommandLoop()
{
	std::cout << "Welcome to phone book!" << std::endl;
	PrintMainUsage();
	
	while (_isRunning)
	{
		std::string command;
		std::getline(std::cin, command);
		
		if (command == "EXIT")
		{
			_isRunning = false;
		}
		else if (command == "ADD")
		{
			if (_contactsNumber == 8)
				std::cout << "Book is full" << std::endl;
			else
			{
				_contacts[_contactsNumber].FillFromInput();
				_contactsNumber++;
			}
			PrintMainUsage();
		}
		else if (command == "SEARCH")
		{
			if (_contactsNumber > 0)
			{
				ShowContactsMainInfo();
				ShowContactByIndex();
			}
			else
				std::cout << "There are no contacts here yet" << std::endl;
			PrintMainUsage();
		}
		else
		{
			std::cout << "Command doesn't correct" << std::endl;
		}
	}
}

AwesomePhoneBook::AwesomePhoneBook()
{
	_isRunning = true;
	_contactsNumber = 0;
}

