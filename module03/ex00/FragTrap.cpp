/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 07:53:22 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 07:53:24 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

const unsigned int	FragTrap::_vaulthunterPhrasesCount = 7;
const std::string	FragTrap::_vaulthunterPhrases[FragTrap::_vaulthunterPhrasesCount] =
	{
		"Lemme at 'em! Lemme at 'em!",
		"Look at me! I'm dancing! I'm dancing!",
		"Wubwubwub. Dubstep dubstep. Wubwubwubwub DROP! Dubstep!",
		"Here I come to save the day!",
		"Have no fear, mini-trap is here!",
		"Just point me in the right direction!",
		"Ooh yeah, watch me! Watch me go!"
	};
const std::string	FragTrap::_voiceColor = COLOR_YELLOW;

FragTrap::FragTrap() :	_hitPoints( 100 ), _hitPointsMax( 100 ),
						_energyPoints( 100 ), _energyPointsMax( 100 ),
						_level( 1 ), _name( "Claptrap_default" ),
						_meleeAttackDamage( 20 ), _rangedAttackDamage( 10 ),
						_armorDamageReduction( 5 )
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << FragTrap::_voiceColor << "Recompiling my combat code!" << COLOR_RESET << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << FragTrap::_voiceColor << "Robot down!" << COLOR_RESET << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & fragTrap) : _name( fragTrap._name )
{
	std::cout << "Copy constructor called" << std::endl;
	std::cout << FragTrap::_voiceColor << "Look out everybody! Things are about to get awesome!" << COLOR_RESET << std::endl;

	*this = fragTrap;
	return ;
}

FragTrap::FragTrap(std::string name) : _hitPoints( 100 ), _hitPointsMax( 100 ),
									   _energyPoints( 100 ), _energyPointsMax( 100 ),
									   _level( 1 ), _name( name ),
									   _meleeAttackDamage( 20 ), _rangedAttackDamage( 10 ),
									   _armorDamageReduction( 5 )
{
	std::cout << "Str constructor called" << std::endl;
	std::cout << FragTrap::_voiceColor << "This time it'll be awesome, I promise!" << COLOR_RESET << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & fragTrap)
{
	if (this == &fragTrap)
		return *this;

	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_hitPointsMax = fragTrap._hitPointsMax;
	this->_energyPoints = fragTrap._energyPoints;
	this->_energyPointsMax = fragTrap._energyPointsMax;
	this->_level = fragTrap._level;
	this->_meleeAttackDamage = fragTrap._meleeAttackDamage;
	this->_rangedAttackDamage = fragTrap._rangedAttackDamage;
	this->_armorDamageReduction = fragTrap._armorDamageReduction;

	return *this;
}

void	FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
			" at range, causing " << this->_rangedAttackDamage <<
			" points of damage!" << std::endl;

	std::cout << FragTrap::_voiceColor << "WOW! I hit 'em!" << COLOR_RESET << std::endl;
}

void	FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
			  " in melee, causing " << this->_meleeAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << FragTrap::_voiceColor << "Take that!" << COLOR_RESET << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - this->_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "FR4G-TP " << this->_name << " has taken " << amount <<
				" damage. Armor absorbs some, so HP now: " << this->_hitPoints <<
				std::endl;

	std::cout << FragTrap::_voiceColor << "My robotic flesh! AAHH!" << COLOR_RESET << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_hitPointsMax)
		this->_hitPoints = this->_hitPointsMax;
	std::cout << "FR4G-TP " << this->_name << " has repair " << amount <<
				" HP. HP now: " << this->_hitPoints << std::endl;

	std::cout << FragTrap::_voiceColor << "Hit me, baby!" << COLOR_RESET << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout << "FR4G-TP " << this->_name << " uses ULTIMATE on " << target
				  << std::endl;
		std::cout << FragTrap::_voiceColor <<
			FragTrap::_vaulthunterPhrases[rand() % FragTrap::_vaulthunterPhrasesCount] <<
			COLOR_RESET << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " is run out of energy." << std::endl;
		std::cout << FragTrap::_voiceColor << "I need more power!" << COLOR_RESET << std::endl;
	}
}