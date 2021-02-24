#include "span.hpp"

Span::Span()
{
	_arr.reserve(0);
}

Span::Span(unsigned int capacity)
{
	_arr.reserve(capacity);
}

Span::Span(const Span& span)
{
	*this = span;
}

Span& Span::operator=(const Span& span)
{
	if (this == &span)
		return *this;
	
	_arr = span._arr;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (_arr.size() == _arr.capacity())
		throw std::logic_error("Array overflow exception");
	
	_arr.push_back(number);
}

int Span::shortestSpan() const
{
	if (_arr.size() <= 1)
		throw std::logic_error("No span to find exception (array doesn't have 2 elements)");
	
	std::vector<int> tmpVector = _arr;
	std::vector<int>::const_iterator it = std::min_element(tmpVector.begin(), tmpVector.end());
	int min1 = *it;
	tmpVector.erase(it);
	return *std::min_element(tmpVector.begin(), tmpVector.end()) - min1;
}

int Span::longestSpan() const
{
	if (_arr.size() <= 1)
		throw std::logic_error("No span to find exception (array doesn't have 2 elements)");
	
	return *std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end());
}
