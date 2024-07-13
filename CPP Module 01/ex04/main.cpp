#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	fileName = av[1];
		std::string	s1 = av[2];
		std::string	s2 = av[3];
		replace(fileName, s1, s2);
	}

}
