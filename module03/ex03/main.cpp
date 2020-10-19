/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 08:45:59 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 08:46:01 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main()
{
	srand(time2posix(time(nullptr)));

	std::cout << "Testing constructors" << std::endl;
	NinjaTrap ninjaDefault;
	NinjaTrap ninjaTrap("NarutoTrap");
	ClapTrap dum;
	FragTrap fragTrap("FRAAAAAAG");
	ScavTrap scavTrap("SCAAAAAAV");

	std::cout << std::endl << "Testing ninja" << std::endl;
	ninjaTrap.rangedAttack("Just ranged target");
	ninjaTrap.meleeAttack("Just melee target");

	ninjaTrap.takeDamage(59);
	ninjaTrap.beRepaired(44);

	std::cout << std::endl << "Testing ninjaSHOEBOX" << std::endl;
	ninjaTrap.ninjaShoebox(ninjaDefault);
	ninjaTrap.ninjaShoebox(dum);
	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(scavTrap);

}