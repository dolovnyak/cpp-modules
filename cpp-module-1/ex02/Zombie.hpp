#pragma once

#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();

private:
	std::string _name;
	std::string _type;
};
