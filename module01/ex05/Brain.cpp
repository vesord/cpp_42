/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:11:50 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 12:11:51 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>


Brain::Brain()
{
	srand(time(nullptr));
	this->_iq = 90 + rand() % 40;
	return ;
}

Brain::~Brain()
{
	return ;
}

std::string Brain::identify() const
{
	std::string thisAddress;
	std::stringstream ss;

	ss << this;
	thisAddress = ss.str();
	return (thisAddress);
}