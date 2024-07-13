#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();
		void addNumber(int Value);
		void addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last);
		int shortestSpan();
		int longestSpan();
		void printNumbers() const;

		Span &		operator=( Span const & rhs );

	private :
		std::vector<int> _numbers;
		unsigned int _maxSize;

};

// std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
