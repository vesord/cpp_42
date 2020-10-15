/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 09:11:43 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 09:11:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

const int randomNamesCount = 8;

const std::string randomNamesStr[randomNamesCount] =
	{
		"Chuck",
		"David",
		"Alice",
		"Tom",
		"Bob",
		"Brian",
		"BrainLover",
		"Agrhgnug"
	};

void	randomChump()
{
	std::srand(std::time(nullptr));
	Zombie*	chump = new Zombie( DUMMY,
						randomNamesStr[std::rand() % randomNamesCount]);
	chump->announce();
	delete chump;
}

int main()
{
	ZombieEvent covid;
	Zombie*		zombOnHeap;

	covid.setZombieType(VERY_STUPID);
	zombOnHeap = covid.newZombie( "HEAPster");
	zombOnHeap->announce();
	delete zombOnHeap;

	Zombie		zombOnStack(DUMMY, "STACKer");
	zombOnStack.announce();

	randomChump();

//	while (1)
//		;
	return (0);
}

