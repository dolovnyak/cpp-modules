#pragma once

#include <vector>
#include <iostream>

class Span
{
public:
	Span(unsigned int capacity);
	Span(const Span& span);
	Span& operator=(const Span& span);
	~Span();
	
	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;
	
private:
	std::vector<int> _arr;
	
	Span();
};

