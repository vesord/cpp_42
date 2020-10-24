/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:06:22 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 22:06:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 1, 1)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & form) :
	AForm( form.getName(), form.getGradeToSign(), form.getGradeToExec())
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string & target) :
	AForm( "Robotomy Request Form", 72, 45 ),
	_target( target )
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(
	const RobotomyRequestForm & form)
{
	if (this == &form)
		return *this;

	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	AForm::execute(executor);
	if (rand() % 2)
		std::cout << this->_target << " has been robotomised successfully!" << std::endl;
	else
		std::cout << this->_target << " robotomization failed!" << std::endl;
	return ;
}