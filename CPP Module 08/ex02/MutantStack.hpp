#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:

		MutantStack() {};
		MutantStack( const MutantStack<T>  & src ) : std::stack<T, Container>(src)	{};
		~MutantStack() {}

		MutantStack<T> &		operator=( const MutantStack<T> & rhs )
		{
			std::stack<T, Container>::operator = (rhs);
			return *this;
		}

	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	private:

};

// std::ostream &			operator<<( std::ostream & o, MutantStack const & i );

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
#endif /* ***************************************************** MUTANTSTACK_H */
