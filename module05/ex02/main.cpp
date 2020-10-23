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
#include "Form.hpp"

int main()
{
	Bureaucrat *b75 = nullptr;
	Form *f74_50 = nullptr;
	Form *f151_50 = nullptr;
	Form *f150_151 = nullptr;
	Form *f0_150 = nullptr;
	Form *f150_0 = nullptr;

	std::cout << "<--- TRY TO SIGN FORM --->" << std::endl;
	try {
		b75 = new Bureaucrat("b75", 75);
	} catch (std::exception & e) {
		std::cout << e.what();
	}

	try {
		f74_50 = new Form("f_74_50", 74, 50);
	} catch (std::exception & e) {
		std::cout << e.what();
	}

	std::cout << *b75 << *f74_50 << std::endl;
	b75->signForm(*f74_50);

	std::cout << std::endl << "<--- PROMOTE BUREAUCRAT --->" << std::endl;
	b75->gradeIncrement();
	std::cout << *b75 << *f74_50 << std::endl;

	std::cout << std::endl << "<--- TRY TO SIGN AGAIN --->" << std::endl;
	b75->signForm(*f74_50);
	std::cout << *b75 << *f74_50 << std::endl;

	std::cout << std::endl << "<--- CREATE WRONG FORMS --->" << std::endl;

	try { f151_50 = new Form("f_151_50", 151, 50); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { f150_151 = new Form("f_15_151", 150, 151); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { f0_150 = new Form("f_0_150", 0, 150); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { f150_0 = new Form("f_150_0", 150, 0); }
	catch (std::exception & e) { std::cout << e.what(); }

	std::cout << f0_150 << f150_0 << f150_151 << f151_50 << std::endl;

	delete f74_50;
	delete b75;
}