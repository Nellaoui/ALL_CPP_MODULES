#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	int i = 0;
	while(i < 100)
	{
		ideas[i] = "IDEA";
		i++;
	}
}

Brain::Brain( const Brain & src )
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = src.ideas[i];
	}

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];

		}

	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Brain const & i )
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
