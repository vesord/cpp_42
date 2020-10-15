/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 10:05:44 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 10:05:45 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

const int ZombieHorde::_randomNamesCount = 8;

const std::string ZombieHorde::_randomNamesStr[ZombieHorde::_randomNamesCount] =
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

ZombieHorde::ZombieHorde( int count ) : _zombieCount(count)
{
	this->_zombies = static_cast<Zombie*>(operator new[](count * sizeof(Zombie)));
	for (int i = 0; i < this->_zombieCount; ++i)
	{
		new (this->_zombies + i) Zombie(DUMMY,
				ZombieHorde::_randomNamesStr[std::rand() % ZombieHorde::_randomNamesCount]);
	}
	return ;
}

ZombieHorde::~ZombieHorde()
{
	operator delete[] (this->_zombies);
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_zombieCount; ++i)
		this->_zombies[i].announce();
}
