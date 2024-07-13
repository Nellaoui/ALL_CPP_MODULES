#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}
HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon *newWeapon)
{
	weapon = newWeapon;
}

void	HumanB::attack() const
{
	if (weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " have no weapon" << std::endl;
}
