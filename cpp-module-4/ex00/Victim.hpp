#pragma once

#include <iostream>
class Victim
{
public:
	Victim();
	Victim(std::string name);
	Victim(const Victim& victim);
	Victim& operator=(const Victim& victim);
	virtual ~Victim();

	std::string GetName() const;
	virtual void getPolymorphed() const;

protected:
	std::string _name;
};

std::ostream& operator<<(std::ostream& os, const Victim& victim);
