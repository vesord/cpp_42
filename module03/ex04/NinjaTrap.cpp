/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 17:42:01 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 17:42:05 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << "NINJA default constructor called" << std::endl;

	this->_name = "ninjaTrap_default";
	this->_hitPoints = 60;
	this->_hitPointsMax = 60;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_voiceColor = COLOR_NINJA;
	this->_modelType = "NINJA-TP";

	std::cout << this->_voiceColor << "In the shadow!" << COLOR_RESET << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_modelType << " NINJA destructor called" << std::endl;
	std::cout << this->_voiceColor << "Robot down!" << COLOR_RESET << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap)
{
	std::cout << this->_modelType << " NINJA copy constructor called" << std::endl;
	std::cout << this->_voiceColor << "Cloning technique!" << COLOR_RESET << std::endl;
	*this = ninjaTrap;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap()
{
	std::cout << "NINJA str constructor called" << std::endl;

	this->_name = name;
	this->_hitPoints = 60;
	this->_hitPointsMax = 60;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_voiceColor = COLOR_NINJA;
	this->_modelType = "NINJA-TP";

	std::cout << this->_voiceColor << "Ready to scout!" << COLOR_RESET << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{
	if (this == &ninjaTrap)
		return *this;

	this->_name = ninjaTrap._name;
	this->_hitPoints = ninjaTrap._hitPoints;
	this->_hitPointsMax = ninjaTrap._hitPointsMax;
	this->_energyPoints = ninjaTrap._energyPoints;
	this->_energyPointsMax = ninjaTrap._energyPointsMax;
	this->_level = ninjaTrap._level;
	this->_meleeAttackDamage = ninjaTrap._meleeAttackDamage;
	this->_rangedAttackDamage = ninjaTrap._rangedAttackDamage;
	this->_armorDamageReduction = ninjaTrap._armorDamageReduction;
	this->_voiceColor = ninjaTrap._voiceColor;
	this->_modelType = ninjaTrap._modelType;

	return *this;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clapTrap)
{
	std::cout << this->_voiceColor << "Stupid rusty piece of iron. Go program yourself!" <<
				COLOR_RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &fragTrap)
{
	std::cout << this->_voiceColor << "Target selected! Coming..." <<
																   COLOR_RESET << std::endl;
	fragTrap.takeDamage(this->_meleeAttackDamage);
	std::cout << this->_voiceColor << "Mission complete!" <<
								   COLOR_RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scavTrap)
{
	std::cout << this->_voiceColor << this->_voiceColor << "Gimme challenge soup can." <<
														COLOR_RESET << std::endl;
	scavTrap.challengeNewcomer();
	std::cout << this->_voiceColor << this->_voiceColor << "To hard for me dum!" <<
														COLOR_RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap)
{
	std::cout << this->_voiceColor << "Ninja healing protocol accepted. Connecting." <<
								   COLOR_RESET << std::endl;
	this->beRepaired(this->_meleeAttackDamage);
	ninjaTrap.beRepaired(this->_meleeAttackDamage);
	std::cout << this->_voiceColor << "Moving forward." <<
								   COLOR_RESET << std::endl;
}

void	NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << this->_modelType + " NIIINJA " << this->_name << " attacks " << target <<
			  " at range, causing " << this->_rangedAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << this->_voiceColor << "WOW! I hit 'em!" << COLOR_RESET << std::endl;
}

void	NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << this->_modelType + " NIIINJA " << this->_name << " attacks " << target <<
			  " in melee, causing " << this->_meleeAttackDamage <<
			  " points of damage!" << std::endl;

	std::cout << this->_voiceColor << "Take that!" << COLOR_RESET << std::endl;
}
