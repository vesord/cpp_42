/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 07:53:25 by matrus            #+#    #+#             */
/*   Updated: 2020/10/17 07:53:26 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap {

public:

	FragTrap();
	FragTrap( std::string name );
	~FragTrap();

	FragTrap( FragTrap const & fragTrap);
	FragTrap & operator=( FragTrap const & fragTrap );

	void	rangedAttack( std::string const & target);
	void	meleeAttack( std::string const & target);
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	vaulthunter_dot_exe ( std::string const & target );

private:

	int			_hitPoints;
	int			_hitPointsMax;
	int			_energyPoints;
	int			_energyPointsMax;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

	static const unsigned int	_vaulthunterPhrasesCount;
	static const std::string	_vaulthunterPhrases[];

};


#endif
