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

int main()
{
	Pony pony1(RED, 34);
	Pony *pony2 = new Pony(PURPLE, 22);

	pony1.iGoGo();
	pony2->iGoGo();

	pony1.makeRainbow();
	pony2->makeRainbow();

	delete pony2;
	return (0);
}
