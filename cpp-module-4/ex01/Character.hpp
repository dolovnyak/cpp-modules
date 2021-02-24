#pragma once

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
public:
	Character();
	Character(std::string const& name);
	Character(const Character& character);
	Character& operator=(const Character& character);
	~Character();
	
	std::string getName() const;
	int getCurrentAp() const;
	AWeapon* getCurrentWeapon() const;
	
	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

private:
	std::string _name;
	int _ap;
	AWeapon* _weapon;
};

std::ostream& operator<<(std::ostream& os, const Character& character);