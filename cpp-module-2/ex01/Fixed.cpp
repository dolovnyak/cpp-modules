#include "Fixed.hpp"

//Help for debug
//void PrintBits(int value)
//{
//	for (int i = 31; i >= 0 ; i--)
//	{
//		std::cout << (((value & (1 << i)) == 0) ? 0 : 1);
//	}
//	std::cout << std::endl;
//}
//
//void PrintFBits(float value)
//{
//	int *v = (int *)&value;
//	for (int i = 31; i >= 0 ; i--)
//	{
//		std::cout << (((*v & (1 << i)) == 0) ? 0 : 1);
//	}
//	std::cout << std::endl;
//}
//

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	_value = number << _fractionalBitsNumber;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	
	_value = (int)roundf(number * (1 << _fractionalBitsNumber));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	
	if (this == &fixed)
	{
		return *this;
	}
	
	_value = fixed._value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(const int rawValue)
{
	_value = rawValue;
}

float Fixed::toFloat(void) const
{
	return (float)_value / (float)(1 << _fractionalBitsNumber);
}

int Fixed::toInt(void) const
{
	return _value >> _fractionalBitsNumber;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
