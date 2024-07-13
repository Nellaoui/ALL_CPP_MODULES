#ifndef AAANIMAL_HPP
# define AAANIMAL_HPP

# include <iostream>
# include <string>
#include "Brain.hpp"


class AAnimal
{

	protected :
		std::string type;
	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		~AAnimal();

		virtual void makeSound() const = 0; // no implementation in the base class.
		virtual std::string getType() const;
		AAnimal &		operator=( AAnimal const & rhs );
	private:

};

#endif /* ********************************************************** AANIMAL_H */
