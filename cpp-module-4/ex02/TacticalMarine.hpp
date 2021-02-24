#pragma once

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& tacticalMarine);
	TacticalMarine& operator=(const TacticalMarine& tacticalMarine);
	~TacticalMarine();
	
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

