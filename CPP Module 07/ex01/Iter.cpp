#include "Iter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Iter::Iter()
{
}

Iter::Iter( const Iter & __unused src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Iter::~Iter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Iter &				Iter::operator=( Iter const & __unused rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Iter const & __unused i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
