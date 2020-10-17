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
//const std::string	ScavTrap::_voiceColor = COLOR_PURPLE;
//const std::string	ScavTrap::_modelType = "SC4V-TP";

ScavTrap::ScavTrap() :	ClapTrap( 100, 100, 100, 100,
									1, 20, 10,
									5, "ScavTrap_default",
									COLOR_PURPLE, "SC4V-TP")
{
	std::cout << ScavTrap::_modelType + " " << "default constructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "Recompiling my combat code!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << ScavTrap::_modelType + " " << "destructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "Robot down!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & ScavTrap)
{
	std::cout << ScavTrap::_modelType + " " << "copy constructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "Look out everybody! Things are about to get awesome!" << COLOR_RESET << std::endl;

	*this = ScavTrap;
	return ;
}

ScavTrap::ScavTrap(std::string name) :	ClapTrap( 100, 100, 100, 100,
													1, 20, 10,
													5, name, COLOR_PURPLE, "SC4V-TP" )
{
	std::cout << ScavTrap::_modelType + " " << "str constructor called" << std::endl;
	std::cout << ScavTrap::_voiceColor << "This time it'll be awesome, I promise!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scavTrap)
{
	if (this == &scavTrap)
		return *this;

	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_hitPointsMax = scavTrap._hitPointsMax;
	this->_energyPoints = scavTrap._energyPoints;
	this->_energyPointsMax = scavTrap._energyPointsMax;
	this->_level = scavTrap._level;
	this->_meleeAttackDamage = scavTrap._meleeAttackDamage;
	this->_rangedAttackDamage = scavTrap._rangedAttackDamage;
	this->_armorDamageReduction = scavTrap._armorDamageReduction;
	this->_voiceColor = scavTrap._voiceColor;
	this->_modelType = scavTrap._modelType;

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

void	ScavTrap::challengeNewcomer( void )
{
		std::cout << ScavTrap::_modelType + " " << this->_name << " chooses CHALLENGE!" << std::endl;
		std::cout << ScavTrap::_voiceColor <<
				  ScavTrap::_challengePhrases[rand() % ScavTrap::_challengePhrasesCount] <<
				  COLOR_RESET << std::endl;
}