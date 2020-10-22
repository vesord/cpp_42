/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:38:43 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 16:38:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {

public:

	Cure();
	virtual ~Cure();

	Cure( Cure const & cure );

	Cure & operator=( Cure const & cure );

	virtual AMateria * clone() const;
	virtual void use(ICharacter& target);

private:
	
};


#endif
