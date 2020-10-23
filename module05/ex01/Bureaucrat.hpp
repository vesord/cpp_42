/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:34:13 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 19:34:17 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;

#include <exception>
#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {

public:

	~Bureaucrat();
	Bureaucrat( Bureaucrat const & bureaucrat );
	Bureaucrat( const std::string & name, int grade );

	Bureaucrat & operator=( Bureaucrat const & bureaucrat );

	int	getGrade( void ) const;
	std::string const & getName( void ) const;

	void	gradeIncrement( void );
	void	gradeDecrement( void );

	void	signForm( Form const & form );

	class GradeTooLowException : public std::exception {
		const char * what() const throw();
	};

	class GradeTooHighException : public std::exception {
		const char * what() const throw();
	};

private:

	Bureaucrat();
	int					_grade;
	const std::string	_name;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif
