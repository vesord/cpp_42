/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 09:05:39 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 09:05:43 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad() : _unitsCount( 0 ), _marinesList( nullptr )
{
	return ;
}

Squad::~Squad()
{
	this->_deleteMarines();
	return ;
}

Squad::Squad(Squad const & squad)
{
	*this = squad;
	return ;
}

Squad & Squad::operator=(Squad const & squad)
{
	if (this == &squad)
		return *this;

	if (this->_marinesList != nullptr)
		this->_deleteMarines();

	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());

	return *this;
}

int Squad::getCount() const
{
	return this->_unitsCount;
}

ISpaceMarine* Squad::getUnit( int i ) const
{
	if ( i < 0 || i > this->_unitsCount - 1)
		return (nullptr);

	t_marinelist *tmp;

	tmp = this->_marinesList;
	for (; i > 0; i--)
		tmp = tmp->next;
	return ( tmp->marine );
}

void Squad::_deleteMarines()
{
	t_marinelist *tmp;

	for (int i = 0; i < this->_unitsCount; i++)
	{
		tmp = this->_marinesList->next;
		delete this->_marinesList->marine;
		delete this->_marinesList;
		this->_marinesList = tmp;
	}
	this->_marinesList = nullptr;
}

bool Squad::_isMarineInSquad(ISpaceMarine *marine) const
{
	t_marinelist *tmp;

	tmp = this->_marinesList;
	while (tmp)
	{
		if (tmp->marine == marine)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}

int Squad::push(ISpaceMarine* marine)
{
	if ( marine == nullptr || this->_isMarineInSquad( marine ))
		return this->_unitsCount;

	t_marinelist **cur;

	cur = &this->_marinesList;
	while ( *cur )
		cur = &(*cur)->next;
	*cur = new t_marinelist;
	(*cur)->next = nullptr;
	(*cur)->marine = marine;
	this->_unitsCount++;
	return this->_unitsCount;
}