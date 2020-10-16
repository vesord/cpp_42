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
	return ;
}

Fixed::Fixed(const Fixed &fix)
{
	*this = fix;
	return ;
}

Fixed::Fixed(const int nb) : _value( nb << Fixed::_fixedpoint )
{
	return ;
}

Fixed::Fixed(const float nb) : _value( 0 )
{
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
	return ;
}

Fixed & Fixed::operator=( Fixed const & rhv )
{
	this->_value = rhv.getRawBits();
	return ( *this );
}

bool Fixed::operator<( Fixed const & rhv) const
{
	if (this->_value < rhv.getRawBits())
		return ( true );
	return ( false );
}

bool Fixed::operator>( Fixed const & rhv) const
{
	if (this->_value > rhv.getRawBits())
		return ( true );
	return ( false );
}

bool Fixed::operator<=( Fixed const & rhv) const
{
	if (this->_value <= rhv.getRawBits())
		return ( true );
	return ( false );
}

bool Fixed::operator>=( Fixed const & rhv) const
{
	if (this->_value >= rhv.getRawBits())
		return ( true );
	return ( false );
}

bool Fixed::operator==( Fixed const & rhv) const
{
	if (this->_value == rhv.getRawBits())
		return ( true );
	return ( false );
}

bool Fixed::operator!=( Fixed const & rhv) const
{
	if (this->_value != rhv.getRawBits())
		return ( true );
	return ( false );
}

Fixed Fixed::operator+(Fixed const & rhv) const
{
	Fixed tmp;

	tmp.setRawBits( this->_value + rhv.getRawBits() );
	return ( tmp );
}

Fixed Fixed::operator-(Fixed const & rhv) const
{
	Fixed tmp;

	tmp.setRawBits( this->_value - rhv.getRawBits() );
	return ( tmp );
}

Fixed Fixed::operator*(Fixed const & rhv) const
{
	return ( Fixed(this->toFloat() * rhv.toFloat()) );
}

Fixed Fixed::operator/(Fixed const & rhv) const
{
	return ( Fixed(this->toFloat() / rhv.toFloat()) );
}

Fixed & Fixed::operator++()
{
	++(this->_value);
	return ( *this );
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp( *this );
	operator++();
	return ( tmp );
}

Fixed & Fixed::operator--()
{
	--(this->_value);
	return ( *this );
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp( *this );
	operator--();
	return ( tmp );
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
	return ( this->_value );
}

void Fixed::setRawBits(const int raw)
{
	this->_value = raw;
	return ;
}

std::ostream & operator<<( std::ostream & o, Fixed const & fixed )
{
	o << fixed.toFloat();
	return o;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return a;
	return b;
}
