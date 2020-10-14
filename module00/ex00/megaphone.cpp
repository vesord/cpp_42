/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 08:09:03 by matrus            #+#    #+#             */
/*   Updated: 2020/10/13 08:09:06 by matrus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	ft_toupper(char c)
{
	const char capital_alpha_mask = 0b01011111;
	if (ft_isalpha(c))
		return (c & capital_alpha_mask);
	return (c);
}

char	*ft_stoupper(char *str)
{
	char *beg;

	beg = str;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (beg);
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (i < argc)
		{
			std::cout << ft_stoupper(argv[i]);
			++i;
		}
	std::cout << std::endl;
	return (0);
}