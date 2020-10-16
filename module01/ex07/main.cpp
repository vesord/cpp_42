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

int	my_own_sed(const std::string& filename, const std::string& srch, const std::string& repl)
{
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename + ".replace");
	std::string		line;

	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cerr << "Can not open file " << filename << " to read/write." << std::endl;
		return (1);
	}

	size_t	pos;
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		if (ifs.fail())
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
	int ret = 0;

	if (argc != 4)
		return (exit_wrong_args());
	std::string	filename(argv[1]);
	std::string search(argv[2]);
	std::string replace(argv[3]);
	ret = my_own_sed(filename, search, replace);
	return (ret);
}