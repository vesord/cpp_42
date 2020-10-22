/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:04:08 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 10:04:10 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & marine)
{
	*this = marine;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & marine)
{
	return *this;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

ISpaceMarine * AssaultTerminator::clone() const
{
	return ( new AssaultTerminator(*this) );
}