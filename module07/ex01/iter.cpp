/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:55:09 by matrus            #+#    #+#             */
/*   Updated: 2020/10/29 01:55:10 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template < typename T >
void templateFunction(T const & smth )
{
	std::cout << smth << std::endl;
}

template <>
void templateFunction(std::string const & smth)
{
	std::cout << "It's a string: " << smth << "\" and it's len: " << smth.length() << std::endl;
}

void nonTemplateFunction( float const & f )
{
	std::cout << std::fixed << "It's a float: " << f << std::endl;
}

template < typename T >
void	iter(T const * begin, size_t const length, void (*function)(T const &))
{
	for ( size_t i = 0; i < length; ++i )
		function(begin[i]);
}

int main()
{

	std::string str[] = { "a", "sdf", "9876543", "Hello World!", "!@#$%^&*()" };
	int array[] = {1, 3, 6543, -87654, 987898765, 0};
	float floatArray[] = {.76543, -7654323, 0.00000654, 1.010101010101010, 42};

	std::cout << "<--- SIMPLE OUTPUT --->" << std::endl;
	iter<std::string>(str, 5, templateFunction);
	iter(array, 6, templateFunction);

	std::cout << std::endl << "<--- DIFFERENT FUNCTIONS CHECK --->" << std::endl;
	iter(floatArray, 5, templateFunction);
	std::cout << std::endl;
	iter(floatArray, 5, nonTemplateFunction);

	return 0;
}