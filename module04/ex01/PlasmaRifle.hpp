/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:45:51 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 13:45:52 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	virtual ~PlasmaRifle();

	virtual void attack() const;

private:

	PlasmaRifle( PlasmaRifle const & plasmaRifle );

	PlasmaRifle & operator=( PlasmaRifle const & plasmaRifle );

};


#endif
