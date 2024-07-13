/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:08:06 by nelallao          #+#    #+#             */
/*   Updated: 2023/11/28 11:53:04 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::cout << "//////////////////////////////////////////\n";
	std::cout << "///Welcome to the PhoneBook Application///\n";
	std::cout << "//////////////////////////////////////////\n";
	int numberOfContact = 0;
	while(1)
	{
		std::cout << "Enter COMMAND : ADD, SEARCH, EXIT : ";
		std::string command;
		getline(std::cin, command);
		if(std::cin.eof())
			return(EXIT_FAILURE);
		if (command == "ADD")
			numberOfContact = book.addContact(numberOfContact);
		else if (command == "SEARCH")
		{
			book.searchContact(numberOfContact);
			book.searchContactIndex(numberOfContact);
		}
		else if (command == "EXIT")
			exit(0);
	}
}
