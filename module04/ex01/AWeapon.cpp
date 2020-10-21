/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:25:33 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 13:25:37 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name( name ), _apCost(apcost ), _damage(damage )
{
	return ;
}

AWeapon::AWeapon(const AWeapon &aWeapon)
{
	*this = aWeapon;
	return ;
}

AWeapon::AWeapon()
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

std::string const & AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_apCost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}


