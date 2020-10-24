/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:06:24 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 22:06:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm( std::string & target );
	virtual ~ShrubberyCreationForm();

	virtual void execute(const Bureaucrat &executor) const;

private:

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & form );
	ShrubberyCreationForm( ShrubberyCreationForm const & form );
	ShrubberyCreationForm();

	const std::string _target;

};


#endif
