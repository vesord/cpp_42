/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:26:19 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 15:26:24 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(const std::string &name) : _name( name ), _ap( 40 ), _weapon( nullptr )
{
	return ;
}

Character::Character()
{
	return ;
}

Character::~Character()
{
	return ;
}

Character::Character(const Character &character)
{
	*this = character;
	return ;
}

Character & Character::operator=(const Character &character)
{
	if (this == &character)
		return *this;

	this->_weapon = character._weapon;
	this->_ap = character.getAP();
	this->_name = character.getName();
	return *this;
}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon * weapon)
{
	this->_weapon = weapon;
}

void Character::attack( Enemy * enemy )
{
	if ( this->_weapon == nullptr || enemy == nullptr )
		return ;
	if ( this->_weapon->getAPCost() > this->_ap )
		return ;

	this->_ap -= this->_weapon->getAPCost();
	enemy->takeDamage( this->_weapon->getDamage() );

	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
			<< this->_weapon->getName() << std::endl;
	this->_weapon->attack();

	if ( enemy->getHP() <= 0 )
		delete enemy;
}

std::string const & Character::getName() const
{
	return this->_name;
}

int	Character::getAP() const
{
	return this->_ap;
}

const std::string & Character::getWeaponName() const
{
	return this->_weapon->getName();
}

bool Character::isArmed() const
{
	return this->_weapon != nullptr;
}

std::ostream & operator<<( std::ostream & o, Character const & character )
{
	if ( character.isArmed() )
	{
		o << character.getName() << " has " << character.getAP()
		  << " AP and wields a "
		  << character.getWeaponName() << std::endl;
	}
	else
	{
		o << character.getName() << " has " << character.getAP()
		  << " AP and unarmed" << std::endl;
	}
	return o;
}
