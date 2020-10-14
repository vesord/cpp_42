/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:25:06 by matrus            #+#    #+#             */
/*   Updated: 2020/10/13 17:25:08 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>
#include <iomanip>

int Phonebook::_contacts_max = 8;

Phonebook::Phonebook( void )
{
	_contacts_conut = 0;
	return ;
}

Phonebook::~Phonebook( void )
{
	return ;
}

bool	Phonebook::addContact( void )
{
	if (this->_contacts_conut == Phonebook::_contacts_max)
	{
		std::cout << "Limit of contacts is exceeded. You can't rewrite old contacts.";
		std::cout << std::endl;
		return (false);
	}
	this->_list_contacts[this->_contacts_conut].setContactInfo(this->_contacts_conut);
	this->_contacts_conut += 1;
	return (true);
}

void	Phonebook::_print_row_head() const
{
	const char	col_sep = '|';
	const int	col_width = 10;

	this->_print_row_sep();
	std::cout << std::setfill(' ');
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	std::cout << "Index";
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	std::cout << "First name";
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	std::cout << "Last name";
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	std::cout << "Nickname";
	std::cout << col_sep << std::endl;
	this->_print_row_sep();
}

void	Phonebook::_print_row_sep() const
{
	const char	row_sep = '-';

	std::cout << std::setfill(row_sep) << std::setw(4 * 10 + 5) << row_sep << std::endl;
}

void	Phonebook::_print_short_info(int index) const
{
	const char	col_sep = '|';
	const int	col_width = 10;

	std::cout << std::setfill(' ');
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	this->_list_contacts[index].printIndex();
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	this->_list_contacts[index].printFirstName(col_width);
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	this->_list_contacts[index].printLastName(col_width);
	std::cout << col_sep << std::setiosflags(std::ios::right) << std::setw(col_width);
	this->_list_contacts[index].printNickname(col_width);
	std::cout << col_sep << std::endl;
}

void	Phonebook::_print_table() const
{
	this->_print_row_head();
	for (int i = 0; i < this->_contacts_conut; ++i)
	{
		this->_print_short_info(i);
		this->_print_row_sep();
	}
}

void	Phonebook::search() const
{
	std::cout << "Contact list: " << std::endl;
	if (this->_contacts_conut == 0)
	{
		std::cout << "Is empty." << std::endl;
		return ;
	}

	this->_print_table();

	int index = 0;
	std::string str;
	while (index < 1 || index > this->_contacts_conut)
	{
		std::cout << "Input index to describe: ";
		std::getline(std::cin, str);
		index = (int)std::atoi(str.c_str());
		if (str.length() > 1 || (index < 1 || index > this->_contacts_conut))
			std::cout << "Index invalid" << std::endl;
	}
	this->_list_contacts[index - 1].printYourself();
}
