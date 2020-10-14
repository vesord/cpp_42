/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:25:15 by matrus            #+#    #+#             */
/*   Updated: 2020/10/13 17:25:16 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook {

public:

	Phonebook( void );
	~Phonebook( void );

	bool	addContact( void );
	void	search( void ) const;

private:

	static int	_contacts_max;

	Contact		_list_contacts[8];
	int			_contacts_conut;
	void		_print_table( void ) const;
	void		_print_row_head( void ) const;
	void		_print_row_sep( void ) const;
	void		_print_short_info( int index ) const;

};

#endif
