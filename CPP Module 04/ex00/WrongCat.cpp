#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << "WrongCat : Default Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat : Copy Constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::string	WrongCat::getType() const
{
	return (this->type);
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat : Copy Assignement Called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow 🐱" << std::endl;
}


// std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
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
