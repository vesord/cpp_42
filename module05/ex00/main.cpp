/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:00:17 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 20:00:18 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *b1 = nullptr;
	Bureaucrat *b150 = nullptr;
	Bureaucrat *b0 = nullptr;
	Bureaucrat *b151 = nullptr;

	std::cout << "<--- TRY TO INCREMENT/DECREMENT GRADE --->" << std::endl;
	try {
		b1 = new Bureaucrat("b1", 1);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}

	try {
		b150 = new Bureaucrat("b150", 150);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}

	std::cout << *b1 << *b150 << std::endl;
	try {
		b1->gradeIncrement();
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}

	try {
		b150->gradeDecrement();
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}

	std::cout << std::endl << "<--- TRY CREATE WITH WRONG GRADE --->" << std::endl;

	try {
		b0 = new Bureaucrat("b0", 0);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}

	try {
		b151 = new Bureaucrat("b151", 151);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}

	std::cout << b0 << b151 << std::endl;

	delete b1;
	delete b150;
}