/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:29:26 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 17:29:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"



ZombieEvent::ZombieEvent()
{
	this->_type = STUPID;
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void	ZombieEvent::setZombieType(e_zombieType type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) const
{
	Zombie*	zombie = new Zombie( this->_type, name );
	return (zombie);
}
