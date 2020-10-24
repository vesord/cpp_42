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
#include "AForm.hpp"
//#include "ShrubberyCreationForm.hpp"
//#include "RobotomyRequestForm.hpp"
//#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << *rrf;

	AForm* ppf = nullptr;
	AForm* scf = nullptr;
	rrf = nullptr;


	std::cout << "<--- TRY TO MAKE INVALID FORMS --->" << std::endl;
	try { rrf = someRandomIntern.makeForm("asdaeaf", "Blender"); }
	catch (Intern::WrongFormTypeException & e) { std::cout << e.what(); }

	std::cout << std::endl << "<--- CREATING VALID FORMS --->" << std::endl;
	try {
		scf = someRandomIntern.makeForm("shrubbery creation", "Blender");
		std::cout << *scf << std::endl;
	}
	catch (Intern::WrongFormTypeException & e) { std::cout << e.what(); }

	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Blender");
		std::cout << *rrf << std::endl;
	}
	catch (Intern::WrongFormTypeException & e) { std::cout << e.what(); }

	try {
		ppf = someRandomIntern.makeForm("presidential pardon", "Blender");
		std::cout << *ppf << std::endl;
	}
	catch (Intern::WrongFormTypeException & e) { std::cout << e.what(); }

	delete scf;
	delete ppf;
	delete rrf;
}