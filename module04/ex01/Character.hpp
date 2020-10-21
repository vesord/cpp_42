/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:26:21 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 15:26:24 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

public:

	Character(std::string const & name);
	~Character();
	Character( Character const & character );

	Character & operator=( Character const & character );

	void recoverAP();
	void equip( AWeapon * weapon );
	void attack( Enemy * enemy );

	std::string const &	getName() const;
	int					getAP() const;
	std::string const &	getWeaponName() const;
	bool				isArmed() const;

private:

	Character();

	std::string _name;
	int			_ap;
	AWeapon *	_weapon;

};

std::ostream & operator<<( std::ostream & o, Character const & character );

#endif
