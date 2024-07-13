#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );
		std::string getType() const;

		void	makeSound() const;
	private:

};


#endif /* ************************************************************* WrongCat_H */
