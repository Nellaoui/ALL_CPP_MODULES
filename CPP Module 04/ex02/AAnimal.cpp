#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	std::cout << "AAnimal : Default Constructor" << std::endl;
	type = "L3yoni";

}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "AAnimal : Copy Constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal : Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal : Copy Assignement Called"<< std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::makeSound() const
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
