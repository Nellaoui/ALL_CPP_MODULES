#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string zombieName)
{
	this->name = zombieName;
}

Zombie::~Zombie()
{
	std::cout << "Destroying Zombie : " << this->name << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

// std::string Zomb getName()
// {
// 	return (name);
// }
