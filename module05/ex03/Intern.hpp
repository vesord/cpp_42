/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:26:10 by matrus            #+#    #+#             */
/*   Updated: 2020/10/24 10:26:11 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {

public:

	Intern();
	~Intern();
	Intern( Intern const * intern );

	Intern & operator=( Intern const & intern);

	AForm * makeForm( std::string const & type, std::string const & target ) const ;

	class WrongFormTypeException : public std::exception {
	public:
		const char * what() const throw();
	};

private:

	AForm * _makeShrubberyCreationForm(std::string const & type, std::string const & target ) const;
	AForm * _makeRobotomyForm(std::string const & type, std::string const & target ) const;
	AForm * _makePresidentialPardonForm(std::string const & type, std::string const & target ) const;

};


#endif
