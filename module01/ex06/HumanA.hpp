/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:29:53 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 13:29:55 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

public:

	HumanA( std::string name, Weapon& weapon );
	~HumanA();

	void attack();

private:

	std::string	_name;
	Weapon&		_weapon;

};


#endif
