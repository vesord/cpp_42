/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 09:36:02 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 09:36:03 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:

	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine( TacticalMarine const & marine );

	TacticalMarine & operator=( TacticalMarine const & marine );

	virtual ISpaceMarine * clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

private:

};


#endif
