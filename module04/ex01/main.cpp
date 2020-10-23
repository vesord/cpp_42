/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:03:20 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 16:03:21 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl << "<--- MY TESTS --->" << std::endl;


	Character* noob = new Character("noob");

	Enemy* sm = new SuperMutant();

	std::cout << *noob;

	me->equip(pr);
	noob->equip(pr);

	std::cout << *me << *noob;
	me->attack(sm);
	noob->attack(sm);
	std::cout << *me << *noob;
	me->attack(sm);
	noob->attack(sm);
	std::cout << *me << *noob;
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	std::cout << *me << *noob;
	me->recoverAP();
	me->attack(sm);
	me->attack(sm);
	me->attack(sm);
	noob->equip(pf);
	noob->attack(sm);
//	noob->attack(sm);

	delete noob;
	delete me;
	delete pr;
	delete pf;

	return 0;
}