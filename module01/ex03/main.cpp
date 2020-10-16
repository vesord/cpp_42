/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:05:19 by matrus            #+#    #+#             */
/*   Updated: 2020/10/16 09:33:32 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	checkLeaks()
{
	ZombieHorde horde(6);

	horde.announce();
}

int main()
{
	checkLeaks();
//	while (true)
//		;
	return 0;
}
