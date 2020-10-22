/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:38:42 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 16:38:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria( "cure" )
{
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure::Cure(const Cure & cure) : AMateria( "cure" )
{
	*this = cure;
	return ;
}

Cure & Cure::operator=(const Cure & cure)
{
	this->_xp = cure.getXP();
	return *this;
}

AMateria * Cure::clone() const
{
	return ( new Cure(*this) );
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}