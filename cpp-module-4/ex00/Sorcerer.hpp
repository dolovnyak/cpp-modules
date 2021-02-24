#pragma once

#include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer();
	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer(const Sorcerer& sorcerer);
	Sorcerer& operator=(const Sorcerer& sorcerer);
	~Sorcerer();
	
	std::string GetName() const;
	std::string GetTitle() const;
	void polymorph(Victim const& victim) const;

private:
	std::string _name;
	std::string _title;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer);
