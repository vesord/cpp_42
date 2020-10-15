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

const int ZombieEvent::_randomNamesCount = 8;

const std::string ZombieEvent::_randomNamesStr[ZombieEvent::_randomNamesCount] =
	{
		"Chuck",
		"David",
		"Alice",
		"Tom",
		"Bob",
		"Brian",
		"BrainLover",
		"Agrhgnug"
	};

ZombieEvent::ZombieEvent()
{
	this->_type = STUPID;
	std::srand(std::time(nullptr));
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

Zombie*	ZombieEvent::randomChump() const
{
	Zombie*	zombie = new Zombie( this->_type,
			ZombieEvent::_randomNamesStr[std::rand() % ZombieEvent::_randomNamesCount]);
	zombie->announce();
	return (zombie);
}