#include "AMateria.hpp"

AMateria::AMateria() : _type("default"), _xp(0)
{
}

AMateria::AMateria(const std::string& type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria& aMateria)
{
	*this = aMateria;
}

AMateria& AMateria::operator=(const AMateria& aMateria)
{
	if (this == &aMateria)
		return *this;
	
	_xp = aMateria.getXP();
	_type = aMateria.getType();
	
	return *this;
}

AMateria::~AMateria()
{

}

const std::string& AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
