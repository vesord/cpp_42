/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:52:23 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 16:52:24 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


/*
 * This string affay has a connection with
 * enum e_zombieType. Please when changing array,
 * make sure you're changing enum e_zombieType.
 */

const int Zombie::_typesCount = 3;

const std::string Zombie::_typesStrAll[Zombie::_typesCount] =
	{
		"stupid",
		"dummy",
		"very_stupid"
	};

Zombie::Zombie( e_zombieType type, std::string name ) : _type(type), _name(name)
{
	this->_hp = 150;
	this->_brain_value = 300;
	return ;
}

Zombie::~Zombie()
{
	return;
}

void	Zombie::announce()
{
	std::cout << Zombie::_typesStrAll[this->_type] << " " << this->_name <<
									" Braaaaaiiiinsssssssss....." << std::endl;
}

