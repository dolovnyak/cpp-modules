#pragma once

#include <iostream>

template <typename T>
class Array
{
public:
	Array() : _array(nullptr), _size(0)
	{
	}
	
	Array(unsigned int n) : _array(new T[n]), _size(n)
	{
	}
	
	Array(const Array<T>& array)
	{
		_array = new T[array.size()];
		_size = array.size();
		
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = array._array[i];
	}
	
	Array<T>& operator=(const Array<T>& array)
	{
		if (this == &array)
			return *this;
	
		deleteCurrentArray();
		
		_array = new T[array.size()];
		_size = array.size();
		
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = array._array[i];
		
		return *this;
	}
	
	~Array()
	{
		deleteCurrentArray();
	}
	
	unsigned int size() const
	{
		return _size;
	}
	
	T& operator[](unsigned int i)
	{
		if (i >= _size)
			throw Array::OutOfRangeException();
		
		return _array[i];
	}
	
	class OutOfRangeException : public std::exception
	{
		const char* what() const throw()
		{
			return "Out of range exception";
		}
	};

private:
	T* _array;
	unsigned int _size;
	
	void deleteCurrentArray()
	{
		if (_array != nullptr)
			delete[] _array;
	}
};

