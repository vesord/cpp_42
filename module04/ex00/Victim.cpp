/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:28:16 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 09:28:19 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string const & name) : _name( name )
{
	std::cout << "Some random victim called " << this->_name << " just appeared!"
				<< std::endl;
	return ;
}

Victim::Victim() : _name( "default" )
{
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!"
				<< std::endl;
	return ;
}

Victim::Victim(Victim const & victim)
{
	*this = victim;
	return ;
}

std::string const & Victim::getName() const
{
	return this->_name;
}

Victim & Victim::operator=(Victim const & victim)
{
	this->_name = victim.getName();
	return *this;
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!"
				<< std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Victim const & victim)
{
	o << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return o;
}
