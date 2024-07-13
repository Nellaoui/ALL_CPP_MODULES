#include "Zombie.hpp"
#include "zombieHorde.hpp"

void	call()
{
		Zombie *zombies = zombieHorde(17, "Donpha");
	for (int i = 0; i < 17; i++)
	{
		zombies[i].announce();
	}
		delete[] zombies;

}

int main(int ac, char **av)
{
	call();
}
