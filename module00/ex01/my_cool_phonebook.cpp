/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_cool_phonebook.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:23:01 by matrus            #+#    #+#             */
/*   Updated: 2020/10/13 18:23:03 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main()
{
	Phonebook my_phonebook;
	std::string command;

	std::cout << "Welcome to awesome supercool phonebook 42.0!" << std::endl;
	std::cout << "Only ADD, SEARCH, EXIT commands are supported." << std::endl;
	while (true)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			my_phonebook.addContact();
		else if (command == "SEARCH")
			my_phonebook.search();
		else if (command == "EXIT")
			break ;
	}
	std::cout << "Bye! All data is permanently destroyed <3" << std::endl;
	return (0);
}