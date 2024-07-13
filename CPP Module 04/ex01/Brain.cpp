#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain : Default Constructor" << std::endl;
	int i = 0;
	while(i < 100)
	{
		ideas[i] = "IDEA";
		i++;
	}
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain : Copy Constructor" << std::endl;
	// Deep Copy
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
	std::cout << "Brain : Destructor" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain	&Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain : Copy Assignement Constructor" << std::endl;
	if ( this != &rhs )
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}

	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
