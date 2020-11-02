/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 03:03:25 by matrus            #+#    #+#             */
/*   Updated: 2020/11/02 03:03:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	myRand() {
	return (-rand() + rand() );
}

int main()
{
	srand(time(nullptr));

	std::cout << "<--- TESTING SIMPLE SPAN --->" << std::endl;
	Span sp(42);
	sp.addNumber(0);
	sp.addNumber(10);
	sp.addNumber(100);
	sp.addNumber(101);
	sp.addNumber(2000000000);
	sp.addNumber(-2000000000);
	std::cout << "LONGEST: " << sp.longestSpan() << std::endl
				<< "SHORTEST: " << sp.shortestSpan() << std::endl;

	std::cout << std::endl <<  "<--- TESTING SPAN LESS 2 ELEMENTS --->" << std::endl;
	Span sp2(2);
	try { sp2.shortestSpan(); }
	catch ( std::exception & e) { std::cout << e.what() << std::endl; }
	sp2.addNumber(33);
	try { sp2.longestSpan(); }
	catch ( std::exception & e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl << "<--- TESTING OVERFLOW --->" << std::endl;
	try {
		sp2.addNumber(6);
		sp2.addNumber(6);
	} catch ( std::exception & e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl << "<--- TESTING HUGE GENERATION --->" << std::endl;

	std::cout << "10000:" << std::endl;
	Span bigSpan(10000);
	std::vector<int> v10k(10000);
	std::generate(v10k.begin(), v10k.end(), myRand);
	bigSpan.addNumber(v10k.begin(), v10k.end());
	std::cout << "LONGEST: " << bigSpan.longestSpan() << std::endl
			  << "SHORTEST: " << bigSpan.shortestSpan() << std::endl;


	std::cout << std::endl << "<--- TESTING HUGE GENERATION 2 --->" << std::endl;

	std::cout << "1000000:" << std::endl;
	Span hugeSpan(1000000);
	std::vector<int> v1m(1000000);
	std::generate(v1m.begin(), v1m.end(), myRand);
	hugeSpan.addNumber(v1m.begin(), v1m.end());
	std::cout << "LONGEST: " << hugeSpan.longestSpan() << std::endl
			  << "SHORTEST: " << hugeSpan.shortestSpan() << std::endl;
}