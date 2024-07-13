#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog : Default Constructor" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog : Copy Constructor";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog : Destructor";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
std::string	Dog::getType() const
{
	return (this->type);
}

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		std::cout << "Dog : Copy Assignement Called";
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
