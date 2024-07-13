#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}
Span::Span(unsigned int N) : _numbers(), _maxSize(N)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_maxSize = rhs._maxSize;
		this->_numbers = rhs._numbers;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Span const & i )
// {
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int Value)
{
	if (this->_numbers.size() < _maxSize)
	{
		this->_numbers.push_back(Value);
	}
	else
	{
		throw std::out_of_range("Already N elements stored");
	}
}

int	Span::shortestSpan()
{
	std::vector<int> sorted;
	sorted = this->_numbers;
	if (sorted.size() < 2)
		throw std::out_of_range("Not Enough number");
	int shortest = INT_MAX;
	std::sort(sorted.begin(), sorted.end());
	for (size_t i = 0; i < sorted.size(); i++)
	{
		int res = sorted[i] - sorted[i - 1];
		if (res < shortest)
			shortest = res;
	}
	return shortest;
}
int Span::longestSpan()
{
	if (this->_numbers.size() < 2)
		throw std::out_of_range("Not Enough number");
	int min = *(std::min_element(this->_numbers.begin(), this->_numbers.end()));
	int max = *(std::max_element(this->_numbers.begin(), this->_numbers.end()));

	return (max - min);
}

void Span::addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
{
	size_t remaining = _maxSize - _numbers.size();
	std::vector<int> temp;
	temp.insert(temp.end(), last, first);
	size_t numToAdd = temp.size();
	if (numToAdd > remaining)
		throw std::out_of_range("Already N.. elements stored");
	this->_numbers.insert(_numbers.end(), first, last);
}

void Span::printNumbers() const
{
	std::cout << "Numbers in span: ";
	for(std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
