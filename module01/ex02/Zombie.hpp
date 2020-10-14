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

enum e_zombieType
{
	stupid,
	dummy,
	very_stupid
};

class Zombie {

public:

	Zombie();
	~Zombie();

	void				announce();

private:

	static const int 	_typesCount;
	static std::string	_typesStrAll[];
	enum e_zombieType	_type;
	std::string			_name;
	int					_hp;
	int					_brain_value;

};


#endif
