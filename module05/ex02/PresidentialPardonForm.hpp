/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:06:20 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 22:06:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm( std::string const & target );
	virtual ~PresidentialPardonForm();

	virtual void execute(const Bureaucrat &executor) const;

private:

	PresidentialPardonForm & operator=( PresidentialPardonForm const & form );
	PresidentialPardonForm( PresidentialPardonForm const & form );
	PresidentialPardonForm();

	const std::string _target;
	
};


#endif
