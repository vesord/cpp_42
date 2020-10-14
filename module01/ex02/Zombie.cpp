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

const int Zombie::_typesCount = 3;

std::string Zombie::_typesStrAll[Zombie::_typesCount] =
	{
		"stupid",
		"dummy",
		"very_stupid"
	};

Zombie::Zombie()
{
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

