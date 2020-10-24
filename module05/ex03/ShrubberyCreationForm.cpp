/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:06:24 by matrus            #+#    #+#             */
/*   Updated: 2020/10/23 22:06:27 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 1, 1)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & form) :
		AForm( form.getName(), form.getGradeToSign(), form.getGradeToExec())
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
		AForm( "Shrubbery Creation Form", 145, 137 ),
		_target( target )
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(
	const ShrubberyCreationForm & form)
{
	if (this == &form)
		return *this;

	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	AForm::execute(executor);
	std::ofstream ofs(this->_target + "_shrubbery");
	ofs << "             /\\\n"
		  "            <  >\n"
		  "             \\/\n"
		  "             /\\\n"
		  "            /  \\\n"
		  "           /++++\\\n"
		  "          /  ()  \\\n"
		  "          /      \\\n"
		  "         /~`~`~`~`\\\n"
		  "        /  ()  ()  \\\n"
		  "        /          \\\n"
		  "       /*&*&*&*&*&*&\\\n"
		  "      /  ()  ()  ()  \\\n"
		  "      /              \\\n"
		  "     /++++++++++++++++\\\n"
		  "    /  ()  ()  ()  ()  \\\n"
		  "    /                  \\\n"
		  "   /~`~`~`~`~`~`~`~`~`~`\\\n"
		  "  /  ()  ()  ()  ()  ()  \\\n"
		  "  /*&*&*&*&*&*&*&*&*&*&*&\\\n"
		  " /                        \\\n"
		  "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
		  "           |   |\n"
		  "          |`````|\n"
		  "          \\_____/\n";
	return ;
}