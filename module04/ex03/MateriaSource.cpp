/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:52:42 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 13:52:46 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		this->_learnedMaterias[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_learnedMaterias[i] != nullptr)
			delete this->_learnedMaterias[i];
	}
	return ;
}

MateriaSource::MateriaSource(const MateriaSource & materiaSource)
{
	*this = materiaSource;
	return ;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & materiaSource)
{
	if (this == &materiaSource)
		return *this;

	for (int i = 0; i < 4; ++i)
	{
		if (this->_learnedMaterias[i] != nullptr)
		{
			delete this->_learnedMaterias[i];
			this->_learnedMaterias[i] = nullptr;
		}
		if (materiaSource._learnedMaterias[i] != nullptr)
			this->_learnedMaterias[i] = materiaSource._learnedMaterias[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria * materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_learnedMaterias[i] == nullptr)
		{
			this->_learnedMaterias[i] = materia->clone();
			break;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	AMateria * materiaToCreate = nullptr;

	for (int i = 0; i < 4; ++i)
	{
		if (type == this->_learnedMaterias[i]->getType())
		{
			materiaToCreate = this->_learnedMaterias[i]->clone();
			break ;
		}
	}
	return materiaToCreate;
}
