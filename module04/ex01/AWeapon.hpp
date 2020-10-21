/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:25:34 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 13:25:37 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon {

public:

	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon( AWeapon const & aWeapon );
	virtual ~AWeapon();

	std::string const & getName( void ) const;

	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;

private:

	AWeapon();
	AWeapon & operator=( AWeapon const & aWeapon );

	std::string	_name;
	int			_damage;
	int			_apCost;

};


#endif
