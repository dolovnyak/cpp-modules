#include "Data.hpp"

//void* serialize(void)
//{
//	char* rawBytes = new char[20];
//
//	rawBytes[0] = 'a';
//	rawBytes[1] = 'a';
//	rawBytes[2] = 'a';
//	rawBytes[3] = 'a';
//	rawBytes[4] = 'a';
//	rawBytes[5] = 'a';
//	rawBytes[6] = 'a';
//	rawBytes[7] = 'a';
//
//	*reinterpret_cast<int*>(&(rawBytes[8])) = 1337;
//
//	rawBytes[12] = 'b';
//	rawBytes[13] = 'b';
//	rawBytes[14] = 'b';
//	rawBytes[15] = 'b';
//	rawBytes[16] = 'b';
//	rawBytes[17] = 'b';
//	rawBytes[18] = 'b';
//	rawBytes[19] = 'b';
//
//	return static_cast<void*>(rawBytes);
//}

void* serialize(void)
{
	std::string alphabet = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";

	char* rawBytes = new char[20];

	for (int i = 0; i < 8; i++)
		rawBytes[i] = alphabet[std::rand() % alphabet.length()];

	*reinterpret_cast<int*>(&(rawBytes[8])) = rand();

	for (int i = 12; i < 20; i++)
		rawBytes[i] = alphabet[std::rand() % alphabet.length()];

	return static_cast<void*>(rawBytes);
}

Data* deserialize(void* raw)
{
	Data* data = new Data;
	
	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(&static_cast<char*>(raw)[8]);
	data->s2 = std::string(&static_cast<char*>(raw)[12], 8);
	
	return data;
}

int main()
{
	srand(time(NULL));
	
	void* rawData = serialize();
	Data* data = deserialize(rawData);
	
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	
	delete[] static_cast<char*>(rawData);
	delete data;
	
	return 0;
}