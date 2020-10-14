/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:09:27 by matrus            #+#    #+#             */
/*   Updated: 2020/10/13 17:09:29 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact( void )
{
	return ;
}

Contact::~Contact( void )
{
	return ;
}

void	Contact::setContactInfo( int index )
{
	this->_index = index;

	std::cout << "Adding new contact..." << std::endl;
	
	std::cout << "First name: ";
	std::getline(std::cin, this->_first_name);

	std::cout << "Last name: ";
	std::getline(std::cin, this->_last_name);

	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);

	std::cout << "Login: ";
	std::getline(std::cin, this->_login);

	std::cout << "Postal address: ";
	std::getline(std::cin, this->_postal_address);

	std::cout << "Email address: ";
	std::getline(std::cin, this->_email_address);

	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phone_number);

	std::cout << "Birthday date: ";
	std::getline(std::cin, this->_birthday_date);

	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->_favorite_meal);

	std::cout << "Underwear color: ";
	std::getline(std::cin, this->_underwear_color);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);

	std::cout << "Adding complete!" << std::endl;

}

void	Contact::_print_field(std::string field, int width) const
{
	if (field.length() <= (unsigned long)width)
	{
		std::cout << field;
		return;
	}

	std::string to_print;
	to_print = field.substr(0, width);
	to_print[width - 1] = '.';
	std::cout << to_print;
}

void	Contact::printIndex() const
{
	std::cout << this->_index + 1;
}

void	Contact::printFirstName(int width) const
{
	this->_print_field(this->_first_name, width);
}

void	Contact::printLastName(int width) const
{
	this->_print_field(this->_last_name, width);
}

void	Contact::printNickname(int width) const
{
	this->_print_field(this->_nickname, width);
}

void	Contact::printYourself() const
{
	std::cout << "First name:      " << this->_first_name << std::endl;
	std::cout << "Last name:       " << this->_last_name << std::endl;
	std::cout << "Nickname:        " << this->_nickname << std::endl;
	std::cout << "Login:           " << this->_login << std::endl;
	std::cout << "Postal address:  " << this->_postal_address << std::endl;
	std::cout << "Email address:   " << this->_email_address << std::endl;
	std::cout << "Phone number:    " << this->_phone_number << std::endl;
	std::cout << "Birthday date:   " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal:   " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret:  " << this->_darkest_secret << std::endl;
}
