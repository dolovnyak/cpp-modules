#pragma once

#include "Contact.h"

class AwesomePhoneBook
{
public:
	AwesomePhoneBook();
	void CommandLoop();

private:
	bool _isRunning;
	int _contactsNumber;
	Contact _contacts[8];
	
	void PrintMainUsage();
	void ShowContactsMainInfo();
	void ShowContactByIndex();
};
