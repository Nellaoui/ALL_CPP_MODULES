#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:

		Array();
		Array(unsigned int );
		Array( const Array<T> & );
		~Array();

		Array<T> &		operator=( Array<T> const & rhs );
		T				&operator[](unsigned );
		unsigned int size();
	private:
		T				*_array;
		unsigned 	_size;

};
template <typename T>
Array<T>::Array()  : _array(new(T)) , _size(0){}

template <typename T>
Array<T>::Array(unsigned int n)  : _size(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array( const Array<T> & src) : _size(src._size)
{
	// std::cout << "copy construct called" << std::endl;
	this->_array = new T[this->_size];
	for (size_t i = 0; i < _size; i++)
		this->_array[i] = src._array[i];

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template < typename T >
Array<T>::~Array()
{
	if (this->_array != NULL)
	{
		delete[] this->_array;
		this->_array = NULL;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
T&				Array<T>::operator[](unsigned index)
{
	// std::cout << "operator [] called" << std::endl;
	if (index >= this->_size)
	{
		throw std::out_of_range("index out of bounds");
	}
	else
		return (this->_array[index]);

}
template <typename T>
Array<T> &				Array<T>::operator=( Array<T> const &  rhs)
{
	// std::cout << "operator = called" << std::endl;
	if ( this != &rhs )
	{
		delete[] this->_array;
		this->_array = new T[rhs._size];
		this->_size = rhs._size;
		for (size_t i = 0; i < this->_size; i++)
		{
			this->_array[i] = rhs._array[i];
		}
	}
	return *this;
}

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & __unused i )
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

template <typename T>
unsigned int Array<T>::size()
{
	return this->_size;
}

// std::ostream &			operator<<( std::ostream & o, Array const & i );

#endif /* *********************************************************** ARRAY_H */
