#pragma once

#include <iostream>

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	
	if (it == container.end())
		throw std::logic_error("Not found exception");
	
	return it;
}
