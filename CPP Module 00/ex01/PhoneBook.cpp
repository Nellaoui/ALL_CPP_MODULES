/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:58:45 by nelallao          #+#    #+#             */
/*   Updated: 2023/12/04 13:06:28 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

int PhoneBook::addContact(int numberOfContact)
{
	info information;
	static int i;
	// int		size = 8;

	while (information.FirstName.empty())
	{
		std::cout << "////////////////////////\n";
		std::cout << "//Enter the first name//\n";
		std::cout << "////////////////////////\n";
		getline(std::cin, information.FirstName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
	}
	while (information.LastName.empty())
	{
		std::cout << "//////////////////////////\n";
		std::cout << "///Enter the Last Name///\n";
		std::cout << "//////////////////////////\n";
		getline(std::cin, information.LastName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
	}
	while (information.NickName.empty())
	{
		std::cout << "//////////////////////////\n";
		std::cout << "////Enter the Nick Name///\n";
		std::cout << "//////////////////////////\n";
		getline(std::cin, information.NickName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
	}
	while (information.PhoneNumber.empty())
	{
		std::cout << "///////////////////////////\n";
		std::cout << "///Enter the Number Phone//\n";
		std::cout << "///////////////////////////\n";
		getline(std::cin, information.PhoneNumber);
		if (std::cin.eof())
			return (EXIT_FAILURE);
	}
	while (information.DarkestSecret.empty())
	{
		std::cout << "////////////////////////////\n";
		std::cout << "//Enter the Darkest Secret//\n";
		std::cout << "////////////////////////////\n";
		getline(std::cin, information.DarkestSecret);
		if (std::cin.eof())
			return (EXIT_FAILURE);
	}
	Contact contact(information);
	information.index = i;
	this->contacts[i++] = contact;
	numberOfContact++;
	if (numberOfContact > 8)
		numberOfContact = 8;
	if (i == 8)
		i = 0;
	return (numberOfContact);
}

std::string reform(std::string str, int width)
{
	if (str.length() > (size_t)width)
		return (str.substr(0, width - 1) + ".");
	else
		return str;
}

void PhoneBook::searchContact(int numberOfContact)
{
	std::cout << std::setw(10) << "Index"
			  << " | ";
	std::cout << std::setw(10) << "First Name"
			  << " | ";
	std::cout << std::setw(10) << "Last Name"
			  << " | ";
	std::cout << std::setw(10) << "Nick Name \n";

	for (size_t i = 0; i < (size_t)numberOfContact; i++)
	{
		std::cout << std::setw(10) << i + 1 << " | ";
		std::cout << std::setw(10) << reform(PhoneBook::contacts[i].getFirstName(), 10) << " | ";
		std::cout << std::setw(10) << reform(PhoneBook::contacts[i].getLastName(), 10) << " | ";
		std::cout << std::setw(10) << reform(PhoneBook::contacts[i].getNickName(), 10) << std::endl;
	}
}

void PhoneBook::searchContactIndex(int numberOfContact)
{
	numberOfContact = 9;
	std::string input;
	unsigned int index;
	//
	while (1)
	{
		std::cout << "Enter the Index of the entry to display the contact : ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		std::stringstream inputStream(input);
		if (inputStream >> index)
		{
			if (index && index < 9 && !this->contacts[index - 1].getFirstName().empty())
			{
				std::cout << "\n////////////////////////////////////////////\n";
				std::cout << "///////////Contact Information//////////////\n";
				std::cout << "////////////////////////////////////////////\n";
				std::cout << "First Name :" << this->contacts[index - 1].getFirstName() << std::endl;
				std::cout << "Last Name :" << this->contacts[index - 1].getLastName() << std::endl;
				std::cout << "Nick Name :" << this->contacts[index - 1].getNickName() << std::endl;
				std::cout << "Phone Number :" << this->contacts[index - 1].getPhoneNumber() << std::endl;
				std::cout << "Darkest Secret :" << this->contacts[index - 1].getDarkestSecret() << std::endl;
				break;
			}
			else
			{
				std::cout << "Please Enter a valid Index between [1,8]\n";
				break;
			}
		}
		else
		{
			std::cout << "Error\n";
			continue;
		}
	}
	//
}

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}
