/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:45:49 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 13:45:52 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon( "Plasma Rifle", 5, 21 )
{
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & plasmaRifle) :
	AWeapon(plasmaRifle.getName(), plasmaRifle.getAPCost(), plasmaRifle.getDamage())
{
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & plasmaRifle)
{
	if (this == &plasmaRifle)
		return *this;

	this->_name = plasmaRifle.getName();
	this->_apCost = plasmaRifle.getAPCost();
	this->_damage = plasmaRifle.getDamage();
	return *this;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}