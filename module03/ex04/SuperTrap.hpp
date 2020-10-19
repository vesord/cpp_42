/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:29:48 by matrus            #+#    #+#             */
/*   Updated: 2020/10/19 10:29:50 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap();
	~SuperTrap();
	SuperTrap( SuperTrap const & superTrap );
	SuperTrap( std::string const & name);

	SuperTrap & operator=( SuperTrap const & superTrap );

private:

};

#endif
