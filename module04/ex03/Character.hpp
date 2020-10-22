/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:44:00 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 16:44:01 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

public:

	Character( std::string & name );

	virtual ~Character();
	Character( Character const & character );

	Character & operator=( Character const & character );

	virtual const std::string & getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);

private:

	Character();

	AMateria*	_inventory[4];
	std::string	_name;

};


#endif
