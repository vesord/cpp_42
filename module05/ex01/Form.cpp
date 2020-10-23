/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:31:41 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 20:31:45 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _gradeToExec( 1 ), _gradeToSign( 1 ), _isSigned( false ), _name( "default" )
{
	return ;
}

Form::~Form()
{
	return ;
}

Form::Form(const Form & form) : _isSigned( form.getIsSigned() ),
								_gradeToSign( form.getGradeToSign() ),
								_gradeToExec( form.getGradeToExec() ),
								_name( form.getName() )
{
	return;
}

Form::Form(const std::string & name, int gradeToSign, int gradeToExec) :
										_gradeToExec( gradeToExec ),
										_gradeToSign( gradeToSign ),
										_name( name ),
										_isSigned( false )
{
	if (this->_gradeToExec < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToExec > 150 || this->_gradeToSign > 150)
		throw Form::GradeTooLowException();
	return ;
}

const std::string & Form::getName() const
{
	return this->_name;
}

int Form::getGradeToExec() const
{
	return this->_gradeToExec;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getIsSigned() const
{
	return this->_isSigned;
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high.\n";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low.\n";
}

std::ostream & operator<<(std::ostream & o, Form const & form)
{
	o << form.getName() << " form. Is signed: " << form.getIsSigned()
				<< " grade to exec: " << form.getGradeToExec()
				<< " grade to sign: " << form.getGradeToSign() << std::endl;
	return o;
}
