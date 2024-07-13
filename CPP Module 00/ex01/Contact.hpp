#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
typedef struct cont
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	int	index;
}info;

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	int index;
public:
	Contact();
	Contact(info information);
	~Contact();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	int getIndex() const;
};

#endif
