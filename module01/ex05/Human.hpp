/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:40:55 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 12:40:56 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {

public:

	Human();
	~Human();

	std::string		identify() const;
	const Brain&	getBrain() const;

private:

	const Brain	_brain;
};


#endif
