/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 15:58:03 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 15:58:04 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *pony2 = new Pony(PURPLE, 22);
	pony2->iGoGo();
	pony2->makeRainbow();
	delete pony2;
}

void	ponyOnTheStack()
{
	Pony pony1(RED, 34);
	pony1.iGoGo();
	pony1.makeRainbow();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
