/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:06:19 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 22:06:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 1, 1)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & form) :
	AForm( form.getName(), form.getGradeToSign(), form.getGradeToExec())
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	AForm( "Presidential Pardon Form", 25, 5 ),
	_target( target )
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(
	const PresidentialPardonForm & form)
{
	if (this == &form)
		return *this;

	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
