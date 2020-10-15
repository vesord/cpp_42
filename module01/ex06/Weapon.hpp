/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:10:07 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 13:10:09 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

public:

	Weapon( std::string type);
	~Weapon();

	const std::string&	getType() const;
	void		setType( std::string type );

private:

	std::string _type;

};


#endif
