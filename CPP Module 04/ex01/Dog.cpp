#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog : Default Constructor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog : Copy Constructor" << std::endl;
	this->brain = new Brain(*src.brain);
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog : Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
std::string	Dog::getType() const
{
	return (this->type);
}

Dog &Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog : Copy Assignement Called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Wof wof 🐶" << std::endl;
}
/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
