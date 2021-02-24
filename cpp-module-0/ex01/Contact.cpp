#include "Contact.h"

void Contact::FillFromInput()
{
	std::cout << "Input first name: " << std::endl;
	std::getline(std::cin, FirstName);
	
	std::cout << "Input last name: " << std::endl;
	std::getline(std::cin, LastName);
	
	std::cout << "Input nickname: " << std::endl;
	std::getline(std::cin, Nickname);
	
	std::cout << "Input login: " << std::endl;
	std::getline(std::cin, Login);
	
	std::cout << "Input postal address: " << std::endl;
	std::getline(std::cin, PostalAddress);
	
	std::cout << "Input email address: " << std::endl;
	std::getline(std::cin,  EmailAddress);
	
	std::cout << "Input phone number: " << std::endl;
	std::getline(std::cin,  PhoneNumber);
	
	std::cout << "Input birthday date: " << std::endl;
	std::getline(std::cin,  BirthdayDate);
	
	std::cout << "Input favorite meal: " << std::endl;
	std::getline(std::cin,  FavoriteMeal);
	
	std::cout << "Input underwear color: " << std::endl;
	std::getline(std::cin,  UnderwearColor);
	
	std::cout << "Input darkest secret: " << std::endl;
	std::getline(std::cin,  DarkestSecret);
}

void Contact::ShowAllFields()
{
	std::cout << "First name: " << FirstName << std::endl;
	std::cout << "Last name: " << LastName << std::endl;
	std::cout << "Nickname: " << Nickname << std::endl;
	std::cout << "Login: " << Login << std::endl;
	std::cout << "Postal address: " << PostalAddress << std::endl;
	std::cout << "Email address: " << EmailAddress << std::endl;
	std::cout << "Phone number: " << PhoneNumber << std::endl;
	std::cout << "Favorite meal: " << FavoriteMeal << std::endl;
	std::cout << "Underwear color: " << UnderwearColor << std::endl;
	std::cout << "Darkest secret: " << DarkestSecret << std::endl;
}
