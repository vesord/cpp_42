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

#include <ostream>

class Fixed {

public:

	Fixed();
	Fixed( Fixed const & fix );
	Fixed( int const nb );
	Fixed( float const nb );
	~Fixed();

	Fixed &	operator=(Fixed const & rhv );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int 	toInt( void ) const;
	float	toFloat( void ) const;

private:

	int					_value;
	static const int	_fixedpoint;
	static const float	_pinf;
	static const float	_ninf;
	static const unsigned int	_maxvalue;
	static const unsigned int	_minvalue;

};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed );


#endif
