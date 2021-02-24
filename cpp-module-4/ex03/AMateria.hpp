#pragma once

#include "ICharacter.hpp"

class AMateria
{
public:
	AMateria();
	AMateria(const std::string& type);
	AMateria(const AMateria& aMateria);
	AMateria& operator=(const AMateria& aMateria);
	virtual ~AMateria();
	
	const std::string& getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

private:
	std::string _type;
	unsigned int _xp;
};


