#include "Array.hpp"

int main()
{
	try
	{
		unsigned int i = 6;
		Array<std::string> str(i);

		for (size_t i = 0; i < str.size(); i++)
		{
			std::string name = "Noaman";
			str[i] = name;
		}
		for (size_t i = 0; i < str.size(); i++)
		{
			std::cout << str[i] << std::endl;
		}
		std::cout << str[200] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}
