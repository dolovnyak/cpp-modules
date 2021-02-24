#pragma once

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& assaultTerminator);
	AssaultTerminator& operator=(const AssaultTerminator& assaultTerminator);
	~AssaultTerminator();
	
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

