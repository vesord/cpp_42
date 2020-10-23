/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:38:34 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 14:38:37 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy( 170, "Super Mutant" )
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & superMutant) :
							Enemy( superMutant.getHP(), superMutant.getType() )
{
	*this = superMutant;
	return ;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &superMutant)
{
	this->_hitPoints = superMutant.getHP();
	this->_type = superMutant.getType();
	return *this;
}

void	SuperMutant::takeDamage( int dmg )
{
	dmg -= 3;
	if (dmg > 0)
		this->_hitPoints -= dmg;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}