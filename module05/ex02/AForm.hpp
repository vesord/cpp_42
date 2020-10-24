/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:31:43 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 20:31:45 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm {

public:

	virtual ~AForm();
	AForm( AForm const & aForm );
	AForm( std::string const & name, int gradeToSign, int gradeToExec );

	int					getGradeToSign( void ) const;
	int					getGradeToExec( void ) const;
	int					getIsSigned( void ) const;
	std::string const &	getName( void ) const;

	void	beSigned( Bureaucrat const & bureaucrat );

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooLowException : public std::exception {
		const char * what() const throw();
	};

	class GradeTooHighException : public std::exception {
		const char * what() const throw();
	};

	class FormIsNotSignedException : public std::exception {
		const char * what() const throw();
	};

private:

	AForm();

	AForm & operator=( AForm const & aForm );

	bool 				_isSigned;
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;

};

std::ostream & operator<<( std::ostream & o, AForm const & aForm);

#endif
