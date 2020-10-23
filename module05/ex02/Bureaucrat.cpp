/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:34:15 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 19:34:17 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureaucrat)
{
	*this = bureaucrat;
	return ;
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _grade( grade ), _name( name )
{
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bureaucrat)
{
	if (this == &bureaucrat)
		return *this;

	this->_grade = bureaucrat.getGrade();
	return *this;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

const std::string & Bureaucrat::getName() const
{
	return this->_name;
}

void Bureaucrat::gradeIncrement()
{
	if ( this->_grade == 1 )
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::gradeDecrement()
{
	if ( this->_grade == 150 )
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm( Form & form)
{
	try {
		form.beSigned( *this );
	}
	catch (std::exception & e) {
		std::cout << this->_name << " cannot sign a " << form.getName()
					<< " because " << e.what();
	}
	std::cout << this->_name << " signs " << form.getName() << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high.\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low.\n";
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return o;
}