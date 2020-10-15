/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:52:27 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 16:52:28 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

/*
 * This enum has a connection with Zombie::_typesStrAll
 * please when changing enum, make sure you're changing
 * Zombie::_typesStrAll.
 */

enum e_zombieType
{
	STUPID,
	DUMMY,
	VERY_STUPID
};

class Zombie {

public:

	Zombie( e_zombieType type, std::string name );
	~Zombie();

	void				announce();

private:

	static const int 			_typesCount;
	static const std::string	_typesStrAll[];

	enum e_zombieType	_type;
	std::string			_name;
	int					_hp;
	int					_brain_value;

};


#endif
