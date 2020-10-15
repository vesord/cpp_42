/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:40:53 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 12:40:54 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

std::string		Human::identify() const
{
	return ( this->_brain.identify() );
}

const Brain&	Human::getBrain() const
{
	return ( this->_brain );
}
