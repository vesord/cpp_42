/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:34:56 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 12:34:58 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

# ifndef COLOR_RESET
#  define COLOR_RESET "\x1b[0m"
# endif

# ifndef COLOR_PURPLE
#  define COLOR_PURPLE "\x1b[1;35m"
# endif

class ScavTrap : public ClapTrap {

public:

	ScavTrap();
	ScavTrap( std::string name );
	~ScavTrap();

	ScavTrap( ScavTrap const & ScavTrap);
	ScavTrap & operator=( ScavTrap const & scavTrap );

	void	challengeNewcomer ( void );

	void	rangedAttack( std::string const & target);
	void	meleeAttack( std::string const & target);

private:

	static const unsigned int	_challengePhrasesCount;
	static const std::string	_challengePhrases[];

};



#endif
