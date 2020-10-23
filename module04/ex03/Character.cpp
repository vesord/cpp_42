/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:43:58 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 16:44:01 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if ( this->_inventory[i] != nullptr )
			delete this->_inventory[i];
}

Character::Character(const Character & character)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = nullptr;
	*this = character;
	return ;
}

Character & Character::operator=(const Character & character)
{
	if (this == &character)
		return *this;

	this->_name = character.getName();
	for (int i = 0; i < 4; i++)
	{
		if ( this->_inventory[i] != nullptr )
			delete this->_inventory[i];
		if ( character._inventory[i] != nullptr )
			this->_inventory[i] = character._inventory[i]->clone();
		else
			this->_inventory[i] = nullptr;
	}
	return *this;
}

Character::Character(std::string const & name) : _name( name )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}

const std::string & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria * m)
{
	if (m == nullptr)
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;

	this->_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
		return ;

	if (this->_inventory[idx] == nullptr)
		return ;

	this->_inventory[idx]->use(target);
}

