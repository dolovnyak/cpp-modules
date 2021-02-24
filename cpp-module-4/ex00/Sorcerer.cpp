#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer() : _name("StandardSorcerer"), _title("Soldier")
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
	*this = sorcerer;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& sorcerer)
{
	if (this == &sorcerer)
		return *this;
	
	_name = sorcerer._name;
	_title = sorcerer._title;
	
	std::cout << _name << ", " << _title << ", was assigned!" << std::endl;
	
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::GetName() const
{
	return _name;
}

std::string Sorcerer::GetTitle() const
{
	return _title;
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer)
{
	os << "I am " << sorcerer.GetName() << ", " << sorcerer.GetTitle() << ", and I like ponies!" << std::endl;
	return os;
}