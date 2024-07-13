#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "HumanA.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
	/* data */
public:
	HumanB(/* args */);
	HumanB(std::string);
	~HumanB();
	void setWeapon(Weapon *newWeapon);
	void attack() const;
};

#endif
