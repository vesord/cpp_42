/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 00:29:50 by matrus            #+#    #+#             */
/*   Updated: 2020/10/31 00:29:51 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <exception>
#include <iterator>

template < typename T >
typename T::iterator easyfind( T & container, int i )
{
	typename T::iterator p;

	p = std::find(container.begin(), container.end(), i);
	if (p == container.end())
		throw std::exception();
	return p;
}

#endif

