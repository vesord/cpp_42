/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:04:09 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 10:04:10 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator( AssaultTerminator const & marine );

	AssaultTerminator & operator=( AssaultTerminator const & marine );

	virtual ISpaceMarine * clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

private:
	
};


#endif