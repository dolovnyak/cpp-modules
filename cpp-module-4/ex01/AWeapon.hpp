#pragma once

#include <iostream>

class AWeapon
{
public:
	AWeapon();
	AWeapon(const std::string& name, int apcost, int damage);
	AWeapon(const AWeapon& aWeapon);
	AWeapon& operator=(const AWeapon& aWeapon);
	virtual ~AWeapon();
	
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

private:
	std::string _name;
	int _apcost;
	int _damage;
};
