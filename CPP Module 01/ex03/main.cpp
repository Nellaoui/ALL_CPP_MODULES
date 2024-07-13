#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

// int main()
// {
// 	// Example of using the Weapon class
// 	Weapon sword("excalibur");
// 	Weapon axe("Leviathan");
// 	std::cout << "Sword type: " << sword.getType() << std::endl;
// 	std::cout << "Axe type: " << axe.getType() << std::endl;
// 	sword.setType("Ingrid");
// 	axe.setType("Black Cleaver");
// 	std::cout << "New Sword type: " << sword.getType() << std::endl;
// 	std::cout << "New Axe type: " << axe.getType() << std::endl;
// 	// Example of using HumanA and HumanB classes
// 	HumanA john("John", sword);
// 	HumanB jane("Jane");
// 	john.attack();
// 	jane.attack();
// 	return 0;
// }
