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
#include "SuperTrap.hpp"
#include <iostream>

int main()
{
	srand(time2posix(time(nullptr)));

	std::cout << "Testing constructors" << std::endl;
	SuperTrap superTrap;

	superTrap.describeYourself();
	std::cout << "SUPERTRAP SIZE: " << sizeof(superTrap) << std::endl << std::endl;

	std::cout << "Testing attacks" << std::endl;
	superTrap.meleeAttack("Target");
	superTrap.rangedAttack("Target");

	std::cout << std::endl << std::cout << "Testing special skills" << std::endl;
	NinjaTrap ninja;
	FragTrap frag;
	superTrap.ninjaShoebox(ninja);
	superTrap.ninjaShoebox(frag);
	superTrap.vaulthunter_dot_exe("Yet another target");
	superTrap.vaulthunter_dot_exe("Yet another target again");

}