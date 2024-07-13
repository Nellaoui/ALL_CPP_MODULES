#include "Span.hpp"

int main()
{
	try
	{
		// TEST 1
		std::cout << " // TEST 1 \\\\ " << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// 3 6 9 11 17
	// sp.addNumber(16);


	sp.printNumbers();
	std::cout << "short span " << sp.shortestSpan() << std::endl;
	std::cout << "long span " << sp.longestSpan() << std::endl;

		// TEST 2
		std::cout << " // TEST 2 \\\\" << std::endl;
	std::vector<int> arr;
	arr.push_back(6);
	arr.push_back(3);
	arr.push_back(17);
	arr.push_back(9);
	arr.push_back(11);
	// arr.push_back(16);
	Span sp2(5);
	sp2.addNumber(arr.begin(), arr.end());
	sp2.printNumbers();
	std::cout << "short span " << sp2.shortestSpan() << std::endl;
	std::cout << "long span " << sp2.longestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
return 0;
}
