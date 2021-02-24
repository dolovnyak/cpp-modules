#include <iostream>
#include <fstream>
#include <sstream>

std::string ReplaceAllOccurrences(std::string str, const std::string& from, const std::string& to)
{
	size_t start_pos = 0;
	while((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return str;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong arguments number" << std::endl;
		return -1;
	}
	
	std::ifstream inFile;
	inFile.open(argv[1]);
	
	if (!inFile.is_open())
	{
		std::cout << "input file name doesn't correct" << std::endl;
		return -1;
	}
	
	std::stringstream stringStream;
	stringStream << inFile.rdbuf();
	std::string inFileData = stringStream.str();
	
	std::string outFileData = ReplaceAllOccurrences(inFileData, std::string(argv[2]), std::string(argv[3]));
	
	std::ofstream outFile (std::string(argv[1]) + ".replace");
	outFile << outFileData << std::endl;
	outFile.close();
	
	std::cout << argv[1] << ".replace completely created with replacement occurrences" << std::endl;
}