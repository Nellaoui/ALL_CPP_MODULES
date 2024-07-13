#include <iostream>
#include <string>

int main()
{
	//• A string variable initialized to "HI THIS IS BRAIN".
	std::string str = "HI THIS IS BRAIN";
	// • stringPTR: A pointer to the string.
	std::string *srtingPTR = &str;
	// • stringREF: A reference to the string.
	std::string &stringREF = str;
	// • The memory address of the string variable.
	std::cout << "The memory address of the string variable : " << &str << std::endl;
	// • The memory address held by stringPTR.
	std::cout << "The memory address held by stringPTR : " << srtingPTR << std::endl;
	// • The memory address held by stringREF.
	std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
	// • The value of the string variable.
	std::cout << "The value of the string variable : " << str << std::endl;
	// • The value pointed to by stringPTR.
	std::cout << "The value pointed to by stringPTR : " << *srtingPTR << std::endl;
	// • The value pointed to by stringREF.
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;

	return 0;
}
