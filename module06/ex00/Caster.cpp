/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 20:22:47 by matrus            #+#    #+#             */
/*   Updated: 2020/10/24 20:22:50 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

Caster::Caster()
{
	return ;
}

Caster::~Caster()
{
	return ;
}

Caster::Caster(const Caster & caster)
{
	(void)caster;
	return ;
}

Caster & Caster::operator=(const Caster & caster)
{
	(void)caster;
	return *this;
}

Caster::Caster(const std::string & str)
{
	if (	   !this->_castDouble(str)
			|| !this->_castFloat(str)
			|| !this->_castInt(str)
			|| !this->_castChar(str))
		return ;
	return;
}

inline void throwEIfRubbishAfterDigit( std::string const & str, size_t pos )
{
	if (str.length() > pos)
		if (!(str[pos] == 'f' && str[pos + 1] == '\0'))
			throw std::invalid_argument("Rubbish chars after value");
}

bool Caster::_castDouble(const std::string & str)
{
	std::stringstream	s;
	size_t				rubbish_chars;

	try
	{
		s.setf(std::ios::fixed);
		this->_d = static_cast<double>(std::stod(str, &rubbish_chars));
		throwEIfRubbishAfterDigit(str, rubbish_chars);
		s << std::setprecision(1) << this->_d;
		this->_dstr = s.str();
		s.str("");
	}
	catch (std::invalid_argument & e)
	{
		this->_dstr = "impossible";
		this->_fstr = "impossible";
		this->_istr = "impossible";
		this->_cstr = "impossible";
		return false;
	}
	catch (std::out_of_range & e)
	{
		this->_dstr = "impossible";
		this->_fstr = "impossible";
		this->_istr = "impossible";
		this->_cstr = "impossible";
		return false;
	}
	return true;
}

bool Caster::_castFloat(const std::string & str)
{
	std::stringstream	s;
	size_t				rubbish_chars;

	try
	{
		this->_f = static_cast<float>(std::stod(str, &rubbish_chars));
		s.setf(std::ios::fixed);
		s << std::setprecision(1) << this->_f << "f";
		throwEIfRubbishAfterDigit(str, rubbish_chars);
		this->_fstr = s.str();
		s.str("");
	}
	catch (std::invalid_argument & e)
	{
		this->_fstr = "impossible";
		this->_istr = "impossible";
		this->_cstr = "impossible";
		return false;
	}
	catch (std::out_of_range & e)
	{
		this->_fstr = "impossible";
		this->_istr = "impossible";
		this->_cstr = "impossible";
		return false;
	}
	return true;
}

bool Caster::_castInt(const std::string & str)
{
	std::stringstream s;

	try
	{
		if (this->_d - 1 >= INT32_MAX || this->_d + 1 <= INT32_MIN)
			throw std::out_of_range("Out of Int");
		this->_i = static_cast<int>(std::stoi(str));
		s << this->_i;
		this->_istr = s.str();
		s.str("");
	}
	catch (std::invalid_argument & e)
	{
		this->_istr = "impossible";
		this->_cstr = "impossible";
		return false;
	}
	catch (std::out_of_range & e)
	{
		this->_istr = "impossible";
		this->_cstr = "impossible";
		return false;
	}
	return true;
}

bool Caster::_castChar(const std::string & str)
{
	std::stringstream s;

	try
	{
		if (this->_d - 1 > CHAR_MAX || this->_d + 1 < CHAR_MIN)
			throw std::out_of_range("Out of Char");
		if (this->_d >= 127 || this->_d < 31)
		{
			this->_cstr = "Non displayable";
			return true;
		}
		this->_c = static_cast<char>( static_cast<int>(std::stoi(str)) );
		s << '\'' << this->_c << '\'';
		this->_cstr = s.str();
		s.str("");
	}
	catch (std::invalid_argument & e)
	{
		this->_cstr = "impossible";
		return false;
	}
	catch (std::out_of_range & e)
	{
		this->_cstr = "impossible";
		return false;
	}
	return true;
}

void Caster::printCasts() const
{
	std::cout << "char: " << this->_cstr << std::endl;
	std::cout << "int: " << this->_istr << std::endl;
	std::cout << "float: " << this->_fstr << std::endl;
	std::cout << "double: " << this->_dstr << std::endl;
}
