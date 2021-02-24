#include "Array.hpp"

int main()
{
	try
	{
		Array<int> intArr(4);
		Array<std::string> strArr(4);
		Array<char> charArr(4);
		Array<double> doubleArr(4);
		
		for (unsigned int i = 0; i < 4; i++)
		{
			intArr[i] = i * 100;
			strArr[i] = std::to_string(i * 100) + "s";
			charArr[i] = 70 + i;
			doubleArr[i] = i + 0.2;
		}
		
		for (unsigned int i = 0; i < 4; i++)
		{
			std::cout << "int: " << intArr[i] << std::endl;
			std::cout << "str: " << strArr[i] << std::endl;
			std::cout << "char: " << charArr[i] << std::endl;
			std::cout << "double: " << doubleArr[i] << std::endl;
			std::cout << std::endl;
		}

		
		std::cout << "check copy and overloaded" << std::endl;
		
		Array<std::string> copiedArr(strArr);
		for (unsigned int i = 0; i < copiedArr.size(); i++)
			std::cout << copiedArr[i] << std::endl;
		std::cout << std::endl;
		
		Array<double> newDoubleArr(2);
		newDoubleArr[0] = 555.555;
		newDoubleArr[1] = 666.666;
		doubleArr = newDoubleArr;
		
		for (unsigned int i = 0; i < doubleArr.size(); i++)
			std::cout << doubleArr[i] << std::endl;
		
		std::cout << std::endl;
		
		intArr = Array<int>(10);
		intArr[3] = 1024;
		std::cout << intArr[3] << std::endl;
		intArr[4] = 1024; //exception
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
