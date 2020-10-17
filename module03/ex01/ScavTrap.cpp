/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:34:54 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 12:34:58 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const unsigned int	ScavTrap::_challengePhrasesCount = 7;
const std::string	ScavTrap::_challengePhrases[ScavTrap::_challengePhrasesCount] =
	{
		"Attend to School21 after failing all the exams during picine!",
		"Put a cup on table and don't get a TIJ!",
		"Play out loud your favorite song on mac!",
		"Seat on each workplace in campus!",
		"Pass all the exams for the 1'st try!",
		"Participate and win any hackathon!",
		"Fail cub3D evaluation 'cos you have different understanding of invalid map!"
	};
const std::string	ScavTrap::_voiceColor = COLOR_PURPLE;
const std::string	ScavTrap::_modelType = "SC4V-TP";

ScavTrap::ScavTrap() :	_hitPoints( 100 ), _hitPointsMax( 100 ),
						  _energyPoints( 50 ), _energyPointsMax( 50 ),
						  _level( 1 ), _name( "ScavTrap_default" ),
						  _meleeAttackDamage( 20 ), _rangedAttackDamage( 15 ),
						  _armorDamageReduction( 3 )
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "Recompiling my combat code!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "Robot down!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & ScavTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "Look out everybody! Things are about to get awesome!" << COLOR_RESET << std::endl;

	*this = ScavTrap;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints( 100 ), _hitPointsMax( 100 ),
									   _energyPoints( 50 ), _energyPointsMax( 50 ),
									   _level( 1 ), _name( name ),
									   _meleeAttackDamage( 20 ), _rangedAttackDamage( 15 ),
									   _armorDamageReduction( 3 )
{
	std::cout << "Str constructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "This time it'll be awesome, I promise!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & ScavTrap)
{
	if (this == &ScavTrap)
		return *this;

	this->_name = ScavTrap._name;
	this->_hitPoints = ScavTrap._hitPoints;
	this->_hitPointsMax = ScavTrap._hitPointsMax;
	this->_energyPoints = ScavTrap._energyPoints;
	this->_energyPointsMax = ScavTrap._energyPointsMax;
	this->_level = ScavTrap._level;
	this->_meleeAttackDamage = ScavTrap._meleeAttackDamage;
	this->_rangedAttackDamage = ScavTrap._rangedAttackDamage;
	this->_armorDamageReduction = ScavTrap._armorDamageReduction;

	return *this;
}

void	ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << ScavTrap::_modelType + " " << this->_name << " attacks " << target <<
			  " at range, causing " << this->_rangedAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << ScavTrap::_voiceColor << "WOW! I hit 'em!" << COLOR_RESET << std::endl;
}

void	ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << ScavTrap::_modelType + " " << this->_name << " attacks " << target <<
			  " in melee, causing " << this->_meleeAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << ScavTrap::_voiceColor << "Take that!" << COLOR_RESET << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << ScavTrap::_modelType + " " << this->_name << " has taken " << amount <<
			  " damage. Armor absorbs some, so HP now: " << this->_hitPoints <<
			  std::endl;

	std::cout << ScavTrap::_voiceColor << "My robotic flesh! AAHH!" << COLOR_RESET << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_hitPointsMax)
		this->_hitPoints = this->_hitPointsMax;
	std::cout << ScavTrap::_modelType + " " << this->_name << " has repair " << amount <<
			  " HP. HP now: " << this->_hitPoints << std::endl;

	std::cout << ScavTrap::_voiceColor << "Hit me, baby!" << COLOR_RESET << std::endl;
}

void	ScavTrap::challengeNewcomer( void )
{
		std::cout << ScavTrap::_modelType + " " << this->_name << " chooses CHALLENGE!" << std::endl;
		std::cout << ScavTrap::_voiceColor <<
				  ScavTrap::_challengePhrases[rand() % ScavTrap::_challengePhrasesCount] <<
				  COLOR_RESET << std::endl;
}