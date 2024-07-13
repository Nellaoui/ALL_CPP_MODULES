#include "Harl.hpp"


void	Harl::complain(std::string level)
{
	std::string chat[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	pointerToMemberFunction function[4];

	function[0] = &Harl::debug;
	function[1] = &Harl::info;
	function[2] = &Harl::warning;
	function[3] = &Harl::error;
	int i = 0;
	while (i < 4)
	{
		if (chat[i] == level)
			(this->*function[i])();
	i++;
	}
}
