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

int main()
{
	Span sp(42);

	std::cout << "<--- TESTING LONGEST SPAN --->" << std::endl;
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





}