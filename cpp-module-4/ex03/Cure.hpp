#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	
	AMateria* clone() const;
	void use(ICharacter& target);
};


