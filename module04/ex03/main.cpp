/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:54:51 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 13:54:53 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "<--- MY TESTS --->" << std::endl;

	Character* new_char = new Character("Matrus");

	tmp = src->createMateria( "ice");
	new_char->equip(tmp);
	tmp = src->createMateria("cure");
	new_char->equip(tmp);

	std::cout << std::endl << "<--- NEW CHAR USING --->" << std::endl;

	new_char->unequip(0);			// leaks???
	new_char->use(0, *bob);
	new_char->use(1, *bob);
	new_char->use(2, *bob);

	std::cout << std::endl << "<--- COPYING CHAR --->" << std::endl;
	Character* another_char = new Character(*new_char);

	std::cout << std::endl << "<--- ANOTHER USING --->" << std::endl;
	tmp = src->createMateria("ice");
	another_char->equip(tmp);
	another_char->use(0, *me);
	another_char->use(1, *me);
	another_char->use(2, *me);

	std::cout << std::endl << "<--- NEW CHAR USING --->" << std::endl;
	new_char->use(0, *bob);
	new_char->use(1, *bob);
	new_char->use(2, *bob);

	delete bob;
	delete me;
	delete src;
	delete new_char;
	delete another_char;

	return 0;
}