/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:17:08 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 15:17:09 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REDSCORPION_HPP
#define REDSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const & radScorpion );

	RadScorpion & operator=(RadScorpion const & radScorpion );

	virtual void takeDamage( int dmg );

private:
	
};


#endif
