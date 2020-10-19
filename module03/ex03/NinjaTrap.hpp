/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 17:42:03 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 17:42:05 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# ifndef COLOR_RESET
#  define COLOR_RESET "\x1b[0m"
# endif

# ifndef COLOR_NINJA
#  define COLOR_NINJA "\x1b[30;47m"
# endif

class NinjaTrap : public ClapTrap {

public:

	NinjaTrap();
	~NinjaTrap();
	NinjaTrap( NinjaTrap const & ninjaTrap );
	NinjaTrap( std::string name );

	NinjaTrap & operator=( NinjaTrap const & ninjaTrap );

	void ninjaShoebox( NinjaTrap & ninjaTrap );
	void ninjaShoebox( ClapTrap & clapTrap );
	void ninjaShoebox( FragTrap & fragTrap );
	void ninjaShoebox( ScavTrap & scavTrap );

private:

};


#endif
