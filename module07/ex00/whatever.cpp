/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:29:50 by matrus            #+#    #+#             */
/*   Updated: 2020/10/29 01:29:52 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T>
void	swap( T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T & max( T & v1, T & v2 )
{
	return ( v1 > v2 ? v1 : v2);
}

template <typename T>
T & min( T & v1, T & v2 )
{
	return ( v1 < v2 ? v1 : v2);
}

int main()
{

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	std::cout << "<--- MY TESTS --->" << std::endl;
	std::cout << std::boolalpha;

	std::cout << "<--- TESTING SWAP --->" << std::endl;
	int i1 = 1;
	int i2 = 2;
	std::cout << i1 << ", " << i2 << std::endl;
	swap<int>(i1, i2);
	std::cout << i1 << ", " << i2 << std::endl;

	float f1 = 1.9876543;
	float f2 = 2.12345678;
	std::cout << f1 << ", " << f2 << std::endl;
	swap<float>(f1, f2);
	std::cout << f1 << ", " << f2 << std::endl;

	bool b1 = false;
	bool b2 = true;
	std::cout << b1 << ", " << b2 << std::endl;
	swap<bool>(b1, b2);
	std::cout << b1 << ", " << b2 << std::endl;

	std::cout << std::endl;
	std::cout << "<--- TESTING MIN/MAX --->" << std::endl;
	
	std::cout << "minimum of i1 and i2 is " << min(i1, i2) << std::endl;
	std::cout << "minimum of f1 and f2 is " << min(f1, f2) << std::endl;
	std::cout << "minimum of b1 and b2 is " << min(b1, b2) << std::endl;

	std::cout << std::endl;
	std::cout << "maximum of i1 and i2 is " << max(i1, i2) << std::endl;
	std::cout << "maximum of f1 and f2 is " << max(f1, f2) << std::endl;
	std::cout << "maximum of b1 and b2 is " << max(b1, b2) << std::endl;
}