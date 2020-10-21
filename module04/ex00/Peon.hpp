/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:59:05 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 09:59:07 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <string>

class Peon : public Victim {

public:

	~Peon();
	Peon( Peon const & peon );
	Peon( std::string const & name );

	Peon & operator=( Peon const & peon );

	virtual void getPolymorphed() const;

private:

	Peon();

};


#endif
