#pragma once

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed(const int );
	Fixed& operator= (const Fixed &fixed);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const rawValue);
	
private:
	int _value;
	static const int _fractionalBitsNumber = 8;
};
