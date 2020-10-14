/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:30:20 by matrus            #+#    #+#             */
/*   Updated: 2020/10/14 14:30:21 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

enum		e_ponyColors
{
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	BLUE,
	PURPLE
};

class Pony {

public:

	Pony( enum e_ponyColors, int age );
	~Pony();

	void	iGoGo( void );
	void	makeRainbow( void );

private:

	const enum e_ponyColors	_color;
	int						_age;
	static std::string		_colorsStrings[];

};


#endif
