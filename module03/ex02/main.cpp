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
	FragTrap claptrap("Claptrap");
	ScavTrap sc4v;
	ScavTrap scarvTrap("ScrewBucket");

	std::cout << std::endl <<  "Testing attack" << std::endl;
	claptrap.meleeAttack("Psycho");
	scarvTrap.rangedAttack("Badass");

	std::cout << std::endl << "Testing repairing" << std::endl;
	claptrap.takeDamage(80);
	claptrap.beRepaired(1500);
	scarvTrap.takeDamage(800);
	scarvTrap.beRepaired(40);

	fr4g = claptrap;
	fr4g.takeDamage(40);
	sc4v = scarvTrap;


	std::cout << std::endl <<  "Testing special skills" << std::endl;
	fr4g.vaulthunter_dot_exe("Baddest ass");
	fr4g.vaulthunter_dot_exe("Baddest ass");
	sc4v.challengeNewcomer();
	sc4v.challengeNewcomer();
}