/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:11:42 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 14:11:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist();
	virtual ~PowerFist();

	virtual void attack() const;

private:

	PowerFist( PowerFist const & powerFist );

	PowerFist & operator=( PowerFist const & powerFist );

};


#endif
