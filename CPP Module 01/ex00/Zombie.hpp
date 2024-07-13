#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(/* args */);
	Zombie(std::string zombieName);
	void announce( void );
	// std::string getName() const;
	~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
