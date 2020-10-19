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

ScavTrap::ScavTrap() :	ClapTrap()
{
	std::cout << this->_modelType << " default constructor called" << std::endl;

	this->_name = "scav_default";
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 50;
	this->_energyPointsMax = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_voiceColor = COLOR_PURPLE;
	this->_modelType = "SC4V-TP";

	std::cout << this->_voiceColor << "Recompiling my combat code!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_modelType << " destructor called" << std::endl;
	std::cout << this->_voiceColor << "Robot down!" << COLOR_RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & ScavTrap)
{
	std::cout << this->_modelType << " copy constructor called" << std::endl;
	std::cout << this->_voiceColor << "Look out everybody! Things are about to get awesome!" << COLOR_RESET << std::endl;

	*this = ScavTrap;
	return ;
}

ScavTrap::ScavTrap(std::string name) :	ClapTrap()
{
	std::cout << this->_modelType << "str constructor called" << std::endl;

	this->_name = name;
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 50;
	this->_energyPointsMax = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_voiceColor = COLOR_PURPLE;
	this->_modelType = "SC4V-TP";

	std::cout << this->_voiceColor << "This time it'll be awesome, I promise!" << COLOR_RESET << std::endl;
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

void	ScavTrap::challengeNewcomer( void )
{
		std::cout << this->_modelType << this->_name << " chooses CHALLENGE!" << std::endl;
		std::cout << this->_voiceColor <<
				  ScavTrap::_challengePhrases[rand() % ScavTrap::_challengePhrasesCount] <<
				  COLOR_RESET << std::endl;
}

void	ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << this->_modelType + " " << this->_name << " attacks " << target <<
			  " at range, causing " << this->_rangedAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << this->_voiceColor << "WOW! I hit 'em!" << COLOR_RESET << std::endl;
}

void	ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << this->_modelType + " " << this->_name << " attacks " << target <<
			  " in melee, causing " << this->_meleeAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << this->_voiceColor << "Take that!" << COLOR_RESET << std::endl;
}
