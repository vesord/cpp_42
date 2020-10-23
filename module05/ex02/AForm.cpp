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

#include "AForm.hpp"

AForm::AForm() : _gradeToExec( 1 ), _gradeToSign( 1 ), _isSigned( false ), _name( "default" )
{
	return ;
}

AForm::~AForm()
{
	return ;
}

AForm::AForm(const AForm & aForm) : _isSigned( aForm.getIsSigned() ),
								_gradeToSign( aForm.getGradeToSign() ),
								_gradeToExec( aForm.getGradeToExec() ),
								_name( aForm.getName() )
{
	return;
}

AForm::AForm(const std::string & name, int gradeToSign, int gradeToExec) :
										_gradeToExec( gradeToExec ),
										_gradeToSign( gradeToSign ),
										_name( name ),
										_isSigned( false )
{
	if (this->_gradeToExec < 1 || this->_gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (this->_gradeToExec > 150 || this->_gradeToSign > 150)
		throw AForm::GradeTooLowException();
	return ;
}

const std::string & AForm::getName() const
{
	return this->_name;
}

int AForm::getGradeToExec() const
{
	return this->_gradeToExec;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getIsSigned() const
{
	return this->_isSigned;
}

void AForm::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

void AForm::execute(const Bureaucrat & executor) const
{
	if (!this->_isSigned)
		throw AForm::FormIsNotSignedException();
	if (executor.getGrade() > this->_gradeToExec)
		throw AForm::GradeTooLowException();
	// Bureaucrat should exec here!
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high.\n";
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low.\n";
}

const char * AForm::FormIsNotSignedException::what() const throw()
{
	return "Form is not signed.\n";
}

std::ostream & operator<<(std::ostream & o, AForm const & aForm)
{
	o << aForm.getName() << " aForm. Is signed: " << aForm.getIsSigned()
				<< " grade to exec: " << aForm.getGradeToExec()
				<< " grade to sign: " << aForm.getGradeToSign() << std::endl;
	return o;
}
