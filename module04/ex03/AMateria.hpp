/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:57:05 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 13:57:06 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

#include <string>
#include "ICharacter.hpp"

class AMateria
{

public:

	AMateria(std::string const & type);

	virtual ~AMateria();

	AMateria( AMateria const & aMateria );

	AMateria & operator=( AMateria const & aMateria );

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

private:

	AMateria();

protected:

	const std::string	_type;
	unsigned int		_xp;
};

#endif
