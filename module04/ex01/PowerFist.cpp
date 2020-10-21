/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:11:40 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 14:11:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon( "Power Fist", 8, 50 )
{
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist::PowerFist(PowerFist const & powerFist) :
	AWeapon(powerFist.getName(), powerFist.getAPCost(), powerFist.getDamage())
{
	*this = powerFist;
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & powerFist)
{
	if (this == &powerFist)
		return *this;

	this->_name = powerFist.getName();
	this->_apCost = powerFist.getAPCost();
	this->_damage = powerFist.getDamage();
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
