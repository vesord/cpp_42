/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:11:28 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 14:11:38 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

const std::string ClapTrap::_voiceColor = COLOR_GREEN;
const std::string ClapTrap::_modelType = "CL4P-TP";

ClapTrap::ClapTrap() : _hitPoints( 1 ), _hitPointsMax( 1 ),
					   _energyPoints( 1 ), _energyPointsMax( 1 ),
					   _meleeAttackDamage( 0 ), _rangedAttackDamage( 0 ),
					   _armorDamageReduction( 0 ), _level( 1 ),
					   _name( "default_claptrap" )
{
	std::cout << ClapTrap::_modelType + " " << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << ClapTrap::_modelType + " " << "Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << ClapTrap::_modelType + " " << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap::ClapTrap(int hitPoint, int hitPointMax, int energyPoint,
				   int energyPointMax, int level, int meleeAttackDamage,
				   int ragedAttackDamage, int armorDamageReduction,
				   std::string name) :
				   _hitPoints( hitPoint ), _hitPointsMax( hitPointMax ),
				   _energyPoints( energyPoint ), _energyPointsMax( energyPointMax ),
				   _level( level ), _meleeAttackDamage( meleeAttackDamage ),
				   _rangedAttackDamage( ragedAttackDamage ),
				   _armorDamageReduction( armorDamageReduction ),
				   _name( name )
{
	std::cout << ClapTrap::_modelType + " " << "PARAM constructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &clapTrap)
{
	if (this == &clapTrap)
		return *this;

	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_hitPointsMax = clapTrap._hitPointsMax;
	this->_energyPoints = clapTrap._energyPoints;
	this->_energyPointsMax = clapTrap._energyPointsMax;
	this->_level = clapTrap._level;
	this->_meleeAttackDamage = clapTrap._meleeAttackDamage;
	this->_rangedAttackDamage = clapTrap._rangedAttackDamage;
	this->_armorDamageReduction = clapTrap._armorDamageReduction;

	return *this;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << ClapTrap::_modelType + " " << this->_name << " has taken " << amount <<
			  " damage. Armor absorbs some, so HP now: " << this->_hitPoints <<
			  std::endl;

	std::cout << ClapTrap::_voiceColor << "My robotic flesh! AAHH!" << COLOR_RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_hitPointsMax)
		this->_hitPoints = this->_hitPointsMax;
	std::cout << ClapTrap::_modelType + " " << this->_name << " has repair " << amount <<
			  " HP. HP now: " << this->_hitPoints << std::endl;

	std::cout << ClapTrap::_voiceColor << "Hit me, baby!" << COLOR_RESET << std::endl;
}
