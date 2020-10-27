/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 20:22:48 by matrus            #+#    #+#             */
/*   Updated: 2020/10/24 20:22:50 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
#define CASTER_HPP

#include <string>

class Caster {

public:

	Caster( std::string const & str );
	~Caster();

	void	printCasts( void ) const;

private:

	Caster();
	Caster( Caster const & caster );

	Caster & operator=( Caster const & caster );

	void	_castDouble( std::string const & str );
	void	_castFloat( std::string const & str );
	void	_castInt( std::string const & str );
	void	_castChar(std::string & str );

	char _c;
	int _i;
	float _f;
	double _d;

	std::string _cstr;
	std::string _istr;
	std::string _fstr;
	std::string _dstr;

};


#endif
