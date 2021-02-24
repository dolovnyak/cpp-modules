#pragma once

#include <string>
#include <iostream>

class Pony
{
public:
	Pony(std::string name, int friendshipPower);
	~Pony();
	void HaveFun();

private:
	std::string _name;
	int _friendshipPower;
};
