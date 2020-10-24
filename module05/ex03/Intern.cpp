/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:26:09 by matrus            #+#    #+#             */
/*   Updated: 2020/10/24 10:26:11 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(const Intern * intern)
{
	*this = intern;
	return;
}

Intern & Intern::operator=(const Intern & intern)
{
	(void)intern;
	return *this;
}

AForm * Intern::makeForm(const std::string & type, const std::string & target) const
{
	try { return _makeShrubberyCreationForm(type, target); }
	catch (Intern::WrongFormTypeException & e) { ; }

	try { return _makeRobotomyForm(type, target); }
	catch (Intern::WrongFormTypeException & e) { ; }

	try { return _makePresidentialPardonForm(type, target); }
	catch (Intern::WrongFormTypeException & e) { throw; }
}

AForm * Intern::_makeShrubberyCreationForm(const std::string & type, std::string const & target) const
{
	if (type != "shrubbery creation")
		throw Intern::WrongFormTypeException();

	std::cout << "Intern creates " << type << std::endl;
	return new ShrubberyCreationForm( target );
}

AForm * Intern::_makeRobotomyForm(const std::string & type, std::string const & target) const
{
	if (type != "robotomy request")
		throw Intern::WrongFormTypeException();

	std::cout << "Intern creates " << type << std::endl;
	return new RobotomyRequestForm( target );
}

AForm * Intern::_makePresidentialPardonForm(const std::string & type, std::string const & target) const
{
	if (type != "presidential pardon")
		throw Intern::WrongFormTypeException();

	std::cout << "Intern creates " << type << std::endl;
	return new PresidentialPardonForm( target );
}

const char * Intern::WrongFormTypeException::what() const throw()
{
	return "Form type is wrong!\n";
}