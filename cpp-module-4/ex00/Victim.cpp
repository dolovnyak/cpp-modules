#include "Victim.hpp"

Victim::Victim() : _name("StandardVictim")
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
	*this = victim;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim)
{
	if (this == &victim)
		return *this;
	
	_name = victim._name;
	
	std::cout << _name << ", was assigned!" << std::endl;
	
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::GetName() const
{
	return _name;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& victim)
{
	os << "I am " << victim.GetName() << " and I like otters!" << std::endl;
	return os;
}
