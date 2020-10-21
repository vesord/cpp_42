/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 09:55:09 by matrus            #+#    #+#             */
/*   Updated: 2020/10/20 09:55:14 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string const & name, std::string const & title) :
												_name( name ), _title( title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!"
				<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	std::cout << "CLONE OF " << this->_name << ", " << this->_title
				<< ", is born!" << std::endl;
	*this = sorcerer;
	return ;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &sorcerer)
{
	this->_title = sorcerer.getTitle();
	this->_name = sorcerer.getName();
	return *this;
}

Sorcerer::Sorcerer() : _name( "default" ), _title( "default" )
{
	return;
}

std::string const & Sorcerer::getName() const
{
	return this->_name;
}

std::string const & Sorcerer::getTitle() const
{
	return this->_title;
}

void	Sorcerer::polymorph(const Victim & victim) const
{
	victim.getPolymorphed();
	return ;
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & sorcerer )
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
				<< ", and I like ponies!" << std::endl;
	return o;
}