/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:59:03 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 09:59:07 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon(const Peon &peon)
{
	*this = peon;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon::Peon(const std::string &name) : Victim( name )
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon & Peon::operator=(const Peon &peon)
{
	this->_name = peon.getName();
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << "  has been turned into a pink pony!" << std::endl;
}

Peon::Peon() : Victim()
{
	return ;
}
