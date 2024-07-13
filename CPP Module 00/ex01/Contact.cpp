#include "Contact.hpp"


// Default Constructor
Contact::Contact()
{
	// std::cout << "Default" << std::endl;
}

// Parm Constructor
Contact::Contact(info information)
{
	// std::cout << "Parm" << std::endl;
	this->first_name = information.FirstName;
	this->last_name = information.LastName;
	this->nick_name = information.NickName;
	this->phone_number = information.PhoneNumber;
	this->darkest_secret = information.DarkestSecret;
	this->index = information.index;
}

std::string Contact::getFirstName() const
{
	return (first_name);
}
std::string Contact::getLastName() const
{
	return (last_name);
}
std::string Contact::getNickName() const
{
	return (nick_name);
}
std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}
std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}
int Contact::getIndex() const
{
	return (index);
}

Contact::~Contact()
{
}
