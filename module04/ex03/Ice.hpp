/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:09:48 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 14:09:49 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include <string>

class Ice : public AMateria {

public:

	Ice();
	virtual ~Ice();

	Ice( Ice const & ice );

	Ice & operator=( Ice const & ice );

	virtual AMateria * clone() const;
	virtual void use(ICharacter& target);

private:

};

#endif
