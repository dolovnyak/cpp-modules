#include <iostream>

template <typename T>
void print(const T& value)
{
	std::cout << value << std::endl;
}

template <typename T>
void iter(T* arr, int length, void (*f)(const T&))
{
	for (int i = 0; i < length; i++)
	{
		f(arr[i]);
	}
}

int main()
{
	int intArr[5] = {0, 3, 1, 2, 4};
	std::string strArr[3] = {"Mapyc9", "KpoT", "KAPA6ACC"};
	
	iter(intArr, 5, print);
	iter(strArr, 3, print);
}
