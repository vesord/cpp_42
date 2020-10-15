/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:10:04 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 13:10:10 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string& Weapon::getType() const
{
	return ( this->_type );
}

void	Weapon::setType(std::string type)
{
//	std::cout << "prev: " << this->_type << std::endl;
	this->_type = type;
//	std::cout << " now: " << this->_type << std::endl;
}