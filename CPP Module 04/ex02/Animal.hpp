#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
#include "Brain.hpp"


class Animal
{

	protected :
		std::string type;
	public:

		Animal();
		Animal( Animal const & src );
		~Animal();

		virtual void makeSound() const; // no implementation in the base class.
		virtual std::string getType() const;
		Animal &		operator=( Animal const & rhs );
	private:

};

#endif /* ********************************************************** ANIMAL_H */
