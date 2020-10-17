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

# include <string>
# include "ClapTrap.hpp"

# ifndef COLOR_RESET
#  define COLOR_RESET "\x1b[0m"
# endif

# ifndef COLOR_YELLOW
#  define COLOR_YELLOW "\x1b[1;33m"
# endif

class FragTrap : public ClapTrap {

public:

	FragTrap();
	FragTrap( std::string name );
	~FragTrap();

	FragTrap( FragTrap const & fragTrap);
	FragTrap & operator=( FragTrap const & fragTrap );

	void	rangedAttack( std::string const & target);
	void	meleeAttack( std::string const & target);
	void	vaulthunter_dot_exe ( std::string const & target );

private:

	static const unsigned int	_vaulthunterPhrasesCount;
	static const std::string	_vaulthunterPhrases[];
	static const std::string	_voiceColor;
	static const std::string	_modelType;

};


#endif
