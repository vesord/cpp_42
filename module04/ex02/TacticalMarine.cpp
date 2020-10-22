/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 09:36:01 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 09:36:04 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & marine)
{
	*this = marine;
	return ;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & marine)
{
	if (&marine == nullptr)
		return *this;
	return *this;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

ISpaceMarine * TacticalMarine::clone() const
{
	return ( new TacticalMarine(*this) );
}