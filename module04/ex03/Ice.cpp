/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:09:47 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 14:09:49 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria( "ice" )
{
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice::Ice(const Ice & ice) : AMateria( "ice" )
{
	*this = ice;
	return ;
}

Ice & Ice::operator=(const Ice & ice)
{
	this->_xp = ice.getXP();
	return *this;
}

AMateria * Ice::clone() const
{
	return ( new Ice(*this) );
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}