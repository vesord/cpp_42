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

SuperTrap::SuperTrap() : NinjaTrap(), FragTrap()
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_hitPointsMax = FragTrap::_hitPointsMax;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_energyPointsMax = NinjaTrap::_energyPointsMax;
	this->_name = "default_ultimate_assault_shoebox";
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	this->rangedAttack = FragTrap::rangedAttack;
}