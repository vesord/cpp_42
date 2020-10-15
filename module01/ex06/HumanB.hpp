/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:36:18 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 14:36:20 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

public:

	HumanB( std::string name );
	~HumanB();

	void attack();
	void setWeapon( Weapon& weapon );

private:

	std::string	_name;
	Weapon*		_weapon;

};

#endif
