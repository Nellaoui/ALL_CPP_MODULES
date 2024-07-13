
#ifndef PhoneBook_HPP
#define PhoneBook_HPP
#include "Contact.hpp"


class PhoneBook
{
private:
	Contact contacts[8];

public:
	int addContact(int numberOfContact);
	void searchContact(int numberOfContact);
	void searchContactIndex(int numberOfContact);
	// std::string reform();
	PhoneBook(/* args */);
	~PhoneBook();
};

#endif
