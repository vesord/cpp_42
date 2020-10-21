/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 09:55:27 by matrus            #+#    #+#             */
/*   Updated: 2020/10/20 09:55:29 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer {

public:

	Sorcerer( std::string const & name, std::string const & title );
	Sorcerer( Sorcerer const & sorcerer);
	~Sorcerer();

	Sorcerer & operator=( Sorcerer const & sorcerer );

	std::string const & getName( void ) const;
	std::string const & getTitle( void ) const;

	void polymorph(Victim const & victim) const;

private:

	Sorcerer();

	std::string	_name;
	std::string	_title;

};

std::ostream & operator<<( std::ostream & o, Sorcerer const & sorcerer );


#endif
