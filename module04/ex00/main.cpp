/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:49:48 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 09:49:50 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{

	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl << "<--- MY TESTS --->" << std::endl;

//	Sorcerer default_sorcerer; // Does not compile
//	Victim default_victim; // Does not compile
//	Peon default_peon; // Does not compile
	Peon joe_twin(joe);
	Victim jim_twin(jim);
	robert.polymorph(joe_twin);
	robert.polymorph(jim_twin);
	joe_twin.getPolymorphed();
	jim_twin.getPolymorphed();

	std::cout << std::endl << "<--- DESTRUCTION --->" << std::endl;

	return 0;
}