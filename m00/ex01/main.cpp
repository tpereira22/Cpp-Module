/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:13:11 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 16:13:15 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contacts.hpp"

int main()
{
	Phonebook   phone;
	std::string  input;

	while (1)
	{
		std::string input;

		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "\nEnter a command (ADD, SEARCH or EXIT): " << std::endl;
		std::cout << ">";
		std::getline(std::cin, input);
		if (input == "ADD")
			phone.add();
		else if (input == "SEARCH")
			phone.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid Command !" << std::endl;
		std::cout << std::endl;
	}

}
