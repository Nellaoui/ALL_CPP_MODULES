#include "Replace.hpp"


void	replace(std::string &fileName, std::string &s1, std::string &s2)
{
    std::ifstream input(fileName);
	if (!input.is_open())
	{
		std::cout << "Somthing went wrong with the input file : " << fileName << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream output(fileName + ".replace");
	if (!output.is_open())
	{
		std::cout << "Somthing went wrong with the output file : " << fileName + ".replace" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string line;
	while (std::getline(input, line))
	{
		size_t i = line.find(s1);
		while (i != std::string::npos)
		{
			line = line.substr(0, i) + s2 + line.substr(i + s1.length());
			i = line.find(s1, i + s2.length());
		}
	output << line << std::endl;
	}
	input.close();
	output.close();
}
