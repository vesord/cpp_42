/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:17:07 by matrus            #+#    #+#             */
/*   Updated: 2020/10/21 14:17:09 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy {

public:
	Enemy(int hp, std::string const & type);
	Enemy( Enemy const & enemy );

	virtual ~Enemy();

	std::string const & getType() const;
	int getHP() const;

	virtual void takeDamage(int);

private:

	Enemy();
	Enemy & operator=( Enemy const & enemy );

protected:

	int			_hitPoints;
	std::string	_type;

};


#endif
