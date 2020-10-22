/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 11:26:06 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 11:26:07 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl << "<--- MY TESTS --->" << std::endl;

	ISpaceMarine* marine1 = new TacticalMarine;
	ISpaceMarine* marine2 = new TacticalMarine;
	ISpaceMarine* marine3 = new TacticalMarine;
	ISpaceMarine* term1 = new AssaultTerminator;
	ISpaceMarine* term2 = new AssaultTerminator;
	Squad* squad = new Squad;

	squad->push(marine1);
	squad->push(marine2);
	squad->push(marine3);

	std::cout << std::endl << "<--- 3 MARINES IN SQUAD --->" << std::endl;
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		cur->battleCry();
	}

	std::cout << std::endl << "<--- COPYING SQUAD --->" << std::endl;
	Squad* another_squad = new Squad( *squad );

	std::cout << std::endl << "<--- 2 ASSAULTS ADDED TO ANOTHER SQUAD --->" << std::endl;
	another_squad->push(term1);
	another_squad->push(term2);
	for (int i = 0; i < another_squad->getCount(); ++i)
	{
		ISpaceMarine* cur = another_squad->getUnit(i);
		cur->battleCry();
	}

	std::cout << std::endl << "<--- DELETING FIRST SQUAD --->" << std::endl;
	delete squad;

	std::cout << std::endl << "<--- ANOTHER SQUAD STILL ALIVE --->" << std::endl;
	for (int i = 0; i < another_squad->getCount(); ++i)
	{
		ISpaceMarine* cur = another_squad->getUnit(i);
		cur->battleCry();
	}

	std::cout << std::endl << "<--- DELETING ANOTHER SQUAD --->" << std::endl;
	delete another_squad;

	return 0;
}