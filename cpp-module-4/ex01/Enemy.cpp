#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type)
{
}

Enemy::Enemy() : _hp(100), _type("default")
{
}

Enemy::Enemy(const Enemy &enemy)
{
	*this = enemy;
}

Enemy &Enemy::operator=(const Enemy &enemy)
{
	if (this == &enemy)
		return *this;
	
	_hp = enemy.getHP();
	_type = enemy.getType();
	
	return *this;
}

Enemy::~Enemy()
{
}

std::string Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return;
	
	_hp -= damage;
}
