/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:52:43 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 13:52:46 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	virtual ~MateriaSource();

	MateriaSource( MateriaSource const & materiaSource );

	MateriaSource & operator=( MateriaSource const & materiaSource );

	virtual void learnMateria(AMateria * materia);
	virtual AMateria * createMateria(std::string const & type);

private:

	AMateria * _learnedMaterias[4];

};


#endif
