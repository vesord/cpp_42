/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:06:23 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 22:06:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:

	RobotomyRequestForm( std::string & target );
	virtual ~RobotomyRequestForm();

	virtual void execute(const Bureaucrat &executor) const;

private:

	RobotomyRequestForm & operator=( RobotomyRequestForm const & form );
	RobotomyRequestForm( RobotomyRequestForm const & form );
	RobotomyRequestForm();

	const std::string _target;

};


#endif
