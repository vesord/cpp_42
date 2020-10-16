/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:25:29 by matrus            #+#    #+#             */
/*   Updated: 2020/10/16 13:25:31 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {

public:

	Fixed();
	Fixed( Fixed const & fix );
	~Fixed();

	Fixed &	operator=(Fixed const & rhv );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

	int					_value;
	static const int	_shift;

};


#endif
