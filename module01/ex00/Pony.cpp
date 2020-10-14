/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:30:08 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 14:30:10 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

std::string Pony::_colorsStrings[] =
	{
		"red",
		"orange",
		"yellow",
		"green",
		"blue",
		"purple"
	};

Pony::Pony( enum e_ponyColors color, int age ) : _color(color), _age(age)
{
	std::cout << "Pony with " << Pony::_colorsStrings[this->_color]
											<< " color is born." << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony died:( It was " << this->_age << " pyears old." << std::endl;
}

void	Pony::iGoGo()
{
	std::cout << "I-Go-Go! " << Pony::_colorsStrings[this->_color] << " pony said!" << std::endl;
}

void	Pony::makeRainbow()
{
	std::cout << "Pony tries to make RAINBOW, but only " << Pony::_colorsStrings[this->_color] <<
												" color appears" << std::endl;
	this->_age++;
	std::cout << "Pony feels older." << std::endl;
}