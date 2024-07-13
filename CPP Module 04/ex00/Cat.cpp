#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat : Default Constructor" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat : Copy Constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat : Destructor" << std::endl;
	// delete 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::string	Cat::getType() const
{
	return (this->type);
}

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat : Copy Assignement Called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow 🐱" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
