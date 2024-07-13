#include "HumanA.hpp"

// HumanA::HumanA(/* args */)
// {
// }

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon) //: name(name), weapon(weapon)
{
	this->name = name;
	// this->weapon = weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{

	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
