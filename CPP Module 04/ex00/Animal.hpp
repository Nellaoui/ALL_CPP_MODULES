#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	protected :
		std::string type;
	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		virtual void makeSound() const; // no implementation in the base class.
		virtual std::string getType() const;
		Animal &		operator=( Animal const & rhs );
	private:

};

// std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
