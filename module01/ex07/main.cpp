/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:40:54 by matrus            #+#    #+#             */
/*   Updated: 2020/10/15 17:40:55 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	my_own_sed(std::string& filename, std::string& srch, std::string& repl)
{
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename);

	std::cout << ifs << std::endl;

	if (srch == "" || repl == "")
		return (0);
	return (0);
}

int	exit_wrong_args()
{
	std::cerr << "Error. Wrong arguments." << std::endl;
	return (1);
}

int main (int argc, char **argv)
{
	int ret;

	if (argc != 4)
		return (exit_wrong_args());
	ret = my_own_sed(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
	return (ret);
}