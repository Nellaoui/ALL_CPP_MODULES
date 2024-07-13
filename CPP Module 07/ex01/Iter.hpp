#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T, typename function>
void iter(T  *arr , int len, function func)
{
	int i = 0;
	while (i > len)
	{	
		func(arr[i]);
		i++;
	}
}

class Iter
{

	public:

		Iter();
		Iter( Iter const & __unused src );
		~Iter();

		Iter &		operator=( Iter const & __unused rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Iter const & __unused i );

#endif /* ************************************************************ ITER_H */
