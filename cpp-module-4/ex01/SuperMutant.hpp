#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	void takeDamage(int damage);
};

