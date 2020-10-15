/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:29:30 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 17:29:31 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

public:

	ZombieEvent();
	~ZombieEvent();

	void	setZombieType( e_zombieType type );

	Zombie*	newZombie(std::string name) const;
	Zombie*	randomChump() const;

private:

	static const int 			_randomNamesCount;
	static const std::string	_randomNamesStr[];

	e_zombieType	_type;

};


#endif
