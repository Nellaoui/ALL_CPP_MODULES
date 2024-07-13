#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	protected :
		std::string type;
	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		void makeSound() const; // no implementation in the base class.
		std::string getType() const;
		WrongAnimal &		operator=( WrongAnimal const & rhs );
	private:

};

// std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ********************************************************** WrongAnimal_H */
