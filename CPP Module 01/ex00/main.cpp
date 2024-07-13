#include "Zombie.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		Zombie Zom("Foo");
		Zombie* Zom2 = newZombie("Foo2");
		Zom.announce();
		Zom2->announce();
		randomChump("Random Zombie");
		delete(Zom2);
	}
}
