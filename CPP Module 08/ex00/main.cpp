#include "Easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	try {
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	easyfind(vec, 3);  // Should print: The Value is Found: 3

	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	easyfind(lst, 20);  // Should print: The Value is Found: 20

	easyfind(vec, 6);  // Should throw an exception: The Value Not Found
	} catch (const std::exception& e) {
	std::cerr << e.what() << std::endl;
	}

	return 0;
}
