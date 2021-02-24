#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(const std::string& name);
	Character(const Character& character);
	Character& operator=(const Character& character);
	~Character();
	
	const std::string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	AMateria* _materias[4];
	std::string _name;
	
	void deleteMaterias();
};


