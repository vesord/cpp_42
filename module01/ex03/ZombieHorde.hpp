/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 10:05:49 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 10:05:50 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde( int count );
	~ZombieHorde();

	void	announce();

private:

	static const int			_randomNamesCount;
	static const std::string	_randomNamesStr[];

	int		_zombieCount;
	Zombie*	_zombies;
};

#endif
