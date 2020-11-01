/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 00:29:35 by matrus            #+#    #+#             */
/*   Updated: 2020/10/31 00:29:37 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <array>
#include <set>

#include <iostream>
#include <typeinfo>
#include "easyfind.hpp"


template < typename T >
void test( T & v1)
{
	typename T::iterator it;
	typename T::iterator ite = v1.end();

	std::cout << typeid(v1).name() << std::endl;
	for ( it = v1.begin(); it != ite; ++it)
	{
		*it = rand() % v1.size();
		std::cout << *it << " ";
	}

	std::cout << std::endl << "TRY TO FIND: " << 1 << std::endl;
	try {
		it = easyfind(v1, 1);
		std::cout << "I FOUND IT! Index: " << std::distance(v1.begin(), it) << std::endl;
	} catch (std::exception & e) {
		std::cout << "NOT FOUND!" << std::endl;
	}
}

template <>
void test( std::set<int> & v1 )
{
	std::set<int>::iterator it;

	std::cout << typeid(v1).name() << std::endl;
	std::cout << "TRY TO FIND: " << 1 << std::endl;
	try {
		it = easyfind(v1, 3);
		std::cout << "I FOUND IT! Index: " << std::distance(v1.begin(), it) << std::endl;
	} catch (std::exception & e) {
		std::cout << "NOT FOUND!" << std::endl;
	}
}


int main()
{
	srand(time(nullptr));

	std::vector<int> v(5);
	std::list<int> l(12);
	std::array<int, 10> a = {};
	std::set<int> s;
	s.insert(3);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(1);

	test( v );
	std::cout << std::endl;
	test( l );
	std::cout << std::endl;
	test(a);
	std::cout << std::endl;
	test(s);
	std::cout << std::endl;

	return 0;
}