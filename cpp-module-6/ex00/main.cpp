#include <iostream>
#include <cmath>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return -1;
	}
	
	try
	{
		std::cout << "char: ";
		
		char c = static_cast<char>(std::stoi(argv[1]));
		if (!isprint(c))
			throw std::logic_error("Non displayable");
		
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "int: ";
		
		int number = std::stoi(argv[1]);
		
		std::cout << number << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "float: ";
		
		float number = std::stof(argv[1]);
		
		if (isnan(number))
			std::cout << number << "f" << std::endl;
		else if (number == INFINITY)
			std::cout << "+" << number << "f" << std::endl;
		else if (number == -INFINITY)
			std::cout << number << "f" << std::endl;
		else
		{
			if (number == static_cast<float>(static_cast<int>(number)))
				std::cout << number << ".0f" << std::endl;
			else
				std::cout << number << "f" << std::endl;
		}
	}
	catch (std::invalid_argument& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "double: ";
		
		float number = std::stof(argv[1]);
		
		if (isnan(number))
			std::cout << number << std::endl;
		else if (number == INFINITY)
			std::cout << "+" << number << std::endl;
		else if (number == -INFINITY)
			std::cout << number << std::endl;
		else
		{
			if (number == static_cast<double>(static_cast<int>(number)))
				std::cout << number << ".0" << std::endl;
			else
				std::cout << number << std::endl;
		}
	}
	catch (std::invalid_argument& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
