/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:29:47 by matrus            #+#    #+#             */
/*   Updated: 2020/10/19 10:29:52 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "SuperTrap default constructor called!" << std::endl;

	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 10;
	this->_armorDamageReduction = 5;
	this->_level = 1;
	this->_name = "default_ultimate_assault_shoebox";
	this->_modelType = "SUPER-TP";
	this->_voiceColor = COLOR_ULTIMATE;
}

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(), NinjaTrap(name), FragTrap(name)
{
	std::cout << "SuperTrap str constructor called!" << std::endl;

	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 10;
	this->_armorDamageReduction = 5;
	this->_level = 1;
	this->_name = name;
	this->_modelType = "SUPER-TP";
	this->_voiceColor = COLOR_ULTIMATE;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
	std::cout << "SuperTrap copy constructor called!" << std::endl;
	*this = superTrap;
}

SuperTrap & SuperTrap::operator=(const SuperTrap &superTrap)
{
	if (this == &superTrap)
		return *this;

	this->_name = superTrap._name;
	this->_hitPoints = superTrap._hitPoints;
	this->_hitPointsMax = superTrap._hitPointsMax;
	this->_energyPoints = superTrap._energyPoints;
	this->_energyPointsMax = superTrap._energyPointsMax;
	this->_level = superTrap._level;
	this->_meleeAttackDamage = superTrap._meleeAttackDamage;
	this->_rangedAttackDamage = superTrap._rangedAttackDamage;
	this->_armorDamageReduction = superTrap._armorDamageReduction;
	this->_voiceColor = superTrap._voiceColor;
	this->_modelType = superTrap._modelType;

	return *this;
}

void	SuperTrap::describeYourself() const
{
	std::cout << this->_voiceColor << "I'M THE ULTIMATE!" << COLOR_RESET << std::endl;
	
	std::cout << this->_name << std::endl;
	std::cout << this->_hitPoints << std::endl;
	std::cout << this->_hitPointsMax << std::endl;
	std::cout << this->_energyPoints << std::endl;
	std::cout << this->_energyPointsMax << std::endl;
	std::cout << this->_level << std::endl;
	std::cout << this->_meleeAttackDamage << std::endl;
	std::cout << this->_rangedAttackDamage << std::endl;
	std::cout << this->_armorDamageReduction << std::endl;
}
