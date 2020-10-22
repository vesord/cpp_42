/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 09:05:41 by matrus            #+#    #+#             */
/*   Updated: 2020/10/22 09:05:43 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE04_SQUAD_HPP
#define MODULE04_SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct	s_marinelist
{
	ISpaceMarine		*marine;
	struct s_marinelist	*next;
}				t_marinelist;

class Squad : public ISquad {

public:

	Squad();
	virtual ~Squad();
	Squad( Squad const & squad );

	Squad & operator=( Squad const & squad );

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);

private:

	bool			_isMarineInSquad( ISpaceMarine * marine ) const;
	void			_deleteMarines();

	int				_unitsCount;
	t_marinelist*	_marinesList;

};

#endif
