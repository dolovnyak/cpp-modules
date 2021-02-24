#pragma once

#include <iostream>

class Enemy
{
public:
	Enemy();
	Enemy(int hp, std::string const& type);
	Enemy(const Enemy& enemy);
	Enemy& operator=(const Enemy& enemy);
	virtual ~Enemy();
	
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);

private:
	int _hp;
	std::string _type;
};
