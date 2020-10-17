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
#include <iostream>

int main()
{
	srand(time2posix(time(nullptr)));

	std::cout << "Testing constructors" << std::endl;
	FragTrap fr4g;
	FragTrap Claptrap("Claptrap");
	FragTrap anotherClap(Claptrap);
	fr4g = FragTrap("Mimic");

	std::cout << std::endl <<  "Testing attack and assignment" << std::endl;
	Claptrap.meleeAttack("Psycho");
	anotherClap.rangedAttack("Badass");
	Claptrap.takeDamage(80);
	Claptrap.beRepaired(1500);
	Claptrap.takeDamage(800);
	Claptrap.beRepaired(40);
	fr4g = Claptrap;
	fr4g.takeDamage(40);

	std::cout << std::endl <<  "Testing vaulthunter_dot_exe" << std::endl;
	Claptrap.vaulthunter_dot_exe("Baddest ass");
	Claptrap.vaulthunter_dot_exe("Baddest ass");
	Claptrap.vaulthunter_dot_exe("Baddest ass");
	Claptrap.vaulthunter_dot_exe("Baddest ass");
	Claptrap.vaulthunter_dot_exe("Baddest ass");

}