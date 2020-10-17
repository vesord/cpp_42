/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:11:32 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 14:11:38 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

# ifndef COLOR_RESET
#  define COLOR_RESET "\x1b[0m"
# endif

# ifndef COLOR_GREEN
#  define COLOR_GREEN "\x1b[1;32m"
# endif

class ClapTrap {

public:

	ClapTrap();
	~ClapTrap();
	ClapTrap( ClapTrap const & clapTrap );
	ClapTrap( int hitPoint, int hitPointMax, int energyPoint, int energyPointMax,
		   int level, int meleeAttackDamage, int ragedAttackDamage,
		   int armorDamageReduction, std::string name, std::string voiceColor,
		   std::string type );

	ClapTrap & operator=( ClapTrap const & clapTrap );

	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

protected:

	int			_hitPoints;
	int			_hitPointsMax;
	int			_energyPoints;
	int			_energyPointsMax;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

	std::string	_voiceColor;
	std::string	_modelType;

};


#endif
