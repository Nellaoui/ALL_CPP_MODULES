#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string zombieName)
{
	this->name = zombieName;
}

Zombie::~ Zombie()
{
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
