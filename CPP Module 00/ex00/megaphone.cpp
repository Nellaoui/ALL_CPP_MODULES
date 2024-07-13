/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:38:38 by nelallao          #+#    #+#             */
/*   Updated: 2023/11/26 23:08:37 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i = 1;
	(void)ac;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (av[i])
	{
		int j = 0;
		std::string str = av[i];
		while (str[j])
		{
			std::putchar(std::toupper(str[j]));
			j++;
		}
		i++;
	}

}
