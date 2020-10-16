/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04..cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:05:14 by matrus            #+#    #+#             */
/*   Updated: 2020/10/16 09:36:44 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		str("HI THIS IS BRAIN");
	std::string&	strref = str;
	std::string*	strptr;

	strptr = &str;

	std::cout << str << std::endl;
	std::cout << strref << std::endl;
	std::cout << *strptr << std::endl;

	return (0);
}
