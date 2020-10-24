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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand(time(nullptr));

	Bureaucrat *b138 = new Bureaucrat("b138", 138);
	Bureaucrat *b46 = new Bureaucrat("b46", 46);
	Bureaucrat *b6 = new Bureaucrat("b6", 6);
	AForm *shrubbery = new ShrubberyCreationForm("home");
	AForm *robotomy = new RobotomyRequestForm("marvin");
	AForm *presidential = new PresidentialPardonForm("me");

	std::cout << "<--- TRY TO EXEC FORM --->" << std::endl;
	try { b138->executeForm(*shrubbery); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b46->executeForm(*robotomy); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b6->executeForm(*presidential); }
	catch (std::exception & e) { std::cout << e.what(); }


	std::cout << "<--- TRY TO SIGN FORM --->" << std::endl;
	try { b138->signForm(*shrubbery); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b46->signForm(*robotomy); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b6->signForm(*presidential); }
	catch (std::exception & e) { std::cout << e.what(); }


	std::cout << "<--- TRY TO EXEC FORM --->" << std::endl;
	try { b138->executeForm(*shrubbery); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b46->executeForm(*robotomy); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b6->executeForm(*presidential); }
	catch (std::exception & e) { std::cout << e.what(); }

	std::cout << "<--- PROMOTE BUREAUCRATS --->" << std::endl;
	b138->gradeIncrement();
	b46->gradeIncrement();
	b6->gradeIncrement();


	std::cout << "<--- TRY TO EXEC FORM --->" << std::endl;
	try { b138->executeForm(*shrubbery); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b46->executeForm(*robotomy); }
	catch (std::exception & e) { std::cout << e.what(); }

	try { b6->executeForm(*presidential); }
	catch (std::exception & e) { std::cout << e.what(); }

	delete b138;
	delete b46;
	delete b6;
	delete shrubbery;
	delete robotomy;
	delete presidential;
}