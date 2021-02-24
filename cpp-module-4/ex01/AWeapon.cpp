#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon() : _name("default"), _apcost(0), _damage(0)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &aWeapon)
{
	*this = aWeapon;
}

AWeapon &AWeapon::operator=(const AWeapon &aWeapon)
{
	if (this == &aWeapon)
		return *this;
	
	_name = aWeapon.getName();
	_apcost = aWeapon.getAPCost();
	_damage = aWeapon.getDamage();
	
	return *this;
}

std::string AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}

