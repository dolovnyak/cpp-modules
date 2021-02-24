#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed(const int number);
	Fixed(const float number);
	Fixed& operator= (const Fixed &fixed);
	~Fixed();
	
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const rawValue);
	
private:
	int _value;
	static const int _fractionalBitsNumber = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
