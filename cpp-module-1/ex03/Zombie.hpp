#pragma once

#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
	
	void SetName(std::string name);
	void SetType(std::string type);

private:
	std::string _name;
	std::string _type;
};
