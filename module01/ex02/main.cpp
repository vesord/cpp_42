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

int main()
{
	ZombieEvent covid;
	Zombie*		zombOnHeap;
	Zombie		zombOnStack(DUMMY, "STACKer");

	covid.setZombieType(VERY_STUPID);

	zombOnHeap = covid.newZombie( "HEAPster");
	zombOnHeap->announce();
	zombOnStack.announce();

	delete zombOnHeap;

	zombOnHeap = covid.randomChump();
	delete zombOnHeap;
//	while (1)
//		;
	return (0);
}

