#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	// new is an operator used to allocate in heap , operator returns a pointer to the allocated memory.
	return new Zombie(name);
}
