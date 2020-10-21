/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:38:36 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 14:38:37 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant( SuperMutant const & superMutant );

	SuperMutant & operator=( SuperMutant const & superMutant );

	virtual void takeDamage( int dmg );

private:

};


#endif
