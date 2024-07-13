#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat : Default Constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
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
	delete brain;
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


// std::ostream &			operator<<( std::ostream & o, Cat const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
