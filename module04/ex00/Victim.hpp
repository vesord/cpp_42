/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:28:18 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 09:28:19 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim {

public:

	Victim( std::string const & name);
	~Victim();
	Victim( Victim const & victim );

	Victim & operator=( Victim const & victim );

	std::string const & getName( void ) const;

	virtual void getPolymorphed() const;

private:

	Victim();

	std::string _name;
};

std::ostream & operator<<( std::ostream & o, Victim const & victim );


#endif
