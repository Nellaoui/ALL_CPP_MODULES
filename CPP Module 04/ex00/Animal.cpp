#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal : Default Constructor" << std::endl;
	type = "L3yoni";
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal : Copy Constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal : Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal : Copy Assignement Called"<< std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Make a sound" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
