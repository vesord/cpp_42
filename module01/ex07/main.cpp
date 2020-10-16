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

int	exit_cant_open(const std::string &filename)
{
	std::cerr << "Can not open file " << filename << std::endl;
	return (1);
}

int	my_own_sed(const std::string& filename, const std::string& srch, const std::string& repl)
{
	std::ifstream	ifs(filename);
	if (!ifs.is_open())
		return (exit_cant_open(filename));

	std::ofstream	ofs(filename + ".replace");
	if (!ofs.is_open())
		return (exit_cant_open(filename + ".replace"));

	std::string		line;
	size_t	pos;
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		if (ifs.fail() && !ifs.eof())
		{
			std::cerr << "Something in reading gone wrong. Exiting." << std::endl;
			return (1);
		}
		pos = 0;
		while ((pos = line.find(srch, pos)) != std::string::npos)
		{
			line.replace(pos, srch.length(), repl);
			pos += repl.length();
		}
		ofs << line;
		if (!ifs.eof())
			ofs << std::endl;
	}
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
	std::string	filename(argv[1]);
	std::string search(argv[2]);
	std::string replace(argv[3]);
	ret = my_own_sed(filename, search, replace);
	return (ret);
}