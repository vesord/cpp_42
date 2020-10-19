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

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120,
								  120, 1, 60,
								  5, 0,
								  "ninja_default", COLOR_NINJA, "NINJA-TP")
{
	std::cout << this->_modelType << " default constructor called" << std::endl;
	std::cout << this->_voiceColor << "In the shadow!" << COLOR_RESET << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_modelType << " destructor called" << std::endl;
	std::cout << this->_voiceColor << "Robot down!" << COLOR_RESET << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap)
{
	std::cout << this->_modelType << " copy constructor called" << std::endl;
	std::cout << this->_voiceColor << "Cloning technique!" << COLOR_RESET << std::endl;
	*this = ninjaTrap;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120,
												  120, 1, 60,
												  5, 0,
												  name, COLOR_NINJA, "NINJA-TP")
{
	std::cout << this->_modelType << " str constructor called" << std::endl;
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