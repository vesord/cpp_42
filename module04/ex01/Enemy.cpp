/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:17:04 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 14:17:09 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hitPoints( hp ), _type( type )
{
	return ;
}

Enemy::Enemy()
{
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
	return ;
}

Enemy & Enemy::operator=(Enemy const & enemy)
{
	if (this == &enemy)
		return *this;

	this->_hitPoints = enemy.getHP();
	this->_type = enemy.getType();
	return *this;
}

void	Enemy::takeDamage( int dmg )
{
	if (dmg >= 0)
		this->_hitPoints -= dmg;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

std::string const &	Enemy::getType() const
{
	return this->_type;
}

int	Enemy::getHP() const
{
	return this->_hitPoints;
}

