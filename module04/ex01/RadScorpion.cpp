/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:17:06 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 15:17:10 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion" )
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & radScorpion) :
	Enemy(radScorpion.getHP(), radScorpion.getType() )
{
	*this = radScorpion;
	return ;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &radScorpion)
{
	this->_hitPoints = radScorpion.getHP();
	this->_type = radScorpion.getType();
	return *this;
}
