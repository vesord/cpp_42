/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:25:21 by matrus            #+#    #+#             */
/*   Updated: 2020/10/16 13:25:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fixedpoint = 8;

const float Fixed::_pinf = 1.f / 0.f;
const float Fixed::_ninf = -1.f / 0.f;
const unsigned int	Fixed::_maxvalue = 0x7fffffff;
const unsigned int	Fixed::_minvalue = 0xffffffff;

Fixed::Fixed() : _value( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

Fixed::Fixed(const int nb) : _value( nb << Fixed::_fixedpoint )
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float nb) : _value( 0 )
{
	std::cout << "Float constructor called" << std::endl;
	if (nb == Fixed::_pinf)
		this->_value = Fixed::_maxvalue;
	else if (nb == Fixed::_ninf)
		this->_value = (int)Fixed::_minvalue;
	else if (!(nb != 0 || nb))		// Chek if nb == NaN
		return ;
	else
		this->_value = (int)roundf(nb * (1 << Fixed::_fixedpoint));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=( Fixed const & rhv )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhv.getRawBits();
	return ( *this );
}

int Fixed::toInt() const
{
	return ( this->_value >> Fixed::_fixedpoint );
}

float Fixed::toFloat() const
{
	return ( (float)this->_value / (1 << Fixed::_fixedpoint) );
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_value );
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

std::ostream & operator<<( std::ostream & o, Fixed const & fixed )
{
	o << fixed.toFloat();
	return o;
}
