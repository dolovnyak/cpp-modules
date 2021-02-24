#pragma once

#include <iostream>
#include <iostream>
#include <iomanip>

class Contact
{
public:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string Login;
	std::string PostalAddress;
	std::string EmailAddress;
	std::string PhoneNumber;
	std::string BirthdayDate;
	std::string FavoriteMeal;
	std::string UnderwearColor;
	std::string DarkestSecret;
	
	void FillFromInput();
	void ShowAllFields();
};
