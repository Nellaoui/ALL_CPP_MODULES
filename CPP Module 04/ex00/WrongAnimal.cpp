#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongWrongAnimal : Default Constructor" << std::endl;
	type = "L3yoni";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal : Copy Constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongWrongAnimal : Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal : Copy Assignement Called"<< std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
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
