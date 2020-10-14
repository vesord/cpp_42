/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:55:04 by matrus            #+#    #+#             */
/*   Updated: 2020/10/13 14:55:05 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class Contact {

public:

	Contact();
	~Contact();

	void	setContactInfo( int index );

	void	printIndex() const;
	void	printFirstName( int width ) const;
	void	printLastName( int width ) const;
	void	printNickname( int width ) const;
	void	printYourself() const;

private:

	int	_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_address;
	std::string	_email_address;
	std::string	_phone_number;
	std::string	_birthday_date;
	std::string	_favorite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;

	void		_print_field(std::string field, int width) const;

};

#endif
