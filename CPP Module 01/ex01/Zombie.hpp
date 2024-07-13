#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie(/* args */);
	Zombie(std::string zombieName);
	void announce(void);
	void setName(std::string);
	~Zombie();
};


#endif
