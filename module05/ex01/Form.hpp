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

class Form {

public:

	~Form();
	Form( Form const & form );
	Form( std::string const & name, int gradeToSign, int gradeToExec );

	int					getGradeToSign( void ) const;
	int					getGradeToExec( void ) const;
	int					getIsSigned( void ) const;
	std::string const &	getName( void ) const;

	void	beSigned( Bureaucrat const & bureaucrat );

	class GradeTooLowException : public std::exception {
		const char * what() const throw();
	};

	class GradeTooHighException : public std::exception {
		const char * what() const throw();
	};

private:

	Form();

	Form & operator=( Form const & form );

	bool 				_isSigned;
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;

};

std::ostream & operator<<( std::ostream & o, Form const & form);

#endif
