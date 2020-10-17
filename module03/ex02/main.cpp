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
#include <iostream>

int main()
{
	srand(time2posix(time(nullptr)));

	std::cout << "Testing constructors" << std::endl;
	FragTrap fr4g;
	FragTrap Claptrap("Claptrap");
	ScavTrap sc4v;
	ScavTrap scarvTrap("ScrewBucket");

	std::cout << std::endl <<  "Testing attack and assignment" << std::endl;
	Claptrap.meleeAttack("Psycho");
	scarvTrap.rangedAttack("Badass");

	Claptrap.takeDamage(80);
	Claptrap.beRepaired(1500);
	scarvTrap.takeDamage(800);
	scarvTrap.beRepaired(40);
	fr4g = Claptrap;
	fr4g.takeDamage(40);
	sc4v = scarvTrap;


	std::cout << std::endl <<  "Testing vaulthunter_dot_exe" << std::endl;
	fr4g.vaulthunter_dot_exe("Baddest ass");
	fr4g.vaulthunter_dot_exe("Baddest ass");
	sc4v.challengeNewcomer();
	sc4v.challengeNewcomer();
}