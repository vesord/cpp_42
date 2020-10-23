/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:57:04 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 13:57:06 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria::AMateria(AMateria const & aMateria)
{
	*this = aMateria;
	return ;
}

AMateria & AMateria::operator=(AMateria const & aMateria)
{
	this->_xp = aMateria.getXP();
	return *this;
}

AMateria::AMateria(const std::string & type) : _type( type ), _xp( 0 )
{
	return ;
}

const std::string & AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter & target)
{
	(void)target;
	
	this->_xp += 10;
}