#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

